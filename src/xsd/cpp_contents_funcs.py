# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_pb2 as PB
import cpp_pb2 as CPB

SEQUENCE = 0
CHOICE = 1

def _getBuiltInStr(pbBuiltIn):
    return PB.BuiltIn.DESCRIPTOR.enum_types_by_name['Type'].values_by_number[pbBuiltIn].name

def _isStringBuiltInType(pbBuiltIn):
    return ((0 <= pbBuiltIn) and (pbBuiltIn <= 23)) or (pbBuiltIn in [37, 38, 43])

def _isIntBuiltInType(pbBuiltIn):
    return ((24 <= pbBuiltIn) and (pbBuiltIn <= 36)) or (pbBuiltIn in [40, 41, 42])

def _isBooleanBuiltInType(pbBuiltIn):
    return pbBuiltIn == PB.BuiltIn.boolean

def makeDefaultInstanceMethod(cppClass):
    method = cppClass.method.add()
    method.return_type = 'const %s&' % cppClass.name
    method.name = 'default_instance'
    method.const = True
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
    method.name = 'toXml'
    method.const = True
    methodArg1 = method.argument.add()
    methodArg1.type = 'string'
    methodArg1.name = '_attrName'
    methodArg1.const = True
    methodArg2 = method.argument.add()
    methodArg2.type = 'ostream'
    methodArg2.name = '_outStream'
    method.body = methodBody

def makeToXmlElemMethod(methodBody, cppClass):
    method = cppClass.method.add()
    method.return_type = 'void'
    method.name = 'toXml'
    method.const = True
    methodArg1 = method.argument.add()
    methodArg1.type = 'string'
    methodArg1.name = '_elemName'
    methodArg1.const = True
    methodArg2 = method.argument.add()
    methodArg2.type = 'ostream'
    methodArg2.name = '_outStream'
    method.body = methodBody

def _getInitValueFromBuiltIn(pbBuiltIn):
    if _isStringBuiltInType(pbBuiltIn):
        return ''
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

def _makeCppEnum(pbEnumList, cppEnum):
    cppEnum.name = 'Type'
    for enumValue in pbEnumList:
        cppEnum.value.append('_%s_' % enumValue)

def _makeCppEnumStr(pbEnumList, typeStrMember):
    for enumValue in pbEnumList:
        typeStrMember.string_list.append(enumValue)

def _makeToXmlMethodBodyFromAttrBuiltIn(cppVarType, varName):
    if cppVarType == 'boolean':
        return '_outStream << _attrName << "=\\"" << XSD::BooleanStr(%s) << "\\"";' % varName
    else:
        return '_outStream << _attrName << "=\\"" << %s << "\\"";' % varName

def _makeToXmlMethodBodyFromAttrEnum(className, enumTypeName, cppVarName):
    return '_outStream << _attrName << "=\\"" << %s::%s[%s] << "\\"";' % (className, enumTypeName, cppVarName)

def _makeToXmlMethodBodyFromAttrSTName(varName):
    return '%s->toXml(_attrName, _outStream);' % varName

def _makeToXmlMethodBodyFromElemBuiltIn(elemName, varName):
    return '_outStream << "<%(elemName)s>" << %(varName)s << "</%(elemName)s>";' % {'elemName':elemName, 'varName':varName}

def _makeToXmlMethodBodyFromElemSTName(elemName, varName):
    return '_outStream << "<%(elemName)s>" << %(varName)s->toString() << "</%(elemName)s>";' % {'elemName':elemName, 'varName':varName}

def _makeToXmlMethodBodyFromElemCTName(elemName, varName):
    return '%(varName)s->toXml(%(elemName)s, _outStream);' % {'elemName':elemName, 'varName':varName}

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

def simpleType_restriction_enum(pbEnumList, cppClass):
    cppVarName = 'type'
    cppVarType = 'Type'

    hasVarName = 'm_has_%s' % cppVarName
    varName = 'm_%s' % cppVarName

    _makeCppEnum(pbEnumList, cppClass.enum_)

    typeStrMember = cppClass.member_var.add()
    typeStrMember.access_qf = CPB.AccessQualified.private
    typeStrMember.type = 'string'
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
    const2Arg1.type = '%s' % cppVarType
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
    method3.name = '%s' % cppVarName
    method3.const = True
    method3.body = \
        """
            return %s;
        """ % varName

    toStringMethod = cppClass.method.add()
    toStringMethod.return_type = 'string'
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
                '_outStream << _attrName << "=\\"" << %s() << "\\"";';
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

def simpleType_restriction_builtIn(pbBuiltIn, cppClass):
    cppVarName = _getBuiltInStr(pbBuiltIn)
    cppVarType = cppVarName

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
    const2Arg1.type = 'XSD::%s&' % cppVarType
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
    method3.name = '%s' % cppVarName
    method3.const = True
    method3.body = \
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

def simpleType_restriction_simpleTypeName(pbSTName, cppClass):
    argument = cppClass.constructor.add().argument.add()
    argument.type = '%s&' % _getCppVarType(pbSTName)
    argument.name = '_%s' % _getCppVarName(pbSTName)
    argument.const = True

    cppClass.parent_class.remove('XSD::SimpleType')
    cppClass.parent_class.append(_getCppVarName(pbSTName))

def simpleType_restriction_complexTypeName(pbCTName, cppClass):
    pass #TODO - 아직은 여기로 오지 않아서 처리하지 않음

def simpleType_union(pbUnion, cppClass):
    pbUnionMemberNames = _getUnionMemberNames(pbUnion.member_type)

    toXmlMethodBodyList = []
    for pbMemberType in pbUnion.member_type:
        if pbMemberType.kind == PB.Union.MemberType.BuiltIn:
            simpleType_union_builtIn(pbMemberType.built_in, pbUnionMemberNames, cppClass)
            cppVarType = _getBuiltInStr(pbMemberType.built_in)
            varName = 'm_%s' % cppVarType
            hasVarName = 'm_has_%s' % cppVarType
            toXmlMethodBodyList.append((hasVarName, _makeToXmlMethodBodyFromAttrBuiltIn(cppVarType, varName)))
        elif pbMemberType.kind == PB.Union.MemberType.SimpleTypeName:
            simpleType_union_simpleTypeName(pbMemberType.simple_type_name, pbUnionMemberNames, cppClass)
            varName = 'm_%s' % _getCppVarName(pbMemberType.simple_type_name)
            hasVarName = 'm_has_%s' % _getCppVarName(pbMemberType.simple_type_name)
            toXmlMethodBodyList.append((hasVarName, _makeToXmlMethodBodyFromAttrSTName(varName)))
        else:
            assert(False)

    clearMethodBody = _clearFuncStrs(pbUnionMemberNames, '')
    makeClearMethod(clearMethodBody, cppClass)

    toXmlMethodBody = ""
    for mBody in toXmlMethodBodyList:
        toXmlMethodBody += \
        """
        if (%s)
        {
            %s;
            return;
        }\n""" % (mBody[0], mBody[1])
    makeToXmlAttrMethod(toXmlMethodBody, cppClass)

    makeDefaultInstanceMethod(cppClass)
    makeDefaultInstanceMember(cppClass)

def _clearFuncStrs(pbUnionMemberNames, cppVarName):
    clearFuncList = ['clear_%s();' % name for name in pbUnionMemberNames if name != cppVarName]
    return '\n'.join(clearFuncList)

def simpleType_union_builtIn(pbBuiltIn, pbUnionMemberNames, cppClass):
    cppVarName = _getBuiltInStr(pbBuiltIn)
    cppVarType = cppVarName

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
    method2_var1 =  method2.argument.add()
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
            'arg':method2_var1.name}

    method3 = cppClass.method.add()
    method3.return_type = 'const %s&' % cppVarType
    method3.name = '%s' % cppVarName
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
            'cpp_type':cppVarType}

    method3 = cppClass.method.add()
    method3.return_type = 'const %s&' % cppVarType
    method3.name = '%s' % cppVarName
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
            pbUnionMemberName.append(_getCppVarName(_getBuiltInStr(pbMemberType.built_in)))
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
        hasVarName = 'm_has_%s' % _getCppVarName(pbElem.name)
        varName = 'm_%s' % _getCppVarName(pbElem.name)
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
        hasVarName = 'm_has_%s_attr' % _getCppVarName(pbAttr.name)
        varName = 'm_%s_attr' % _getCppVarName(pbAttr.name)
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
            %(vector_type)s::iterator iter;
            for (iter = %(vector_name)s.begin(); iter != %(vector_name)s.end(); ++iter)
            {
                delete *iter;
            }
            %(vector_name)s.clear();
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

def _getToXmlMethodBodyList(pbElemList, varName=None):
    toXmlMethodBodyList = []

    for pbElem in pbElemList:
        # hasVarName = 'm_has_%s' % _getCppVarName(pbElem.name)
        if varName is None:
            varName = 'm_%s' % _getCppVarName(pbElem.name)

        if pbElem.type.kind == PB.Element.Type.BuiltIn:
            toXmlMethodBodyList.append((pbElem.name, _makeToXmlMethodBodyFromElemBuiltIn(pbElem.name, varName)))

        elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
            toXmlMethodBodyList.append((pbElem.name, _makeToXmlMethodBodyFromElemSTName(pbElem.name, varName)))

        elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
            toXmlMethodBodyList.append((pbElem.name, _makeToXmlMethodBodyFromElemCTName(pbElem.name, varName)))

        elif pbElem.type.kind == PB.Element.Type.SimpleType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.ComplexType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.Any:
            pass # TODO
            # _setCppClassFromAny(pbElem, cppClass)

    return toXmlMethodBodyList

def _getToXmlMethodBodyStr(pbElemList):
    mBodyList = _getToXmlMethodBodyList(pbElemList)
    toXmlMethodBody = ""
    for mBody in mBodyList:
        toXmlMethodBody += \
            """
                if (%s)
                {
                    %s;
                }
            """ % ('m_has_%s' % _getCppVarName(mBody[0]), mBody[1])
    return toXmlMethodBody

def _getToXmlMethodBodyStrFromRepeated(pbElemList, idx):
    childGroupType = 'ChildGroup_%d' % idx
    vector_type = 'vector<%s*>' % childGroupType
    vector_name = 'm_childGroupList_%d' % idx

    mBodyList = _getToXmlMethodBodyList(pbElemList, '(*iter)')

    toXmlMethodBody = \
    """
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
            }""" % {'has_method':'has_%s' % _getCppVarName(mBody[0]), 'body':mBody[1]}
        else:
            toXmlMethodBody += \
    """
            else if ((*iter)->%(has_method)s())
            {
                %(body)s
            }""" % {'has_method':'has_%s' % _getCppVarName(mBody[0]), 'body':mBody[1]}
    toXmlMethodBody += \
    """
        }"""
    return toXmlMethodBody

def complexType_one(pbElemList, xsdContainerType, cppClass):
    for pbElem in pbElemList:
        if pbElem.type.kind == PB.Element.Type.BuiltIn:
            _addBuiltInMethodAndMemberVarInElem(pbElemList, pbElem.name, pbElem.type.built_in, xsdContainerType, cppClass)

        elif pbElem.type.kind == PB.Element.Type.SimpleTypeName:
            _addSTOrCTMethodAndMemberVarInElem(pbElemList, pbElem.name, pbElem.type.simple_type_name, xsdContainerType,
                                               cppClass)

        elif pbElem.type.kind == PB.Element.Type.ComplexTypeName:
            _addSTOrCTMethodAndMemberVarInElem(pbElemList, pbElem.name, pbElem.type.complex_type_name, xsdContainerType,
                                               cppClass)

        elif pbElem.type.kind == PB.Element.Type.SimpleType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.ComplexType:
            pass # TODO - 현재는 여기로 오는 것이 없음, 추후 구현 예정
        elif pbElem.type.kind == PB.Element.Type.Any:
            pass # TODO
            # _setCppClassFromAny(pbElem, cppClass)

def complexType_sequence(pbElemList, cppClass):
    complexType_one(pbElemList, SEQUENCE, cppClass)

def complexType_choice(pbElemList, cppClass):
    complexType_one(pbElemList, CHOICE, cppClass)

def complexType_repeated(pbElemList, cppClass, idx):
    innerClass = cppClass.inner_class.add()
    innerClass.name = 'ChildGroup_%d' % idx
    complexType_choice(pbElemList, innerClass)

    choiceMember = cppClass.member_var.add()
    choiceMember.type = 'vector<%s*>' % innerClass.name
    choiceMember.name = 'm_childGroupList_%d' % idx

    for pbElem in pbElemList:
        cppVarType = _getCppVarTypeFromElem(pbElem)
        cppVarName = _getCppVarName(pbElem.name)
        addMethod = cppClass.method.add()
        addMethod.return_type = '%s*' % cppVarType
        addMethod.name = 'add_%s' % cppVarName
        addMethod.body = \
        """
            %(vector_type)s *pChildGroup = new %(inner_class_type)s();
            %(type)s* pNewChild = pChildGroup->mutable_%(name)s();
            %(vector_name)s.push_back(pChildGroup);
            return pNewChild;
        """ % {
            'vector_type':choiceMember.type,
            'vector_name':choiceMember.name,
            'inner_class_type':innerClass.name,
            'type':cppVarType,
            'name':cppVarName
        }

def _addBuiltInMethodAndMemberVarInElem(pbElemList, pbElemName, pbBuiltIn, xsdContainerType, cppClass):

    cppVarName = _getCppVarType(pbElemName)
    cppVarType = _getBuiltInStr(pbBuiltIn)

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
            """ % (cppHasVar.name, cppObjVar.type, setMethod_var1.name)
    elif xsdContainerType == CHOICE:
        clearMethodBodyList = filter(lambda x:x[0] != cppHasVar.name, _getClearMethodBodyListFromElemList(pbElemList)) # 자신을 초기화 하는 부분은 제거
        clearMethodBody = _toClearMethodBodyStr(clearMethodBodyList)
        setMethod.body = \
            """
                %s
                %s = true;
                %s = %s;
            """ % (clearMethodBody, cppHasVar.name, cppObjVar.type, setMethod_var1.name)

    getMethod = cppClass.method.add()
    getMethod.return_type = 'const %s&' % cppVarType
    getMethod.name = '%s' % cppVarName
    getMethod.const = True
    getMethod.body = \
    """
        return %s;
    """ % cppObjVar

def _addBuiltInMethodAndMemberVarInAttr(pbAttrName, pbBuiltIn, cppClass):

    cppVarName = _getCppVarType(pbAttrName)
    cppVarType = _getBuiltInStr(pbBuiltIn)

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
    getMethod.name = '%s_attr' % cppVarName
    getMethod.const = True
    getMethod.body = \
        """
            return %s;
        """ % cppObjVar

def _addSTOrCTMethodAndMemberVarInElem(pbElemList, pbElemName, pbSimpleTypeName, xsdContainerType, cppClass):
    cppVarName = _getCppVarName(pbElemName)
    cppVarType = _getCppVarType(pbSimpleTypeName)

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
    getMethod.name = '%s' % cppVarName
    getMethod.const = True
    getMethod.body = \
        """
            if (%(var)s)
            {
                return *%(var)s;
            }
            return %(type)s::default_instance();
        """ % {'var':cppObjVar.name, 'type':cppVarType}


def _addSTMethodAndMemberVarInAttr(pbAttrName, pbSimpleTypeName, cppClass):
    cppVarName = _getCppVarName(pbAttrName)
    cppVarType = _getCppVarType(pbSimpleTypeName)

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
    getMethod.name = '%s_attr' % cppVarName
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


def getToXmlMethodBodyStrFromElemCont(pbElemCont):
    toXmlMethodBodyStrList = []
    repeatedIdx = 1
    for elemCont in pbElemCont:
        if elemCont.kind == PB.ElementContainer.Sequence:
            toXmlMethodBodyStrList.append(_getToXmlMethodBodyStr(elemCont.sequence))
        elif elemCont.kind == PB.ElementContainer.Choice:
            toXmlMethodBodyStrList.append(_getToXmlMethodBodyStr(elemCont.choice))
        elif elemCont.kind == PB.ElementContainer.RepeatedSequence:
            toXmlMethodBodyStrList.append(_getToXmlMethodBodyStrFromRepeated(elemCont.repeated_sequence, repeatedIdx))
            repeatedIdx += 1
        elif elemCont.kind == PB.ElementContainer.RepeatedChoice:
            toXmlMethodBodyStrList.append(_getToXmlMethodBodyStrFromRepeated(elemCont.repeated_choice, repeatedIdx))
            repeatedIdx += 1

    return " ".join(toXmlMethodBodyStrList)


def getToXmlMethodBodyStrFromAttrs(pbAttrList):
    toXmlMethodBodyStrList = []
    for pbAttr in pbAttrList:
        if pbAttr.type.kind == PB.Attribute.Type.BuiltIn:
            cppVarType = _getBuiltInStr(pbAttr.type.built_in)
            varName = 'm_%s_attr' % pbAttr.name
            toXmlMethodBodyStrList.append(_makeToXmlMethodBodyFromAttrBuiltIn(cppVarType, varName))
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleTypeName:
            varName = 'm_%s_attr' % pbAttr.name
            toXmlMethodBodyStrList.append(_makeToXmlMethodBodyFromAttrSTName(varName))
        elif pbAttr.type.kind == PB.Attribute.Type.SimpleType:
            varName = 'm_%s_attr' % pbAttr.name
            toXmlMethodBodyStrList.append(_makeToXmlMethodBodyFromAttrSTName(varName))
        elif pbAttr.type.kind == PB.Attribute.Type.AnyAttribute:
            pass # TODO
            # CPP_FUNC.complexType_attr_anyAttribute(pbAttr.type.any, cppClass)

    return '\n'.join(toXmlMethodBodyStrList)


def complexType_attr_builtIn(pbAttrName, pbBuiltIn, cppClass):
    _addBuiltInMethodAndMemberVarInAttr(pbAttrName, pbBuiltIn, cppClass)


def complexType_attr_simpleTypeName(pbAttrName, pbSTName, cppClass):
    _addSTMethodAndMemberVarInAttr(pbAttrName, pbSTName, cppClass)