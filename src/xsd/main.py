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

def createFileNsNameMap(pbSchemas):
    allNsList = [ns for pbSchema in pbSchemas for ns in pbSchema.namespace if ns.prefix != '']
    allImportList = [imp for pbSchema in pbSchemas for imp in pbSchema.import_]

    fileNsNameMap = {}
    for ns in allNsList:
        for imp in allImportList:
            if ns.uri == imp.namespace:
                fileNsNameMap[imp.schema_location] = '%s' % ns.prefix

    return fileNsNameMap



def run(xsdFileDirPath):
    allSchema = xsdParser.ALL_SCHEMA()
    for xsdFileName in [filePath for filePath in os.listdir(xsdFileDirPath) if filePath.endswith('.xsd')]:
        xsdFilePath = os.path.join(xsdFileDirPath, xsdFileName)
        schema = xsdParser.SCHEMA(xsdFilePath)
        allSchema.append(schema)

    pbSchemas = allSchema.parse()
    fileNsMap = createFileNsNameMap(pbSchemas)
    print fileNsMap
    for pbSchema in pbSchemas:
        writePbFile('../../files/pb_text/%s.txt' % pbSchema.file_name, pbSchema)

        fileNsName = fileNsMap.get(pbSchema.file_name)
        if fileNsName is None:
            fileNsName = pbSchema.file_name[:1]

        pbSchema.xml_ns_prefix = fileNsName
        cppProtoFile = xsd2cpp.parseToCpp(pbSchema)
        cppProtoFile.namespace = 'ns_%s' % fileNsName

        writePbFile('../../files/pb_text/%s.cpp.txt' % pbSchema.file_name, cppProtoFile)
        txt2cpp.cppParse(cppProtoFile)
        txt2h.hParse(cppProtoFile)

if __name__ == '__main__':
    run('../../files/xsd')
