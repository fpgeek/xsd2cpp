# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_pb2 as PB
import cpp_pb2 as CPB

def _getBaseNameStr(pbBuiltIn):
    return PB.BuiltIn.DESCRIPTOR.enum_types_by_name['Type'].values_by_number[pbBuiltIn].name

def _isStringBuiltInType(pbBuiltIn):
    return ((0 <= pbBuiltIn) and (pbBuiltIn <= 23)) or (pbBuiltIn in [37, 38, 43])

def _isIntBuiltInType(pbBuiltIn):
    return ((24 <= pbBuiltIn) and (pbBuiltIn <= 36)) or (pbBuiltIn in [39, 40, 41, 42])

def _makeDefaultInstanceMethod(cppClass):
    method = cppClass.method.add()
    method.return_type = 'const %s&' % cppClass.name
    method.name = 'default_instance()'
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

def _getInitValueFromBuiltIn(pbBuiltIn):
    if _isStringBuiltInType(pbBuiltIn):
        return ''
    elif _isIntBuiltInType(pbBuiltIn):
        return '0'
    else:
        assert(False)
        return ''

def _getClearFuncCodeFromBuiltIn(varName, pbBuiltIn):
    if _isStringBuiltInType(pbBuiltIn):
        return '%s.clear()' % varName
    elif _isIntBuiltInType(pbBuiltIn):
        return '%s = 0' % varName
    else:
        assert(False)
        return ''

def simpleType_restriction_builtIn(pbBuiltIn, cppClass):
    cppVarName = _getBaseNameStr(pbBuiltIn)
    cppVarType = cppVarName

    hasVarName = 'm_has_%s' % cppVarName
    varName = 'm_%s' % cppVarName

    const1 = cppClass.constructor.add()
    constInit1 = const1.const_init.add()
    constInit1.name = hasVarName
    constInit1.value = 'false'

    const2 = cppClass.constructor.add()
    const2Init1 = const2.const_init.add()
    const2Init1.name = hasVarName
    const2Init1.value = 'true'
    const2Init2 = const2.const_init.add()
    const2Init2.name = varName
    const2Init2.value = _getInitValueFromBuiltIn(pbBuiltIn)

    method1 = cppClass.method.add()
    method1.return_type = 'bool'
    method1.name = hasVarName
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

    method4 = cppClass.method.add()
    method4.return_type = 'void'
    method4.name = 'clear'
    method4.body = \
"""
    %s = false;
    %s;
""" % (hasVarName, _getClearFuncCodeFromBuiltIn(varName, pbBuiltIn))

    method5 = cppClass.method.add()
    method5.return_type = 'void'
    method5.name = 'toXml'
    method5.const = True
    method5Arg1 = method5.argument.add()
    method5Arg1.type = 'string'
    method5Arg1.name = '_attrName'
    method5Arg1.const = True
    method5Arg2 = method5.argument.add()
    method5Arg2.type = 'ostream'
    method5Arg2.name = '_outStream'
    method5.body = \
"""
    if (%s)
    {
        _outStream << _attrName << "\="" << %s << "\"";
    }
""" % (hasVarName, varName)

    _makeDefaultInstanceMethod(cppClass)

    memberVar1 = cppClass.member_var.add()
    memberVar1.type = 'bool'
    memberVar1.name = hasVarName

    memberVar2 = cppClass.member_var.add()
    memberVar2.type = '%s' % cppVarType
    memberVar2.name = varName
