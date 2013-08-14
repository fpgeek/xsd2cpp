# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_parser as xsdParser
import xsd_to_cpp as xsd2cpp
import pbtxt_to_cpp as txt2cpp
import pbtxt_to_h as txt2h
import os, sys
import google.protobuf.text_format as PT

# userSetNsPrefixMap = {
# 'http://schemas.openxmlformats.org/drawingml/2006/chart':'c',
# 'http://schemas.openxmlformats.org/drawingml/2006/diagram':'dgm',
# 'http://schemas.openxmlformats.org/drawingml/2006/lockedCanvas':'lc',
# 'http://schemas.openxmlformats.org/officeDocument/2006/characteristics':'ac',
# 'http://schemas.openxmlformats.org/officeDocument/2006/bibliography':'b',
# 'http://schemas.openxmlformats.org/officeDocument/2006/customXml':'ds',
# 'http://schemas.openxmlformats.org/officeDocument/2006/custom-properties':'op',
# 'http://schemas.openxmlformats.org/officeDocument/2006/extended-properties':'ap',
# 'http://schemas.openxmlformats.org/spreadsheetml/2006/main':'x',
# 'http://schemas.openxmlformats.org/markup-compatibility/2006':'mc',
# 'http://schemas.openxmlformats.org/package/2006/metadata/core-properties':'cp',
# 'http://schemas.openxmlformats.org/package/2006/relationships':'rs',
# 'http://schemas.openxmlformats.org/package/2006/content-types':'ct',
# 'http://schemas.microsoft.com/office/powerpoint/2012/main':'p15',
# 'http://www.haansoft.com/HWPML':'hml'
# }

pythonFileAbsPath = os.path.dirname( os.path.abspath( __file__ ) )

def readUserSetNsPrefixMap():
    f = open(os.path.join(pythonFileAbsPath, 'ns_prefix_map.cfg'), 'r')
    nsPrefixMap = eval(f.read())
    f.close()
    return nsPrefixMap

def writePbFile(filePath, pbMsg):
    dirPath = os.path.dirname(filePath)
    if not os.path.exists(dirPath):
        os.makedirs(dirPath)

    f = open(filePath, "wb")
    PT.PrintMessage(pbMsg, f)
    f.close()


def createFileNsNameMap(allNsList, allImportList):
    fileNsNameMap = {}
    for ns in allNsList:
        for imp in allImportList:
            if ns.uri == imp.namespace:
                fileNsNameMap[imp.schema_location] = '%s' % ns.prefix

    return fileNsNameMap


def getFileNsNameFormDefaultNs(pbSchema, allNsList):
    nsPrefix = None
    defaultURI = [ns.uri for ns in pbSchema.namespace if ns.prefix == '']
    if len(defaultURI) > 0:
        defaultURI = defaultURI[0]
        nsPrefixList = [ns.prefix for ns in allNsList if ns.uri == defaultURI]

        userSetNsPrefixMap = readUserSetNsPrefixMap()

        if defaultURI in userSetNsPrefixMap.keys():
            nsPrefix = userSetNsPrefixMap.get(defaultURI)
        elif len(nsPrefixList) > 0:
            nsPrefix = nsPrefixList[0]
        else:
            print defaultURI

    return nsPrefix


def copyFile(srcFile, destFile):
    sf = open(srcFile, 'rb')

    dirPath = os.path.dirname(destFile)
    if not os.path.exists(dirPath):
        os.makedirs(dirPath)

    df = open(destFile, 'wb')
    df.write(sf.read())
    sf.close()
    df.close()

def run(xsdFileDirPath, outputHeaderDirPath, outputCppDirPath):
    allSchema = xsdParser.ALL_SCHEMA()
    for xsdFileName in [filePath for filePath in os.listdir(xsdFileDirPath) if filePath.endswith('.xsd')]:
        xsdFilePath = os.path.join(xsdFileDirPath, xsdFileName)
        schema = xsdParser.SCHEMA(xsdFilePath)
        allSchema.append(schema)

    pbSchemas = allSchema.parse()

    allNsList = [ns for pbSchema in pbSchemas for ns in pbSchema.namespace if ns.prefix != '']
    allImportList = [imp for pbSchema in pbSchemas for imp in pbSchema.import_]

    fileNsMap = createFileNsNameMap(allNsList, allImportList)
    for pbSchema in pbSchemas:
        fileNsName = fileNsMap.get(pbSchema.file_name)
        if fileNsName is None:
            fileNsName = getFileNsNameFormDefaultNs(pbSchema, allNsList)

        if fileNsName is None:
            print 'xsd2cpp execution failed - namespace prefix not found'
            return
        pbSchema.xml_ns_prefix = fileNsName

    for pbSchema in pbSchemas:
        for schemaLocation in fileNsMap:
            xmlNs = pbSchema.xml_namespace.add()

            fileNsPrefix = fileNsMap[schemaLocation]
            xmlNs.prefix = fileNsPrefix

            nsList = [imp.namespace for imp in allImportList if imp.schema_location == schemaLocation]
            if len(nsList) > 0:
                xmlNs.uri = nsList[0]

        writePbFile(os.path.join(outputHeaderDirPath, 'pb_text/%s.txt') % pbSchema.file_name, pbSchema)

        cppProtoFile = xsd2cpp.parseToCpp(pbSchema, pbSchemas)
        cppProtoFile.namespace = 'ns_%s' % pbSchema.xml_ns_prefix

        writePbFile(os.path.join(outputCppDirPath,'pb_text/%s.cpp.txt') % pbSchema.file_name, cppProtoFile)

        txt2cpp.cppParse(cppProtoFile, os.path.join(outputCppDirPath, '%s.cpp') % cppProtoFile.name)
        txt2h.hParse(cppProtoFile, os.path.join(outputHeaderDirPath, '%s.h') % cppProtoFile.name)

        copyFile(os.path.join(pythonFileAbsPath, 'cpp_files', 'xsdtype', 'xsdtype.h'), os.path.join(outputHeaderDirPath, 'xsdtype.h'))
        copyFile(os.path.join(pythonFileAbsPath, 'cpp_files', 'xsdtype', 'xsdtype.cpp'), os.path.join(outputCppDirPath, 'xsdtype.cpp'))
        copyFile(os.path.join(pythonFileAbsPath, 'cpp_files', 'main', 'main.cpp'), os.path.join(outputCppDirPath, 'main', 'main.cpp'))

if __name__ == '__main__':
    # os.chdir(pythonFileAbsPath)

    if len(sys.argv) == 4:
        run(*(sys.argv[1:]))
    else:
        print 'error. please execute the following command.'
        print 'python main.py [directory path that includes xsd files] [directory path that generates output header file] [directory path that generates output cpp file]'
