# !/bin/sh
protoc -I=protobuf --python_out=../src/xsd  protobuf/xsd.proto