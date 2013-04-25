# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_parser as xsdParser
import xsd_to_cpp as xsd2cpp
import pbtxt_to_cpp as txt2cpp
import pbtxt_to_h as txt2h
import os
import google.protobuf.text_format as PT

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
        if len(nsPrefixList) > 0:
            nsPrefix = nsPrefixList[0]
        else:
            nsPrefix = defaultURI.split('/')[-1].replace('-', '_')

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
    run('../../files/xsd')
