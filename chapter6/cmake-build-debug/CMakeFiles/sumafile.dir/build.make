# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "D:\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\pythonProject\myself\c-study\chapter6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\pythonProject\myself\c-study\chapter6\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sumafile.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sumafile.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sumafile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sumafile.dir/flags.make

CMakeFiles/sumafile.dir/sumafile.cpp.obj: CMakeFiles/sumafile.dir/flags.make
CMakeFiles/sumafile.dir/sumafile.cpp.obj: D:/pythonProject/myself/c-study/chapter6/sumafile.cpp
CMakeFiles/sumafile.dir/sumafile.cpp.obj: CMakeFiles/sumafile.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sumafile.dir/sumafile.cpp.obj"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sumafile.dir/sumafile.cpp.obj -MF CMakeFiles\sumafile.dir\sumafile.cpp.obj.d -o CMakeFiles\sumafile.dir\sumafile.cpp.obj -c D:\pythonProject\myself\c-study\chapter6\sumafile.cpp

CMakeFiles/sumafile.dir/sumafile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sumafile.dir/sumafile.cpp.i"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\pythonProject\myself\c-study\chapter6\sumafile.cpp > CMakeFiles\sumafile.dir\sumafile.cpp.i

CMakeFiles/sumafile.dir/sumafile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sumafile.dir/sumafile.cpp.s"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\pythonProject\myself\c-study\chapter6\sumafile.cpp -o CMakeFiles\sumafile.dir\sumafile.cpp.s

# Object files for target sumafile
sumafile_OBJECTS = \
"CMakeFiles/sumafile.dir/sumafile.cpp.obj"

# External object files for target sumafile
sumafile_EXTERNAL_OBJECTS =

sumafile.exe: CMakeFiles/sumafile.dir/sumafile.cpp.obj
sumafile.exe: CMakeFiles/sumafile.dir/build.make
sumafile.exe: CMakeFiles/sumafile.dir/linkLibs.rsp
sumafile.exe: CMakeFiles/sumafile.dir/objects1.rsp
sumafile.exe: CMakeFiles/sumafile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sumafile.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sumafile.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sumafile.dir/build: sumafile.exe
.PHONY : CMakeFiles/sumafile.dir/build

CMakeFiles/sumafile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sumafile.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sumafile.dir/clean

CMakeFiles/sumafile.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\pythonProject\myself\c-study\chapter6 D:\pythonProject\myself\c-study\chapter6 D:\pythonProject\myself\c-study\chapter6\cmake-build-debug D:\pythonProject\myself\c-study\chapter6\cmake-build-debug D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles\sumafile.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sumafile.dir/depend

