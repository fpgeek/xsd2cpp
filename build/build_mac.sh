# !/bin/sh
python ../src/xsd/main.py
astyle ../files/build_test/src/*.cpp ../files/build_test/include/*.h
rm -rf ../files/build_test/src/*.cpp.orig
rm -rf ../files/build_test/include/*.h.orig