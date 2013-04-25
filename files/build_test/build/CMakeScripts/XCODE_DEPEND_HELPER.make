# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# For each target create a dummy rule so the target does not have to exist
/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Debug/libxsd2cpp_build_test.a:
/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/MinSizeRel/libxsd2cpp_build_test.a:
/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/RelWithDebInfo/libxsd2cpp_build_test.a:
/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Release/libxsd2cpp_build_test.a:


# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.xsd2cpp_build_test.Debug:
PostBuild.xsd2cpp_build_test_exe.Debug:
PostBuild.xsd2cpp_build_test.Debug: /Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Debug/xsd2cpp_build_test_exe
/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Debug/xsd2cpp_build_test_exe:\
	/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Debug/libxsd2cpp_build_test.a
	/bin/rm -f /Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Debug/xsd2cpp_build_test_exe


PostBuild.xsd2cpp_build_test.Release:
PostBuild.xsd2cpp_build_test_exe.Release:
PostBuild.xsd2cpp_build_test.Release: /Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Release/xsd2cpp_build_test_exe
/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Release/xsd2cpp_build_test_exe:\
	/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Release/libxsd2cpp_build_test.a
	/bin/rm -f /Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/Release/xsd2cpp_build_test_exe


PostBuild.xsd2cpp_build_test.MinSizeRel:
PostBuild.xsd2cpp_build_test_exe.MinSizeRel:
PostBuild.xsd2cpp_build_test.MinSizeRel: /Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/MinSizeRel/xsd2cpp_build_test_exe
/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/MinSizeRel/xsd2cpp_build_test_exe:\
	/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/MinSizeRel/libxsd2cpp_build_test.a
	/bin/rm -f /Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/MinSizeRel/xsd2cpp_build_test_exe


PostBuild.xsd2cpp_build_test.RelWithDebInfo:
PostBuild.xsd2cpp_build_test_exe.RelWithDebInfo:
PostBuild.xsd2cpp_build_test.RelWithDebInfo: /Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/RelWithDebInfo/xsd2cpp_build_test_exe
/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/RelWithDebInfo/xsd2cpp_build_test_exe:\
	/Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/RelWithDebInfo/libxsd2cpp_build_test.a
	/bin/rm -f /Users/fpgeek/Develop/pycharm_project/xsd2cpp/files/build_test/build/RelWithDebInfo/xsd2cpp_build_test_exe


