python ..\src\xsd\main.py ..\files\xsd\hml ..\files\build_test\include ..\files\build_test\src
AStyle.exe ..\files\build_test\src\*.cpp ..\files\build_test\include\*.h
del ..\files\build_test\src\*.cpp.orig
del ..\files\build_test\include\*.h.orig