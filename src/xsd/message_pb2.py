# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)



DESCRIPTOR = descriptor.FileDescriptor(
  name='message.proto',
  package='xsd.msg',
  serialized_pb='\n\rmessage.proto\x12\x07xsd.msg\"h\n\tProtoFile\x12\x15\n\rxsd_file_name\x18\x01 \x01(\t\x12\x14\n\x0cpackage_name\x18\x02 \x02(\t\x12\x0f\n\x07import_\x18\x03 \x03(\t\x12\x1d\n\x03msg\x18\x04 \x03(\x0b\x32\x10.xsd.msg.Message\"\xed\x01\n\x07Message\x12#\n\x04kind\x18\x01 \x02(\x0e\x32\x15.xsd.msg.Message.Kind\x12\x0c\n\x04name\x18\x02 \x02(\t\x12*\n\nchoice_msg\x18\x03 \x03(\x0b\x32\x16.xsd.msg.ChoiceMessage\x12.\n\x0csequence_msg\x18\x04 \x03(\x0b\x32\x18.xsd.msg.SequenceMessage\x12\x1d\n\x05\x66ield\x18\x05 \x03(\x0b\x32\x0e.xsd.msg.Field\"4\n\x04Kind\x12\x0b\n\x07\x45lement\x10\x00\x12\x0f\n\x0b\x43omplexType\x10\x01\x12\x0e\n\nSimpleType\x10\x02\"5\n\x05\x46ield\x12\x10\n\x08modifier\x18\x01 \x02(\t\x12\x0c\n\x04type\x18\x02 \x02(\t\x12\x0c\n\x04name\x18\x03 \x02(\t\"\x86\x01\n\rChoiceMessage\x12\x0c\n\x04name\x18\x01 \x02(\t\x12)\n\x04type\x18\x02 \x02(\x0e\x32\x1b.xsd.msg.ChoiceMessage.Type\x12\x1d\n\x05\x66ield\x18\x03 \x03(\x0b\x32\x0e.xsd.msg.Field\"\x1d\n\x04Type\x12\x07\n\x03One\x10\x00\x12\x0c\n\x08Repeated\x10\x01\"\x8a\x01\n\x0fSequenceMessage\x12\x0c\n\x04name\x18\x01 \x02(\t\x12+\n\x04type\x18\x02 \x02(\x0e\x32\x1d.xsd.msg.SequenceMessage.Type\x12\x1d\n\x05\x66ield\x18\x03 \x03(\x0b\x32\x0e.xsd.msg.Field\"\x1d\n\x04Type\x12\x07\n\x03One\x10\x00\x12\x0c\n\x08Repeated\x10\x01')



_MESSAGE_KIND = descriptor.EnumDescriptor(
  name='Kind',
  full_name='xsd.msg.Message.Kind',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='Element', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='ComplexType', index=1, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='SimpleType', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=318,
  serialized_end=370,
)

_CHOICEMESSAGE_TYPE = descriptor.EnumDescriptor(
  name='Type',
  full_name='xsd.msg.ChoiceMessage.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='One', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='Repeated', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=533,
  serialized_end=562,
)

_SEQUENCEMESSAGE_TYPE = descriptor.EnumDescriptor(
  name='Type',
  full_name='xsd.msg.SequenceMessage.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='One', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='Repeated', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=533,
  serialized_end=562,
)


_PROTOFILE = descriptor.Descriptor(
  name='ProtoFile',
  full_name='xsd.msg.ProtoFile',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='xsd_file_name', full_name='xsd.msg.ProtoFile.xsd_file_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='package_name', full_name='xsd.msg.ProtoFile.package_name', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='import_', full_name='xsd.msg.ProtoFile.import_', index=2,
      number=3, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='msg', full_name='xsd.msg.ProtoFile.msg', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=26,
  serialized_end=130,
)


_MESSAGE = descriptor.Descriptor(
  name='Message',
  full_name='xsd.msg.Message',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='kind', full_name='xsd.msg.Message.kind', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.msg.Message.name', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='choice_msg', full_name='xsd.msg.Message.choice_msg', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='sequence_msg', full_name='xsd.msg.Message.sequence_msg', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='field', full_name='xsd.msg.Message.field', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _MESSAGE_KIND,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=133,
  serialized_end=370,
)


_FIELD = descriptor.Descriptor(
  name='Field',
  full_name='xsd.msg.Field',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='modifier', full_name='xsd.msg.Field.modifier', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='type', full_name='xsd.msg.Field.type', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.msg.Field.name', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=372,
  serialized_end=425,
)


_CHOICEMESSAGE = descriptor.Descriptor(
  name='ChoiceMessage',
  full_name='xsd.msg.ChoiceMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.msg.ChoiceMessage.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='type', full_name='xsd.msg.ChoiceMessage.type', index=1,
      number=2, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='field', full_name='xsd.msg.ChoiceMessage.field', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _CHOICEMESSAGE_TYPE,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=428,
  serialized_end=562,
)


_SEQUENCEMESSAGE = descriptor.Descriptor(
  name='SequenceMessage',
  full_name='xsd.msg.SequenceMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.msg.SequenceMessage.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='type', full_name='xsd.msg.SequenceMessage.type', index=1,
      number=2, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='field', full_name='xsd.msg.SequenceMessage.field', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SEQUENCEMESSAGE_TYPE,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=565,
  serialized_end=703,
)

_PROTOFILE.fields_by_name['msg'].message_type = _MESSAGE
_MESSAGE.fields_by_name['kind'].enum_type = _MESSAGE_KIND
_MESSAGE.fields_by_name['choice_msg'].message_type = _CHOICEMESSAGE
_MESSAGE.fields_by_name['sequence_msg'].message_type = _SEQUENCEMESSAGE
_MESSAGE.fields_by_name['field'].message_type = _FIELD
_MESSAGE_KIND.containing_type = _MESSAGE;
_CHOICEMESSAGE.fields_by_name['type'].enum_type = _CHOICEMESSAGE_TYPE
_CHOICEMESSAGE.fields_by_name['field'].message_type = _FIELD
_CHOICEMESSAGE_TYPE.containing_type = _CHOICEMESSAGE;
_SEQUENCEMESSAGE.fields_by_name['type'].enum_type = _SEQUENCEMESSAGE_TYPE
_SEQUENCEMESSAGE.fields_by_name['field'].message_type = _FIELD
_SEQUENCEMESSAGE_TYPE.containing_type = _SEQUENCEMESSAGE;
DESCRIPTOR.message_types_by_name['ProtoFile'] = _PROTOFILE
DESCRIPTOR.message_types_by_name['Message'] = _MESSAGE
DESCRIPTOR.message_types_by_name['Field'] = _FIELD
DESCRIPTOR.message_types_by_name['ChoiceMessage'] = _CHOICEMESSAGE
DESCRIPTOR.message_types_by_name['SequenceMessage'] = _SEQUENCEMESSAGE

class ProtoFile(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _PROTOFILE
  
  # @@protoc_insertion_point(class_scope:xsd.msg.ProtoFile)

class Message(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _MESSAGE
  
  # @@protoc_insertion_point(class_scope:xsd.msg.Message)

class Field(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _FIELD
  
  # @@protoc_insertion_point(class_scope:xsd.msg.Field)

class ChoiceMessage(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _CHOICEMESSAGE
  
  # @@protoc_insertion_point(class_scope:xsd.msg.ChoiceMessage)

class SequenceMessage(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _SEQUENCEMESSAGE
  
  # @@protoc_insertion_point(class_scope:xsd.msg.SequenceMessage)

# @@protoc_insertion_point(module_scope)
