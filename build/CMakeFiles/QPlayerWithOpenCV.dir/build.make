# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Qt\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = D:\Qt\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Qt\qtProject\QPlayerWithOpenCV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Qt\qtProject\QPlayerWithOpenCV\build

# Include any dependencies generated for this target.
include CMakeFiles/QPlayerWithOpenCV.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/QPlayerWithOpenCV.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QPlayerWithOpenCV.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QPlayerWithOpenCV.dir/flags.make

CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/flags.make
CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/includes_CXX.rsp
CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.obj: QPlayerWithOpenCV_autogen/mocs_compilation.cpp
CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.obj"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\QPlayerWithOpenCV.dir\QPlayerWithOpenCV_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\QPlayerWithOpenCV.dir\QPlayerWithOpenCV_autogen\mocs_compilation.cpp.obj -c D:\Qt\qtProject\QPlayerWithOpenCV\build\QPlayerWithOpenCV_autogen\mocs_compilation.cpp

CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.i"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Qt\qtProject\QPlayerWithOpenCV\build\QPlayerWithOpenCV_autogen\mocs_compilation.cpp > CMakeFiles\QPlayerWithOpenCV.dir\QPlayerWithOpenCV_autogen\mocs_compilation.cpp.i

CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.s"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Qt\qtProject\QPlayerWithOpenCV\build\QPlayerWithOpenCV_autogen\mocs_compilation.cpp -o CMakeFiles\QPlayerWithOpenCV.dir\QPlayerWithOpenCV_autogen\mocs_compilation.cpp.s

CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/flags.make
CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/includes_CXX.rsp
CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.obj: D:/Qt/qtProject/QPlayerWithOpenCV/main.cpp
CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.obj"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.obj -MF CMakeFiles\QPlayerWithOpenCV.dir\main.cpp.obj.d -o CMakeFiles\QPlayerWithOpenCV.dir\main.cpp.obj -c D:\Qt\qtProject\QPlayerWithOpenCV\main.cpp

CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.i"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Qt\qtProject\QPlayerWithOpenCV\main.cpp > CMakeFiles\QPlayerWithOpenCV.dir\main.cpp.i

CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.s"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Qt\qtProject\QPlayerWithOpenCV\main.cpp -o CMakeFiles\QPlayerWithOpenCV.dir\main.cpp.s

CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/flags.make
CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/includes_CXX.rsp
CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.obj: D:/Qt/qtProject/QPlayerWithOpenCV/player.cpp
CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.obj: CMakeFiles/QPlayerWithOpenCV.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.obj"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.obj -MF CMakeFiles\QPlayerWithOpenCV.dir\player.cpp.obj.d -o CMakeFiles\QPlayerWithOpenCV.dir\player.cpp.obj -c D:\Qt\qtProject\QPlayerWithOpenCV\player.cpp

CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.i"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Qt\qtProject\QPlayerWithOpenCV\player.cpp > CMakeFiles\QPlayerWithOpenCV.dir\player.cpp.i

CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.s"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Qt\qtProject\QPlayerWithOpenCV\player.cpp -o CMakeFiles\QPlayerWithOpenCV.dir\player.cpp.s

CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/flags.make
CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/includes_CXX.rsp
CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.obj: D:/Qt/qtProject/QPlayerWithOpenCV/setup.cc
CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.obj"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.obj -MF CMakeFiles\QPlayerWithOpenCV.dir\setup.cc.obj.d -o CMakeFiles\QPlayerWithOpenCV.dir\setup.cc.obj -c D:\Qt\qtProject\QPlayerWithOpenCV\setup.cc

CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.i"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Qt\qtProject\QPlayerWithOpenCV\setup.cc > CMakeFiles\QPlayerWithOpenCV.dir\setup.cc.i

CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.s"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Qt\qtProject\QPlayerWithOpenCV\setup.cc -o CMakeFiles\QPlayerWithOpenCV.dir\setup.cc.s

CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/flags.make
CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/includes_CXX.rsp
CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.obj: D:/Qt/qtProject/QPlayerWithOpenCV/signalConnectSlot.cc
CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.obj"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.obj -MF CMakeFiles\QPlayerWithOpenCV.dir\signalConnectSlot.cc.obj.d -o CMakeFiles\QPlayerWithOpenCV.dir\signalConnectSlot.cc.obj -c D:\Qt\qtProject\QPlayerWithOpenCV\signalConnectSlot.cc

CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.i"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Qt\qtProject\QPlayerWithOpenCV\signalConnectSlot.cc > CMakeFiles\QPlayerWithOpenCV.dir\signalConnectSlot.cc.i

CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.s"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Qt\qtProject\QPlayerWithOpenCV\signalConnectSlot.cc -o CMakeFiles\QPlayerWithOpenCV.dir\signalConnectSlot.cc.s

CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/flags.make
CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/includes_CXX.rsp
CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.obj: D:/Qt/qtProject/QPlayerWithOpenCV/slots.cc
CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.obj"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.obj -MF CMakeFiles\QPlayerWithOpenCV.dir\slots.cc.obj.d -o CMakeFiles\QPlayerWithOpenCV.dir\slots.cc.obj -c D:\Qt\qtProject\QPlayerWithOpenCV\slots.cc

CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.i"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Qt\qtProject\QPlayerWithOpenCV\slots.cc > CMakeFiles\QPlayerWithOpenCV.dir\slots.cc.i

CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.s"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Qt\qtProject\QPlayerWithOpenCV\slots.cc -o CMakeFiles\QPlayerWithOpenCV.dir\slots.cc.s

CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/flags.make
CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/includes_CXX.rsp
CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.obj: D:/Qt/qtProject/QPlayerWithOpenCV/adjustSize.cc
CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.obj: CMakeFiles/QPlayerWithOpenCV.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.obj"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.obj -MF CMakeFiles\QPlayerWithOpenCV.dir\adjustSize.cc.obj.d -o CMakeFiles\QPlayerWithOpenCV.dir\adjustSize.cc.obj -c D:\Qt\qtProject\QPlayerWithOpenCV\adjustSize.cc

CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.i"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Qt\qtProject\QPlayerWithOpenCV\adjustSize.cc > CMakeFiles\QPlayerWithOpenCV.dir\adjustSize.cc.i

CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.s"
	D:\Qt\Tools\mingw1310_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Qt\qtProject\QPlayerWithOpenCV\adjustSize.cc -o CMakeFiles\QPlayerWithOpenCV.dir\adjustSize.cc.s

# Object files for target QPlayerWithOpenCV
QPlayerWithOpenCV_OBJECTS = \
"CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.obj" \
"CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.obj" \
"CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.obj" \
"CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.obj" \
"CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.obj" \
"CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.obj"

# External object files for target QPlayerWithOpenCV
QPlayerWithOpenCV_EXTERNAL_OBJECTS =

QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/QPlayerWithOpenCV_autogen/mocs_compilation.cpp.obj
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/main.cpp.obj
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/player.cpp.obj
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/setup.cc.obj
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/signalConnectSlot.cc.obj
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/slots.cc.obj
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/adjustSize.cc.obj
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/build.make
QPlayerWithOpenCV.exe: D:/Qt/6.8.0/mingw_64/lib/libQt6MultimediaWidgets.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_gapi490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_highgui490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_ml490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_objdetect490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_photo490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_stitching490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_video490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_videoio490.dll.a
QPlayerWithOpenCV.exe: dlib_build/libdlib.a
QPlayerWithOpenCV.exe: D:/Qt/6.8.0/mingw_64/lib/libQt6Multimedia.a
QPlayerWithOpenCV.exe: D:/Qt/6.8.0/mingw_64/lib/libQt6Network.a
QPlayerWithOpenCV.exe: D:/Qt/6.8.0/mingw_64/lib/libQt6Widgets.a
QPlayerWithOpenCV.exe: D:/Qt/6.8.0/mingw_64/lib/libQt6Gui.a
QPlayerWithOpenCV.exe: D:/Qt/6.8.0/mingw_64/lib/libQt6Core.a
QPlayerWithOpenCV.exe: D:/Qt/6.8.0/mingw_64/lib/libQt6EntryPoint.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_imgcodecs490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_dnn490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_calib3d490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_features2d490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_flann490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_imgproc490.dll.a
QPlayerWithOpenCV.exe: D:/rain_programing/vscodeProject/buildOpenCV/buildOpenCV/install/x64/mingw/lib/libopencv_core490.dll.a
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/linkLibs.rsp
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/objects1.rsp
QPlayerWithOpenCV.exe: CMakeFiles/QPlayerWithOpenCV.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable QPlayerWithOpenCV.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\QPlayerWithOpenCV.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QPlayerWithOpenCV.dir/build: QPlayerWithOpenCV.exe
.PHONY : CMakeFiles/QPlayerWithOpenCV.dir/build

CMakeFiles/QPlayerWithOpenCV.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QPlayerWithOpenCV.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QPlayerWithOpenCV.dir/clean

CMakeFiles/QPlayerWithOpenCV.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Qt\qtProject\QPlayerWithOpenCV D:\Qt\qtProject\QPlayerWithOpenCV D:\Qt\qtProject\QPlayerWithOpenCV\build D:\Qt\qtProject\QPlayerWithOpenCV\build D:\Qt\qtProject\QPlayerWithOpenCV\build\CMakeFiles\QPlayerWithOpenCV.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/QPlayerWithOpenCV.dir/depend

