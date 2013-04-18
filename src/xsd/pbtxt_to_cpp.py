# -*- encoding=utf-8 -*-

__author__ = 'msgundam00'

import os

def cppParse(cppSchema):
    cppFile = open('../../files/cpp/%s.cpp' % cppSchema.name, 'wb')
    cppBuf = '#include "%s.h"\n' % cppSchema.name
    cppBuf += '#include <stdlib.h>\n' 
    cppBuf += '#include <sstream>\n'

    deep = 0

    for inFile in cppSchema.include_file:
        cppBuf += '#include "%s"\n' % inFile

    cppBuf += 'namespace %s {\n' % cppSchema.namespace
    
    for cls in cppSchema.class_:
        cppBuf += _makeCppClass(cls, deep)
    
    cppBuf += '}'
    cppFile.write(cppBuf)
    cppFile.close()

def _checkPublic(data):
    return data.startswith('public\n')

def _checkProtect(data):
    return data.startswith('protected\n')

def _checkType(txtline, comment):
    return txtline.strip().startswith(comment)
            
def _makeCppClass(cppSchema, deep):
    deep += 1

    cppBuf = '    '*deep + 'class %s' % cppSchema.name

    parentFlag = True
    for pcls in cppSchema.parent_class:
        if parentFlag:
            parentFlag = False
            cppBuf += ': public %s' % pcls
        else:
            cppBuf += ', public %s' % pcls
            
    cppBuf += '{\n' + '    '*deep + 'public:\n'
    pPublic = len(cppBuf)
    cppBuf += '\n' + '    '*deep + 'protected:\n'
    pProtect= len(cppBuf)
    cppBuf += '\n' + '    '*deep + 'private:\n'
    pPrivate = len(cppBuf)
    cppBuf += '\n' + '    '*deep + '}\n'
    
    for con in cppSchema.constructor:
        data = _makeCppConstructor(con, cppSchema.name, deep)
        cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]

        pPublic += len(data)
        pProtect += len(data)
        pPrivate += len(data)
        
    if cppSchema.HasField('destructor'):
        data = _makeCppDestructor(cppSchema.destructor, cppSchema.name, deep)
        cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]

        pPublic += len(data)
        pProtect += len(data)
        pPrivate += len(data)

    for met in cppSchema.method:
        data = _makeCppMethod(met, deep)
        if _checkPublic(data):
            data = data[7:]
            cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]

            pPublic += len(data)
            pProtect += len(data)
            pPrivate += len(data)
        elif _checkProtect(data):
            data = data[10:]
            cppBuf = cppBuf[:pProtect] + data + cppBuf[pProtect:]

            pProtect += len(data)
            pPrivate += len(data)
        else:
            data = data[8:]
            cppBuf = cppBuf[:pPrivate] + data + cppBuf[pPrivate:]

            pPrivate += len(data)

    for mem in cppSchema.member_var:
        data = _makeCppMemberVar(mem, deep)
        if _checkPublic(data):
            data = data[7:]
            cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]

            pPublic += len(data)
            pProtect += len(data)
            pPrivate += len(data)
        elif _checkProtect(data):
            data = data[10:]
            cppBuf = cppBuf[:pProtect] + data + cppBuf[pProtect:]

            pProtect += len(data)
            pPrivate += len(data)
        else:
            data = data[8:]
            cppBuf = cppBuf[:pPrivate] + data + cppBuf[pPrivate:]

            pPrivate += len(data)

    if cppSchema.HasField('enum_'):
        data = _makeCppEnum(cppSchema.enum_, deep)
        cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]
    
        pPublic += len(data)
        pProtect += len(data)
        pPrivate += len(data)

    for icls in cppSchema.inner_class:
        data = _makeCppClass(icls, deep)
        cppBuf = cppBuf[:pPrivate] + data + cppBuf[pPrivate:]

        pPrivate += len(data)
    
    return cppBuf

def _makeCppConstructor(cppSchema, className, deep):
    deep += 1

    cppBuf = '    '*deep + className + '('
    argFlag = True
    for arg in cppSchema.argument:
        if argFlag:
            argFlag = False
            data = _makeCppArgVar(arg)
        else:
            data = ', ' + _makeCppArgVar(arg)

        cppBuf += data
    cppBuf += '){\n'

    for conInit in cppSchema.const_init:
        cppBuf += _makeCppConstInit(conInit, deep)
    
    cppBuf += cppSchema.body.decode('string-escape')
    cppBuf += '\n' + '    '*deep + '}\n'
    return cppBuf

def _makeCppConstInit(cppSchema, deep):
    deep += 1
    cppBuf = '    '*deep + '%s = %s\n' % (cppSchema.name, cppSchema.value)

    return cppBuf

def _makeCppDestructor(cppSchema, className, deep):
    deep += 1

    cppBuf = '    '*deep + '~' + className + '(){\n' + cppSchema.body.decode('string-escape')
    cppBuf += '\n' + '    '*deep + '}\n'

    return cppBuf

def _makeCppMethod(cppSchema, deep):
    deep += 1
    
    if cppSchema.access_qf == 'protected':
        cppBuf = 'protected\n'
    elif cppSchema.access_qf == 'private':
        cppBuf = 'private\n'
    else:
        cppBuf = 'public\n'

    cppBuf += '    '*deep + '%s %s(' % (cppSchema.return_type, cppSchema.name)
    
    argFlag = True
    for arg in cppSchema.argument:
        if argFlag:
            argFlag = False
            data = _makeCppArgVar(arg)
        else:
            data = ', ' + _makeCppArgVar(arg)

        cppBuf += data
        
    cppBuf += '){\n' + cppSchema.body.decode('string-escape')
    cppBuf += '\n' + '    '*deep + '}\n'
    return cppBuf

def _makeCppMemberVar(cppSchema, deep):
    deep += 1
    return _makeCppVar(cppSchema, '    '*deep) + ';\n'

def _makeCppArgVar(cppSchema):
    return _makeCppVar(cppSchema, '')

def _makeCppVar(cppSchema, cppBuf):
    if cppBuf:
        if not cppSchema.HasField('access_qf'):
            cppBuf = 'private\n' + cppBuf
        elif cppSchema.access_qf == 'public':
            cppBuf = 'public\n' + cppBuf
        elif cppSchema.access_qf == 'protected':
            cppBuf = 'protected\n' + cppBuf
        else:
            cppBuf = 'private\n' + cppBuf

    if cppSchema.HasField('static') and cppSchema.static:
            cppBuf += 'static '
    if cppSchema.HasField('const') and cppSchema.const:
            cppBuf += ' const '
    
    cppBuf += '%s %s' % (cppSchema.type, cppSchema.name)
    if cppSchema.array:
        cppBuf += '[]'

    return cppBuf

def _makeCppEnum(cppSchema, deep):
    deep += 1

    cppBuf = '    '*deep + 'enum  %s {\n' % cppSchema.name
    deep += 1
    firstFlag = True
    for val in cppSchema.value:
        if firstFlag:
            firstFlag = False
            cppBuf += '    '*deep + '%s = 1' % val
        else :
            cppBuf += ',\n' + '    '*deep + val

    deep -= 1
    cppBuf += '\n' + '    '*deep + '}\n'

    return cppBuf
