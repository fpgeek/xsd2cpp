# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_pb2 as PB
import xml.etree.ElementTree as ET
import xml.dom.minidom as MD
import os
import google.protobuf.text_format as PT

XSD_URI = 'http://www.w3.org/2001/XMLSchema'
NAMESPACE_MAP = {'xsd':XSD_URI}

class SCHEMA:
    def __init__(self, xsdFilePath):
        self.fileName = os.path.basename(xsdFilePath)
        self.rootElem = self._parseXsd(xsdFilePath)
        miniDom = MD.parse(xsdFilePath)
        self.importElems = self.rootElem.findall('./xsd:import', NAMESPACE_MAP)
        self.simpleTypeElems = self.rootElem.findall('./xsd:simpleType', NAMESPACE_MAP)
        self.nsPrefixToFileMap = self._makeNsPrefixToFileMap(miniDom, self.importElems)
        self.namespaceList = self._makeNamespaceList(miniDom)
        self.xsdPrefix = self._getXsdPrefix(self.namespaceList)
        self.builtInTypeMap = {
            "%s:ENTITIES" % self.xsdPrefix : PB.BuiltIn.ENTITIES,
            "%s:ENTITY" % self.xsdPrefix : PB.BuiltIn.ENTITY,
            "%s:ID" % self.xsdPrefix : PB.BuiltIn.ID,
            "%s:IDREF" % self.xsdPrefix : PB.BuiltIn.IDREF,
            "%s:IDREFS" % self.xsdPrefix : PB.BuiltIn.IDREFS,
            "%s:language" % self.xsdPrefix : PB.BuiltIn.language,
            "%s:Name" % self.xsdPrefix : PB.BuiltIn.Name,
            "%s:NCName" % self.xsdPrefix : PB.BuiltIn.NCName,
            "%s:NMTOKEN" % self.xsdPrefix : PB.BuiltIn.NMTOKEN,
            "%s:NMTOKENS" % self.xsdPrefix : PB.BuiltIn.NMTOKENS,
            "%s:normalizedString" % self.xsdPrefix : PB.BuiltIn.normalizedString,
            "%s:QName" % self.xsdPrefix : PB.BuiltIn.QName,
            "%s:string" % self.xsdPrefix : PB.BuiltIn.string,
            "%s:token" % self.xsdPrefix : PB.BuiltIn.token,
            "%s:date" % self.xsdPrefix : PB.BuiltIn.date,
            "%s:dateTime" % self.xsdPrefix : PB.BuiltIn.dateTime,
            "%s:duration" % self.xsdPrefix : PB.BuiltIn.duration,
            "%s:gDay" % self.xsdPrefix : PB.BuiltIn.gDay,
            "%s:gMonth" % self.xsdPrefix : PB.BuiltIn.gMonth,
            "%s:gMonthDay" % self.xsdPrefix : PB.BuiltIn.gMonthDay,
            "%s:gYear" % self.xsdPrefix : PB.BuiltIn.gYear,
            "%s:gYearMonth" % self.xsdPrefix : PB.BuiltIn.gYearMonth,
            "%s:time" % self.xsdPrefix : PB.BuiltIn.time,
            "%s:byte" % self.xsdPrefix : PB.BuiltIn.byte,
            "%s:decimal" % self.xsdPrefix : PB.BuiltIn.decimal,
            "%s:int" % self.xsdPrefix : PB.BuiltIn.int,
            "%s:integer" % self.xsdPrefix : PB.BuiltIn.integer,
            "%s:long" % self.xsdPrefix : PB.BuiltIn.long,
            "%s:negativeInteger" % self.xsdPrefix : PB.BuiltIn.negativeInteger,
            "%s:nonNegativeInteger" % self.xsdPrefix : PB.BuiltIn.nonNegativeInteger,
            "%s:nonPositiveInteger" % self.xsdPrefix : PB.BuiltIn.nonPositiveInteger,
            "%s:positiveInteger" % self.xsdPrefix : PB.BuiltIn.positiveInteger,
            "%s:short" % self.xsdPrefix : PB.BuiltIn.short,
            "%s:unsignedLong" % self.xsdPrefix : PB.BuiltIn.unsignedLong,
            "%s:unsignedInt" % self.xsdPrefix : PB.BuiltIn.unsignedInt,
            "%s:unsignedShort" % self.xsdPrefix : PB.BuiltIn.unsignedShort,
            "%s:unsignedByte" % self.xsdPrefix : PB.BuiltIn.unsignedByte,
            "%s:anyURI" % self.xsdPrefix : PB.BuiltIn.anyURI,
            "%s:base64Binary" % self.xsdPrefix : PB.BuiltIn.base64Binary,
            "%s:boolean" % self.xsdPrefix : PB.BuiltIn.boolean,
            "%s:double" % self.xsdPrefix : PB.BuiltIn.double,
            "%s:float" % self.xsdPrefix : PB.BuiltIn.float,
            "%s:hexBinary" % self.xsdPrefix : PB.BuiltIn.hexBinary,
            "%s:NOTATION" % self.xsdPrefix : PB.BuiltIn.NOTATION
        }

    def findFile(self, nsPrefix):
        return self.nsPrefixToFileMap.get(nsPrefix)

    def _parseXsd(self, xsdFilePath):
        tree = ET.parse(xsdFilePath)
        return tree.getroot()

    def _makeNsPrefixToFileMap(self, miniDom, importElems):
        nsPrefixToFileMap = {}

        attrs = dict(miniDom.childNodes[0].attributes)
        for key in attrs:
            name = attrs.get(key).name
            value = attrs.get(key).value
            if name.startswith('xmlns'):
                prefix = self._getPrefix(name)
                filePaths = [value for importElem in importElems if importElem.attrib.get('namespace') == value]
                if filePaths:
                    nsPrefixToFileMap[prefix] = filePaths[0]

        return nsPrefixToFileMap

    def _makeNamespaceList(self, miniDom):
        namespaceList = []
        attrs = dict(miniDom.childNodes[0].attributes)
        for key in attrs:
            name = attrs.get(key).name
            value = attrs.get(key).value
            if name.startswith('xmlns'):
                prefix = self._getPrefix(name)
                namespaceList.append({'prefix':prefix, 'uri':value})

        return namespaceList

    def _getXsdPrefix(self, namespaceList):
        return [ns.get('prefix') for ns in namespaceList if ns.get('uri') == XSD_URI][0]

    def _getPrefix(self, namespace):
        if namespace is None:
            return None
        elif ':' in namespace:
            return namespace.split(':')[1]
        else:
            return ''



class ALL_SCHEMA:
    def __init__(self):
        self.schemaList = []

    def append(self, schema):
        self.schemaList.append(schema)

    def parse(self):
        pbSchemaList = []
        for schema in self.schemaList:
            pbSchema = PB.Schema()
            pbSchema.file_name = schema.fileName
            parseSchemaAttr(schema, pbSchema)
            self._parseSchema(schema, pbSchema)
            pbSchemaList.append(pbSchema)
        return pbSchemaList

    def _parseSchema(self, xmlSchema, pbSchema):
        complexTypeElems = xmlSchema.rootElem.findall('./xsd:complexType', NAMESPACE_MAP)
        for complexTypeElem in complexTypeElems:
            pbComplexType = pbSchema.complex_type.add()
            self._parseComplexType(xmlSchema, complexTypeElem, pbComplexType)

    def _parseComplexType(self, xmlSchema, complexTypeElem, pbComplexType):
        name = complexTypeElem.attrib.get('name')
        if name: pbComplexType.name = name

        for childElem in complexTypeElem:
            if childElem.tag == '{%s}attribute' % XSD_URI:
                pbAttribute = pbComplexType.attribute.add()
                self._parseAttribute(xmlSchema, childElem, pbAttribute)

    def _parseAttribute(self, xmlSchema, attributeElem, pbAttribute):
        name = attributeElem.attrib.get('name')
        if name: pbAttribute.name = name

        use = attributeElem.attrib.get('use')
        if use:
            if use == 'optional': pbAttribute.use = PB.Attribute.optional
            elif use == 'prohibited': pbAttribute.use = PB.Attribute.prohibited
            elif use == 'required': pbAttribute.use = PB.Attribute.required

        default = attributeElem.attrib.get('default')
        if default: pbAttribute.default_value = default

        fixed = attributeElem.attrib.get('fixed')
        if fixed: pbAttribute.fixed_value = fixed

        form = attributeElem.attrib.get('form')
        if form: pbAttribute.form = parseFormAttr(form)

        type = attributeElem.attrib.get('type')
        if type:
            if isBuiltInType(type, xmlSchema.builtInTypeMap):
                pbAttribute.type.kind = PB.Attribute.Type.BuiltIn
                pbAttribute.type.built_in = xmlSchema.builtInTypeMap.get(type)
            elif self._isSimpleTypeName(type, xmlSchema):
                pbAttribute.type.kind = PB.Attribute.Type.SimpleTypeName
                pbAttribute.type.simple_type_name = type


        for childElem in attributeElem:
            pass

            # if childElem.tag == '{%s}simpleType' % XSD_URI:
            #     pbAttribute.type.add()
            #     self._parseSimpleType(xmlSchema, childElem, pb)

    def _isSimpleTypeName(self, typeName, xmlSchema):
        for simpleTypeElem in xmlSchema.simpleTypeElems:
            if typeName == simpleTypeElem.attrib.get('name'):
                return True

        return False


def isBuiltInType(typeName, builtInTypeMap):
    return (typeName in builtInTypeMap.keys())





def parseSchemaAttr(xmlSchema, pbSchema):
    parseAttributeFormDefault(xmlSchema, pbSchema)
    parseElementFormDefault(xmlSchema, pbSchema)
    parseBlockDefault(xmlSchema, pbSchema)
    parseFinalDefault(xmlSchema, pbSchema)
    parseTargetNamespace(xmlSchema, pbSchema)
    parseNamespaces(xmlSchema, pbSchema)
    parseImports(xmlSchema, pbSchema)

def parseAttributeFormDefault(xmlSchema, pbSchema):
    attrValue = xmlSchema.rootElem.attrib.get('attributeFormDefault')
    pbFormType = parseFormAttr(attrValue)
    if pbFormType is not None: pbSchema.attribute_form_default = pbFormType

def parseElementFormDefault(xmlSchema, pbSchema):
    attrValue = xmlSchema.rootElem.attrib.get('elementFormDefault')
    pbFormType = parseFormAttr(attrValue)
    if pbFormType is not None: pbSchema.element_form_default = pbFormType

def parseBlockDefault(xmlSchema, pbSchema):
    attrVal = xmlSchema.rootElem.attrib.get('blockDefault')
    if attrVal: pbSchema.block_default = attrVal

def parseFinalDefault(xmlSchema, pbSchema):
    attrVal = xmlSchema.rootElem.attrib.get('finalDefault')
    if attrVal: pbSchema.final_default = attrVal

def parseTargetNamespace(xmlSchema, pbSchema):
    attrVal = xmlSchema.rootElem.attrib.get('targetNamespace')
    if attrVal: pbSchema.target_namespace = attrVal

def parseNamespaces(xmlSchema, pbSchema):
    for ns in xmlSchema.namespaceList:
        pbNs = pbSchema.namespace.add()
        pbNs.prefix = ns.get('prefix')
        pbNs.uri = ns.get('uri')

def parseImports(xmlSchema, pbSchema):
    for importElem in xmlSchema.importElems:
        pbImport = pbSchema.import_.add()
        namespace = importElem.attrib.get('namespace')
        if namespace: pbImport.namespace = namespace
        schemaLocation = importElem.attrib.get('schemaLocation')
        if schemaLocation: pbImport.schema_location = schemaLocation

def parseFormAttr(attrValue):
    if attrValue:
        if attrValue == 'qualified':
            return PB.Form.qualified
        elif attrValue == 'unqualified':
            return PB.Form.unqualified

    return None


def run(xsdFileDirPath):
    allSchema = ALL_SCHEMA()
    for xsdFileName in [filePath for filePath in os.listdir(xsdFileDirPath) if filePath.endswith('.xsd')]:
        xsdFilePath = os.path.join(xsdFileDirPath, xsdFileName)
        schema = SCHEMA(xsdFilePath)
        allSchema.append(schema)

    pbSchemas = allSchema.parse()
    for pbSchema in pbSchemas:
        f = open('../../files/pb_text/%s.txt' % pbSchema.file_name, "wb")
        PT.PrintMessage(pbSchema, f)
        f.close()

    # xsdFilePath = os.path.join(xsdFileDirPath, 'wml.xsd')
    # namespaceMap = makeNamespaceMap(xsdFilePath)
    # tree = ET.parse(xsdFilePath)
    # root = tree.getroot()
    # fileName = os.path.basename(xsdFilePath)
    # allSchemas[fileName] = root
    #
    # parseImports(fileName, root.findall('./xsd:import', NAMESPACE_MAP))
    # pbComplexTypes = parseComplexTypes(fileName, root.findall('./xsd:complexType', NAMESPACE_MAP))

# def parseImports(fileName, elems):
#     for elem in elems:
#         parseImport(fileName, elem)
#
# def parseImport(fileName, elem):
#     pass
#
# def findSimpleType(fileName, simpleTypeName):
#     if ':' in simpleTypeName:
#         for fName, xmlRootElem in allSchemas.iteritems():
#             pass
#     else:
#         return allSchemas.get(fileName).findall('./xsd:simpleType[@name=%s' % simpleTypeName, NAMESPACE_MAP)[0]
#
#
# def parseComplexTypes(fileName, elems):
#     for elem in elems:
#         parseComplexType(fileName, elem)
#
# def parseComplexType(fileName, elem):
#     pbComplexType = PB.ComplexType()
#     if elem.attrib.get('name') is not None: pbComplexType.name = elem.attrib.get('name')
#     for childElem in elem:
#         if childElem.tag == '{%s}simpleContent' % XSD_URI:
#             parseSimpleContent(fileName, childElem)
#     # print pbComplexType.name
#
# def parseSimpleContent(fileName, elem):
#     for childElem in elem:
#         if childElem.tag == '{%s}restriction' % XSD_URI:
#             pass
#             # parseRestriction(childElem)
#         elif childElem.tag == '{%s}extension' % XSD_URI:
#             parseExtension(fileName, childElem)
#
# def parseExtension(fileName, elem):
#     base = elem.attrib.get('base')
#     print base


# def makeNamespaceMap(xsdFilePath):
#     namespaceMap = { # TODO - 파일에서 읽어서 처리하도록 수정하기
#         'xsd':'http://www.w3.org/2001/XMLSchema',
#         'm':"http://schemas.openxmlformats.org/officeDocument/2006/math",
#         'r':"http://schemas.openxmlformats.org/officeDocument/2006/relationships",
#         'sl':"http://schemas.openxmlformats.org/schemaLibrary/2006/main",
#         'wp':"http://schemas.openxmlformats.org/drawingml/2006/wordprocessingDrawing",
#         '':"http://schemas.openxmlformats.org/wordprocessingml/2006/main",
#         's':"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes"
#     }
#     return namespaceMap

# def parseGlobalXsdElements(xsdFilePath):
#
#     namespaceMap = makeNamespaceMap(xsdFilePath)
#
#     tree = ET.parse(xsdFilePath)
#     root = tree.getroot()
#
#     xsdElements = {}
#     xsdElements['imports'] = root.findall('./xsd:import', namespaceMap)
#     xsdElements['includes'] = root.findall('./xsd:include', namespaceMap)
#     xsdElements['complexTypes'] = root.findall('./xsd:complexType', namespaceMap)
#     xsdElements['simpleTypes'] = root.findall('./xsd:simpleType', namespaceMap)
#     xsdElements['groups'] = root.findall('./xsd:group', namespaceMap)
#     xsdElements['attributeGroups'] = root.findall('./xsd:attributeGroup', namespaceMap)
#     xsdElements['elements'] = root.findall('./xsd:element', namespaceMap)
#     xsdElements['attributes'] = root.findall('./xsd:attribute', namespaceMap)
#     return xsdElements

if __name__ == '__main__':
    run('../../files/xsd')