# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_pb2 as PB
import cpp_pb2 as CPB
import cpp_contents_funcs as CPP_FUNC
import functools

def parseToCpp(pbSchema, allPbSchemas):
    cppFile = CPB.File()
    cppFile.name = _getCppFileName(pbSchema.file_name)

    searchFileSet = set()
    _makeCppFileProp(cppFile, pbSchema, allPbSchemas, searchFileSet)
    _makeCppClasses(cppFile, pbSchema, allPbSchemas)
    return cppFile


# cpp - File 속성 채우기
def _makeCppFileProp(cppFile, pbSchema, allPbSchemas, searchFileSet):
    for imp in pbSchema.import_:
        includeFileName = _getCppIncludeFileName(imp.schema_location)
        if includeFileName:
            if (includeFileName != _getCppIncludeFileName(cppFile.name)) and (includeFileName not in cppFile.include_file):
                cppFile.include_file.append(includeFileName)

    for imp in pbSchema.import_:
        importPbSchemas = [otherPbSchema for otherPbSchema in allPbSchemas
                           if otherPbSchema.file_name == imp.schema_location]
        for impPbSchema in importPbSchemas:
            if not impPbSchema.file_name in searchFileSet:
                searchFileSet.add(impPbSchema.file_name)
                _makeCppFileProp(cppFile, impPbSchema, allPbSchemas, searchFileSet)


def _makeToXmlElemMethodBody(pbSchema, pbComplexType, cppClass, cppFile):

    toXmlMethodBodyStr = \
        """
        _outStream << "<" << _elemName;
        """
    toXmlMethodBodyStr += \
        """
        if (!_xmlNsStr.empty())
        {
            _outStream << _xmlNsStr;
        }
        """

    toXmlMethodBodyStr += CPP_FUNC.getToXmlMethodBodyStrFromAttrs(pbSchema, pbComplexType.attribute)
    toXmlMethodBodyStr += \
        """
        _outStream << ">";
        """
    toXmlMethodBodyStr += CPP_FUNC.getToXmlMethodBodyStrFromElemCont(pbSchema, pbComplexType.element_container, cppFile)

    if pbComplexType.HasField('extension'):
        if pbComplexType.extension.base.kind == PB.Base.BuiltIn:
            toXmlMethodBodyStr += '_outStream << %s;' % getToStringVarNameFromBuiltIn(pbComplexType.extension.base.built_in)
        elif pbComplexType.extension.base.kind == PB.Base.SimpleTypeName:
            toXmlMethodBodyStr += '_outStream << toString();'
        elif pbComplexType.extension.base.kind == PB.Base.ComplexTypeName:
            pass # xsd_parser 쪽에서 처리

    toXmlMethodBodyStr += \
        """
        _outStream << "</" << _elemName << ">";
        """
    CPP_FUNC.makeToXmlElemMethod(toXmlMethodBodyStr, cppClass)


def getToStringVarNameFromBuiltIn(pbBuiltIn):
    builtInStr = CPP_FUNC.getBuiltInStr(pbBuiltIn)
    if builtInStr == 'boolean':
        return 'XSD::XMLBooleanStr(m_%s)' % CPP_FUNC.getCppVarName(builtInStr)
    else:
        return 'm_%s' % CPP_FUNC.getCppVarName(builtInStr)


def _makeToXmlMethodBodyForElem(pbSchema, pbComplexType, cppClass, pbElem, cppFile):

    xmlElementName = CPP_FUNC.getXmlElementName(pbSchema, pbElem)
    toXmlMethodBodyStr = \
"""
_outStream << "<%s";
""" % xmlElementName

    toXmlMethodBodyStr += \
"""
%s
""" % _makeXmlNsCode(pbSchema, "_outStream")

    toXmlMethodBodyStr += CPP_FUNC.getToXmlMethodBodyStrFromAttrs(pbSchema, pbComplexType.attribute)
    toXmlMethodBodyStr += \
"""
_outStream << ">";
"""
    toXmlMethodBodyStr += CPP_FUNC.getToXmlMethodBodyStrFromElemCont(pbSchema, pbComplexType.element_container, cppFile)
    toXmlMethodBodyStr += \
"""
_outStream << "</%s>";
""" % xmlElementName
    CPP_FUNC.makeToXmlMethod(toXmlMethodBodyStr, cppClass)


# cpp class 만들기
def _makeCppClasses(cppFile, pbSchema, allPbSchemas):
    # 기본 Element 생성
    cppClass = cppFile.class_.add()
    cppClass.name = 'Element'
    cppClass.parent_class.append('XSD::Element')

    cppClass = cppFile.class_.add()
    cppClass.name = 'Attribute'
    cppClass.parent_class.append('XSD::Attribute')

    for pbSimpleType in pbSchema.simple_type:
        cppClass = cppFile.class_.add()
        _makeCppClassFromSimpleType(pbSchema, pbSimpleType, cppClass)

    for pbComplexType in pbSchema.complex_type:
        cppClass = cppFile.class_.add()
        cppClass.name = pbComplexType.name
        cppClass.parent_class.append('XSD::ComplexType')

        makeToXmlElemMethodBodyFunc = functools.partial(_makeToXmlElemMethodBody, cppFile=cppFile)
        _makeCppClassFromComplexType(pbSchema, pbComplexType, cppClass, makeToXmlElemMethodBodyFunc)

    for pbElement in pbSchema.element:
        cppClass = cppFile.class_.add()
        cppClass.name = '%s_element' % pbElement.name
        cppClass.parent_class.append('Element')
        _makeCppClassFromElement(pbSchema, pbElement, cppClass, allPbSchemas, cppFile)

    for pbAttr in pbSchema.attribute:
        cppClass = cppFile.class_.add()
        _makeCppClassFromAttribute(pbSchema, pbAttr, cppClass)


def _getXmlNsPrefixStr(ns, pbScheme):
    if ns.uri == pbScheme.target_namespace:
        if pbScheme.element_form_default == PB.Form.unqualified:
            return 'xmlns'

    if ns.prefix == '':
        if pbScheme.xml_ns_prefix:
            return 'xmlns:%s' % pbScheme.xml_ns_prefix
        else:
            return 'xmlns'
    else:
        return 'xmlns:%s' % ns.prefix

def _makeXmlNsCode(pbScheme, cppStreamName):
    pbNsSet = set()
    pbNsRemoveDupList = []
    for pbNs in pbScheme.namespace:
        if not pbNs.uri in pbNsSet:
            pbNsRemoveDupList.append(pbNs)
        pbNsSet.add(pbNs.uri)

    nsCodeList= ['%s << " " << "%s=\\\\"%s\\\\"";' % (cppStreamName, _getXmlNsPrefixStr(pbNs, pbScheme), pbNs.uri) for pbNs in pbNsRemoveDupList if pbNs.prefix not in ['xsd'] ]
    return '\n'.join(nsCodeList)


def isOtherClassType(name):
    return '::' in name


def getNameExceptCppNs(name):
    if '::' in name:
        return name.split('::')[1]
    else:
        return name


def getCppNs(name):
    if '::' in name:
        return name.split('::')[0]
    else:
        return name


# Element를 class로 만들기
def _makeCppClassFromElement(pbSchema, pbElement, cppClass, allPbSchemas, cppFile):
    cppVarType = _getCppVarTypeFromElem(pbElement)
    # cppClass.parent_class.append(cppVarType)

    foundCtTypes = []
    if isOtherClassType(cppVarType): # 다른 파일에 있는 ComplexType에서 가져오기
        foundCtTypes = [ctType for schema in allPbSchemas
                        for ctType in schema.complex_type
                        if schema.file_name != pbSchema.file_name and
                        schema.xml_ns_prefix == pbSchema.xml_ns_prefix and
                        ctType.name == getNameExceptCppNs(cppVarType)]
    else:
        foundCtTypes = [ctType for schema in allPbSchemas
                        for ctType in schema.complex_type
                        if schema.file_name == pbSchema.file_name and
                        schema.xml_ns_prefix == pbSchema.xml_ns_prefix and
                        ctType.name == cppVarType]

    if len(foundCtTypes) == 1:
        for ctType in foundCtTypes:
            makeToXmlMethodBodyFunc = functools.partial(_makeToXmlMethodBodyForElem, pbElem=pbElement, cppFile=cppFile)
            _makeCppClassFromComplexType(pbSchema, ctType, cppClass, makeToXmlMethodBodyFunc)

# Attribute를 class로 만들기
def _makeCppClassFromAttribute(pbSchema, pbAttr, cppClass):
    cppClass.name = '%s_attr' % pbAttr.name
    cppClass.parent_class.append('Attribute')

    # TODO
    # cppVarType = _getCppVarTypeFromAttr(pbAttr)
    # cppClass.parent_class.append(cppVarType)

    toXmlMethod = cppClass.method.add()
    toXmlMethod.return_type = 'void'
    toXmlMethod.name = 'toXml'
    toXmlMethod.const = True
    var1 = toXmlMethod.argument.add()
    var1.type = 'std::ostream&'
    var1.name = '_outStream'
    toXmlMethod.body = ''
#     toXmlMethod.body = \
# """
# %(CTType)s::toXmlAttr("%(attrName)s", _outStream);
# """ % {'CTType': cppVarType, 'attrName':CPP_FUNC.getXmlAttributeName(pbSchema.attribute_form_default, pbSchema.xml_ns_prefix, pbAttr.name)}


# ComplexType을 class로 만들기
def _makeCppClassFromComplexType(pbSchema, pbComplexType, cppClass, toXmlMethodBodyFunc):

    cppClass.constructor.add()

    repeatedIdx = 1
    for elemCont in pbComplexType.element_container:
        if elemCont.kind == PB.ElementContainer.Sequence:
            CPP_FUNC.complexType_sequence(elemCont.sequence, cppClass)
        elif elemCont.kind == PB.ElementContainer.Choice:
            CPP_FUNC.complexType_choice(elemCont.choice, cppClass)
        elif elemCont.kind == PB.ElementContainer.RepeatedSequence:
            CPP_FUNC.complexType_repeated(elemCont.repeated_sequence, cppClass, repeatedIdx)
            repeatedIdx += 1
        elif elemCont.kind == PB.ElementContainer.RepeatedChoice:
            CPP_FUNC.complexType_repeated(elemCont.repeated_choice, cppClass, repeatedIdx)
            repeatedIdx += 1

    cppClass.destructor.body = 'clear();'

    clearMethodBodyStr = CPP_FUNC.getClaerMethodBodyStrFromAttrs(pbComplexType.attribute)
    clearMethodBodyStr += CPP_FUNC.getClearMethodBodyStrFromElemCont(pbComplexType.element_container)
    if pbComplexType.HasField('extension'):
        clearMethodBodyStr += CPP_FUNC.getClearMethodBodyStrFromExtension(pbComplexType.extension)

    CPP_FUNC.makeClearMethod(clearMethodBodyStr, cppClass)

    toXmlMethodBodyFunc(pbSchema, pbComplexType, cppClass)

    CPP_FUNC.makeDefaultInstanceMethod(cppClass)
    CPP_FUNC.makeDefaultInstanceMember(cppClass)

    for pbAttr in pbComplexType.attribute:
        if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
            CPP_FUNC.complexType_attr_builtIn(pbAttr, cppClass)
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
            CPP_FUNC.complexType_attr_simpleTypeName(pbAttr, cppClass)
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
            CPP_FUNC.complexType_attr_simpleTypeName(pbAttr, cppClass)
        elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
            pass # TODO
            # CPP_FUNC.complexType_attr_anyAttribute(pbAttr.type.any, cppClass)

    # extension 처리
    if pbComplexType.HasField('extension'):
        if pbComplexType.extension.base.kind == PB.Base.BuiltIn:
            CPP_FUNC.simpleType_extension_builtIn(pbComplexType.extension, cppClass)
        elif pbComplexType.extension.base.kind == PB.Base.SimpleTypeName:
            cppClass.parent_class.append(_getCppVarType(pbComplexType.extension.base.simple_type_name))
        elif pbComplexType.extension.base.kind == PB.Base.ComplexTypeName:
            pass


# SimpleType을 class로 만들기
def _makeCppClassFromSimpleType(pbSchema, pbSimpleType, cppClass):
    cppClass.name = pbSimpleType.name
    cppClass.parent_class.append('XSD::SimpleType')
    cppClass.destructor.body = 'clear();'
    _makeCppMethodFromSimpleType(pbSchema, pbSimpleType, cppClass)


# SimpleType의 Method 만들기
def _makeCppMethodFromSimpleType(pbSchema, pbSimpleType, cppClass):
    if pbSimpleType.type.kind == PB.SimpleType.Type.Restriction:
        _makeCppMethodFromRestriction(pbSimpleType.type.restriction, cppClass)
    elif pbSimpleType.type.kind == PB.SimpleType.Type.List:
        CPP_FUNC.simpleType_list(pbSchema, pbSimpleType.type.list, cppClass)
    elif pbSimpleType.type.kind == PB.SimpleType.Type.Union:
        CPP_FUNC.simpleType_union(pbSchema, pbSimpleType.type.union, cppClass)


# restriction 추가
def _makeCppMethodFromRestriction(pbRestriction, cppClass):
    if pbRestriction.base.kind == PB.Base.BuiltIn:
        if len(pbRestriction.enumeration) > 0: # enum으로 되어 있는 경우 처리
            CPP_FUNC.simpleType_restriction_enum(pbRestriction, cppClass)
        else: # enum이 아닌 일반 restriction 처리
            CPP_FUNC.simpleType_restriction_builtIn(pbRestriction, cppClass)

    elif pbRestriction.base.kind == PB.Base.SimpleTypeName:
        CPP_FUNC.simpleType_restriction_simpleTypeName(pbRestriction, cppClass)
    elif pbRestriction.base.kind == PB.Base.ComplexTypeName:
        CPP_FUNC.simpleType_restriction_complexTypeName(pbRestriction, cppClass)


def getNsPrefix(name):
    nsPrefix = ''
    if ':' in name:
        nsPrefix, n = name.split(':')
    return nsPrefix


# cpp 변수 타입 가져오기
def _getCppVarType(pbSTName):
    cppVarName = pbSTName
    if ':' in cppVarName:
        ns, name = cppVarName.split(':')
        cppVarName = 'ns_%s::%s' % (ns, name)

    return cppVarName


# Element로 부터 cpp var type 가져오기
def _getCppVarTypeFromElem(pbElem):
    if pbElem.type.kind == PB.Element.Type.BuiltIn:
        return CPP_FUNC.getBuiltInStr(pbElem.type.built_in)
    elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
        return _getCppVarType(pbElem.type.simple_type_name)
    elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
        return _getCppVarType(pbElem.type.complex_type_name)
    elif pbElem.type.kind == PB.Element.Type.SimpleType:
        return _getCppVarType(pbElem.type.simple_type.name)
    elif pbElem.type.kind == PB.Element.Type.ComplexType:
        return _getCppVarType(pbElem.type.complex_type.name)
    elif pbElem.type.kind == PB.Element.Type.Any:
        if pbElem.type.any.ns_prefix:
            return _getCppVarType('%s:Element' % pbElem.type.any.ns_prefix)
        else:
            print pbElem.type.any.ns_prefix
            return 'XSD:Element'


# Attribute로 부터 cpp var type 가져오기
def _getCppVarTypeFromAttr(pbAttr):
    if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
        return CPP_FUNC.getBuiltInStr(pbAttr.type.built_in)
    elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
        return _getCppVarType(pbAttr.type.simple_type_name)
    elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
        return _getCppVarType(pbAttr.type.simple_type.name)
    elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
        return _getCppVarType('%s:Attribute' % pbAttr.type.any.ns_prefix)


# 파일명 가져오기
def _getCppFileName(xsdFileName):
    return '%s' % xsdFileName.replace('.', '_')


# include 파일명 가져오기
def _getCppIncludeFileName(xsdFileName):
    fileName = _getCppFileName(xsdFileName)
    # if fileName == '': fileName = 'xml.h'
    if fileName == '': return None
    else: fileName = '%s.h' % fileName
    return fileName