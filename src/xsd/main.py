# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_parser as xsdParser
import xsd_to_cpp as xsd2cpp
import pbtxt_to_cpp as txt2cpp
import pbtxt_to_h as txt2h
import os
import google.protobuf.text_format as PT

# TODO
userSetNsPrefixMap = {
'http://schemas.openxmlformats.org/drawingml/2006/chart':'c',
'http://schemas.openxmlformats.org/drawingml/2006/diagram':'dgm',
'http://schemas.openxmlformats.org/drawingml/2006/lockedCanvas':'lc',
'http://schemas.openxmlformats.org/officeDocument/2006/characteristics':'ac',
'http://schemas.openxmlformats.org/officeDocument/2006/bibliography':'b',
'http://schemas.openxmlformats.org/officeDocument/2006/customXml':'ds',
'http://schemas.openxmlformats.org/officeDocument/2006/custom-properties':'op',
'http://schemas.openxmlformats.org/officeDocument/2006/extended-properties':'ap',
'http://schemas.openxmlformats.org/spreadsheetml/2006/main':'x',
'http://schemas.openxmlformats.org/markup-compatibility/2006':'mc',
'http://schemas.openxmlformats.org/package/2006/metadata/core-properties':'cp',
'http://schemas.openxmlformats.org/package/2006/relationships':'rs',
'http://schemas.openxmlformats.org/package/2006/content-types':'ct'
}




def writePbFile(filePath, pbMsg):
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

        if defaultURI in userSetNsPrefixMap.keys():
            nsPrefix = userSetNsPrefixMap.get(defaultURI)
        elif len(nsPrefixList) > 0:
            nsPrefix = nsPrefixList[0]
        else:
            print defaultURI

    return nsPrefix


def run(xsdFileDirPath):
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
        for schemaLocation in fileNsMap:
            xmlNs = pbSchema.xml_namespace.add()

            fileNsPrefix = fileNsMap[schemaLocation]
            xmlNs.prefix = fileNsPrefix

            nsList = [imp.namespace for imp in allImportList if imp.schema_location == schemaLocation]
            if len(nsList) > 0:
                xmlNs.uri = nsList[0]

        writePbFile('../../files/pb_text/%s.txt' % pbSchema.file_name, pbSchema)

        fileNsName = fileNsMap.get(pbSchema.file_name)
        if fileNsName is None:
            fileNsName = getFileNsNameFormDefaultNs(pbSchema, allNsList)


        pbSchema.xml_ns_prefix = fileNsName
        cppProtoFile = xsd2cpp.parseToCpp(pbSchema, pbSchemas)
        cppProtoFile.namespace = 'ns_%s' % fileNsName

        writePbFile('../../files/pb_text/%s.cpp.txt' % pbSchema.file_name, cppProtoFile)

        txt2cpp.cppParse(cppProtoFile, '../../files/build_test/src/%s.cpp' % cppProtoFile.name)
        txt2h.hParse(cppProtoFile, '../../files/build_test/include/%s.h' % cppProtoFile.name)

if __name__ == '__main__':
    os.chdir(os.path.dirname( os.path.abspath( __file__ ) ))
    run('../../files/xsd')
