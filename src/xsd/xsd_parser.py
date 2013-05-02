# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_pb2 as PB
import xml.etree.ElementTree as ET
import xml.dom.minidom as MD
import os
import itertools
import operator
from common_util import *

XSD_URI = 'http://www.w3.org/2001/XMLSchema'
NAMESPACE_MAP = {'xsd':XSD_URI}

class SCHEMA:
    def __init__(self, xsdFilePath):
        self.pbSchema = None
        self.fileName = os.path.basename(xsdFilePath)
        self.rootElem = self._parseXsd(xsdFilePath)
        miniDom = MD.parse(xsdFilePath)
        self.importElems = self.rootElem.findall('./xsd:import', NAMESPACE_MAP)
        self.complexTypeElems = self.rootElem.findall('./xsd:complexType', NAMESPACE_MAP)
        self.simpleTypeElems = self.rootElem.findall('./xsd:simpleType', NAMESPACE_MAP)
        self.groupElems = self.rootElem.findall('./xsd:group', NAMESPACE_MAP)
        self.elementElems = self.rootElem.findall('./xsd:element', NAMESPACE_MAP)
        self.attributeGroupElems = self.rootElem.findall('./xsd:attributeGroup', NAMESPACE_MAP)
        self.attributes = self.rootElem.findall('./xsd:attribute', NAMESPACE_MAP)
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
                prefix = getPrefixFromNs(name)
                filePaths = [importElem.attrib.get('schemaLocation') for importElem in importElems if importElem.attrib.get('namespace') == value]
                if len(filePaths) > 0:
                    nsPrefixToFileMap[prefix] = filePaths[0]

        return nsPrefixToFileMap

    def _makeNamespaceList(self, miniDom):
        namespaceList = []
        attrs = dict(miniDom.childNodes[0].attributes)
        for key in attrs:
            name = attrs.get(key).name
            value = attrs.get(key).value
            if name.startswith('xmlns'):
                prefix = getPrefixFromNs(name)
                namespaceList.append({'prefix':prefix, 'uri':value})

        return namespaceList

    def _getXsdPrefix(self, namespaceList):
        return [ns.get('prefix') for ns in namespaceList if ns.get('uri') == XSD_URI][0]


def copyElemCont(source, dest):
    if source.kind == PB.ElementContainer.Sequence:
        dest.sequence.extend(source.sequence)
    elif source.kind == PB.ElementContainer.Choice:
        dest.choice.extend(source.choice)
    elif source.kind == PB.ElementContainer.RepeatedSequence:
        dest.repeated_sequence.extend(source.repeated_sequence)
    elif source.kind == PB.ElementContainer.RepeatedChoice:
        dest.repeated_choice.extend(source.repeated_choice)

def groupByElemCont(pbComplexType):
    prevKind = None
    newElemContList = []
    curElemCont = None
    for elemCont in pbComplexType.element_container:
        if prevKind is not None and prevKind == elemCont.kind:
            copyElemCont(elemCont, curElemCont)
        else:
            curElemCont = PB.ElementContainer()
            curElemCont.kind = elemCont.kind
            copyElemCont(elemCont, curElemCont)
            newElemContList.append(curElemCont)
        prevKind = elemCont.kind

    del pbComplexType.element_container[:]
    for elemCont in newElemContList:
        pbComplexType.element_container.add().CopyFrom(elemCont)


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
            schema.pbSchema = pbSchema
            parseSchemaAttr(schema, pbSchema)
            self._parseSchema(schema, pbSchema)
            pbSchemaList.append(pbSchema)
        return pbSchemaList

    def _getSchemaFromFileName(self, fileName):
        findFileNames = [schema for schema in self.schemaList if schema.fileName == fileName]
        if len(findFileNames) == 1:
            return findFileNames[0]
        return None

    def _findXsdElement(self, xmlSchema, name, xsdElements, findXsdElementFunc):
        if hasNamespace(name): # 네임스페이스가 있는 그룹명
            nsPrefix = getPrefixFromName(name)
            otherSchema = self._getSchemaFromFileName( xmlSchema.findFile(nsPrefix) )
            if otherSchema:
                return findXsdElementFunc( otherSchema, getNameExceptNsPrefix(name) )
            else:
                if nsPrefix == 'xml':
                    pass # TODO
                else:
                    print name
                    assert(False)
        else:
            findElems = [elem for elem in xsdElements if elem.attrib.get('name') == name]
            if len(findElems) == 1:
                return (findElems[0], xmlSchema)
            else:
                print name
                assert(False)

        return (None, xmlSchema)

    def _findGroup(self, xmlSchema, refVal):
        return self._findXsdElement(xmlSchema, refVal, xmlSchema.groupElems, self._findGroup)

    def _findElement(self, xmlSchema, refVal):
        return self._findXsdElement(xmlSchema, refVal, xmlSchema.elementElems, self._findElement)

    def _findComplexType(self, xmlSchema, complexTypeName):
        return self._findXsdElement(xmlSchema, complexTypeName, xmlSchema.complexTypeElems, self._findComplexType)

    def _findSimpleType(self, xmlSchema, simpleTypeName):
        return self._findXsdElement(xmlSchema, simpleTypeName, xmlSchema.simpleTypeElems, self._findSimpleType)

    def _findAttributeGroup(self, xmlSchema, refVal):
        return self._findXsdElement(xmlSchema, refVal, xmlSchema.attributeGroupElems, self._findAttributeGroup)

    def _findAttribute(self, xmlSchema, refVal):
        return self._findXsdElement(xmlSchema, refVal, xmlSchema.attributes, self._findAttribute)

    def _parseSchema(self, xmlSchema, pbSchema):
        for complexTypeElem in xmlSchema.complexTypeElems:
            pbComplexType = pbSchema.complex_type.add()
            self._parseComplexType(xmlSchema, complexTypeElem, pbComplexType, PB.ElementContainer.Sequence)
            groupByElemCont(pbComplexType)

        for simpleTypeElem in xmlSchema.simpleTypeElems:
            pbSimpleType = pbSchema.simple_type.add()
            self._parseSimpleType(xmlSchema, simpleTypeElem, pbSimpleType)

        for elementElem in xmlSchema.elementElems:
            pbElement = self._parseElement(xmlSchema, elementElem, None, PB.ElementContainer(), PB.ElementContainer.Sequence)
            pbSchema.element.add().CopyFrom(pbElement)

        for attribute in xmlSchema.attributes:
            pbAttr = pbSchema.attribute.add()
            self._parseAttribute(xmlSchema, attribute, pbAttr)

    def _parseComplexType(self, xmlSchema, complexTypeElem, pbComplexType, pbContType):
        name = complexTypeElem.attrib.get('name')
        if name:
            pbComplexType.name = name

        for childElem in complexTypeElem:
            if childElem.tag == '{%s}sequence' % XSD_URI:
                self._parseSequence(xmlSchema, childElem, pbComplexType, pbContType)
            elif childElem.tag == '{%s}choice' % XSD_URI:
                self._parseChoice(xmlSchema, childElem, pbComplexType, pbContType)
            elif childElem.tag == '{%s}attribute' % XSD_URI:
                pbAttribute = pbComplexType.attribute.add()
                self._parseAttribute(xmlSchema, childElem, pbAttribute)
            elif childElem.tag == '{%s}attributeGroup' % XSD_URI:
                self._parseAttributeGroup(xmlSchema, childElem, pbComplexType)
            elif childElem.tag == '{%s}complexContent' % XSD_URI:
                self._parseComplexContent(xmlSchema, childElem, pbComplexType, pbContType)
            elif childElem.tag == '{%s}all' % XSD_URI:
                self._parseAll(xmlSchema, childElem, pbComplexType, pbContType)
            elif childElem.tag == '{%s}anyAttribute' % XSD_URI:
                pbAttribute = pbComplexType.attribute.add()
                self._parseAnyAttribute(xmlSchema, childElem, pbAttribute)
            elif childElem.tag == '{%s}simpleContent' % XSD_URI:
                self._parseSimpleContent(xmlSchema, childElem, pbComplexType, pbContType)

    def _parseComplexContent(self, xmlSchema, complexContentElem, pbComplexType, pbContType):
        for childElem in complexContentElem:
            if childElem.tag == '{%s}extension' % XSD_URI:
                self._parseExtension(xmlSchema, childElem, pbComplexType, pbContType)
            elif childElem.tag == '{%s}restriction' % XSD_URI:
                self._parseRestriction(xmlSchema, childElem, pbComplexType.restriction)

    def _parseExtension(self, xmlSchema, extensionElem, pbComplexType, pbContType):
        base = extensionElem.attrib.get('base')
        if base:
            pbBase = self._parseBaseAttr(xmlSchema, base)
            pbComplexType.extension.base.CopyFrom(pbBase)
            if pbBase.kind == PB.Base.ComplexTypeName:
                findComplexTypeElem, otherXmlSchema = self._findComplexType(xmlSchema, pbBase.complex_type_name)
                pbBaseComplexType = PB.ComplexType()
                self._parseComplexType(otherXmlSchema, findComplexTypeElem, pbBaseComplexType, pbContType)
                applyBaseToComplexType(pbBaseComplexType, pbComplexType)
            elif pbBase.kind == PB.Base.SimpleTypeName:
                pass
            elif pbBase.kind == PB.Base.BuiltIn:
                pass

        for childElem in extensionElem:
            if childElem.tag == '{%s}group' % XSD_URI:
                self._parseGroup(xmlSchema, childElem, pbComplexType, pbContType)
            elif childElem.tag == '{%s}choice' % XSD_URI:
                self._parseChoice(xmlSchema, childElem, pbComplexType, pbContType)
            elif childElem.tag == '{%s}sequence' % XSD_URI:
                self._parseSequence(xmlSchema, childElem, pbComplexType, pbContType)
            elif childElem.tag == '{%s}attribute' % XSD_URI:
                pbAttribute = pbComplexType.attribute.add()
                self._parseAttribute(xmlSchema, childElem, pbAttribute)


    def _parseSequence(self, xmlSchema, sequnceElem, pbComplexType, pbContType, nsPrefix=None):
        minOccurs = parseMinOccurs(sequnceElem)
        maxOccurs = parseMaxOccurs(sequnceElem)
        if pbContType == PB.ElementContainer.Sequence:
            if isManyMaxOccurs(maxOccurs):
                pbContType = PB.ElementContainer.RepeatedSequence
        elif pbContType == PB.ElementContainer.Choice:
            if isManyMaxOccurs(maxOccurs):
                pbContType = PB.ElementContainer.RepeatedChoice
        elif pbContType == PB.ElementContainer.RepeatedSequence:
            pass
        elif pbContType == PB.ElementContainer.RepeatedChoice:
            pass

        childElemGroups = itertools.groupby([childElem for childElem in sequnceElem], lambda elem: elem.tag)
        for tag, childElems in childElemGroups:
            pbElemCont = None
            if tag == '{%s}element' % XSD_URI:
                def elemGroupByKeyFunc(elem):
                    maxOccurs = parseMaxOccurs(elem)
                    return isManyMaxOccurs(maxOccurs)

                childElemGroups = itertools.groupby(childElems, elemGroupByKeyFunc) # element 태
                for isManyMaxOcc, childElems in childElemGroups:
                    pbElemCont = pbComplexType.element_container.add()
                    elemContKind = _elemContKindFromIsManyMaxOccurs(pbContType, isManyMaxOcc)
                    if elemContKind:
                        pbContType = elemContKind
                        pbElemCont.kind = pbContType
                    for childElem in childElems:
                        self._parseElement(xmlSchema, childElem, pbComplexType, pbElemCont, pbContType, nsPrefix)

            else:

                for childElem in childElems:
                    # if childElem.tag == '{%s}element' % XSD_URI:
                    #     self._parseElement(xmlSchema, childElem, pbComplexType, pbElemCont, pbContType, nsPrefix)
                    if childElem.tag == '{%s}group' % XSD_URI:
                        self._parseGroup(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)
                    elif childElem.tag == '{%s}choice' % XSD_URI:
                        self._parseChoice(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)
                    elif childElem.tag == '{%s}sequence' % XSD_URI:
                        self._parseSequence(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)
                    elif childElem.tag == '{%s}any' % XSD_URI:
                        pbElemCont = pbComplexType.element_container.add()
                        pbElemCont.kind = pbContType
                        self._parseAny(xmlSchema, childElem, pbElemCont, pbContType)

    def _parseChoice(self, xmlSchema, choiceElem, pbComplexType, pbContType, nsPrefix=None):
        minOccurs = parseMinOccurs(choiceElem)
        maxOccurs = parseMaxOccurs(choiceElem)
        if pbContType == PB.ElementContainer.Sequence:
            if isManyMaxOccurs(maxOccurs):
                pbContType = PB.ElementContainer.RepeatedChoice
            else:
                pbContType = PB.ElementContainer.Choice
        elif pbContType == PB.ElementContainer.Choice:
            if isManyMaxOccurs(maxOccurs):
                pbContType = PB.ElementContainer.RepeatedChoice
        elif pbContType == PB.ElementContainer.RepeatedSequence:
            if isManyMaxOccurs(maxOccurs):
                pbContType = PB.ElementContainer.RepeatedChoice
        elif pbContType == PB.ElementContainer.RepeatedChoice:
            pass

        childElemGroups = itertools.groupby([childElem for childElem in choiceElem], lambda elem: elem.tag)
        for tag, childElems in childElemGroups:
            pbElemCont = None
            if tag == '{%s}element' % XSD_URI or tag == '{%s}any' % XSD_URI:
                pbElemCont = pbComplexType.element_container.add()
                pbElemCont.kind = pbContType
            for childElem in childElems:
                if childElem.tag == '{%s}element' % XSD_URI:
                    self._parseElement(xmlSchema, childElem, pbComplexType, pbElemCont, pbContType, nsPrefix)
                elif childElem.tag == '{%s}group' % XSD_URI:
                    self._parseGroup(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)
                elif childElem.tag == '{%s}choice' % XSD_URI:
                    self._parseChoice(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)
                elif childElem.tag == '{%s}sequence' % XSD_URI:
                    self._parseSequence(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)
                elif childElem.tag == '{%s}any' % XSD_URI:
                    self._parseAny(xmlSchema, childElem, pbElemCont, pbContType, nsPrefix)

    def _parseAny(self, xmlSchema, anyElem, pbElemCont, pbContType, nsPrefix=None):
        pbElem = None
        if pbContType == PB.ElementContainer.Sequence:
            pbElem = pbElemCont.sequence.add()
        elif pbContType == PB.ElementContainer.Choice:
            pbElem = pbElemCont.choice.add()
        elif pbContType == PB.ElementContainer.RepeatedSequence:
            pbElem = pbElemCont.repeated_sequence.add()
        elif pbContType == PB.ElementContainer.RepeatedChoice:
            pbElem = pbElemCont.repeated_choice.add()

        if pbElem:
            pbElem.name = 'any'
            pbElem.min_occurs = parseMinOccurs(anyElem)
            pbElem.max_occurs.CopyFrom(parseMaxOccurs(anyElem))
            pbElem.type.kind = PB.Element.Type.Any
            namespace = anyElem.attrib.get('namespace')
            if namespace:
                nsPrefix = self._findNsPrefixFromAllSchema(namespace)
                if nsPrefix:
                    # pbElem.name = '%s_%s' % (pbElem.name, nsPrefix)
                    pbElem.type.any.ns_prefix = nsPrefix
                    namespaceUriList = [ns for ns in xmlSchema.pbSchema.namespace if ns.uri == namespace] # 이미 있는 네임스페이스는 또다시 등록되지 않도록 한다.
                    if len(namespaceUriList) == 0:

                        pbImport = xmlSchema.pbSchema.import_.add()
                        pbImport.namespace = namespace
                        schemaLocation = self._findSchemaLocationFromAllSchema(nsPrefix)
                        if schemaLocation: pbImport.schema_location = schemaLocation

                        pbNs = xmlSchema.pbSchema.namespace.add()
                        pbNs.prefix = nsPrefix
                        pbNs.uri = namespace

            processContents = anyElem.attrib.get('processContents')
            if processContents: pbElem.type.any.process_contents = processContents

    def _findNsPrefixFromAllSchema(self, nsURI):
        allNamespaceList = reduce(operator.concat, [schema.namespaceList for schema in self.schemaList])
        nsPrefixs = [ns.get('prefix') for ns in allNamespaceList if ns.get('uri') == nsURI and ns.get('prefix') != '']
        if len(nsPrefixs) == 1:
            return nsPrefixs[0]
        return None

    def _findSchemaLocationFromAllSchema(self, nsPrefix):
        for schema in self.schemaList:
            fileName = schema.nsPrefixToFileMap.get(nsPrefix)
            if fileName:
                return fileName
        return None


    def _parseElement(self, xmlSchema, elementElem, pbComplexType, pbElemCont, pbContType, nsPrefix=None):
        pbElem = None
        maxOccurs = parseMaxOccurs(elementElem)

        if pbContType == PB.ElementContainer.Sequence:
            pbElem = pbElemCont.sequence.add()
        elif pbContType == PB.ElementContainer.Choice:
            pbElem = pbElemCont.choice.add()
        elif pbContType == PB.ElementContainer.RepeatedSequence:
            pbElem = pbElemCont.repeated_sequence.add()
        elif pbContType == PB.ElementContainer.RepeatedChoice:
            pbElem = pbElemCont.repeated_choice.add()

        if nsPrefix:
            pbElem.ref_ns_prefix = nsPrefix

        if pbElem:
            ref = elementElem.attrib.get('ref')
            if ref:
                elemNsPrefix = getPrefixFromName(ref)
                if elemNsPrefix:
                    nsPrefix = elemNsPrefix
                    pbElem.ref_ns_prefix = nsPrefix
                otherElementElem, otherSchema = self._findElement(xmlSchema, ref)
                otherElemCont = PB.ElementContainer()
                otherPbElem = self._parseElement(otherSchema, otherElementElem, pbComplexType, otherElemCont, pbContType, nsPrefix)
                pbElem.MergeFrom(otherPbElem)

            name = elementElem.attrib.get('name')
            if name: pbElem.name = name

            form = elementElem.attrib.get('form')
            if form: pbElem.form = parseFormAttr(form)

            pbElem.min_occurs = parseMinOccurs(elementElem)
            pbElem.max_occurs.CopyFrom(maxOccurs)

            default = elementElem.attrib.get('default')
            if default: pbElem.default_value = default

            fixed = elementElem.attrib.get('fixed')
            if fixed: pbElem.fixed_value = fixed

            type = elementElem.attrib.get('type')
            if type:
                if isBuiltInType(type, xmlSchema.builtInTypeMap):
                    pbElem.type.kind = PB.Element.Type.BuiltIn
                    pbElem.type.built_in = xmlSchema.builtInTypeMap.get(type)
                elif self._isSimpleTypeName(type, xmlSchema):
                    pbElem.type.kind = PB.Element.Type.SimpleTypeName
                    if not hasNamespace(type) and nsPrefix is not None:
                        pbElem.type.simple_type_name = '%s:%s' % (nsPrefix, type)
                    else:
                        pbElem.type.simple_type_name = type
                elif self._isComplexTypeName(type, xmlSchema):
                    pbElem.type.kind = PB.Element.Type.ComplexTypeName
                    if not hasNamespace(type) and nsPrefix is not None:
                        pbElem.type.complex_type_name = '%s:%s' % (nsPrefix, type)
                    else:
                        pbElem.type.complex_type_name = type

        for childElem in elementElem:
            if childElem.tag == '{%s}simpleType' % XSD_URI:
                pbElem.type.kind = PB.Element.Type.SimpleType
                self._parseSimpleType(xmlSchema, childElem, pbElem.type.simple_type)
            elif childElem.tag == '{%s}complexType' % XSD_URI:
                pbElem.type.kind = PB.Element.Type.ComplexType
                self._parseComplexType(xmlSchema, childElem, pbElem.type.complex_type, pbContType)

        return pbElem

    def _parseGroup(self, xmlSchema, groupElem, pbComplexType, pbContType, nsPrefix=None):
        maxOccurs = parseMaxOccurs(groupElem)
        if pbContType == PB.ElementContainer.Sequence:
            if isManyMaxOccurs(maxOccurs):
                pbContType = PB.ElementContainer.RepeatedSequence
        elif pbContType == PB.ElementContainer.Choice:
            if isManyMaxOccurs(maxOccurs):
                pbContType = PB.ElementContainer.RepeatedChoice
        elif pbContType == PB.ElementContainer.RepeatedSequence:
            pass
        elif pbContType == PB.ElementContainer.RepeatedChoice:
            pass

        ref = groupElem.attrib.get('ref')
        if ref:
            groupNsPrefix = getPrefixFromName(ref)
            if groupNsPrefix:
                nsPrefix = groupNsPrefix
            otherGroupElem, otherSchema = self._findGroup(xmlSchema, ref)
            if hasNsPrefix(ref):
                nsPrefix = getNsPrefix(ref)
            self._parseGroup(otherSchema, otherGroupElem, pbComplexType, pbContType, nsPrefix)

        for childElem in groupElem:
            if childElem.tag == '{%s}sequence' % XSD_URI:
                self._parseSequence(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)
            elif childElem.tag == '{%s}choice' % XSD_URI:
                if pbContType in (PB.ElementContainer.RepeatedSequence, PB.ElementContainer.RepeatedChoice):
                    pbContType = PB.ElementContainer.RepeatedChoice
                self._parseChoice(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)
            elif childElem.tag == '{%s}all' % XSD_URI:
                self._parseAll(xmlSchema, childElem, pbComplexType, pbContType, nsPrefix)

    def _parseAll(self, xmlSchema, allElem, pbComplexType, pbContType):
        minOccurs = parseMinOccurs(allElem)
        pbElemCont = None
        if len(list(allElem)) > 0:
            pbElemCont = pbComplexType.element_container.add()
            pbElemCont.kind = pbContType
            pbElemCont.min_occurs = minOccurs

        for childElem in allElem:
            if childElem.tag == '{%s}element' % XSD_URI:
                self._parseElement(xmlSchema, childElem, pbComplexType, pbElemCont, pbContType)

    def _parseSimpleType(self, xmlSchema, simpleTypeElem, pbSimpleType):
        name = simpleTypeElem.attrib.get('name')
        if name: pbSimpleType.name = name

        for childElem in simpleTypeElem:
            if childElem.tag == '{%s}restriction' % XSD_URI:
                pbSimpleType.type.kind = PB.SimpleType.Type.Restriction
                self._parseRestriction(xmlSchema, childElem, pbSimpleType.type.restriction)
            elif childElem.tag == '{%s}list' % XSD_URI:
                pbSimpleType.type.kind = PB.SimpleType.Type.List
                self._parseList(xmlSchema, childElem, pbSimpleType.type.list)
            elif childElem.tag == '{%s}union' % XSD_URI:
                pbSimpleType.type.kind = PB.SimpleType.Type.Union
                self._parseUnion(xmlSchema, childElem, pbSimpleType.type.union)

    def _parseAttribute(self, xmlSchema, attributeElem, pbAttribute, nsPrefix=None):
        if nsPrefix:
            pbAttribute.ref_ns_prefix = nsPrefix

        ref = attributeElem.attrib.get('ref')
        if ref:
            if ref == 'xml:space':
                pbAttribute.type.kind = PB.Attribute.Type.SimpleTypeName
                pbAttribute.name = 'space'
                pbAttribute.type.simple_type_name = 'xml:space'
                pbAttribute.ref_ns_prefix = 'xml'
            else:
                attrNsPrefix = getPrefixFromName(ref)
                if attrNsPrefix:
                    nsPrefix = attrNsPrefix
                    if nsPrefix != 'xml':
                        pbAttribute.ref_ns_prefix = nsPrefix
                otherAttrElem, otherSchema = self._findAttribute(xmlSchema, ref)
                if otherAttrElem is not None:
                    self._parseAttribute(otherSchema, otherAttrElem, pbAttribute, nsPrefix)
                elif nsPrefix == 'xml':
                    pass # TODO
                else:
                    print attributeElem
                    print ref
                    assert(False)

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
                if (not hasNamespace(type)) and (nsPrefix is not None):
                    pbAttribute.type.simple_type_name = '%s:%s' % (nsPrefix, type)
                else:
                    pbAttribute.type.simple_type_name = type

            else:
                print type
                assert(False)

        for childElem in attributeElem:
            if childElem.tag == '{%s}simpleType' % XSD_URI:
                pbType = pbAttribute.type.add()
                pbType.kind = PB.Attribute.Type.SimpleType
                pbType.simple_type = PB.SimpleType()
                self._parseSimpleType(xmlSchema, childElem, pbType.simple_type)

    def _parseAttributeGroup(self, xmlSchema, attributeGroupElem, pbComplexType, nsPrefix=None):
        ref = attributeGroupElem.attrib.get('ref')
        if ref:
            attrGroupNsPrefix = getPrefixFromName(ref)
            if attrGroupNsPrefix:
                nsPrefix = attrGroupNsPrefix
            otherAttrGroupElem, otherSchema = self._findAttributeGroup(xmlSchema, ref)
            if hasNsPrefix(ref):
                nsPrefix = getNsPrefix(ref)
            self._parseAttributeGroup(otherSchema, otherAttrGroupElem, pbComplexType, nsPrefix)

        for childElem in attributeGroupElem:
            if childElem.tag == '{%s}attibuteGroup' % XSD_URI:
                self._parseAttributeGroup(xmlSchema, childElem, pbComplexType, nsPrefix)
            elif childElem.tag == '{%s}attribute' % XSD_URI:
                pbAttribute = pbComplexType.attribute.add()
                self._parseAttribute(xmlSchema, childElem, pbAttribute, nsPrefix)

    def _parseAnyAttribute(self, xmlSchema, anyAttrElem, pbAttribute):
        pbAttribute.type.kind = PB.Attribute.Type.AnyAttribute

        namespace = anyAttrElem.attrib.get('namespace')
        if namespace: pbAttribute.namespace = namespace
        processContents = anyAttrElem.attrib.get('processContents')
        if processContents: pbAttribute.process_contents = processContents

    def _parseSimpleContent(self, xmlSchema, simpleContentElem, pbComplexType, pbContType):
        for childElem in simpleContentElem:
            if childElem.tag == '{%s}restriction' % XSD_URI:
                self._parseRestriction(xmlSchema, childElem, pbComplexType.restriction)
            elif childElem.tag == '{%s}extension' % XSD_URI:
                self._parseExtension(xmlSchema, childElem, pbComplexType, pbContType)

    def _parseRestriction(self, xmlSchema, restrictionElem, pbRestriction):
        base = restrictionElem.attrib.get('base')
        if base: pbRestriction.base.CopyFrom( self._parseBaseAttr(xmlSchema, base) )

        for childElem in restrictionElem:
            if childElem.tag == '{%s}minExclusive' % XSD_URI:
                pbRestriction.min_exclusive = childElem.attrib.get('value')
            elif childElem.tag == '{%s}minInclusive' % XSD_URI:
                pbRestriction.min_inclusive = childElem.attrib.get('value')
            elif childElem.tag == '{%s}maxExclusive' % XSD_URI:
                pbRestriction.max_exclusive = childElem.attrib.get('value')
            elif childElem.tag == '{%s}maxInclusive' % XSD_URI:
                pbRestriction.max_inclusive = childElem.attrib.get('value')
            elif childElem.tag == '{%s}totalDigits' % XSD_URI:
                pbRestriction.total_digits = int(childElem.attrib.get('value'))
            elif childElem.tag == '{%s}fractionDigits' % XSD_URI:
                pbRestriction.fraction_digits = int(childElem.attrib.get('value'))
            elif childElem.tag == '{%s}length' % XSD_URI:
                pbRestriction.length = int(childElem.attrib.get('value'))
            elif childElem.tag == '{%s}minLength' % XSD_URI:
                pbRestriction.min_length = int(childElem.attrib.get('value'))
            elif childElem.tag == '{%s}maxLength' % XSD_URI:
                pbRestriction.max_length = int(childElem.attrib.get('value'))
            elif childElem.tag == '{%s}enumeration' % XSD_URI:
                pbRestriction.enumeration.append(childElem.attrib.get('value'))
            elif childElem.tag == '{%s}whiteSpace' % XSD_URI:
                pbRestriction.white_space = childElem.attrib.get('value')
            elif childElem.tag == '{%s}pattern' % XSD_URI:
                pbRestriction.pattern = childElem.attrib.get('value')
            elif childElem.tag == '{%s}simpleType' % XSD_URI:
                pass # TODO
            elif childElem.tag == '{%s}group' % XSD_URI:
                pass # TODO
            elif childElem.tag == '{%s}all' % XSD_URI:
                pass # TODO
            elif childElem.tag == '{%s}choice' % XSD_URI:
                pass # TODO
            elif childElem.tag == '{%s}sequence' % XSD_URI:
                pass # TODO
            elif childElem.tag == '{%s}attribute' % XSD_URI:
                pass # TODO
            elif childElem.tag == '{%s}attributeGroup' % XSD_URI:
                pass # TODO

    def _parseList(self, xmlSchema, listElem, pbList):
        itemType = listElem.attrib.get('itemType')
        if itemType:
            if isBuiltInType(itemType, xmlSchema.builtInTypeMap):
                pbList.item_type.kind = PB.List.ItemType.BuiltIn
                pbList.item_type.built_in = xmlSchema.builtInTypeMap.get(itemType)
            else:
                pbList.item_type.kind = PB.List.ItemType.SimpleTypeName
                pbList.item_type.simple_type_name = itemType

    def _parseUnion(self, xmlSchema, unionElem, pbUnion):
        memberTypes = unionElem.attrib.get('memberTypes')
        if memberTypes:
            memberTypeList = map(lambda m:m.strip(), memberTypes.split(' '))
            for memberType in memberTypeList:
                pbMemberType = pbUnion.member_type.add()
                if isBuiltInType(memberType, xmlSchema.builtInTypeMap):
                    pbMemberType.kind = PB.Union.MemberType.BuiltIn
                    pbMemberType.built_in = xmlSchema.builtInTypeMap.get(memberType)
                else:
                    pbMemberType.kind = PB.Union.MemberType.SimpleTypeName
                    pbMemberType.simple_type_name = memberType





    def _parseBaseAttr(self, xmlSchema, baseAttrVal):
        pbBase = PB.Base()
        if isBuiltInType(baseAttrVal, xmlSchema.builtInTypeMap):
            pbBase.kind = PB.Base.BuiltIn
            pbBase.built_in = xmlSchema.builtInTypeMap.get(baseAttrVal)
        elif self._isSimpleTypeName(baseAttrVal, xmlSchema):
            pbBase.kind = PB.Base.SimpleTypeName
            pbBase.simple_type_name = baseAttrVal
        elif self._isComplexTypeName(baseAttrVal, xmlSchema):
            pbBase.kind = PB.Base.ComplexTypeName
            pbBase.complex_type_name = baseAttrVal
        else:
            print baseAttrVal
            assert(False)

        return pbBase

    def _isXsdTypeName(self, typeName, xmlSchema, elements, isXsdTypeNameFunc):
        # 자기 xsd 파일에서 simpleType 찾기
        for elem in elements:
            if hasNamespace(typeName):
                otherSchema = self._getSchemaFromFileName( xmlSchema.findFile(getPrefixFromName(typeName)) )
                if otherSchema:
                    return isXsdTypeNameFunc( getNameExceptNsPrefix(typeName), otherSchema )
            else:
                if typeName == elem.attrib.get('name'):
                    return True

        # import된 xsd 파일에서 simpleType 찾기
        otherSchema = self._getSchemaFromFileName( xmlSchema.findFile(getPrefixFromName(typeName)) )
        if otherSchema:
            return isXsdTypeNameFunc( getNameExceptNsPrefix(typeName), otherSchema )

        return False


    def _isSimpleTypeName(self, typeName, xmlSchema):
        return self._isXsdTypeName(typeName, xmlSchema, xmlSchema.simpleTypeElems, self._isSimpleTypeName)

    def _isComplexTypeName(self, typeName, xmlSchema):
        return self._isXsdTypeName(typeName, xmlSchema, xmlSchema.complexTypeElems, self._isComplexTypeName)


def applyBaseToComplexType(pbSource, pbDest):
    for elemCont in pbSource.element_container:
        pbDest.element_container.add().CopyFrom(elemCont)
    for attr in pbSource.attribute:
        pbDest.attribute.add().CopyFrom(attr)
    pbDest.restriction.CopyFrom(pbSource.restriction)


def isBuiltInType(typeName, builtInTypeMap):
    return (typeName in builtInTypeMap.keys())


def hasNamespace(typeName):
    return (':' in typeName)


def getPrefixFromNs(namespace):
    if namespace is None:
        return None
    elif ':' in namespace:
        return namespace.split(':')[1]
    else:
        return ''


def getNameExceptNsPrefix(name):
    if name is None:
        return None
    elif ':' in name:
        return name.split(':')[1]
    else:
        return name

def getPrefixFromName(name):
    if name is None:
        return None
    elif ':' in name:
        return name.split(':')[0]
    else:
        return None

def isManyMaxOccurs(maxOccurs):
    return (maxOccurs.kind == PB.MaxOccurs.Unbounded) or (maxOccurs.kind == PB.MaxOccurs.Count and maxOccurs.count > 1)

def parseMaxOccurs(elem):
    pbMaxOccurs = PB.MaxOccurs()
    maxOccurs = elem.attrib.get('maxOccurs')
    if maxOccurs:
        if maxOccurs == 'unbounded':
            pbMaxOccurs.kind = PB.MaxOccurs.Unbounded
        else:
            pbMaxOccurs.kind = PB.MaxOccurs.Count
            pbMaxOccurs.count = int(maxOccurs)
    else:
        pbMaxOccurs.kind = PB.MaxOccurs.Count
        pbMaxOccurs.count = 1
    return pbMaxOccurs

def parseMinOccurs(elem):
    minOccurs = elem.attrib.get('minOccurs')
    if minOccurs: return int(minOccurs)
    else: return 1


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


def _elemContKindFromIsManyMaxOccurs(pbContType, isManyMaxOccurs):
    if pbContType == PB.ElementContainer.Sequence and isManyMaxOccurs:
        return PB.ElementContainer.RepeatedSequence
    elif pbContType == PB.ElementContainer.Choice and isManyMaxOccurs:
        return PB.ElementContainer.RepeatedChoice
    elif pbContType == PB.ElementContainer.RepeatedSequence:
        return PB.ElementContainer.RepeatedSequence
    elif pbContType == PB.ElementContainer.RepeatedChoice:
        return PB.ElementContainer.RepeatedChoice

    return None