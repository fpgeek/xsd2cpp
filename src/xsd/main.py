# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_parser as xsdParser
import xsd_to_cpp as xsd2cpp
import os
import google.protobuf.text_format as PT
import itertools
import operator

def writePbFile(filePath, pbMsg):
    f = open(filePath, "wb")
    PT.PrintMessage(pbMsg, f)
    f.close()

def createFileNsNameMap(xsdFileName, pbSchemas):
    allNsList = [ns for pbSchema in pbSchemas for ns in pbSchema.namespace if ns.prefix != '']
    allImportList = [imp for pbSchema in pbSchemas for imp in pbSchema.import_]

    fileNsNameMap = {}
    for ns in allNsList:
        for imp in allImportList:
            if ns.uri == imp.namespace:
                fileNsNameMap[imp.schema_location] = 'ns_%s' % ns.prefix

    return fileNsNameMap



def run(xsdFileDirPath):
    allSchema = xsdParser.ALL_SCHEMA()
    for xsdFileName in [filePath for filePath in os.listdir(xsdFileDirPath) if filePath.endswith('.xsd')]:
        xsdFilePath = os.path.join(xsdFileDirPath, xsdFileName)
        schema = xsdParser.SCHEMA(xsdFilePath)
        allSchema.append(schema)

    pbSchemas = allSchema.parse()
    fileNsMap = createFileNsNameMap(xsdFileName, pbSchemas)
    for pbSchema in pbSchemas:
        writePbFile('../../files/pb_text/%s.txt' % pbSchema.file_name, pbSchema)

        cppProtoFile = xsd2cpp.parseToCpp(pbSchema)
        cppProtoFile.namespace = fileNsMap.get(xsdFileName)
        writePbFile('../../files/pb_text/%s.cpp.txt' % pbSchema.file_name, cppProtoFile)

if __name__ == '__main__':
    run('../../files/xsd')