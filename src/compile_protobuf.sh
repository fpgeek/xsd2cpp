# !/bin/sh
protoc -I=protobuf --python_out=xsd  protobuf/xsd.proto
protoc -I=protobuf --python_out=xsd  protobuf/message.proto
protoc -I=protobuf --python_out=xsd  protobuf/cpp.proto