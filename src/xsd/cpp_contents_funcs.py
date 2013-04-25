# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_pb2 as PB
import cpp_pb2 as CPB

SEQUENCE = 0
CHOICE = 1

def getBuiltInStr(pbBuiltIn):
    return PB.BuiltIn.DESCRIPTOR.enum_types_by_name['Type'].values_by_number[pbBuiltIn].name


def _isStringBuiltInType(pbBuiltIn):
    return ((0 <= pbBuiltIn) and (pbBuiltIn <= 22)) or (pbBuiltIn in [37, 38, 42, 43])


def _isIntBuiltInType(pbBuiltIn):
    return ((23 <= pbBuiltIn) and (pbBuiltIn <= 36)) or (pbBuiltIn in [40, 41])


def _isBooleanBuiltInType(pbBuiltIn):
    return pbBuiltIn == PB.BuiltIn.boolean


def makeDefaultInstanceMethod(cppClass):
    method = cppClass.method.add()
    method.return_type = 'const %s&' % cppClass.name
    method.name = 'default_instance'
    method.static = True
    method.body = \
"""
if (!%(typeName)s::default_instance_)
{
    %(typeName)s::default_instance_ = new %(typeName)s();
}
return *%(typeName)s::default_instance_;
""" % {'typeName': cppClass.name}


def makeDefaultInstanceMember(cppClass):
    member = cppClass.member_var.add()
    member.access_qf = CPB.AccessQualified.private
    member.type = '%s*' % cppClass.name
    member.name = 'default_instance_'
    member.static = True


def makeClearMethod(methodBody, cppClass):
    method = cppClass.method.add()
    method.return_type = 'void'
    method.name = 'clear'
    method.body = methodBody


def makeToXmlAttrMethod(methodBody, cppClass):
    method = cppClass.method.add()
    method.return_type = 'void'
    method.name = 'toXmlAttr'
    method.const = True
    methodArg1 = method.argument.add()
    methodArg1.type = 'std::string&'
    methodArg1.name = '_attrName'
    methodArg1.const = True
    methodArg2 = method.argument.add()
    methodArg2.type = 'std::ostream&'
    methodArg2.name = '_outStream'
    method.body = methodBody


def makeToXmlElemMethod(methodBody, cppClass):
    method = cppClass.method.add()
    method.return_type = 'void'
    method.name = 'toXmlElem'
    method.const = True

    methodArg1 = method.argument.add()
    methodArg1.type = 'std::string&'
    methodArg1.name = '_elemName'
    methodArg1.const = True

    methodArg2 = method.argument.add()
    methodArg2.type = 'std::string&'
    methodArg2.name = '_xmlNsStr'
    methodArg2.const = True

    methodArg3 = method.argument.add()
    methodArg3.type = 'std::ostream&'
    methodArg3.name = '_outStream'
    method.body = methodBody


def makeToXmlMethod(methodBody, cppClass):
    method = cppClass.method.add()
    method.return_type = 'void'
    method.name = 'toXml'
    method.const = True

    methodArg1 = method.argument.add()
    methodArg1.type = 'std::ostream&'
    methodArg1.name = '_outStream'
    method.body = methodBody


def _getInitValueFromBuiltIn(pbBuiltIn):
    if _isStringBuiltInType(pbBuiltIn):
        return '""'
    elif _isIntBuiltInType(pbBuiltIn):
        return '0'
    elif _isBooleanBuiltInType(pbBuiltIn):
        return 'false'
    else:
        assert(False)
        return ''


def _makeClearMethodStrFromBuiltIn(varName, pbBuiltIn):
    if _isStringBuiltInType(pbBuiltIn):
        return '%s.clear();' % varName
    elif _isIntBuiltInType(pbBuiltIn):
        return '%s = 0;' % varName
    elif _isBooleanBuiltInType(pbBuiltIn):
        return '%s = false;' % varName
    else:
        print varName
        assert(False)
        return ''


def _makeClearMethodStrFromSTOrCT(varName):
    return \
"""
if (%(var)s)
{
    delete %(var)s;
    %(var)s = NULL;
}
""" % {'var':varName}


# cpp 변수 타입 가져오기
def _getCppVarType(pbSTName):
    cppVarName = pbSTName
    if ':' in cppVarName:
        ns, name = cppVarName.split(':')
        cppVarName = 'ns_%s::%s' % (ns, name)

    return cppVarName


# cpp 변수명 가져오기
def _getCppVarName(pbSTName):
    cppVarName = pbSTName
    if ':' in cppVarName:
        ns, name = cppVarName.split(':')
        return name

    return cppVarName


def _getNsPrefix(name):
    nsPrefix = ''
    if ':' in name:
        nsPrefix, n = name.split(':')
    return nsPrefix


def findFileXmlNs(pbSchema, xsdNsPrefix):
    xmlNsPrefixList = [xmlNs.prefix for pbNs in pbSchema.namespace for xmlNs in pbSchema.xml_namespace if pbNs.prefix == xsdNsPrefix and pbNs.uri == xmlNs.uri]
    if len(xmlNsPrefixList) > 0:
        return xmlNsPrefixList[0]
    return None


def getXmlElementName(pbSchema, pbElem):
    if pbSchema.element_form_default == PB.Form.qualified:
        fileNsPrefix = findFileXmlNs(pbSchema, _getCppNsPrefixFromElem(pbElem))  # TODO
        if fileNsPrefix:
            return '%s:%s' % (fileNsPrefix, pbElem.name)
        else:
            return pbElem.name
    else:
        return pbElem.name


def getXmlAttributeName(pbSchema, pbAttr):
    if pbSchema.attribute_form_default == PB.Form.qualified:
        fileNsPrefix = findFileXmlNs(pbSchema, _getCppNsPrefixFromAttr(pbAttr))  # TODO
        if fileNsPrefix:
            return '%s:%s' % (fileNsPrefix, pbAttr.name)
        else:
            return pbAttr.name
    else:
        return pbAttr.name


def _makeCppEnum(pbEnumList, cppEnum):
    cppEnum.name = 'Type'
    for enumValue in pbEnumList:
        cppEnum.value.append('_%s_' % enumValue.replace('-', '_').replace(',','_').replace('+','plus').replace(' ', '_'))


def _makeCppEnumStr(pbEnumList, typeStrMember):
    for enumValue in pbEnumList:
        typeStrMember.string_list.append(enumValue)


def _getVarNameToXmlFromBuiltIn(cppVarType, attrName):
    if cppVarType == 'boolean':
        return 'XSD::XMLBooleanStr(m_%s_attr)' % attrName
    else:
        return 'm_%s_attr' % attrName


def _makeToXmlMethodBodyFromAttrBuiltInWithAttrName(pbShema, cppVarType, pbAttr):
        return \
"""
if (%(hasVarName)s)
{
    _outStream << " " << "%(attrName)s" << "=\\\\"" << %(varName)s << "\\\\"";
}
""" % {
        'hasVarName': 'm_has_%s_attr' % _getCppVarNameFromAttr(pbAttr),
        'varName' : _getVarNameToXmlFromBuiltIn(cppVarType, pbAttr.name),
        'attrName' : getXmlAttributeName(pbShema, pbAttr)
        }

def _makeToXmlMethodBodyFromAttrBuiltIn(cppVarType, varName):
    if cppVarType == 'boolean':
        return '_outStream << " " << _attrName << "=\\\\"" << XSD::XMLBooleanStr(%s) << "\\\\"";' % varName
    else:
        return '_outStream << " " << _attrName << "=\\\\"" << %s << "\\\\"";' % varName


def _makeToStringUnionFromAttrBuiltIn(cppVarType, varName):
    if cppVarType == 'boolean':
        return 'return XSD::XMLBooleanStr(%s);' % varName
    else:
        return \
"""
std::stringstream strStream;
strStream << %s;
return strStream.str();
""" % varName


def _makeToXmlMethodBodyFromAttrEnum(className, enumTypeName, cppVarName):
    return '_outStream << " " << _attrName << "=\\\\"" << %s::%s[%s] << "\\\\"";' % (className, enumTypeName, cppVarName)


def _makeToXmlMethodBodyFromAttrSTName(pbSchema, pbAttr):
    return \
"""
if (%(hasVarName)s)
{
    %(varName)s->toXmlAttr("%(attrName)s", _outStream);
}
""" % {
        'hasVarName' : 'm_has_%s_attr' % _getCppVarNameFromAttr(pbAttr),
        'varName': 'm_%s_attr' % _getCppVarNameFromAttr(pbAttr),
        'attrName': getXmlAttributeName(pbSchema, pbAttr)
    }


def _makeToXmlMethodBodyFromUnion(varName):
    return '%(varName)s->toXmlAttr(_attrName, _outStream);' % {'varName':varName}


def _makeToStringUnionFromAttrST(varName):
    return 'return %(varName)s->toString();' % {'varName':varName}


def _makeToXmlMethodBodyFromElemBuiltIn(pbSchema, pbElem):
    return '_outStream << "<%(elemName)s>" << %(varName)s << "</%(elemName)s>";' % {
        'elemName':getXmlElementName(pbSchema, pbElem),
        'varName': 'm_%s' % _getCppVarNameFromElem(pbElem)
    }


def _makeToXmlMethodBodyFromElemSTName(pbSchema, pbElem):
    return '_outStream << "<%(elemName)s>" << %(varName)s->toString() << "</%(elemName)s>";' % {
        'elemName':getXmlElementName(pbSchema, pbElem),
        'varName': 'm_%s' % _getCppVarNameFromElem(pbElem)
    }


def _makeToXmlMethodBodyFromElemCTName(pbSchema, pbElem):
    return '%(varName)s->toXmlElem("%(elemName)s", "", _outStream);' % {
        'elemName': getXmlElementName(pbSchema, pbElem),
        'varName': 'm_%s' % _getCppVarNameFromElem(pbElem)
    }


def _makeToXmlMethodBodyFromElemAny(pbSchema, pbElem):
    return \
"""
%s->toXml(_outStream);
""" % 'm_%s' % _getCppVarNameFromElem(pbElem)


def _getCppNsPrefix(pbTypeName):
    cppNsPrefix = pbTypeName
    if ':' in cppNsPrefix:
        ns, name = cppNsPrefix.split(':')
        cppNsPrefix = ns

    return cppNsPrefix


# Element로 부터 cpp namespace 가져오기
def _getCppNsPrefixFromElem(pbElem):
    if pbElem.type.kind == PB.Element.Type.BuiltIn:
        return ''
    elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
        return _getCppNsPrefix(pbElem.type.simple_type_name)
    elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
        return _getCppNsPrefix(pbElem.type.complex_type_name)
    elif pbElem.type.kind == PB.Element.Type.SimpleType:
        return _getCppNsPrefix(pbElem.type.simple_type.name)
    elif pbElem.type.kind == PB.Element.Type.ComplexType:
        return _getCppNsPrefix(pbElem.type.complex_type.name)
    elif pbElem.type.kind == PB.Element.Type.Any:
        if pbElem.type.any.ns_prefix:
            return pbElem.type.any.ns_prefix
        else:
            return ''


# Element로 부터 cpp var type 가져오기
def _getCppVarTypeFromElem(pbElem):
    if pbElem.type.kind == PB.Element.Type.BuiltIn:
        return 'XSD::%s_' % getBuiltInStr(pbElem.type.built_in)
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
            return 'XSD::Element'


# Element로 부터 cpp var type 가져오기
def _getCppVarNameFromElem(pbElem):
    pbTypeName = None

    if pbElem.type.kind == PB.Element.Type.BuiltIn:
        pbTypeName = getBuiltInStr(pbElem.type.built_in)
    elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
        pbTypeName = pbElem.type.simple_type_name
    elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
        pbTypeName = pbElem.type.complex_type_name
    elif pbElem.type.kind == PB.Element.Type.SimpleType:
        pbTypeName = pbElem.type.simple_type.name
    elif pbElem.type.kind == PB.Element.Type.ComplexType:
        pbTypeName = pbElem.type.complex_type.name
    elif pbElem.type.kind == PB.Element.Type.Any:
        if pbElem.type.any.ns_prefix:
            pbTypeName = '%s:Element' % pbElem.type.any.ns_prefix
        else:
            pbTypeName = 'Element'

    if pbTypeName:
        if ':' in pbTypeName:
            return '%s_%s' % (pbTypeName.split(':')[0], _getCppVarName(pbElem.name))
        else:
            return _getCppVarName(pbElem.name)

    assert(False)
    print pbElem.name
    return _getCppVarName(pbElem.name)


def _getCppNsPrefixFromAttr(pbAttr):
    pbTypeName = None

    if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
        return ''
    elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
        pbTypeName = pbAttr.type.simple_type_name
    elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
        pbTypeName = pbAttr.type.simple_type.name
    elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
        pbTypeName = pbAttr.type.nay_attribute.namespace

    if pbTypeName:
        if ':' in pbTypeName:
            return pbTypeName.split(':')[0]
        else:
            return ''

    print pbAttr.name
    assert(False)
    return ''


# Element로 부터 cpp var type 가져오기
def _getCppVarNameFromAttr(pbAttr):
    pbTypeName = None

    if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
        pbTypeName = getBuiltInStr(pbAttr.type.built_in)
    elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
        pbTypeName = pbAttr.type.simple_type_name
    elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
        pbTypeName = pbAttr.type.simple_type.name
    elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
        pbTypeName = 'any_%s_attr' % pbAttr.type.nay_attribute.namespace

    if pbTypeName:
        if ':' in pbTypeName:
            return '%s_%s' % (pbTypeName.split(':')[0], _getCppVarName(pbAttr.name))
        else:
            return _getCppVarName(pbAttr.name)

    assert(False)
    print pbAttr.name
    return _getCppVarName(pbAttr.name)


def _makeRestrictionSetMethodCode(pbRestriction, argName):
    codeList = []
    if pbRestriction.HasField('min_exclusive'):
        codeList.append('assert(%(rest)s < %(arg)s);' % {'rest':pbRestriction.min_exclusive, 'arg':argName})

    if pbRestriction.HasField('min_inclusive'):
        codeList.append('assert(%(rest)s <= %(arg)s);' % {'rest':pbRestriction.min_inclusive, 'arg':argName})

    if pbRestriction.HasField('max_exclusive'):
        codeList.append('assert(%(arg)s < %(rest)s);' % {'rest':pbRestriction.max_exclusive, 'arg':argName})

    if pbRestriction.HasField('max_inclusive'):
        codeList.append('assert(%(arg)s <= %(rest)s);' % {'rest':pbRestriction.max_inclusive, 'arg':argName})

    if pbRestriction.HasField('total_digits'):
        assert(False) # TODO - 아직 office 관련 xsd에는 속성이 지정지 않아 처리하지 않음

    if pbRestriction.HasField('fraction_digits'):
        assert(False) # TODO - 아직 office 관련 xsd에는 속성이 지정지 않아 처리하지 않음

    if pbRestriction.HasField('length'):
        codeList.append('assert(%(arg)s.size() == %(rest)s);' % {'rest':pbRestriction.length, 'arg':argName})

    if pbRestriction.HasField('min_length'):
        codeList.append('assert(%(rest)s <= %(arg)s.size());' % {'rest':pbRestriction.min_length, 'arg':argName})

    if pbRestriction.HasField('max_length'):
        codeList.append('assert(%(arg)s.size() <= %(rest)s);' % {'rest':pbRestriction.max_length, 'arg':argName})

    if pbRestriction.HasField('white_space'):
        assert(False) # TODO - 아직 office 관련 xsd에는 속성이 지정지 않아 처리하지 않음

    if pbRestriction.HasField('pattern'):
        pass # TODO - 구현예정

    if len(codeList) > 0:
        return '\n'.join(codeList)
    else:
        return ''


def simpleType_restriction_enum(pbRestriction, cppClass):
    pbEnumList = pbRestriction.enumeration

    cppVarName = 'type'
    cppVarType = '%s::Type' % cppClass.name

    hasVarName = 'm_has_%s' % cppVarName
    varName = 'm_%s' % cppVarName

    _makeCppEnum(pbEnumList, cppClass.enum_)

    typeStrMember = cppClass.member_var.add()
    typeStrMember.access_qf = CPB.AccessQualified.private
    typeStrMember.type = 'std::string'
    typeStrMember.name = 'TypeStrList'
    typeStrMember.const = True
    typeStrMember.static = True
    typeStrMember.array = True
    _makeCppEnumStr(pbEnumList, typeStrMember)

    const1 = cppClass.constructor.add()
    constInit1 = const1.const_init.add()
    constInit1.name = hasVarName
    constInit1.value = 'false'

    const2 = cppClass.constructor.add()
    const2Arg1 = const2.argument.add()
    const2Arg1.type = '%s&' % cppVarType
    const2Arg1.name = '_%s' % cppVarName
    const2Arg1.const = True
    const2Init1 = const2.const_init.add()
    const2Init1.name = hasVarName
    const2Init1.value = 'true'
    const2Init2 = const2.const_init.add()
    const2Init2.name = varName
    const2Init2.value = const2Arg1.name

    method1 = cppClass.method.add()
    method1.return_type = 'bool'
    method1.name = 'has_%s' % cppVarName
    method1.const = True
    method1.body = \
"""
return %s;
""" % hasVarName

    method2 = cppClass.method.add()
    method2.return_type = 'void'
    method2.name = 'set_%s' % cppVarName
    method2_var1 =  method2.argument.add()
    method2_var1.type = '%s&' % cppVarType
    method2_var1.name = '_%s' % cppVarName
    method2_var1.const = True
    method2.body = \
"""
%s = true;
%s = %s;
""" % (hasVarName, varName, method2_var1.name)

    method3 = cppClass.method.add()
    method3.return_type = 'const %s&' % cppVarType
    method3.name = 'get_%s' % cppVarName
    method3.const = True
    method3.body = \
        """
            return %s;
        """ % varName

    toStringMethod = cppClass.method.add()
    toStringMethod.return_type = 'std::string'
    toStringMethod.name = 'toString'
    toStringMethod.const = True
    toStringMethod.body = \
"""
return %s::%s[%s];
""" % (cppClass.name, typeStrMember.name, varName)

    clearMethodBody = \
"""
%s = false;
""" % hasVarName
    makeClearMethod(clearMethodBody, cppClass)

    toXmlMethodBody = \
"""
if (%s)
{
_outStream << _attrName << "=\\\\"" << %s() << "\\\\"";
}
""" % (hasVarName, toStringMethod.name)
    makeToXmlAttrMethod(toXmlMethodBody, cppClass)

    makeDefaultInstanceMethod(cppClass)
    makeDefaultInstanceMember(cppClass)

    memberVar1 = cppClass.member_var.add()
    memberVar1.type = 'bool'
    memberVar1.name = hasVarName

    memberVar2 = cppClass.member_var.add()
    memberVar2.type = '%s' % cppVarType
    memberVar2.name = varName

def simpleType_restriction_builtIn(pbRestriction, cppClass):
    pbBuiltIn = pbRestriction.base.built_in

    cppVarName = getBuiltInStr(pbBuiltIn)
    cppVarType = 'XSD::%s_' % cppVarName

    hasVarName = 'm_has_%s' % cppVarName
    varName = 'm_%s' % cppVarName

    const1 = cppClass.constructor.add()
    constInit1 = const1.const_init.add()
    constInit1.name = hasVarName
    constInit1.value = 'false'
    constInit2 = const1.const_init.add()
    constInit2.name = varName
    constInit2.value = _getInitValueFromBuiltIn(pbBuiltIn)

    const2 = cppClass.constructor.add()
    const2Arg1 = const2.argument.add()
    const2Arg1.type = '%s&' % cppVarType
    const2Arg1.name = '_%s' % cppVarName
    const2Arg1.const = True
    const2Init1 = const2.const_init.add()
    const2Init1.name = hasVarName
    const2Init1.value = 'true'
    # const2Init2 = const2.const_init.add()
    # const2Init2.name = varName
    # const2Init2.value = const2Arg1.name
    const2.body = \
"""
%(setMethodName)s(%(varName)s);
""" % {'setMethodName':'set_%s' % cppVarName, 'varName':varName}

    method1 = cppClass.method.add()
    method1.return_type = 'bool'
    method1.name = 'has_%s' % cppVarName
    method1.const = True
    method1.body = \
"""
return %s;
""" % hasVarName

    method2 = cppClass.method.add()
    method2.return_type = 'void'
    method2.name = 'set_%s' % cppVarName
    method2_var1 =  method2.argument.add()
    method2_var1.type = '%s&' % cppVarType
    method2_var1.name = '_%s' % cppVarName
    method2_var1.const = True
    method2.body = ''

    restSetMethodCode = _makeRestrictionSetMethodCode(pbRestriction, method2_var1.name)
    if restSetMethodCode != '':
        method2.body += restSetMethodCode + '\n'

    method2.body += \
"""
%s = true;
%s = %s;
""" % (hasVarName, varName, method2_var1.name)

    getMethod = cppClass.method.add()
    getMethod.return_type = 'const %s&' % cppVarType
    getMethod.name = 'get_%s' % cppVarName
    getMethod.const = True
    getMethod.body = \
"""
return %s;
""" % varName

    clearMethodBody = \
"""
%s = false;
%s;
""" % (hasVarName, _makeClearMethodStrFromBuiltIn(varName, pbBuiltIn))
    makeClearMethod(clearMethodBody, cppClass)

    toXmlMethodBody = \
"""
if (%s)
{
    %s;
}
""" % (hasVarName, _makeToXmlMethodBodyFromAttrBuiltIn(cppVarType, varName))
    makeToXmlAttrMethod(toXmlMethodBody, cppClass)

    makeDefaultInstanceMethod(cppClass)
    makeDefaultInstanceMember(cppClass)

    memberVar1 = cppClass.member_var.add()
    memberVar1.type = 'bool'
    memberVar1.name = hasVarName

    memberVar2 = cppClass.member_var.add()
    memberVar2.type = '%s' % cppVarType
    memberVar2.name = varName

    toStringMethod = cppClass.method.add()
    toStringMethod.return_type = 'std::string'
    toStringMethod.name = 'toString'
    toStringMethod.const = True
    toStringMethod.body = \
"""
std::stringstream strStream;
strStream << %s();
return strStream.str();
""" % getMethod.name

def simpleType_restriction_simpleTypeName(pbRestriction, cppClass):
    pbSTName = pbRestriction.base.simple_type_name

    cppClass.constructor.add()

    argument = cppClass.constructor.add().argument.add()
    argument.type = '%s&' % _getCppVarType(pbSTName)
    argument.name = '_%s' % _getCppVarName(pbSTName)
    argument.const = True

    cppClass.parent_class.remove('XSD::SimpleType')
    cppClass.parent_class.append(_getCppVarType(pbSTName))

    makeDefaultInstanceMember(cppClass)
    makeDefaultInstanceMethod(cppClass)

def simpleType_restriction_complexTypeName(pbRestriction, cppClass):
    pass #TODO - 아직은 여기로 오지 않아서 처리하지 않음

def simpleType_union(pbSchema, pbUnion, cppClass):
    pbUnionMemberNames = _getUnionMemberNames(pbUnion.member_type)

    toXmlMethodBodyList = []
    toStringBodyList = []
    for pbMemberType in pbUnion.member_type:
        if pbMemberType.kind == PB.Union.MemberType.BuiltIn:
            simpleType_union_builtIn(pbMemberType.built_in, pbUnionMemberNames, cppClass)
            cppVarType = getBuiltInStr(pbMemberType.built_in)
            varName = 'm_%s' % cppVarType
            hasVarName = 'm_has_%s' % cppVarType
            toXmlMethodBodyList.append((hasVarName, _makeToXmlMethodBodyFromAttrBuiltIn(cppVarType, varName)))
            toStringBodyList.append((hasVarName, _makeToStringUnionFromAttrBuiltIn(cppVarType, varName)))
        elif pbMemberType.kind == PB.Union.MemberType.SimpleTypeName:
            simpleType_union_simpleTypeName(pbMemberType.simple_type_name, pbUnionMemberNames, cppClass)
            varName = 'm_%s' % _getCppVarName(pbMemberType.simple_type_name)
            hasVarName = 'm_has_%s' % _getCppVarName(pbMemberType.simple_type_name)
            toXmlMethodBodyList.append((hasVarName, _makeToXmlMethodBodyFromUnion(varName)))
            toStringBodyList.append((hasVarName, _makeToStringUnionFromAttrST(varName)))
        else:
            assert(False)


    # UNION - toString method
    toStringMethod = cppClass.method.add()
    toStringMethod.return_type = 'std::string'
    toStringMethod.name = 'toString'
    toStringMethod.const = True
    toStringMethod.body = ''
    for toStrBody in toStringBodyList:
        toStringMethod.body += \
"""
if (%s)
{
    %s
}
""" % (toStrBody[0], toStrBody[1])

    toStringMethod.body += \
"""
return string();
"""

    clearMethodBody = _clearFuncStrs(pbUnionMemberNames, '')
    makeClearMethod(clearMethodBody, cppClass)

    toXmlMethodBody = ""
    for mBody in toXmlMethodBodyList:
        toXmlMethodBody += \
"""
if (%s)
{
    %s
    return;
}\n""" % (mBody[0], mBody[1])
    makeToXmlAttrMethod(toXmlMethodBody, cppClass)

    makeDefaultInstanceMethod(cppClass)
    makeDefaultInstanceMember(cppClass)

def _clearFuncStrs(pbUnionMemberNames, cppVarName):
    clearFuncList = ['clear_%s();' % name for name in pbUnionMemberNames if name != cppVarName]
    return '\n'.join(clearFuncList)

def simpleType_union_builtIn(pbBuiltIn, pbUnionMemberNames, cppClass):
    cppVarName = getBuiltInStr(pbBuiltIn)
    cppVarType = 'XSD::%s_' % cppVarName

    hasVarName = 'm_has_%s' % cppVarName
    varName = 'm_%s' % cppVarName

    method1 = cppClass.method.add()
    method1.return_type = 'bool'
    method1.name = 'has_%s' % cppVarName
    method1.const = True
    method1.body = \
"""
return %s;
""" % hasVarName

    method2 = cppClass.method.add()
    method2.return_type = 'void'
    method2.name = 'set_%s' % cppVarName
    method2_var1 = method2.argument.add()
    method2_var1.type = '%s&' % cppVarType
    method2_var1.name = '_%s' % cppVarName
    method2_var1.const = True
    method2.body = \
"""
%(clear_funcs)s
%(has_var)s = true;
%(var)s = %(arg)s;
""" % {
    'clear_funcs':_clearFuncStrs(pbUnionMemberNames, cppVarName),
    'has_var':hasVarName,
    'var':varName,
    'arg':method2_var1.name
    }

    method3 = cppClass.method.add()
    method3.return_type = 'const %s&' % cppVarType
    method3.name = 'get_%s' % cppVarName
    method3.const = True
    method3.body = \
"""
return %s;
""" % varName

    method4 = cppClass.method.add()
    method4.access_qf = CPB.AccessQualified.private
    method4.return_type = 'void'
    method4.name = 'clear_%s' % cppVarName
    method4.body = \
"""
%s = false;
%s = %s;
""" % (hasVarName, varName, _getInitValueFromBuiltIn(pbBuiltIn))

    memberVar1 = cppClass.member_var.add()
    memberVar1.type = 'bool'
    memberVar1.name = hasVarName

    memberVar2 = cppClass.member_var.add()
    memberVar2.type = '%s' % cppVarType
    memberVar2.name = varName

def simpleType_union_simpleTypeName(pbSimpleTypeName, pbUnionMemberNames, cppClass):
    cppVarName = _getCppVarName(pbSimpleTypeName)
    cppVarType = _getCppVarType(pbSimpleTypeName)

    hasVarName = 'm_has_%s' % cppVarName
    varName = 'm_%s' % cppVarName

    method1 = cppClass.method.add()
    method1.return_type = 'bool'
    method1.name = 'has_%s' % cppVarName
    method1.const = True
    method1.body = \
"""
return %s;
""" % hasVarName

    method2 = cppClass.method.add()
    method2.return_type = '%s*' % cppVarType
    method2.name = 'mutable_%s' % cppVarName
    method2.body = \
"""
%(clear_funcs)s
%(has_var)s = true;
if (!%(var)s)
{
    %(var)s = new %(cpp_type)s();
}
return %(var)s;
""" % {
    'clear_funcs':_clearFuncStrs(pbUnionMemberNames, cppVarName),
    'has_var':hasVarName,
    'var':varName,
    'cpp_type':cppVarType
    }

    method3 = cppClass.method.add()
    method3.return_type = 'const %s&' % cppVarType
    method3.name = 'get_%s' % cppVarName
    method3.const = True
    method3.body = \
"""
if (%(var)s)
{
    return *%(var)s;
}
return %(cpp_type)s::default_instance();
""" % {'var':varName, 'cpp_type':cppVarType}

    method4 = cppClass.method.add()
    method4.access_qf = CPB.AccessQualified.private
    method4.return_type = 'void'
    method4.name = 'clear_%s' % cppVarName
    method4.body = \
"""
%(has_var)s = false;
if (%(var)s)
{
    delete %(var)s;
    %(var)s = NULL;
}
""" % {'has_var':hasVarName, 'var':varName}

    memberVar1 = cppClass.member_var.add()
    memberVar1.type = 'bool'
    memberVar1.name = hasVarName

    memberVar2 = cppClass.member_var.add()
    memberVar2.type = '%s*' % cppVarType
    memberVar2.name = varName


def _getUnionMemberNames(pbUnionMemberTypes):
    pbUnionMemberName = []
    for pbMemberType in pbUnionMemberTypes:
        if pbMemberType.kind == PB.Union.MemberType.BuiltIn:
            pbUnionMemberName.append(_getCppVarName(getBuiltInStr(pbMemberType.built_in)))
        elif pbMemberType.kind == PB.Union.MemberType.SimpleTypeName:
            pbUnionMemberName.append(_getCppVarName(pbMemberType.simple_type_name))
    return pbUnionMemberName

def _getClearMethodBodyStrFromElemList(pbElemList):
    mBodyList = _getClearMethodBodyListFromElemList(pbElemList)
    clearMethodBody = ""
    for mBody in mBodyList:
        clearMethodBody += \
"""
%s = false;
%s
""" % (mBody[0], mBody[1])
    return clearMethodBody

def _getClearMethodBodyListFromElemList(pbElemList):
    clearMethodBodyList = []

    for pbElem in pbElemList:
        hasVarName = 'm_has_%s' % _getCppVarNameFromElem(pbElem)
        varName = 'm_%s' % _getCppVarNameFromElem(pbElem)
        if pbElem.type.kind == PB.Element.Type.BuiltIn:
            clearMethodBodyList.append((hasVarName, _makeClearMethodStrFromBuiltIn(varName, pbElem.type.built_in)))

        elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
            clearMethodBodyList.append((hasVarName, _makeClearMethodStrFromSTOrCT(varName)))

        elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
            clearMethodBodyList.append((hasVarName, _makeClearMethodStrFromSTOrCT(varName)))

        elif pbElem.type.kind == PB.Element.Type.SimpleType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.ComplexType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.Any:
            pass # TODO

    return clearMethodBodyList

def _getClearMethodBodyStrFromAttrList(pbAttrList):
    mBodyList = _getClearMethodBodyListFromAttrList(pbAttrList)
    clearMethodBody = ""
    for mBody in mBodyList:
        clearMethodBody += \
"""
%s = false;
%s
""" % (mBody[0], mBody[1])
    return clearMethodBody

def _getClearMethodBodyListFromAttrList(pbAttrList):
    clearMethodBodyList = []

    for pbAttr in pbAttrList:
        hasVarName = 'm_has_%s_attr' % _getCppVarNameFromAttr(pbAttr)
        varName = 'm_%s_attr' % _getCppVarNameFromAttr(pbAttr)
        if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
            clearMethodBodyList.append((hasVarName, _makeClearMethodStrFromBuiltIn(varName, pbAttr.type.built_in)))
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
            clearMethodBodyList.append((hasVarName, _makeClearMethodStrFromSTOrCT(varName)))
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
            clearMethodBodyList.append((hasVarName, _makeClearMethodStrFromSTOrCT(varName)))
        elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
            pass # TODO
            # CPP_FUNC.complexType_attr_anyAttribute(pbAttr.type.any, cppClass)

    return clearMethodBodyList

def _getClearMethodBodyStrFromRepeated(idx):
    vector_type = 'vector<ChildGroup_%d*>' % idx
    vector_name = 'm_childGroupList_%d' % idx

    clearMethodBody = \
"""
{
    %(vector_type)s::iterator iter;
    for (iter = %(vector_name)s.begin(); iter != %(vector_name)s.end(); ++iter)
    {
        delete *iter;
    }
    %(vector_name)s.clear();
}
""" % {'vector_type':vector_type, 'vector_name':vector_name}

    return clearMethodBody

def _toClearMethodBodyStr(clearMethodBodyList):
    clearMethodBodyStr = ""
    for mBody in clearMethodBodyList:
        clearMethodBodyStr += \
"""
%s = false;
%s;
""" % (mBody[0], mBody[1])
    return clearMethodBodyStr

def _getToXmlMethodBodyList(pbSchema, pbElemList, makeToXmlMethodBodyFunc=None):
    toXmlMethodBodyList = []

    innerMethodBodyFunc = makeToXmlMethodBodyFunc

    for pbElem in pbElemList:
        if makeToXmlMethodBodyFunc is None:
            if pbElem.type.kind == PB.Element.Type.BuiltIn:
                innerMethodBodyFunc = _makeToXmlMethodBodyFromElemBuiltIn
            elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
                innerMethodBodyFunc = _makeToXmlMethodBodyFromElemSTName
            elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
                innerMethodBodyFunc = _makeToXmlMethodBodyFromElemCTName
            elif pbElem.type.kind == PB.Element.Type.SimpleType:
                innerMethodBodyFunc = None # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
            elif pbElem.type.kind == PB.Element.Type.ComplexType:
                innerMethodBodyFunc = None # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
            elif pbElem.type.kind == PB.Element.Type.Any:
                innerMethodBodyFunc = _makeToXmlMethodBodyFromElemAny
                # _setCppClassFromAny(pbElem, cppClass)
            else:
                innerMethodBodyFunc = None

        if innerMethodBodyFunc is not None:
            toXmlMethodBodyList.append((pbElem, innerMethodBodyFunc(pbSchema, pbElem)))

    return toXmlMethodBodyList

def _getToXmlMethodBodyStr(pbSchema, pbElemList):
    toXmlMethodBody = ""

    mBodyList = _getToXmlMethodBodyList(pbSchema, pbElemList)
    for mBody in mBodyList:
        toXmlMethodBody += \
"""
if (%s)
{
    %s;
}
""" % ('m_has_%s' % _getCppVarNameFromElem(mBody[0]), mBody[1])
    return toXmlMethodBody

def _getToXmlMethodBodyStrFromRepeated(pbSchema, pbElemList, idx):

    anyElemList = filter(lambda pbElem:pbElem.type.kind == PB.Element.Type.Any, pbElemList)
    if len(anyElemList) == len(pbElemList):
        for pbElem in pbElemList:
            toXmlMethodBody = \
"""
{
    vector<%(type)s*>::const_iterator iter;
    for (iter = %(list_name)s.begin(); iter != %(list_name)s.end(); ++iter)
    {
        (*iter)->toXml(_outStream);
    }
}
""" % {
    'type': _getCppVarTypeFromElem(pbElem),
    'list_name': 'm_%s_list' % _getCppVarNameFromElem(pbElem)
    }
        return toXmlMethodBody


    childGroupType = 'ChildGroup_%d' % idx
    vector_type = 'vector<%s*>' % childGroupType
    vector_name = 'm_childGroupList_%d' % idx

    def makeToXmlMethodBodyFunc(pbSchema, pbElem):
        if pbElem.type.kind == PB.Element.Type.BuiltIn:
            return '_outStream << "<%(elemName)s>" << (*iter)->%(getMethod)s << "</%(elemName)s>";' % {
                'elemName': getXmlElementName(pbSchema, pbElem),
                'getMethod': 'get_%s()' % _getCppVarNameFromElem(pbElem)
            }
        elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
            return '_outStream << "<%(elemName)s>" << (*iter)->%(getMethod)s.toString() << "</%(elemName)s>";' % {
                'elemName': getXmlElementName(pbSchema, pbElem),
                'getMethod': 'get_%s()' % _getCppVarNameFromElem(pbElem)
            }
        else:
            return '(*iter)->%(getMethod)s.toXmlElem("%(elemName)s", "", _outStream);' % {
                'elemName': getXmlElementName(pbSchema, pbElem),
                'getMethod': 'get_%s()' % _getCppVarNameFromElem(pbElem)
        }

    mBodyList = _getToXmlMethodBodyList(pbSchema, pbElemList, makeToXmlMethodBodyFunc)

    toXmlMethodBody = \
"""
{
    %(vector_type)s::const_iterator iter;
    for (iter = %(vector_name)s.begin(); iter != %(vector_name)s.end(); ++iter)
    {""" % {'vector_type':vector_type, 'vector_name':vector_name}

    for bodyIdx, mBody in enumerate(mBodyList):
        if bodyIdx == 0:
            toXmlMethodBody += \
"""
        if ((*iter)->%(has_method)s())
        {
            %(body)s
        }""" % {'has_method':'has_%s' % _getCppVarNameFromElem(mBody[0]), 'body':mBody[1]}
        else:
            toXmlMethodBody += \
"""
        else if ((*iter)->%(has_method)s())
        {
            %(body)s
        }""" % {'has_method':'has_%s' % _getCppVarNameFromElem(mBody[0]), 'body':mBody[1]}
    toXmlMethodBody += \
"""
    }
}
"""
    return toXmlMethodBody

def complexType_one(pbElemList, xsdContainerType, cppClass):
    for pbElem in pbElemList:
        if pbElem.type.kind == PB.Element.Type.BuiltIn:
            _addBuiltInMethodAndMemberVarInElem(pbElemList, pbElem, xsdContainerType, cppClass)

        elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
            _addSTOrCTMethodAndMemberVarInElem(pbElemList, pbElem, xsdContainerType, cppClass)

        elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
            _addSTOrCTMethodAndMemberVarInElem(pbElemList, pbElem, xsdContainerType, cppClass)

        elif pbElem.type.kind == PB.Element.Type.SimpleType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.ComplexType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.Any:
            _addAnyMethodAndMemberVarInElem(pbElemList, pbElem, xsdContainerType, cppClass)



def complexType_sequence(pbElemList, cppClass):
    complexType_one(pbElemList, SEQUENCE, cppClass)


def complexType_choice(pbElemList, cppClass):
    complexType_one(pbElemList, CHOICE, cppClass)


def _addMethodFromBuiltIn(pbElem, cppClass, innerClass, choiceMember):

    cppVarType = 'XSD::%s_' % getBuiltInStr(pbElem.type.built_in)
    cppVarName = _getCppVarName(pbElem.name)
    addMethod = cppClass.method.add()
    addMethod.return_type = 'void'
    addMethod.name = 'add_%s' % cppVarName
    addMethodArg1 = addMethod.argument.add()
    addMethodArg1.type = '%s&' % cppVarType
    addMethodArg1.name = '_%s' % cppVarName
    addMethodArg1.const = True
    addMethod.body = \
"""
%(inner_class_type)s *pChildGroup = new %(inner_class_type)s();
pChildGroup->%(setter_method)s(%(arg1)s);
%(vector_name)s.push_back(pChildGroup);
""" % {
            'vector_type':choiceMember.type,
            'vector_name':choiceMember.name,
            'inner_class_type': innerClass.name,
            'type': cppVarType,
            'setter_method': 'set_%s' % cppVarName,
            'arg1': addMethodArg1.name
        }


def _addMethodFromST(pbElem, cppClass, innerClass, choiceMember):
    _addMethodFromSTName(pbElem, cppClass, innerClass, choiceMember) # TODO


def _addMethodFromCT(pbElem, cppClass, innerClass, choiceMember):
    _addMethodFromCTName(pbElem, cppClass, innerClass, choiceMember) # TODO


def _addMethodFromSTName(pbElem, cppClass, innerClass, choiceMember):

    cppVarType = _getCppVarTypeFromElem(pbElem)
    cppVarName = _getCppVarNameFromElem(pbElem)
    addMethod = cppClass.method.add()
    addMethod.return_type = '%s*' % cppVarType
    addMethod.name = 'add_%s' % cppVarName
    addMethod.body = \
"""
%(inner_class_type)s *pChildGroup = new %(inner_class_type)s();
%(type)s* pNewChild = pChildGroup->%(getter_method)s();
%(vector_name)s.push_back(pChildGroup);
return pNewChild;
""" % {
            'vector_type':choiceMember.type,
            'vector_name':choiceMember.name,
            'inner_class_type': innerClass.name,
            'type': cppVarType,
            'getter_method': 'mutable_%s' % cppVarName
        }


def _addMethodFromCTName(pbElem, cppClass, innerClass, choiceMember):

    cppVarType = _getCppVarTypeFromElem(pbElem)
    cppVarName = _getCppVarNameFromElem(pbElem)
    addMethod = cppClass.method.add()
    addMethod.return_type = '%s*' % cppVarType
    addMethod.name = 'add_%s' % cppVarName
    addMethod.body = \
"""
%(inner_class_type)s *pChildGroup = new %(inner_class_type)s();
%(type)s* pNewChild = pChildGroup->%(getter_method)s();
%(vector_name)s.push_back(pChildGroup);
return pNewChild;
""" % {
            'vector_type':choiceMember.type,
            'vector_name':choiceMember.name,
            'inner_class_type': innerClass.name,
            'type': cppVarType,
            'getter_method': 'mutable_%s' % cppVarName
        }


def _addMethodFromAny(pbElem, cppClass):

    cppVarType = _getCppVarTypeFromElem(pbElem)
    cppVarName = _getCppVarNameFromElem(pbElem)

    mVar = cppClass.member_var.add()
    mVar.type = 'vector<%s*>' % cppVarType
    mVar.name = 'm_%s_list' % cppVarName

    addMethod = cppClass.method.add()
    addMethod.return_type = 'void'
    addMethod.name = 'append_%s' % cppVarName
    addMethodArg1 = addMethod.argument.add()
    addMethodArg1.type = '%s*' % cppVarType
    addMethodArg1.name = '_%s' % cppVarName

    addMethod.body = \
"""
%s.push_back(%s);
""" % (mVar.name, addMethodArg1.name)


def complexType_repeated(pbElemList, cppClass, idx):

    anyElemList = filter(lambda pbElem:pbElem.type.kind == PB.Element.Type.Any, pbElemList)
    if len(pbElemList) == len(anyElemList):
        for pbElem in pbElemList:
            _addMethodFromAny(pbElem, cppClass)
        return

    innerClass = cppClass.inner_class.add()
    innerClass.name = 'ChildGroup_%d' % idx
    complexType_choice(pbElemList, innerClass)

    choiceMember = cppClass.member_var.add()
    choiceMember.type = 'vector<%s*>' % innerClass.name
    choiceMember.name = 'm_childGroupList_%d' % idx

    for pbElem in pbElemList:
        if pbElem.type.kind == PB.Element.Type.BuiltIn:
            _addMethodFromBuiltIn(pbElem, cppClass, innerClass, choiceMember)
        elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
            _addMethodFromST(pbElem, cppClass, innerClass, choiceMember)
        elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
            _addMethodFromCT(pbElem, cppClass, innerClass, choiceMember)
        elif pbElem.type.kind == PB.Element.Type.SimpleType:
            _addMethodFromSTName(pbElem, cppClass, innerClass, choiceMember)
        elif pbElem.type.kind == PB.Element.Type.ComplexType:
            _addMethodFromCTName(pbElem, cppClass, innerClass, choiceMember)
        elif pbElem.type.kind == PB.Element.Type.Any:
            _addMethodFromAny(pbElem, cppClass)

def _addBuiltInMethodAndMemberVarInElem(pbElemList, pbElem, xsdContainerType, cppClass):

    cppVarName = _getCppVarNameFromElem(pbElem)
    cppVarType = _getCppVarTypeFromElem(pbElem)
    # cppVarType = 'XSD::%s_' % getBuiltInStr(pbBuiltIn)

    cppHasVar = cppClass.member_var.add()
    cppHasVar.type = 'bool'
    cppHasVar.name = 'm_has_%s' % cppVarName

    cppObjVar = cppClass.member_var.add()
    cppObjVar.type = '%s' % cppVarType
    cppObjVar.name = 'm_%s' % cppVarName

    hasMethod = cppClass.method.add()
    hasMethod.return_type = 'bool'
    hasMethod.name = 'has_%s' % cppVarName
    hasMethod.const = True
    hasMethod.body = \
"""
return %s;
""" % cppHasVar.name

    setMethod = cppClass.method.add()
    setMethod.return_type = 'void'
    setMethod.name = 'set_%s' % cppVarName
    setMethod_var1 = setMethod.argument.add()
    setMethod_var1.type = '%s&' % cppVarType
    setMethod_var1.name = '_%s' % cppVarName
    setMethod_var1.const = True
    if xsdContainerType == SEQUENCE:
        setMethod.body = \
"""
%s = true;
%s = %s;
""" % (cppHasVar.name, cppObjVar.name, setMethod_var1.name)
    elif xsdContainerType == CHOICE:
        clearMethodBodyList = filter(lambda x:x[0] != cppHasVar.name, _getClearMethodBodyListFromElemList(pbElemList)) # 자신을 초기화 하는 부분은 제거
        clearMethodBody = _toClearMethodBodyStr(clearMethodBodyList)
        setMethod.body = \
"""
%s
%s = true;
%s = %s;
""" % (clearMethodBody, cppHasVar.name, cppObjVar.name, setMethod_var1.name)

    getMethod = cppClass.method.add()
    getMethod.return_type = 'const %s&' % cppVarType
    getMethod.name = 'get_%s' % cppVarName
    getMethod.const = True
    getMethod.body = \
"""
return %s;
""" % cppObjVar.name

def _addBuiltInMethodAndMemberVarInAttr(pbAttr, cppClass):

    cppVarName = _getCppVarType(pbAttr.name)
    cppVarType = 'XSD::%s_' % getBuiltInStr(pbAttr.type.built_in)

    cppHasVar = cppClass.member_var.add()
    cppHasVar.type = 'bool'
    cppHasVar.name = 'm_has_%s_attr' % cppVarName

    cppObjVar = cppClass.member_var.add()
    cppObjVar.type = '%s' % cppVarType
    cppObjVar.name = 'm_%s_attr' % cppVarName

    hasMethod = cppClass.method.add()
    hasMethod.return_type = 'bool'
    hasMethod.name = 'has_%s_attr' % cppVarName
    hasMethod.const = True
    hasMethod.body = \
"""
return %s;
""" % cppHasVar.name

    setMethod = cppClass.method.add()
    setMethod.return_type = 'void'
    setMethod.name = 'set_%s_attr' % cppVarName
    setMethod_var1 = setMethod.argument.add()
    setMethod_var1.type = '%s&' % cppVarType
    setMethod_var1.name = '_%s_attr' % cppVarName
    setMethod_var1.const = True
    setMethod.body = \
"""
%s = true;
%s = %s;
""" % (cppHasVar.name, cppObjVar.name, setMethod_var1.name)

    getMethod = cppClass.method.add()
    getMethod.return_type = 'const %s&' % cppVarType
    getMethod.name = 'get_%s_attr' % cppVarName
    getMethod.const = True
    getMethod.body = \
"""
return %s;
""" % cppObjVar.name

def _addSTOrCTMethodAndMemberVarInElem(pbElemList, pbElem, xsdContainerType, cppClass):
    cppVarName = _getCppVarNameFromElem(pbElem)
    cppVarType = _getCppVarTypeFromElem(pbElem)

    cppHasVar = cppClass.member_var.add()
    cppHasVar.type = 'bool'
    cppHasVar.name = 'm_has_%s' % cppVarName

    cppObjVar = cppClass.member_var.add()
    cppObjVar.type = '%s*' % cppVarType
    cppObjVar.name = 'm_%s' % cppVarName

    hasMethod = cppClass.method.add()
    hasMethod.return_type = 'bool'
    hasMethod.name = 'has_%s' % cppVarName
    hasMethod.const = True
    hasMethod.body = \
"""
return %s;
""" % cppHasVar.name

    mutableMethod = cppClass.method.add()
    mutableMethod.return_type = '%s*' % cppVarType
    mutableMethod.name = 'mutable_%s' % cppVarName
    if xsdContainerType == SEQUENCE:
        mutableMethod.body = \
"""
%(has_var)s = true;
if (!%(var)s)
{
    %(var)s = new %(type)s();
}
return %(var)s;
""" % {'has_var':cppHasVar.name, 'var':cppObjVar.name, 'type':cppVarType}
    elif xsdContainerType == CHOICE:
        clearMethodBodyList = filter(lambda x:x[0] != cppHasVar.name, _getClearMethodBodyListFromElemList(pbElemList)) # 자신을 초기화 하는 부분은 제거
        clearMethodBody = _toClearMethodBodyStr(clearMethodBodyList)
        mutableMethod.body = \
"""
%(clearMethodCodes)s
%(has_var)s = true;
if (!%(var)s)
{
    %(var)s = new %(type)s();
}
return %(var)s;
""" % {'clearMethodCodes': clearMethodBody, 'has_var':cppHasVar.name, 'var':cppObjVar.name, 'type':cppVarType}

    getMethod = cppClass.method.add()
    getMethod.return_type = 'const %s&' % cppVarType
    getMethod.name = 'get_%s' % cppVarName
    getMethod.const = True
    getMethod.body = \
"""
if (%(var)s)
{
    return *%(var)s;
}
return %(type)s::default_instance();
""" % {'var':cppObjVar.name, 'type':cppVarType}


def _addAnyMethodAndMemberVarInElem(pbElemList, pbElem, xsdContainerType, cppClass):
    cppVarName = _getCppVarNameFromElem(pbElem)
    cppVarType = _getCppVarTypeFromElem(pbElem)

    cppHasVar = cppClass.member_var.add()
    cppHasVar.type = 'bool'
    cppHasVar.name = 'm_has_%s' % cppVarName

    cppObjVar = cppClass.member_var.add()
    cppObjVar.type = '%s*' % cppVarType
    cppObjVar.name = 'm_%s' % cppVarName


def _addSTMethodAndMemberVarInAttr(pbAttr, cppClass):
    cppVarName = _getCppVarNameFromAttr(pbAttr)
    cppVarType = _getCppVarType(pbAttr.type.simple_type_name)

    cppHasVar = cppClass.member_var.add()
    cppHasVar.type = 'bool'
    cppHasVar.name = 'm_has_%s_attr' % cppVarName

    cppObjVar = cppClass.member_var.add()
    cppObjVar.type = '%s*' % cppVarType
    cppObjVar.name = 'm_%s_attr' % cppVarName

    hasMethod = cppClass.method.add()
    hasMethod.return_type = 'bool'
    hasMethod.name = 'has_%s_attr' % cppVarName
    hasMethod.const = True
    hasMethod.body = \
"""
return %s;
""" % cppHasVar.name

    setMethod = cppClass.method.add()
    setMethod.return_type = 'void'
    setMethod.name = 'set_%s_attr' % cppVarName
    setMethod_var1 = setMethod.argument.add()
    setMethod_var1.type = '%s&' % cppVarType
    setMethod_var1.name = '_%s_attr' % cppVarName
    setMethod_var1.const = True
    setMethod.body = \
"""
%(has_var)s = true;
%(var)s = new %(type)s(%(arg)s);
""" % {
            'has_var':cppHasVar.name,
            'var':cppObjVar.name,
            'type':cppVarType,
            'arg':setMethod_var1.name
        }

    getMethod = cppClass.method.add()
    getMethod.return_type = 'const %s&' % cppVarType
    getMethod.name = 'get_%s_attr' % cppVarName
    getMethod.const = True
    getMethod.body = \
"""
if (%(var)s)
{
    return *%(var)s;
}
return %(type)s::default_instance();
""" % {'var':cppObjVar.name, 'type':cppVarType}


def getClearMethodBodyStrFromElemCont(pbElemCont):
    clearMethodBodyStrList = []
    repeatedIdx = 1
    for elemCont in pbElemCont:
        if elemCont.kind == PB.ElementContainer.Sequence:
            clearMethodBodyStrList.append(_getClearMethodBodyStrFromElemList(elemCont.sequence))
        elif elemCont.kind == PB.ElementContainer.Choice:
            clearMethodBodyStrList.append(_getClearMethodBodyStrFromElemList(elemCont.choice))
        elif elemCont.kind == PB.ElementContainer.RepeatedSequence:
            clearMethodBodyStrList.append(_getClearMethodBodyStrFromRepeated(repeatedIdx))
            repeatedIdx += 1
        elif elemCont.kind == PB.ElementContainer.RepeatedChoice:
            clearMethodBodyStrList.append(_getClearMethodBodyStrFromRepeated(repeatedIdx))
            repeatedIdx += 1
    return " ".join(clearMethodBodyStrList)


def getClaerMethodBodyStrFromAttrs(pbAttrList):
    return _getClearMethodBodyStrFromAttrList(pbAttrList)


def getToXmlMethodBodyStrFromElemCont(pbSchema, pbElemCont):

    toXmlMethodBodyStrList = []
    repeatedIdx = 1
    for elemCont in pbElemCont:
        if elemCont.kind == PB.ElementContainer.Sequence:
            toXmlMethodBodyStrList.append(_getToXmlMethodBodyStr(pbSchema, elemCont.sequence))
        elif elemCont.kind == PB.ElementContainer.Choice:
            toXmlMethodBodyStrList.append(_getToXmlMethodBodyStr(pbSchema, elemCont.choice))
        elif elemCont.kind == PB.ElementContainer.RepeatedSequence:
            toXmlMethodBodyStrList.append(_getToXmlMethodBodyStrFromRepeated(pbSchema, elemCont.repeated_sequence, repeatedIdx))
            repeatedIdx += 1
        elif elemCont.kind == PB.ElementContainer.RepeatedChoice:
            toXmlMethodBodyStrList.append(_getToXmlMethodBodyStrFromRepeated(pbSchema, elemCont.repeated_choice, repeatedIdx))
            repeatedIdx += 1

    return " ".join(toXmlMethodBodyStrList)


def getToXmlMethodBodyStrFromAttrs(pbSchema, pbAttrList):
    toXmlMethodBodyStrList = []
    for pbAttr in pbAttrList:
        if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
            cppVarType = getBuiltInStr(pbAttr.type.built_in)
            toXmlMethodBodyStrList.append(_makeToXmlMethodBodyFromAttrBuiltInWithAttrName(pbSchema, cppVarType, pbAttr))
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
            toXmlMethodBodyStrList.append(_makeToXmlMethodBodyFromAttrSTName(pbSchema, pbAttr))
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
            toXmlMethodBodyStrList.append(_makeToXmlMethodBodyFromAttrSTName(pbSchema, pbAttr))
        elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
            pass # TODO
            # CPP_FUNC.complexType_attr_anyAttribute(pbAttr.type.any, cppClass)

    return '\n'.join(toXmlMethodBodyStrList)


def complexType_attr_builtIn(pbAttr, cppClass):
    _addBuiltInMethodAndMemberVarInAttr(pbAttr, cppClass)


def complexType_attr_simpleTypeName(pbAttr, cppClass):
    _addSTMethodAndMemberVarInAttr(pbAttr, cppClass)