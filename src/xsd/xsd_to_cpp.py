# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_pb2 as PB
import cpp_pb2 as CPB
import cpp_contents_funcs as CPP_FUNC

def parseToCpp(pbSchema):
    cppFile = CPB.File()
    _makeCppFileProp(cppFile, pbSchema)
    _makeCppClasses(cppFile, pbSchema)
    return cppFile


# cpp - File 속성 채우기
def _makeCppFileProp(cppFile, pbSchema):
    cppFile.name = _getCppFileName(pbSchema.file_name)
    for imp in pbSchema.import_:
        cppFile.include_file.append(_getCppIncludeFileName(imp.schema_location))


# cpp class 만들기
def _makeCppClasses(cppFile, pbSchema):
    # 기본 Element 생성
    cppClass = cppFile.class_.add()
    cppClass.name = 'Element'
    cppClass.parent_class.append('XSD::Element')

    cppClass = cppFile.class_.add()
    cppClass.name = 'Attribute'
    cppClass.parent_class.append('XSD::Attribute')

    for pbSimpleType in pbSchema.simple_type:
        cppClass = cppFile.class_.add()
        _makeCppClassFromSimpleType(pbSimpleType, cppClass)

    for pbComplexType in pbSchema.complex_type:
        cppClass = cppFile.class_.add()
        _makeCppClassFromComplexType(pbComplexType, cppClass)

    for pbElement in pbSchema.element:
        cppClass = cppFile.class_.add()
        _makeCppClassFromElement(pbElement, cppClass)

    for pbAttr in pbSchema.attribute:
        cppClass = cppFile.class_.add()
        _makeCppClassFromAttribute(pbAttr, cppClass)


# Element를 class로 만들기
def _makeCppClassFromElement(pbElement, cppClass):
    cppClass.name = pbElement.name
    cppClass.parent_class.append('Element')

    cppVarType = _getCppVarTypeFromElem(pbElement)
    cppClass.parent_class.append(cppVarType)


# Attribute를 class로 만들기
def _makeCppClassFromAttribute(pbAttr, cppClass):
    cppClass.name = pbAttr.name
    cppClass.parent_class.append('Attribute')

    cppVarType = _getCppVarTypeFromAttr(pbAttr)
    cppClass.parent_class.append(cppVarType)


# ComplexType을 class로 만들기
def _makeCppClassFromComplexType(pbComplexType, cppClass):
    cppClass.name = pbComplexType.name
    cppClass.parent_class.append('XSD::ComplexType')

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

    clearMethodBodyStr = CPP_FUNC.getClaerMethodBodyStrFromAttrs(pbComplexType.attribute)
    clearMethodBodyStr += CPP_FUNC.getClearMethodBodyStrFromElemCont(pbComplexType.element_container)
    CPP_FUNC.makeClearMethod(clearMethodBodyStr, cppClass)

    toXmlMethodBodyStr = \
    """
        _outStream << "<" << _elementName;
    """
    toXmlMethodBodyStr += CPP_FUNC.getToXmlMethodBodyStrFromAttrs(pbComplexType.attribute)
    toXmlMethodBodyStr += \
    """
        _outStream << ">";
    """
    toXmlMethodBodyStr += CPP_FUNC.getToXmlMethodBodyStrFromElemCont(pbComplexType.element_container)
    toXmlMethodBodyStr += \
    """
        _outStream << "</" << _elementName << ">";
    """
    CPP_FUNC.makeToXmlElemMethod(toXmlMethodBodyStr, cppClass)

    CPP_FUNC.makeDefaultInstanceMethod(cppClass)
    CPP_FUNC.makeDefaultInstanceMember(cppClass)

    for pbAttr in pbComplexType.attribute:
        if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
            CPP_FUNC.complexType_attr_builtIn(pbAttr.name, pbAttr.type.built_in, cppClass)
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
            CPP_FUNC.complexType_attr_simpleTypeName(pbAttr.name, pbAttr.type.simple_type_name, cppClass)
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
            CPP_FUNC.complexType_attr_simpleTypeName(pbAttr.name, pbAttr.type.simple_type.name, cppClass)
        elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
            pass # TODO
            # CPP_FUNC.complexType_attr_anyAttribute(pbAttr.type.any, cppClass)


# SimpleType을 class로 만들기
def _makeCppClassFromSimpleType(pbSimpleType, cppClass):
    cppClass.name = pbSimpleType.name
    cppClass.parent_class.append('XSD::SimpleType')
    _makeCppMethodFromSimpleType(pbSimpleType, cppClass)


# SimpleType의 Method 만들기
def _makeCppMethodFromSimpleType(pbSimpleType, cppClass):
    if pbSimpleType.type.kind == PB.SimpleType.Type.Restriction:
        _makeCppMethodFromRestriction(pbSimpleType.type.restriction, cppClass)
    elif pbSimpleType.type.kind == PB.SimpleType.Type.List:
        pass # TODO - list
    elif pbSimpleType.type.kind == PB.SimpleType.Type.Union:
        CPP_FUNC.simpleType_union(pbSimpleType.type.union, cppClass)


# restriction 추가
def _makeCppMethodFromRestriction(pbRestriction, cppClass):
    if pbRestriction.base.kind == PB.Base.BuiltIn:
        if (pbRestriction.base.built_in == PB.BuiltIn.string) and (len(pbRestriction.enumeration) > 0): # enum으로 되어 있는 경우 처리
            CPP_FUNC.simpleType_restriction_enum(pbRestriction.enumeration, cppClass)
        else: # enum이 아닌 일반 restriction 처리
            CPP_FUNC.simpleType_restriction_builtIn(pbRestriction.base.built_in, cppClass)

    elif pbRestriction.base.kind == PB.Base.SimpleTypeName:
        CPP_FUNC.simpleType_restriction_simpleTypeName(pbRestriction.base.simple_type_name, cppClass)
    elif pbRestriction.base.kind == PB.Base.ComplexTypeName:
        CPP_FUNC.simpleType_restriction_complexTypeName(pbRestriction.base.complex_type_name, cppClass)


def _getNsPrefix(name):
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
        return _getBuiltInStr(pbElem.type.built_in)
    elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
        return _getCppVarType(pbElem.type.simple_type_name)
    elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
        return _getCppVarType(pbElem.type.complex_type_name)
    elif pbElem.type.kind == PB.Element.Type.SimpleType:
        return _getCppVarType(pbElem.type.simple_type.name)
    elif pbElem.type.kind == PB.Element.Type.ComplexType:
        return _getCppVarType(pbElem.type.complex_type.name)
    elif pbElem.type.kind == PB.Element.Type.Any:
        return _getCppVarType('%s:Element' % pbElem.type.any.ns_prefix)


# Attribute로 부터 cpp var type 가져오기
def _getCppVarTypeFromAttr(pbAttr):
    if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
        return _getBuiltInStr(pbAttr.type.built_in)
    elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
        return _getCppVarType(pbAttr.type.simple_type_name)
    elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
        return _getCppVarType(pbAttr.type.simple_type.name)
    elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
        return _getCppVarType('%s:Attribute' % pbAttr.type.any.ns_prefix)


def _getBuiltInStr(builtType):
    return PB.BuiltIn.DESCRIPTOR.enum_types_by_name['Type'].values_by_number[builtType].name


# 파일명 가져오기
def _getCppFileName(xsdFileName):
    return '%s' % xsdFileName.replace('.', '_')

# include 파일명 가져오기
def _getCppIncludeFileName(xsdFileName):
    fileName = _getCppFileName(xsdFileName)
    if fileName == '': fileName = 'xml.h'
    else: fileName = '%s.h' % fileName
    return fileName