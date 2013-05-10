# -*- encoding=utf-8 -*-

__author__ = 'msgundam00'

import os
import StringIO

def cppParse(cppSchema, filePath):
    cppFile = open(filePath, 'wb')
    cppBuf = '#include "%s.h"\n' % cppSchema.name
    cppBuf += '#include <stdlib.h>\n' 
    cppBuf += '#include <sstream>\n'
    cppBuf += '#include <assert.h>\n'

    deep = 0

    for inFile in cppSchema.include_file:
        cppBuf += '#include "%s"\n' % inFile

    cppBuf += 'namespace %s {\n using namespace std;\n' % cppSchema.namespace
    
    for cls in cppSchema.class_:
        cppBuf += _makeCppClass(cls, '', deep)
    
    cppBuf += '}'
    cppFile.write(cppBuf)
    cppFile.close()

def _checkPublic(data):
    return data.startswith('public\n')
            
def _makeCppClass(cppSchema, namespace, deep):
    deep += 1

    name = cppSchema.name

    cppBuf = '\n' + '    '*deep + '// %s%s\n' % (namespace, name)

    namespace += name + '::'
    
    for con in cppSchema.constructor:
        cppBuf += _makeCppConstructor(con, namespace, name, deep)
        
    if cppSchema.HasField('destructor'):
        cppBuf += _makeCppDestructor(cppSchema.destructor, namespace, name, deep)

    for met in cppSchema.method:
        cppBuf += _makeCppMethod(met, namespace, deep)

    for mem in cppSchema.member_var:
        cppBuf += _makeCppMemberVar(mem, namespace, deep)
    
    for incls in cppSchema.inner_class:
        cppBuf += _makeCppClass(incls, namespace, deep-1)

    staticMemberList = [var for var in cppSchema.member_var if var.static]
    if len(staticMemberList) > 0:
        cppBuf += '%(className)s* %(className)s::default_instance_ = NULL;\n' % {'className': name}
    
    return cppBuf

def _makeCppConstructor(cppSchema, nameSpace, className, deep):
    cppBuf = '    '*deep + nameSpace + className + '('
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

def _makeCppDestructor(cppSchema, nameSpace, className, deep):
    cppBuf = '    '*deep + '%s~%s' % (nameSpace, className) + '()\n{\n'
    if cppSchema.HasField('body'):
        cppBuf += _makeCppBody(cppSchema.body.decode('string-escape'), deep)
    cppBuf += '    '*deep + '}\n'

    return cppBuf

def _makeCppMethod(cppSchema, className, deep):
    cppBuf = '    '*deep + '%s %s%s(' % (cppSchema.return_type, className, cppSchema.name)
    
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
    cppBuf += '}\n\n'
    return cppBuf

def _makeCppMemberVar(cppSchema, className, deep):
    if cppSchema.access_qf == 'private' or cppSchema.HasField('access_qf'):
        if cppSchema.string_list:
            cppBuf = '    '*deep
            # if cppSchema.HasField('static') and cppSchema.static:
            #        cppBuf += 'static '
            if cppSchema.HasField('const') and cppSchema.const:
                   cppBuf += 'const '

            cppBuf += '%s %s%s' % (cppSchema.type, className, cppSchema.name)
            if cppSchema.HasField('array') and cppSchema.array:
                cppBuf += '[] =\n' + '    '*deep + '{\n'
                deep += 1
                FirstArg = True
                for strLst in cppSchema.string_list:
                    if FirstArg:
                        FirstArg = False
                        cppBuf += '    '*deep + '"%s"' % strLst
                    else:
                        cppBuf += ',\n' + '    '*deep + '"%s"' % strLst

                deep -= 1
                cppBuf += '\n' + '    '*deep + '};\n'

                return cppBuf
            else:
                return ''
        else:
            return ''
    else:
        return ''

    # return _makeCppVar(cppSchema, '    '*deep + className) + ';\n'

def _makeCppArgVar(cppSchema):
    cppBuf = ''
    # if cppSchema.HasField('static') and cppSchema.static:
    #         cppBuf += 'static '
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
