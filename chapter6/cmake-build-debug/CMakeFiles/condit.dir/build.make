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
include CMakeFiles/condit.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/condit.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/condit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/condit.dir/flags.make

CMakeFiles/condit.dir/condit.cpp.obj: CMakeFiles/condit.dir/flags.make
CMakeFiles/condit.dir/condit.cpp.obj: D:/pythonProject/myself/c-study/chapter6/condit.cpp
CMakeFiles/condit.dir/condit.cpp.obj: CMakeFiles/condit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/condit.dir/condit.cpp.obj"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/condit.dir/condit.cpp.obj -MF CMakeFiles\condit.dir\condit.cpp.obj.d -o CMakeFiles\condit.dir\condit.cpp.obj -c D:\pythonProject\myself\c-study\chapter6\condit.cpp

CMakeFiles/condit.dir/condit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/condit.dir/condit.cpp.i"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\pythonProject\myself\c-study\chapter6\condit.cpp > CMakeFiles\condit.dir\condit.cpp.i

CMakeFiles/condit.dir/condit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/condit.dir/condit.cpp.s"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\pythonProject\myself\c-study\chapter6\condit.cpp -o CMakeFiles\condit.dir\condit.cpp.s

# Object files for target condit
condit_OBJECTS = \
"CMakeFiles/condit.dir/condit.cpp.obj"

# External object files for target condit
condit_EXTERNAL_OBJECTS =

condit.exe: CMakeFiles/condit.dir/condit.cpp.obj
condit.exe: CMakeFiles/condit.dir/build.make
condit.exe: CMakeFiles/condit.dir/linkLibs.rsp
condit.exe: CMakeFiles/condit.dir/objects1.rsp
condit.exe: CMakeFiles/condit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable condit.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\condit.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/condit.dir/build: condit.exe
.PHONY : CMakeFiles/condit.dir/build

CMakeFiles/condit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\condit.dir\cmake_clean.cmake
.PHONY : CMakeFiles/condit.dir/clean

CMakeFiles/condit.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\pythonProject\myself\c-study\chapter6 D:\pythonProject\myself\c-study\chapter6 D:\pythonProject\myself\c-study\chapter6\cmake-build-debug D:\pythonProject\myself\c-study\chapter6\cmake-build-debug D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles\condit.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/condit.dir/depend

