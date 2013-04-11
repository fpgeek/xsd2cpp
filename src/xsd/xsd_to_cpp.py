# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_pb2 as PB
import cpp_pb2 as CPB

def parseToCpp(pbSchema):
    cppFile = CPB.File()
    _makeCppFileProp(cppFile, pbSchema)
    _makeCppClasses(cppFile, pbSchema)
    return cppFile

# cpp - File 속성 채우기
def _makeCppFileProp(cppFile, pbSchema):
    cppFile.name = _getCppFileName(pbSchema.file_name);
    for imp in pbSchema.import_:
        cppFile.include_file.append(_getCppIncludeFileName(imp.schema_location))

# cpp class 만들기
def _makeCppClasses(cppFile, pbSchema):
    # 기본 Element 생성
    cppClass = cppFile.class_.add()
    cppClass.name = 'Element'
    cppClass.parent_class.append('XSD::Element')

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
        print pbAttr.name

# Element를 class로 만들기
def _makeCppClassFromElement(pbElement, cppClass):
    cppClass.name = pbElement.name
    cppClass.parent_class.append('Element')

    cppVarType = _getCppVarTypeFromElem(pbElement)
    cppClass.parent_class.append(cppVarType)

# ComplexType을 class로 만들기
def _makeCppClassFromComplexType(pbComplexType, cppClass):
    cppClass.name = pbComplexType.name
    cppClass.parent_class.append('XSD::ComplexType')

    choiceIdx = 1
    repeatedIdx = 1
    for elemCont in pbComplexType.element_container:
        if elemCont.kind == PB.ElementContainer.Sequence:
            _setCppClassFromCTSequence(elemCont.sequence, cppClass)
        elif elemCont.kind == PB.ElementContainer.Choice:
            _setCppClassFromCTChoice(elemCont.choice, cppClass, choiceIdx)
            choiceIdx += 1
        elif elemCont.kind == PB.ElementContainer.RepeatedSequence:
            _setCppClassFromCTRepeated(elemCont.repeated_sequence, cppClass, repeatedIdx)
            repeatedIdx += 1
        elif elemCont.kind == PB.ElementContainer.RepeatedChoice:
            _setCppClassFromCTRepeated(elemCont.repeated_choice, cppClass, repeatedIdx)
            repeatedIdx += 1

    for pbAttr in pbComplexType.attribute:
        cppVarName = '%s_attr' % _getCppVarName(pbAttr.name)
        cppVarType = None
        if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
            cppVarType = getBaseNameStr(pbAttr.type.built_in)
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
            cppVarType = _getCppVarType(pbAttr.type.simple_type_name)
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
            cppVarType = _getCppVarType(pbAttr.type.simple_type.name)
        elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
            cppVarType = _getCppVarType(pbAttr.type.complex_type.name)

        if cppVarType is not None:
            _setCppClassByOne(cppVarName, cppVarType, cppClass)


def _setCppClassFromCTSequence(pbElemList, cppClass):
    for pbElem in pbElemList:
        if pbElem.type.kind == PB.Element.Type.BuiltIn:
            cppVarName = getBaseNameStr(pbElem.type.built_in)
            cppVarType = cppVarName
            _setCppClassByOne(cppVarName, cppVarType, cppClass)
        elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
            cppVarName = _getCppVarName(pbElem.name)
            cppVarType = _getCppVarType(pbElem.type.simple_type_name)
            _setCppClassByOne(cppVarName, cppVarType, cppClass)
        elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
            _setCppClassFromCTName(pbElem, cppClass)
        elif pbElem.type.kind == PB.Element.Type.SimpleType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.ComplexType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.Any:
            _setCppClassFromAny(pbElem, cppClass)

def _setCppClassFromAny(pbElem, cppClass):
    cppVarType = _getCppVarType('%s:Element' % pbElem.ns_prefix)
    cppVarName = 'm_%sAny' % pbElem.ns_prefix

    method1 = cppClass.method.add()
    method1.return_type = 'void'
    method1.name = 'set_any'
    arg1 = method1.argument.add()
    arg1.type =  '%s*' % cppVarType
    arg1.name = '_any'

    mVar1 = cppClass.member_var.add()
    mVar1.type = '%s*' % cppVarType
    mVar1.name = cppVarName

def _setCppClassFromCTChoice(pbElemList, cppClass, idx):
    innerClass = cppClass.inner_class.add()
    innerClass.name = 'Choice_%d' % idx
    _setCppClassFromCTSequence(pbElemList, innerClass)
    _setCppClassFromCTSequence(pbElemList, cppClass)

    innerClass.enum_.name = 'Type'
    for pbElem in pbElemList:
        cppVarName = _getCppVarName(pbElem.name)
        #cppVarType = _getCppVarTypeFromElem(pbElem)

        innerClass.enum_.value.append('_%s_' % cppVarName)

    var1 = innerClass.member_var.add()
    var1.type = 'Type'
    var1.name = 'm_type'


def _setCppClassFromCTRepeated(pbElemList, cppClass, idx):
    innerClass = cppClass.inner_class.add()
    innerClass.name = 'ChildGroup_%d' % idx
    _setCppClassFromCTSequence(pbElemList, innerClass)

    innerClass.enum_.name = 'Type'
    for pbElem in pbElemList:
        cppVarName = _getCppVarName(pbElem.name)
        cppVarType = _getCppVarTypeFromElem(pbElem)

        innerClass.enum_.value.append('_%s_' % cppVarName)
        mMethod = cppClass.method.add()
        mMethod.return_type = '%s*' % cppVarType
        mMethod.name = 'add_%s' % cppVarName

    method1 = innerClass.method.add()
    method1.return_type = 'const Type&'
    method1.name = 'type'
    method1.const = True

    method2 = innerClass.method.add()
    method2.return_type = 'void'
    method2.name = 'set_type'
    arg1 = method2.argument.add()
    arg1.type = 'Type&'
    arg1.name = '_type'
    arg1.const = True

    var1 = innerClass.member_var.add()
    var1.type = 'Type'
    var1.name = 'm_type'

    mVar1 = cppClass.member_var.add()
    mVar1.type = 'std::vector<%s*>' % innerClass.name
    mVar1.name = 'm_%s_list' % innerClass.name

def _setCppClassByOne(cppVarName, cppVarType, cppClass):
    method1 = cppClass.method.add()
    method1.return_type = 'bool'
    method1.name = 'has_%s' % cppVarName
    method1.const = True
    method1.body = "" # TODO

    method2 = cppClass.method.add()
    method2.return_type = 'void'
    method2.name = 'set_%s' % cppVarName
    method2_var1 =  method2.argument.add()
    method2_var1.type = '%s&' % cppVarType
    method2_var1.name = '_%s' % cppVarName
    method2_var1.const = True
    method2.body = "" # TODO

    method3 = cppClass.method.add()
    method3.return_type = 'const %s&' % cppVarType
    method3.name = '%s' % cppVarName
    method3.const = True
    method3.body = "" # TODO

    memberVar1 = cppClass.member_var.add()
    memberVar1.type = 'bool'
    memberVar1.name = 'm_has_%s' % cppVarName

    memberVar2 = cppClass.member_var.add()
    memberVar2.type = '%s' % cppVarType
    memberVar2.name = 'm_%s' % cppVarName



def _setCppClassFromCTName(pbElem, cppClass):
    CTName = pbElem.type.complex_type_name

    cppVarName = _getCppVarName(pbElem.name)
    cppVarType = _getCppVarType(CTName)

    method1 = cppClass.method.add()
    method1.return_type = 'bool'
    method1.name = 'has_%s' % cppVarName
    method1.const = True
    method1.body = "" # TODO

    method2 = cppClass.method.add()
    method2.return_type = '%s&' % cppVarType
    method2.name = '%s' % cppVarName
    method2.const = True
    method2.body = "" # TODO

    method3 = cppClass.method.add()
    method3.return_type = '%s*' % cppVarType
    method3.name = 'mutable_%s' % cppVarName
    method3.body = "" # TODO

def _setElementToXmlMethod(method):
    method.return_type = 'void'
    method.name = 'toXml'
    method.const = True

    arg1 = method.argument.add()
    arg1.type = 'std::string&'
    arg1.name = '_elementName'
    arg1.const = True

    arg2 = method.argument.add()
    arg2.type = 'std::ostream&'
    arg2.name = '_outStream'


# SimpleType을 class로 만들기
def _makeCppClassFromSimpleType(pbSimpleType, cppClass):
    cppClass.name = pbSimpleType.name
    cppClass.parent_class.append('XSD::SimpleType')
    _makeCppMethodFromSimpleType(pbSimpleType, cppClass)

# SimpleType의 Method 만들기
def _makeCppMethodFromSimpleType(pbSimpleType, cppClass):
    if pbSimpleType.type.kind == PB.SimpleType.Type.Restriction:
        return _makeCppMethodFromRestriction(pbSimpleType.type.restriction, cppClass)
    elif pbSimpleType.type.kind == PB.SimpleType.Type.List:
        pass # TODO - list
    elif pbSimpleType.type.kind == PB.SimpleType.Type.Union:
        pass # TODO - union

# restriction 추가
def _makeCppMethodFromRestriction(pbRestriction, cppClass):
    if pbRestriction.base.kind == PB.Base.BuiltIn:
        if (pbRestriction.base.built_in == PB.BuiltIn.string) and (len(pbRestriction.enumeration) > 0): # enum으로 되어 있는 경우 처리
            _setCppClassFromSTRestrictionEnum(pbRestriction.enumeration, cppClass)
        else: # enum이 아닌 일반 restriction 처리
            cppVarName = getBaseNameStr(pbRestriction.base.built_in)
            cppVarType = cppVarName
            _setCppClassByOne(cppVarName, cppVarType, cppClass)

    elif pbRestriction.base.kind == PB.Base.SimpleTypeName:
        _setCppClassFromSTNameRestriction(pbRestriction.base.simple_type_name, cppClass)
    elif pbRestriction.base.kind == PB.Base.ComplexTypeName:
        _setCppClassFromCTNameRestriction(pbRestriction.base.complex_type_name, cppClass)

def _setCppClassFromCTNameRestriction(pbCTName, cppClass):
    assert(False) # TODO - 아직은 여기로 오지 않아서 처리하지 않음

# restriction - SimpleType name이 base인 경우 처리
def _setCppClassFromSTNameRestriction(pbSTName, cppClass):
    argument = cppClass.construction.argument.add()
    argument.type = '%s&' % _getCppVarType(pbSTName)
    argument.name = '_%s' % _getCppVarName(pbSTName)
    argument.const = True

    cppClass.parent_class.remove('XSD::SimpleType')
    cppClass.parent_class.append(_getCppVarName(pbSTName))

# cpp 변수 타입 가져오기
def _getCppVarType(pbSTName):
    cppVarName = pbSTName
    if ':' in cppVarName:
        ns, name = cppVarName.split(':')
        cppVarName = 'ns_%s::%s' % (ns, name)

    return cppVarName

def _getCppVarTypeFromElem(pbElem):
    if pbElem.type.kind == PB.Element.Type.BuiltIn:
        return _getBuiltInStr(pbElem.type.built_in)
    elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
        return pbElem.type.simple_type_name
    elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
        return pbElem.type.complex_type_name
    elif pbElem.type.kind == PB.Element.Type.SimpleType:
        return pbElem.type.simple_type.name
    elif pbElem.type.kind == PB.Element.Type.ComplexType:
        return pbElem.type.complex_type.name
    elif pbElem.type.kind == PB.Element.Type.Any:
        return _getCppVarType('%s:Element*' % pbElem.ns_prefix)

# cpp 변수명 가져오기
def _getCppVarName(pbSTName):
    cppVarName = pbSTName
    if ':' in cppVarName:
        ns, name = cppVarName.split(':')
        return name

    return cppVarName

def _getBuiltInStr(builtType):
    return PB.BuiltIn.DESCRIPTOR.enum_types_by_name['Type'].values_by_number[builtType].name

# restriction - enum 관련 메소드와 멤버 변수 추가
def _setCppClassFromSTRestrictionEnum(pbEnums, cppClass):
    _makeCppEnum(pbEnums, cppClass.enum_)

    cppVarType = 'Type'
    cppVarName = 'type'
    _setCppClassByOne(cppVarType, cppVarName, cppClass)

    argument = cppClass.construction.argument.add()
    argument.type = 'Type&'
    argument.name = '_type'
    argument.const = True

def getBaseNameStr(pbBuiltIn):
    return PB.BuiltIn.DESCRIPTOR.enum_types_by_name['Type'].values_by_number[pbBuiltIn].name

# enum 타입 추가
def _makeCppEnum(pbEnumList, cppEnum):
    cppEnum.name = 'Type'
    for enumValue in pbEnumList:
        cppEnum.value.append('_%s_' % enumValue)

# 파일명 가져오기
def _getCppFileName(xsdFileName):
    return '%s' % xsdFileName.replace('.', '_')

# include 파일명 가져오기
def _getCppIncludeFileName(xsdFileName):
    fileName = _getCppFileName(xsdFileName)
    if fileName == '': fileName = 'xml.h'
    else: fileName = '%s.h' % fileName
    return fileName