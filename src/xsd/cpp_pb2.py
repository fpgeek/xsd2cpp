# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)



DESCRIPTOR = descriptor.FileDescriptor(
  name='cpp.proto',
  package='xsd.cpp',
  serialized_pb='\n\tcpp.proto\x12\x07xsd.cpp\"]\n\x04\x46ile\x12\x0c\n\x04name\x18\x01 \x02(\t\x12\x14\n\x0cinclude_file\x18\x02 \x03(\t\x12\x11\n\tnamespace\x18\x03 \x02(\t\x12\x1e\n\x06\x63lass_\x18\x04 \x03(\x0b\x32\x0e.xsd.cpp.Class\"A\n\x0f\x41\x63\x63\x65ssQualified\".\n\x04Type\x12\n\n\x06public\x10\x00\x12\r\n\tprotected\x10\x01\x12\x0b\n\x07private\x10\x02\"\x85\x02\n\x05\x43lass\x12\x0c\n\x04name\x18\x01 \x02(\t\x12\x14\n\x0cparent_class\x18\x02 \x03(\t\x12)\n\x0b\x63onstructor\x18\x03 \x03(\x0b\x32\x14.xsd.cpp.Constructor\x12\'\n\ndestructor\x18\x04 \x01(\x0b\x32\x13.xsd.cpp.Destructor\x12\x1f\n\x06method\x18\x05 \x03(\x0b\x32\x0f.xsd.cpp.Method\x12 \n\nmember_var\x18\x06 \x03(\x0b\x32\x0c.xsd.cpp.Var\x12\x1c\n\x05\x65num_\x18\x07 \x01(\x0b\x32\r.xsd.cpp.Enum\x12#\n\x0binner_class\x18\x08 \x03(\x0b\x32\x0e.xsd.cpp.Class\"c\n\x0b\x43onstructor\x12\x1e\n\x08\x61rgument\x18\x01 \x03(\x0b\x32\x0c.xsd.cpp.Var\x12&\n\nconst_init\x18\x02 \x03(\x0b\x32\x12.xsd.cpp.ConstInit\x12\x0c\n\x04\x62ody\x18\x03 \x01(\t\"(\n\tConstInit\x12\x0c\n\x04name\x18\x01 \x02(\t\x12\r\n\x05value\x18\x02 \x02(\t\"\x1a\n\nDestructor\x12\x0c\n\x04\x62ody\x18\x01 \x01(\t\"\xb2\x01\n\x06Method\x12\x38\n\taccess_qf\x18\x01 \x01(\x0e\x32\x1d.xsd.cpp.AccessQualified.Type:\x06public\x12\x13\n\x0breturn_type\x18\x02 \x02(\t\x12\x0c\n\x04name\x18\x03 \x02(\t\x12\x1e\n\x08\x61rgument\x18\x04 \x03(\x0b\x32\x0c.xsd.cpp.Var\x12\r\n\x05\x63onst\x18\x05 \x01(\x08\x12\x0e\n\x06static\x18\x06 \x01(\x08\x12\x0c\n\x04\x62ody\x18\x07 \x02(\t\"\x9f\x01\n\x03Var\x12\x39\n\taccess_qf\x18\x01 \x01(\x0e\x32\x1d.xsd.cpp.AccessQualified.Type:\x07private\x12\x0c\n\x04type\x18\x02 \x02(\t\x12\x0c\n\x04name\x18\x03 \x02(\t\x12\r\n\x05\x63onst\x18\x04 \x01(\x08\x12\x0e\n\x06static\x18\x05 \x01(\x08\x12\x13\n\x0bstring_list\x18\x06 \x03(\t\x12\r\n\x05\x61rray\x18\x07 \x01(\x08\"#\n\x04\x45num\x12\x0c\n\x04name\x18\x01 \x02(\t\x12\r\n\x05value\x18\x02 \x03(\t')



_ACCESSQUALIFIED_TYPE = descriptor.EnumDescriptor(
  name='Type',
  full_name='xsd.cpp.AccessQualified.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='public', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='protected', index=1, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='private', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=136,
  serialized_end=182,
)


_FILE = descriptor.Descriptor(
  name='File',
  full_name='xsd.cpp.File',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.cpp.File.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='include_file', full_name='xsd.cpp.File.include_file', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='namespace', full_name='xsd.cpp.File.namespace', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='class_', full_name='xsd.cpp.File.class_', index=3,
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
  serialized_start=22,
  serialized_end=115,
)


_ACCESSQUALIFIED = descriptor.Descriptor(
  name='AccessQualified',
  full_name='xsd.cpp.AccessQualified',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _ACCESSQUALIFIED_TYPE,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=117,
  serialized_end=182,
)


_CLASS = descriptor.Descriptor(
  name='Class',
  full_name='xsd.cpp.Class',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.cpp.Class.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='parent_class', full_name='xsd.cpp.Class.parent_class', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='constructor', full_name='xsd.cpp.Class.constructor', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='destructor', full_name='xsd.cpp.Class.destructor', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='method', full_name='xsd.cpp.Class.method', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='member_var', full_name='xsd.cpp.Class.member_var', index=5,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='enum_', full_name='xsd.cpp.Class.enum_', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='inner_class', full_name='xsd.cpp.Class.inner_class', index=7,
      number=8, type=11, cpp_type=10, label=3,
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
  serialized_start=185,
  serialized_end=446,
)


_CONSTRUCTOR = descriptor.Descriptor(
  name='Constructor',
  full_name='xsd.cpp.Constructor',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='argument', full_name='xsd.cpp.Constructor.argument', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='const_init', full_name='xsd.cpp.Constructor.const_init', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='body', full_name='xsd.cpp.Constructor.body', index=2,
      number=3, type=9, cpp_type=9, label=1,
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
  serialized_start=448,
  serialized_end=547,
)


_CONSTINIT = descriptor.Descriptor(
  name='ConstInit',
  full_name='xsd.cpp.ConstInit',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.cpp.ConstInit.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='value', full_name='xsd.cpp.ConstInit.value', index=1,
      number=2, type=9, cpp_type=9, label=2,
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
  serialized_start=549,
  serialized_end=589,
)


_DESTRUCTOR = descriptor.Descriptor(
  name='Destructor',
  full_name='xsd.cpp.Destructor',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='body', full_name='xsd.cpp.Destructor.body', index=0,
      number=1, type=9, cpp_type=9, label=1,
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
  serialized_start=591,
  serialized_end=617,
)


_METHOD = descriptor.Descriptor(
  name='Method',
  full_name='xsd.cpp.Method',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='access_qf', full_name='xsd.cpp.Method.access_qf', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='return_type', full_name='xsd.cpp.Method.return_type', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.cpp.Method.name', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='argument', full_name='xsd.cpp.Method.argument', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='const', full_name='xsd.cpp.Method.const', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='static', full_name='xsd.cpp.Method.static', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='body', full_name='xsd.cpp.Method.body', index=6,
      number=7, type=9, cpp_type=9, label=2,
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
  serialized_start=620,
  serialized_end=798,
)


_VAR = descriptor.Descriptor(
  name='Var',
  full_name='xsd.cpp.Var',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='access_qf', full_name='xsd.cpp.Var.access_qf', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=2,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='type', full_name='xsd.cpp.Var.type', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.cpp.Var.name', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='const', full_name='xsd.cpp.Var.const', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='static', full_name='xsd.cpp.Var.static', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='string_list', full_name='xsd.cpp.Var.string_list', index=5,
      number=6, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='array', full_name='xsd.cpp.Var.array', index=6,
      number=7, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=801,
  serialized_end=960,
)


_ENUM = descriptor.Descriptor(
  name='Enum',
  full_name='xsd.cpp.Enum',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='name', full_name='xsd.cpp.Enum.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='value', full_name='xsd.cpp.Enum.value', index=1,
      number=2, type=9, cpp_type=9, label=3,
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
  serialized_start=962,
  serialized_end=997,
)

_FILE.fields_by_name['class_'].message_type = _CLASS
_ACCESSQUALIFIED_TYPE.containing_type = _ACCESSQUALIFIED;
_CLASS.fields_by_name['constructor'].message_type = _CONSTRUCTOR
_CLASS.fields_by_name['destructor'].message_type = _DESTRUCTOR
_CLASS.fields_by_name['method'].message_type = _METHOD
_CLASS.fields_by_name['member_var'].message_type = _VAR
_CLASS.fields_by_name['enum_'].message_type = _ENUM
_CLASS.fields_by_name['inner_class'].message_type = _CLASS
_CONSTRUCTOR.fields_by_name['argument'].message_type = _VAR
_CONSTRUCTOR.fields_by_name['const_init'].message_type = _CONSTINIT
_METHOD.fields_by_name['access_qf'].enum_type = _ACCESSQUALIFIED_TYPE
_METHOD.fields_by_name['argument'].message_type = _VAR
_VAR.fields_by_name['access_qf'].enum_type = _ACCESSQUALIFIED_TYPE
DESCRIPTOR.message_types_by_name['File'] = _FILE
DESCRIPTOR.message_types_by_name['AccessQualified'] = _ACCESSQUALIFIED
DESCRIPTOR.message_types_by_name['Class'] = _CLASS
DESCRIPTOR.message_types_by_name['Constructor'] = _CONSTRUCTOR
DESCRIPTOR.message_types_by_name['ConstInit'] = _CONSTINIT
DESCRIPTOR.message_types_by_name['Destructor'] = _DESTRUCTOR
DESCRIPTOR.message_types_by_name['Method'] = _METHOD
DESCRIPTOR.message_types_by_name['Var'] = _VAR
DESCRIPTOR.message_types_by_name['Enum'] = _ENUM

class File(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _FILE
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.File)

class AccessQualified(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _ACCESSQUALIFIED
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.AccessQualified)

class Class(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _CLASS
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.Class)

class Constructor(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _CONSTRUCTOR
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.Constructor)

class ConstInit(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _CONSTINIT
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.ConstInit)

class Destructor(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _DESTRUCTOR
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.Destructor)

class Method(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _METHOD
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.Method)

class Var(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _VAR
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.Var)

class Enum(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _ENUM
  
  # @@protoc_insertion_point(class_scope:xsd.cpp.Enum)

# @@protoc_insertion_point(module_scope)
