# !/bin/sh
protoc -I=protobuf --python_out=../src/xsd  protobuf/xsd.proto
protoc -I=protobuf --python_out=../src/xsd  protobuf/message.proto
protoc -I=protobuf --python_out=../src/xsd  protobuf/cpp.proto