# -*- encoding=utf-8 -*-

__author__ = 'msgundam00'

import os

def hParse(cppSchema, filePath):
    hFile = open(filePath, 'wb')
    hBuf = 'namespace %s {\n' % cppSchema.namespace
    for cls in cppSchema.class_:
        hBuf += '    class %s;\n' % cls.name
    hBuf += '}\n'

    hBuf += '#ifndef __%s_\n' % cppSchema.name.replace('-', '_')
    hBuf += '#define __%s_ 0\n\n' % cppSchema.name.replace('-', '_')
    hBuf += '#include "xsdtype.h"\n'
    hBuf += '#include <vector>\n' 
    hBuf += '#include <string>\n'
    hBuf += '#include <iostream>\n'

    deep = 0

    for inFile in cppSchema.include_file:
        hBuf += '#include "%s"\n' % inFile

    hBuf += 'namespace %s {\n' % cppSchema.namespace
    hBuf += '    using namespace std;\n'
    for cls in cppSchema.class_:
        hBuf += _makehClass(cls, deep) + '\n'
    
    hBuf += '}\n'
    hBuf += '#endif'
    hFile.write(hBuf)
    hFile.close()

def _checkPublic(data):
    return data.startswith('public\n')

def _checkProtect(data):
    return data.startswith('protected\n')

def _makehClass(cppSchema, deep):
    deep += 1

    hBuf = '    '*deep + 'class %s' % cppSchema.name

    parentFlag = True
    for pcls in cppSchema.parent_class:
        if parentFlag:
            parentFlag = False
            hBuf += ': public %s' % pcls
        else:
            hBuf += ', public %s' % pcls
            
    hBuf += '\n' + '    '*deep + '{\n' + '    '*deep + 'public:\n'
    pPublic = len(hBuf)
    hBuf += '    '*deep + 'protected:\n'
    pProtect= len(hBuf)
    hBuf += '    '*deep + 'private:\n'
    pPrivate = len(hBuf)
    hBuf += '    '*deep + '};\n'

    if cppSchema.HasField('enum_'):
        data = _makehEnum(cppSchema.enum_, deep)
        hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

        pPublic += len(data)
        pProtect += len(data)
        pPrivate += len(data)
    
    for con in cppSchema.constructor:
        data = _makehConstructor(con, cppSchema.name, deep)
        hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

        pPublic += len(data)
        pProtect += len(data)
        pPrivate += len(data)
        
    if cppSchema.HasField('destructor'):
        data = _makehDestructor(cppSchema.destructor, cppSchema.name, deep)
        hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

        pPublic += len(data)
        pProtect += len(data)
        pPrivate += len(data)

    for met in cppSchema.method:
        data = _makehMethod(met, deep)
        if _checkPublic(data):
            data = data[7:]
            hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

            pPublic += len(data)
            pProtect += len(data)
            pPrivate += len(data)
        elif _checkProtect(data):
            data = data[10:]
            hBuf = hBuf[:pProtect] + data + hBuf[pProtect:]

            pProtect += len(data)
            pPrivate += len(data)
        else:
            data = data[8:]
            hBuf = hBuf[:pPrivate] + data + hBuf[pPrivate:]

            pPrivate += len(data)

    for icls in cppSchema.inner_class:
        data = _makehClass(icls, deep)
        hBuf = hBuf[:pPrivate] + data + hBuf[pPrivate:]

        pPrivate += len(data)

    for mem in cppSchema.member_var:
        data = _makehMemberVar(mem, deep)
        if _checkPublic(data):
            data = data[7:]
            hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

            pPublic += len(data)
            pProtect += len(data)
            pPrivate += len(data)
        elif _checkProtect(data):
            data = data[10:]
            hBuf = hBuf[:pProtect] + data + hBuf[pProtect:]

            pProtect += len(data)
            pPrivate += len(data)
        else:
            data = data[8:]
            hBuf = hBuf[:pPrivate] + data + hBuf[pPrivate:]

            pPrivate += len(data)
    
    return hBuf

def _makehConstructor(cppSchema, className, deep):
    deep += 1

    hBuf = '    '*deep + className + '('
    argFlag = True
    for arg in cppSchema.argument:
        if argFlag:
            argFlag = False
            data = _makehArgVar(arg)
        else:
            data = ', ' + _makehArgVar(arg)

        hBuf += data
    hBuf += ');\n'

    return hBuf

def _makehDestructor(cppSchema, className, deep):
    deep += 1

    hBuf = '    '*deep + '~' + className + '();\n'
    return hBuf

def _makehMethod(cppSchema, deep):
    deep += 1
    
    if cppSchema.access_qf == 'protected':
        hBuf = 'protected\n'
    elif cppSchema.access_qf == 'private':
        hBuf = 'private\n'
    else:
        hBuf = 'public\n'

    hBuf += '    '*deep
    if cppSchema.HasField('static') and cppSchema.static:
            hBuf += 'static '
    hBuf += '%s %s(' % (cppSchema.return_type, cppSchema.name)
    
    argFlag = True
    for arg in cppSchema.argument:
        if argFlag:
            argFlag = False
            data = _makehArgVar(arg)
        else:
            data = ', ' + _makehArgVar(arg)

        hBuf += data
        
    hBuf += ')'
    if cppSchema.HasField('const') and cppSchema.const:
        hBuf += ' const'
    hBuf += ';\n'

    return hBuf

def _makehMemberVar(cppSchema, deep):
    deep += 1
    return _makehVar(cppSchema, '    '*deep) + ';\n'

def _makehArgVar(cppSchema):
    return _makehVar(cppSchema, '')

def _makehVar(cppSchema, hBuf):
    if hBuf:
        if cppSchema.access_qf == 'public':
            hBuf = 'public\n' + hBuf
        elif cppSchema.access_qf == 'protected':
            hBuf = 'protected\n' + hBuf
        else:
            hBuf = 'private\n' + hBuf

    if cppSchema.HasField('static') and cppSchema.static:
            hBuf += 'static '
    if cppSchema.HasField('const') and cppSchema.const:
            hBuf += 'const '
    
    hBuf += '%s %s' % (cppSchema.type, cppSchema.name)
    if cppSchema.array:
        hBuf += '[]'

    return hBuf

def _makehEnum(cppSchema, deep):
    deep += 1

    hBuf = '    '*deep + 'enum  %s \n' % cppSchema.name + '    '*deep + '{\n'
    deep += 1
    firstFlag = True
    for val in cppSchema.value:
        if firstFlag:
            firstFlag = False
            hBuf += '    '*deep + '%s = 0' % val
        else :
            hBuf += ',\n' + '    '*deep + val

    deep -= 1
    hBuf += '\n' + '    '*deep + '};\n'

    return hBuf
