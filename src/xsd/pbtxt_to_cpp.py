# -*- encoding=utf-8 -*-

__author__ = 'msgundam00'

import os

def parse(fileName):
	txtFile = open('../../files/pb_text/%s.cpp.txt' % fileName, "rb")
	cppFile = open('../../files/cpp/%s.cpp' % fileName, 'wb')
	cppBuf = ''
	deep = 0

	while 1:
		line = txtFile.readline()
		if not line:
			break
		
		if _checkType(line, 'namespace'):
			cppBuf += 'namespace ' + _getVal(line) + '{\n'
		elif _checkType(line, 'name'): 
			cppBuf += '#include "%s.h"\n' % _getVal(line)
			cppBuf += '#include <stdlib.h>\n' 
			cppBuf += '#include <sstream>\n'
		elif _checkType(line, 'include_file'):
			cppBuf += '#include "%s"\n' % _getVal(line)
		elif _checkType(line, 'class_'):
			cppBuf += _makeCppClass(txtFile, deep)
	
	cppBuf += '}'
	cppFile.write(cppBuf)

def _getVal(txtLine):
	index = txtLine.index(':')
	return txtLine[index+2:].replace('"', '').replace('\n', '')

def _checkPublic(data):
	return data.startswith('public\n')

def _checkType(txtline, comment):
	return txtline.strip().startswith(comment)
			
def _makeCppClass(txtFile, deep):
	deep += 1

	cppBuf = '	'*deep + 'class '
	pHead = len(cppBuf)
	cppBuf += '{\n' + '	'*deep + 'public:\n'
	pPublic = len(cppBuf)
	cppBuf += '\n' + '	'*deep + 'private:\n'
	pPrivate = len(cppBuf)
	cppBuf += '\n' + '	'*deep + '}\n'

	while 1:
		line = txtFile.readline()
		if _checkType(line, '}'):
			break

		if _checkType(line, 'name'):
			className = _getVal(line)
			cppBuf = cppBuf[:pHead] + className + cppBuf[pHead:]

			pHead += len(className)
			pPublic += len(className)
			pPrivate += len(className)
		elif _checkType(line, 'parent_class'):
			parentName = ' : public ' + _getVal(line)
			cppBuf = cppBuf[:pHead] + parentName + cppBuf[pHead:]

			pPublic += len(parentName)
			pPrivate += len(parentName)
		elif _checkType(line, 'constructor'):
			data = _makeCppConstructor(txtFile, className, deep)
			cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]

			pPublic += len(data)
			pPrivate += len(data)
		elif _checkType(line, 'destructor'):
			data = _makeCppDestructor(txtFile, className, deep)
			cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]

			pPublic += len(data)
			pPrivate += len(data)
		elif _checkType(line, 'method'):
			data = _makeCppMethod(txtFile, deep)
			if _checkPublic(data):
				data = data[7:]
				cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]

				pPublic += len(data)
				pPrivate += len(data)
			else:
				data = data[8:]
				cppBuf = cppBuf[:pPrivate] + data + cppBuf[pPrivate:]

				pPrivate += len(data)
		elif _checkType(line, 'member_var'):
			data = _makeCppMemberVar(txtFile, deep)
			if _checkPublic(data):
				data = data[7:]
				cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic]

				pPublic += len(data)
				pPrivate += len(data)
			else:
				data = data[8:]
				cppBuf = cppBuf[:pPrivate] + data + cppBuf[pPrivate:]

				pPrivate += len(data)
		elif _checkType(line, 'enum'):
			data = _makeCppEnum(txtFile, deep)
			cppBuf = cppBuf[:pPublic] + data + cppBuf[pPublic:]

			pPublic += len(data)
			pPrivate += len(data)
		elif _checkType(line, 'inner_class'):
			data = _makeCppClass(txtFile, deep)
			cppBuf = cppBuf[:pPrivate] + data + cppBuf[pPrivate:]

			pPrivate += len(data)
	cppBuf += '\n'
	return cppBuf

def _makeCppConstructor(txtFile, className, deep):
	deep += 1

	cppBuf = '	'*deep + className + '('
	pArg = len(cppBuf)
	cppBuf += '){\n'
	pBody = len(cppBuf)
	cppBuf += '\n' + '	'*deep + '}'

	argFlag = True

	while 1:
		line = txtFile.readline()
		if _checkType(line, '}'):
			break
		
		if _checkType(line, 'argument'):
			if argFlag:
				argFlag = False
				data = _makeCppArgVar(txtFile)
			else:
				data = ', ' + _makeCppArgVar(txtFile)

			cppBuf = cppBuf[:pArg] + data + cppBuf[pArg:]
			pArg += len(data)
			pBody += len(data)
		elif _checkType(line, 'const_init'):
			data = _makeCppConstInit(txtFile, deep)
			cppBuf = cppBuf[:pBody] + data + cppBuf[pBody:]

			pBody += len(data)
		elif _checkType(line, 'body'):
			data = _getVal(line).decode('string-escape')
			cppBuf = cppBuf[:pBody] + data + cppBuf[pBody:]

			pBody += len(data)
	
	cppBuf += '\n'
	return cppBuf

def _makeCppDestructor(txtFile, className, deep):
	deep += 1

	cppBuf = '	'*deep + '~' + className + '(){\n'
	pBody = len(cppBuf)
	cppBuf += '\n' + '	'*deep + '}'

	while 1:
		line = txtFile.readline()
		if _checkType(line, '}'):
			break
		
		if _checkType(line, 'body'):
			data = _getVal(line).decode('string-escape')
			cppBuf = cppBuf[:pBody] + data + cppBuf[pBody:]

			pBody += len(data)
	
	cppBuf += '\n'
	return cppBuf

def _makeCppConstInit(txtFile, deep):
	deep += 1
	cppBuf = '	'*deep
	pHead = len(cppBuf)
	cppBuf += ' = '

	while 1:
		line = txtFile.readline()
		if _checkType(line, '}'):
			break;

		if _checkType(line, 'name'):
			data = _getVal(line)
			cppBuf = cppBuf[:pHead] + data + cppBuf[pHead:]
		elif _checkType(line, 'value'):
			data = _getVal(line)
			cppBuf += data

	cppBuf += '\n'
	return cppBuf

def _makeCppMethod(txtFile, deep):
	deep += 1

	cppBuf = '	'*deep
	pHead = len(cppBuf)
	cppBuf += '('
	pArg = len(cppBuf)
	cppBuf += '){\n'
	pBody = len(cppBuf)
	cppBuf += '\n' + '	'*deep + '}'

	argFlag = True
	accessFlag = True

	while 1:
		line = txtFile.readline()
		if _checkType(line, '}'):
			break

		if _checkType(line, 'access_qf'):
			qf = _getVal(line) + '\n'
			cppBuf = qf + cppBuf
			accessFlag =False
			
			pHead += len(qf)
			pArg += len(qf)
			pBody += len(qf)
		elif _checkType(line, 'return_type'):
			data = _getVal(line) + ' '
			cppBuf = cppBuf[:pHead] + data + cppBuf[pHead:]

			pHead += len(data)
			pArg += len(data)
			pBody += len(data)
		elif _checkType(line, 'name'):
			data = _getVal(line)
			cppBuf = cppBuf[:pHead] + data + cppBuf[pHead:]

			pArg += len(data)
			pBody += len(data)
		elif _checkType(line, 'argument'):
			if argFlag:
				argFlag = False
				data = _makeCppArgVar(txtFile)
			else:
				data = ', ' + _makeCppArgVar(txtFile)

			cppBuf = cppBuf[:pArg] + data + cppBuf[pArg:]
			pArg += len(data)
			pBody += len(data)
		#elif _checkType(line, 'const') and _getVal(line) == 'true':
		#elif _checkType(line, 'static') and _getVal(line) == 'true':
		elif _checkType(line, 'body'):
			data = _getVal(line).decode('string-escape')
			cppBuf = cppBuf[:pBody] + data + cppBuf[pBody:]

			pBody += len(data)
	
	if accessFlag:
		cppBuf = 'public\n' + cppBuf
	cppBuf += '\n'
	return cppBuf

def _makeCppMemberVar(txtFile, deep):
	deep += 1
	cppBuf = _makeCppVar(txtFile, '	'*deep)
	cppBuf += ';\n'

	return cppBuf

def _makeCppArgVar(txtFile):
	return _makeCppVar(txtFile, '')

def _makeCppVar(txtFile, cppBuf):
	if not cppBuf:
		accessFlag = False
	else:
		accessFlag = True
	pProp = len(cppBuf)
	pHead = len(cppBuf)
	
	while 1:
		line = txtFile.readline()
		if _checkType(line, '}'):
			break

		if _checkType(line, 'access_qf'):
			accessFlag = False
			qf = _getVal(line) + '\n'
			cppBuf = qf + cppBuf
			
			pProp += len(qf)
			pHead += len(qf)
		elif _checkType(line, 'type'):
			data = _getVal(line) + ' '
			cppBuf = cppBuf[:pHead] + data + cppBuf[pHead:]

			pHead += len(data)
		elif _checkType(line, 'name'):
			data = _getVal(line) + ' '
			cppBuf = cppBuf[:pHead] + data + cppBuf[pHead:]
		elif _checkType(line, 'const') and _getVal(line) == 'true':
			data = 'const '
			cppBuf = cppBuf[:pProp] + data + cppBuf[pProp:]

			pHead += len(data)
		elif _checkType(line, 'static') and _getVal(line) == 'true':
			data = 'static '
			cppBuf = cppBuf[:pProp] + data + cppBuf[pProp:]

			pProp += len(data)
			pHead += len(data)
		elif _checkType(line, 'array') and _getVal(line) == 'true':
			cppBuf += '[]'
	
	if accessFlag:
		cppBuf = 'private\n' + cppBuf
	return cppBuf

def _makeCppEnum(txtFile, deep):
	deep += 1

	cppBuf = '	'*deep + 'enum '
	pHead = len(cppBuf)
	cppBuf += '{\n'
	pBody = len(cppBuf)
	cppBuf += '\n' + '	'*deep + '}'

	deep += 1
	firstFlag = True
	
	while 1:
		line = txtFile.readline()
		if _checkType(line, '}'):
			break

		if _checkType(line, 'name'):
			data = _getVal(line)
			cppBuf = cppBuf[:pHead] + data + cppBuf[pHead:]

			pBody += len(data)
		elif _checkType(line, 'value'):
			if firstFlag:
				firstFlag = False
				data = '	'*deep + _getVal(line) + ' = 1'
			else:
				data = ',\n' + '	'*deep + _getVal(line)

			cppBuf = cppBuf[:pBody] + data + cppBuf[pBody:]
			pBody += len(data)
	
	cppBuf += '\n'
	return cppBuf

if __name__ == '__main__':
	parse('dml-chart.xsd')
