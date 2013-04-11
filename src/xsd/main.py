# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

import xsd_parser as xsdParser
# import proto_file_writer as PBWriter
# import message_pb2 as MSGPB
# from common_util import *
import xsd_to_cpp as xsd2cpp
import os
import google.protobuf.text_format as PT

def writePbFile(filePath, pbMsg):
    f = open(filePath, "wb")
    PT.PrintMessage(pbMsg, f)
    f.close()


def run(xsdFileDirPath):
    allSchema = xsdParser.ALL_SCHEMA()
    for xsdFileName in [filePath for filePath in os.listdir(xsdFileDirPath) if filePath.endswith('.xsd')]:
        xsdFilePath = os.path.join(xsdFileDirPath, xsdFileName)
        schema = xsdParser.SCHEMA(xsdFilePath)
        allSchema.append(schema)

    #mpbProtoFileList = []

    pbSchemas = allSchema.parse()
    for pbSchema in pbSchemas:
        writePbFile('../../files/pb_text/%s.txt' % pbSchema.file_name, pbSchema)

        cppProtoFile = xsd2cpp.parseToCpp(pbSchema)
        writePbFile('../../files/pb_text/%s.cpp.txt' % pbSchema.file_name, cppProtoFile)





















        # mpbProtoFile = PBWriter.parsePbSchema(pbSchema)
        # mpbProtoFile.xsd_file_name = pbSchema.file_name
        # mpbProtoFileList.append(mpbProtoFile)
        #
        # f = open('../../files/pb_text/%s.proto.txt' % pbSchema.file_name, "wb")
        # PT.PrintMessage(mpbProtoFile, f)
        # f.close()



    # mpbAnyElemProtoFile = MSGPB.ProtoFile()
    # mpbAnyElemProtoFile.package_name = 'xml._any_.xsd'
    # mpbAnyMsg = mpbAnyElemProtoFile.msg.add()
    # mpbAnyMsg.name = '_AllAny_'
    # mpbAnyMsg.kind = MSGPB.Message.Element
    # for mpbProtoFile in mpbProtoFileList:
    #     mpbAnyElemProtoFile.import_.append( getProtoFileName(mpbProtoFile.xsd_file_name) )
    #     for mpbMessage in mpbProtoFile.msg:
    #         if mpbMessage.kind == MSGPB.Message.Element and mpbMessage.name == '_Any_':
    #             for mpbField in mpbMessage.field:
    #                 mpbAnyField = mpbAnyMsg.field.add()
    #                 mpbAnyField.CopyFrom(mpbField)
    #                 mpbAnyField.type = '%s.%s' % (getPackageName(mpbProtoFile.xsd_file_name), mpbField.type)

    # print mpbAnyElemProtoFile





if __name__ == '__main__':
    run('../../files/xsd')