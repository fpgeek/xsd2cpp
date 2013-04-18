# -*- encoding=utf-8 -*-

__author__ = 'msgundam00'

import os
import StringIO

def hParse(cppProtoFile, fileName):
    cppProtoBuf = StringIO.StringIO(cppProtoFile)
    hFile = open('../../files/header/%s.h' % fileName.replace('.', '_'), 'wb') 
    hBuf = ''
    deep = 0

    while 1:
        line = cppProtoBuf.readline()
        if not line:
            break
        
        if _checkType(line, 'namespace'):
            hBuf += 'namespace ' + _getVal(line) + '{\n'
        elif _checkType(line, 'name'): 
            data = _getVal(line)
            hBuf += '#ifndef %s \n' % data
            hBuf += '#define %s 0 \n\n' % data
            hBuf += '#include "xsddata.h"\n' 
            hBuf += '#include <vector>\n' 
            hBuf += '#include <string>\n'
            hBuf += '#include <iostream>\n'
        elif _checkType(line, 'include_file'):
            hBuf += '#include "%s"\n' % _getVal(line)
        elif _checkType(line, 'class_'):
            hBuf += _makeHClass(cppProtoBuf, deep)
    
    hBuf += '}'
    hFile.write(hBuf)

def _getVal(txtLine):
    index = txtLine.index(':')
    return txtLine[index+2:].replace('"', '').replace('\n', '')

def _checkPublic(data):
    return data.startswith('public\n')

def _checkType(txtline, comment):
    return txtline.strip().startswith(comment)
            
def _makeHClass(cppProtoBuf, deep):
    deep += 1

    hBuf = '    '*deep + 'class '
    pHead = len(hBuf)
    hBuf += '{\n' + '    '*deep + 'public:\n'
    pPublic = len(hBuf)
    hBuf += '\n' + '    '*deep + 'private:\n'
    pPrivate = len(hBuf)
    hBuf += '\n' + '    '*deep + '}\n'

    while 1:
        line = cppProtoBuf.readline()
        if _checkType(line, '}'):
            break

        if _checkType(line, 'name'):
            className = _getVal(line)
            hBuf = hBuf[:pHead] + className + hBuf[pHead:]

            pHead += len(className)
            pPublic += len(className)
            pPrivate += len(className)
        elif _checkType(line, 'parent_class'):
            parentName = ' : public ' + _getVal(line)
            hBuf = hBuf[:pHead] + parentName + hBuf[pHead:]

            pPublic += len(parentName)
            pPrivate += len(parentName)
        elif _checkType(line, 'constructor'):
            data = _makeHConstructor(cppProtoBuf, className, deep)
            hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

            pPublic += len(data)
            pPrivate += len(data)
        elif _checkType(line, 'destructor'):
            data = _makeHDestructor(cppProtoBuf, className, deep)
            hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

            pPublic += len(data)
            pPrivate += len(data)
        elif _checkType(line, 'method'):
            data = _makeHMethod(cppProtoBuf, deep)
            if _checkPublic(data):
                data = data[7:]
                hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

                pPublic += len(data)
                pPrivate += len(data)
            else:
                data = data[8:]
                hBuf = hBuf[:pPrivate] + data + hBuf[pPrivate:]

                pPrivate += len(data)
        elif _checkType(line, 'member_var'):
            data = _makeHMemberVar(cppProtoBuf, deep)
            if _checkPublic(data):
                data = data[7:]
                hBuf = hBuf[:pPublic] + data + hBuf[pPublic]

                pPublic += len(data)
                pPrivate += len(data)
            else:
                data = data[8:]
                hBuf = hBuf[:pPrivate] + data + hBuf[pPrivate:]

                pPrivate += len(data)
        elif _checkType(line, 'enum'):
            data = _makeHEnum(cppProtoBuf, deep)
            hBuf = hBuf[:pPublic] + data + hBuf[pPublic:]

            pPublic += len(data)
            pPrivate += len(data)
        elif _checkType(line, 'inner_class'):
            data = _makeHClass(cppProtoBuf, deep)
            hBuf = hBuf[:pPrivate] + data + hBuf[pPrivate:]

            pPrivate += len(data)
    hBuf += '\n'
    return hBuf

def _makeHConstructor(cppProtoBuf, className, deep):
    deep += 1

    hBuf = '    '*deep + className + '('
    pArg = len(hBuf)
    hBuf += ');\n'

    argFlag = True

    while 1:
        line = cppProtoBuf.readline()
        if _checkType(line, '}'):
            break
        
        if _checkType(line, 'argument'):
            if argFlag:
                argFlag = False
                data = _makeHArgVar(cppProtoBuf)
            else:
                data = ', ' + _makeHArgVar(cppProtoBuf)

            hBuf = hBuf[:pArg] + data + hBuf[pArg:]
            pArg += len(data)
        elif _checkType(line, 'const_init'):
            _makeHConstInit(cppProtoBuf)
        #elif _checkType(line, 'body'):

    return hBuf

def _makeHDestructor(cppProtoBuf, className, deep):
    deep += 1

    hBuf = '    '*deep + '~' + className + '();\n'

    while 1:
        line = cppProtoBuf.readline()
        if _checkType(line, '}'):
            break
        
        #if _checkType(line, 'body'):
    
    return hBuf


def _makeHConstInit(cppProtoBuf):
    while 1:
        line = cppProtoBuf.readline()
        if _checkType(line, '}'):
            break;

def _makeHMethod(cppProtoBuf, deep):
    deep += 1

    hBuf = '    '*deep
    pProp = len(hBuf)
    pHead = len(hBuf)
    hBuf += '('
    pArg = len(hBuf)
    hBuf += ')'

    argFlag = True
    accessFlag = True

    while 1:
        line = cppProtoBuf.readline()
        if _checkType(line, '}'):
            break

        if _checkType(line, 'access_qf'):
            qf = _getVal(line) + '\n'
            hBuf = qf + hBuf
            accessFlag =False
            
            pProp += len(qf)
            pHead += len(qf)
            pArg += len(qf)
        elif _checkType(line, 'return_type'):
            data = _getVal(line) + ' '
            hBuf = hBuf[:pHead] + data + hBuf[pHead:]

            pHead += len(data)
            pArg += len(data)
        elif _checkType(line, 'name'):
            data = _getVal(line)
            hBuf = hBuf[:pHead] + data + hBuf[pHead:]

            pArg += len(data)
        elif _checkType(line, 'argument'):
            if argFlag:
                argFlag = False
                data = _makeHArgVar(cppProtoBuf)
            else:
                data = ', ' + _makeHArgVar(cppProtoBuf)

            hBuf = hBuf[:pArg] + data + hBuf[pArg:]
            pArg += len(data)
        elif _checkType(line, 'const') and _getVal(line) == 'true':
            hBuf += ' const'
        elif _checkType(line, 'static') and _getVal(line) == 'true':
            data = 'static '
            hBuf = hBuf[:pProp] + data + hBuf[pProp:]

            pProp += len(data)
            pHead += len(data)
            pArg += len(data)
        #elif _checkType(line, 'body'):
    
    if accessFlag:
        hBuf = 'public\n' + hBuf
    hBuf += ';\n'
    return hBuf

def _makeHMemberVar(cppProtoBuf, deep):
    deep += 1
    hBuf = _makeHVar(cppProtoBuf, '    '*deep)
    hBuf += ';\n'

    return hBuf

def _makeHArgVar(cppProtoBuf):
    return _makeHVar(cppProtoBuf, '')

def _makeHVar(cppProtoBuf, hBuf):
    if not hBuf:
        accessFlag = False
    else:
        accessFlag = True
    pProp = len(hBuf)
    pHead = len(hBuf)
    
    while 1:
        line = cppProtoBuf.readline()
        if _checkType(line, '}'):
            break

        if _checkType(line, 'access_qf'):
            accessFlag = False
            qf = _getVal(line) + '\n'
            hBuf = qf + hBuf
            
            pProp += len(qf)
            pHead += len(qf)
        elif _checkType(line, 'type'):
            data = _getVal(line) + ' '
            hBuf = hBuf[:pHead] + data + hBuf[pHead:]

            pHead += len(data)
        elif _checkType(line, 'name'):
            data = _getVal(line) + ' '
            hBuf = hBuf[:pHead] + data + hBuf[pHead:]
        elif _checkType(line, 'const') and _getVal(line) == 'true':
            data = 'const '
            hBuf = hBuf[:pProp] + data + hBuf[pProp:]

            pHead += len(data)
        elif _checkType(line, 'static') and _getVal(line) == 'true':
            data = 'static '
            hBuf = hBuf[:pProp] + data + hBuf[pProp:]

            pProp += len(data)
            pHead += len(data)
        elif _checkType(line, 'array') and _getVal(line) == 'true':
            hBuf += '[]'
    
    if accessFlag:
        hBuf = 'private\n' + hBuf
    return hBuf

def _makeHEnum(cppProtoBuf, deep):
    deep += 1

    hBuf = '    '*deep + 'enum '
    pHead = len(hBuf)
    hBuf += '{\n'
    pBody = len(hBuf)
    hBuf += '\n' + '    '*deep + '}'

    deep += 1
    firstFlag = True
    
    while 1:
        line = cppProtoBuf.readline()
        if _checkType(line, '}'):
            break

        if _checkType(line, 'name'):
            data = _getVal(line)
            hBuf = hBuf[:pHead] + data + hBuf[pHead:]

            pBody += len(data)
        elif _checkType(line, 'value'):
            if firstFlag:
                firstFlag = False
                data = '    '*deep + _getVal(line) + ' = 1'
            else:
                data = ',\n' + '    '*deep + _getVal(line)

            hBuf = hBuf[:pBody] + data + hBuf[pBody:]
            pBody += len(data)
    
    hBuf += '\n'
    return hBuf

if __name__ == '__main__':
    parse('dml-chart.xsd')
