# -*- encoding=utf-8 -*-
__author__ = 'fpgeek'

import xsd_pb2 as PB
import message_pb2 as MSGPB
from common_util import *
import google.protobuf.text_format as PT

def parsePbSchema(pbSchema):
    pbXmlWriter = PbToXmlWriter(pbSchema)
    mpbProtoFile = MSGPB.ProtoFile()
    mpbProtoFile.package_name = getPackageName(pbSchema.file_name)
    mpbImportList = parseImports(pbSchema.import_)
    for mpbImport in mpbImportList:
        mpbProtoFile.import_.append(mpbImport)

    mpbMessageList = pbXmlWriter.parseComplexTypes(pbSchema.complex_type)
    for mpbMessage in mpbMessageList:
        mpbProtoFile.msg.add().CopyFrom(mpbMessage)

    mpbElementMsgList = pbXmlWriter.parseRootElements(pbSchema.element)
    if len(mpbElementMsgList) > 0:
        mpbAnyElementMsg = pbXmlWriter.makeAnyElementMsg(mpbElementMsgList)
        mpbElementMsgList.append(mpbAnyElementMsg)
        for mpbElementMsg in mpbElementMsgList:
            mpbProtoFile.msg.add().CopyFrom(mpbElementMsg)

    return mpbProtoFile


class PbToXmlWriter:
    def __init__(self, pbSchema):
        self.pbSchema = pbSchema

    def getOtherPackageName(self, nsPrefix):
        uriList = [ns.uri for ns in self.pbSchema.namespace if ns.prefix == nsPrefix]
        if len(uriList) > 0:
            schemaLocationList = [im.schema_location for im in self.pbSchema.import_ if uriList[0] == im.namespace]
            if len(schemaLocationList) > 0:
                return getPackageName(schemaLocationList[0])

        return None

    def makeAnyElementMsg(self, mpbElementMsgList):
        mpbAnyMsg = MSGPB.Message()
        mpbAnyMsg.kind = MSGPB.Message.Element
        mpbAnyMsg.name = '_Any_'

        for mpbElementMsg in mpbElementMsgList:
            mpbAnyField = mpbAnyMsg.field.add()
            mpbAnyField.modifier = 'optional'
            mpbAnyField.type = mpbElementMsg.name
            mpbAnyField.name = mpbElementMsg.name

        return mpbAnyMsg

    def parseRootElements(self, elements):
        mpbElemMsgList = []
        for element in elements:
            mpbElemMsgList.append(self.parseRootElement(element))
        return mpbElemMsgList

    def parseRootElement(self, element):
        mpbMessage = MSGPB.Message()
        mpbMessage.kind = MSGPB.Message.Element
        mpbMessage.name = element.name
        mpbField = mpbMessage.field.add()
        self.getFieldFromElement(element, mpbField, self.getModifierFromElem(element))
        mpbField.name = 'content'
        return mpbMessage

    def parseComplexTypes(self, complexTypes):
        mpbMessageList = []
        for complexType in complexTypes:
            mpbMessageList.append( self.parseComplexType(complexType) )
        return mpbMessageList

    def parseComplexType(self, complexType):
        mpbMessage = MSGPB.Message()
        mpbMessage.kind = MSGPB.Message.ComplexType
        mpbMessage.name = complexType.name
        self.parseElementContainers(complexType.element_container, mpbMessage)
        self.parseAttributes(complexType.attribute, mpbMessage)
        return mpbMessage

    def parseAttributes(self, attrs, mpbMessage):
        for attr in attrs:
            self.parseAttribute(attr, mpbMessage)

    def parseAttribute(self, attr, mpbMessage):
        mpbField = mpbMessage.field.add()
        mpbField.modifier = self.getModifierFromAttr(attr)
        mpbField.type = self.getTypeFromAttr(attr)
        mpbField.name = 'attr_' + attr.name

    def parseElementContainers(self, elemConts, mpbMessage):
        choiceMsgIndex = 0
        sequenceMsgIndex = 0
        prevElemContKind = PB.ElementContainer.Sequence
        mpbChoiceMsg = None
        mpbSequenceMsg = None
        for elemCont in elemConts:
            if elemCont.kind == PB.ElementContainer.Sequence:
                for seqElem in elemCont.sequence:
                    self.getFieldFromElement(seqElem, mpbMessage.field.add(), self.getModifierFromElem(seqElem))
            elif elemCont.kind == PB.ElementContainer.Choice:
                mpbChoiceMsg = mpbMessage.choice_msg.add()
                mpbChoiceMsg.type = MSGPB.ChoiceMessage.One
                mpbChoiceMsg.name = getChoiceMsgName(choiceMsgIndex)
                localMpbField = mpbMessage.field.add()
                localMpbField.modifier = getModifierFromMinOccurs(elemCont.min_occurs)
                localMpbField.type = mpbChoiceMsg.name
                localMpbField.name = getChoiceFieldName(choiceMsgIndex)

                for elem in elemCont.choice:
                    self.getFieldFromElement(elem, mpbChoiceMsg.field.add(), self.getModifierFromElem(elem))

                choiceMsgIndex += 1
            elif elemCont.kind == PB.ElementContainer.RepeatedSequence:
                if prevElemContKind != elemCont.kind:
                    mpbSequenceMsg = mpbMessage.sequence_msg.add()
                    mpbSequenceMsg.type = MSGPB.SequenceMessage.Repeated
                    mpbSequenceMsg.name = getSequenceMsgName(sequenceMsgIndex)
                    localMpbField = mpbMessage.field.add()
                    localMpbField.modifier = getModifierFromMinOccurs(elemCont.min_occurs)
                    localMpbField.type = mpbSequenceMsg.name
                    localMpbField.name = getSequenceFieldName(sequenceMsgIndex)

                for elem in elemCont.repeated_sequence:
                    self.getFieldFromElement(elem, mpbSequenceMsg.field.add(), self.getModifierFromElem(elem))

                sequenceMsgIndex += 1
            elif elemCont.kind == PB.ElementContainer.RepeatedChoice:
                if prevElemContKind != elemCont.kind:
                    mpbChoiceMsg = mpbMessage.choice_msg.add()
                    mpbChoiceMsg.type = MSGPB.ChoiceMessage.Repeated
                    mpbChoiceMsg.name = getChoiceMsgName(choiceMsgIndex)
                    localMpbField = mpbMessage.field.add()
                    localMpbField.modifier = getModifierFromMinOccurs(0)
                    localMpbField.type = mpbChoiceMsg.name
                    localMpbField.name = getChoiceFieldName(choiceMsgIndex)

                for elem in elemCont.repeated_choice:
                    self.getFieldFromElement(elem, mpbChoiceMsg.field.add(), 'optional')

                choiceMsgIndex += 1
            prevElemContKind = elemCont.kind

    def getFieldFromElement(self, element, mpbField, modifier):
        mpbField.modifier = modifier
        mpbField.type = self.getTypeFromElem(element)
        mpbField.name = element.name

    def getModifierFromElem(self, element):
        if element.HasField('max_occurs'):
            if element.max_occurs.kind == PB.MaxOccurs.Unbounded:
                return 'repeated'
            elif element.max_occurs.kind == PB.MaxOccurs.Count:
                if element.max_occurs.count <= 1:
                    if element.min_occurs == 0:
                        return 'optional'
                    else:
                        return 'required'
                else:
                    return 'repeated'

        assert(False)
        return None


    def getTypeFromElem(self, elem):
        elemType = elem.type
        if elemType.kind == PB.Element.Type.BuiltIn:
            return getTypeFromBuiltIn(elemType.built_in)
        elif elemType.kind == PB.Element.Type.SimpleTypeName:
            return self.getTypeFromTypeName(elemType.simple_type_name, elem.ns_prefix)
        elif elemType.kind == PB.Element.Type.ComplexTypeName:
            return self.getTypeFromTypeName(elemType.complex_type_name, elem.ns_prefix)
        elif elemType.kind == PB.Element.Type.SimpleType:
            return self.getTypeFromSimpleType(elemType.simple_type)
        elif elemType.kind == PB.Element.Type.ComplexType:
            return self.getTypeFromComplexType(elemType.complex_type)
        elif elemType.kind == PB.Element.Type.Any:
            return self.getTypeFromTypeName('_Any_', elem.ns_prefix)
        assert(False)
        return 'string'

    def getTypeFromAttr(self, attr):
        if attr.type.kind == PB.Attribute.Type.BuiltIn:
            return getTypeFromBuiltIn(attr.type.built_in)
        elif attr.type.kind == PB.Attribute.Type.SimpleTypeName:
            return self.getTypeFromTypeName(attr.type.simple_type_name, attr.ns_prefix)
        elif attr.type.kind == PB.Attribute.Type.SimpleType:
            return self.getTypeFromSimpleType(attr.type.simple_type)
        elif attr.type.kind == PB.Attribute.Type.AnyAttribute:
            return getTypeFromAnyAttribute(attr.type.any_attribute)
        assert(False)
        return 'string'

    def getTypeFromTypeName(self, typeName, nsPrefix):
        if nsPrefix:
            return '%s.%s' % (self.getOtherPackageName(nsPrefix), typeName)
        else:
            return typeName

    def getTypeFromSimpleType(self, simpleType):
        return 'string' # TODO - 확인

    def getTypeFromComplexType(self, complexType):
        return 'string' # TODO - 확인

    def getModifierFromAttr(self, attr):
        if attr.HasField('use'):
            if attr.use == PB.Attribute.optional or attr.use == PB.Attribute.prohibited:
                return 'optional'
            elif attr.use == PB.Attribute.required:
                return 'required'
        else:
            return 'optional'

def parseImports(imports):
    importList = []
    for import_ in imports:
        importStr = getImportStr(import_.schema_location)
        # if importStr: output += 'import "%s";\n' % importStr
        if importStr: importList.append(importStr)
    return importList

def getChoiceMsgName(index):
    if index == 0:
        return 'Choice'
    else:
        return 'Choice%d' % index

def getChoiceFieldName(index):
    if index == 0:
        return 'choice'
    else:
        return 'choice_%d' % index

def getSequenceMsgName(index):
    if index == 0:
        return 'Sequnece'
    else:
        return 'Sequence%d' % index

def getSequenceFieldName(index):
    if index == 0:
        return 'sequence'
    else:
        return 'sequence_%d' % index

def getModifierFromMinOccurs(minOccurs):
    if minOccurs == 0:
        return 'optional'
    else:
        return 'required'

def getTypeFromBuiltIn(builtIn):
    return 'string' # TODO - 빌트인 타입에 따라 다른 타입 출력

def getTypeFromAnyAttribute(anyAttr):
    return 'string' # TODO - 확인

def getImportStr(schemaLocation):
    if schemaLocation:
        return getProtoFileName(schemaLocation)
    return None