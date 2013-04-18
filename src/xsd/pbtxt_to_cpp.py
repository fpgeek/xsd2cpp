# -*- encoding=utf-8 -*-

__author__ = 'msgundam00'

import os
import StringIO

def cppParse(cppSchema, filePath):
    #cppFile = open('../../files/cpp/%s.cpp' % cppSchema.name, 'wb')
    cppFile = open(filePath, 'wb')
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
            
def _makeCppClass(cppSchema, deep):
    deep += 1

    name = cppSchema.name
    cppBuf = '\n' + '    '*deep + '// %s\n' % cppSchema.name
    
    for con in cppSchema.constructor:
        cppBuf += _makeCppConstructor(con, name, deep)
        
    if cppSchema.HasField('destructor'):
        cppBuf += _makeCppDestructor(cppSchema.destructor, name, deep)

    for met in cppSchema.method:
        data = _makeCppMethod(met, name, deep)
        if _checkPublic(data):
            data = data[7:]
            cppBuf += data

    for mem in cppSchema.member_var:
        data = _makeCppMemberVar(mem, name, deep)
        if _checkPublic(data):
            data = data[7:]
            cppBuf += data
    
    return cppBuf

def _makeCppConstructor(cppSchema, className, deep):
    cppBuf = '    '*deep + className + '::' + className + '('
    argFlag = True
    for arg in cppSchema.argument:
        if argFlag:
            argFlag = False
            data = _makeCppArgVar(arg)
        else:
            data = ', ' + _makeCppArgVar(arg)

        cppBuf += data
    cppBuf += ')\n'

    conInitFlag = True
    for conInit in cppSchema.const_init:
        if conInitFlag:
            conInitFlag = False
            cppBuf += '    '*deep + ':' + _makeCppConstInit(conInit)
        else:
            cppBuf += ',\n' + '    '*deep + _makeCppConstInit(conInit)

    cppBuf += '\n' + '    '*deep + '{\n'
    
    if cppSchema.HasField('body'):
        cppBuf += _makeCppBody(cppSchema.body.decode('string-escape'), deep)
    cppBuf += '    '*deep + '}\n'
    return cppBuf

def _makeCppConstInit(cppSchema):
    return '%s(%s)' % (cppSchema.name, cppSchema.value)

def _makeCppDestructor(cppSchema, className, deep):
    cppBuf = '    '*deep + '%s::~%s' % (className, className) + '()\n{\n'
    if cppSchema.HasField('body'):
        cppBuf += _makeCppBody(cppSchema.body.decode('string-escape'), deep)
    cppBuf += '    '*deep + '}\n'

    return cppBuf

def _makeCppMethod(cppSchema, className, deep):
    if cppSchema.access_qf == 'protected':
        cppBuf = 'protected\n'
    elif cppSchema.access_qf == 'private':
        cppBuf = 'private\n'
    else:
        cppBuf = 'public\n'

    cppBuf += '    '*deep + '%s %s::%s(' % (cppSchema.return_type, className, cppSchema.name)
    
    argFlag = True
    for arg in cppSchema.argument:
        if argFlag:
            argFlag = False
            data = _makeCppArgVar(arg)
        else:
            data = ', ' + _makeCppArgVar(arg)

        cppBuf += data
    
    cppBuf += ')'
    if cppSchema.HasField('const') and cppSchema.const:
        cppBuf += ' const'
    cppBuf += '\n' + '    '*deep + '{'
    if cppSchema.HasField('body'):
        cppBuf += _makeCppBody(cppSchema.body.decode('string-escape'), deep) + '    '*deep
    cppBuf += '}\n'
    return cppBuf

def _makeCppMemberVar(cppSchema, className, deep):
    deep += 1
    return _makeCppVar(cppSchema, '    '*deep) + ';\n'

def _makeCppArgVar(cppSchema):
    return _makeCppVar(cppSchema, '')

def _makeCppVar(cppSchema, cppBuf):
    if cppBuf:
        if cppSchema.access_qf == 'public':
            cppBuf = 'public\n' + cppBuf
        elif cppSchema.access_qf == 'protected':
            cppBuf = 'protected\n' + cppBuf
        else:
            cppBuf = 'private\n' + cppBuf

    if cppSchema.HasField('static') and cppSchema.static:
            cppBuf += 'static '
    if cppSchema.HasField('const') and cppSchema.const:
            cppBuf += 'const '
    
    cppBuf += '%s %s' % (cppSchema.type, cppSchema.name)
    if cppSchema.array:
        cppBuf += '[]'

    return cppBuf

def _makeCppBody(body, deep):
    bodyBuf = StringIO.StringIO(body)
    cppBuf = ''
    while 1:
        line = bodyBuf.readline()
        if not line:
            break
        
        cppBuf += '    '*deep + line

    return cppBuf
