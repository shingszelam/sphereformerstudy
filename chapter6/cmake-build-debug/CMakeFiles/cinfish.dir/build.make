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
include CMakeFiles/cinfish.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cinfish.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cinfish.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cinfish.dir/flags.make

CMakeFiles/cinfish.dir/cinfish.cpp.obj: CMakeFiles/cinfish.dir/flags.make
CMakeFiles/cinfish.dir/cinfish.cpp.obj: D:/pythonProject/myself/c-study/chapter6/cinfish.cpp
CMakeFiles/cinfish.dir/cinfish.cpp.obj: CMakeFiles/cinfish.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cinfish.dir/cinfish.cpp.obj"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cinfish.dir/cinfish.cpp.obj -MF CMakeFiles\cinfish.dir\cinfish.cpp.obj.d -o CMakeFiles\cinfish.dir\cinfish.cpp.obj -c D:\pythonProject\myself\c-study\chapter6\cinfish.cpp

CMakeFiles/cinfish.dir/cinfish.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cinfish.dir/cinfish.cpp.i"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\pythonProject\myself\c-study\chapter6\cinfish.cpp > CMakeFiles\cinfish.dir\cinfish.cpp.i

CMakeFiles/cinfish.dir/cinfish.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cinfish.dir/cinfish.cpp.s"
	"D:\CLion 2023.2.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\pythonProject\myself\c-study\chapter6\cinfish.cpp -o CMakeFiles\cinfish.dir\cinfish.cpp.s

# Object files for target cinfish
cinfish_OBJECTS = \
"CMakeFiles/cinfish.dir/cinfish.cpp.obj"

# External object files for target cinfish
cinfish_EXTERNAL_OBJECTS =

cinfish.exe: CMakeFiles/cinfish.dir/cinfish.cpp.obj
cinfish.exe: CMakeFiles/cinfish.dir/build.make
cinfish.exe: CMakeFiles/cinfish.dir/linkLibs.rsp
cinfish.exe: CMakeFiles/cinfish.dir/objects1.rsp
cinfish.exe: CMakeFiles/cinfish.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cinfish.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cinfish.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cinfish.dir/build: cinfish.exe
.PHONY : CMakeFiles/cinfish.dir/build

CMakeFiles/cinfish.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cinfish.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cinfish.dir/clean

CMakeFiles/cinfish.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\pythonProject\myself\c-study\chapter6 D:\pythonProject\myself\c-study\chapter6 D:\pythonProject\myself\c-study\chapter6\cmake-build-debug D:\pythonProject\myself\c-study\chapter6\cmake-build-debug D:\pythonProject\myself\c-study\chapter6\cmake-build-debug\CMakeFiles\cinfish.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cinfish.dir/depend

