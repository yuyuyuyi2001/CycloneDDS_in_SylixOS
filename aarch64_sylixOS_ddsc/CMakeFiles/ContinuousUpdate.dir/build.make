# CMAKE generated file: DO NOT EDIT!
# Generated by "MSYS Makefiles" Generator, CMake Version 3.31

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

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /D/CMake/bin/cmake.exe

# The command to remove a file.
RM = /D/CMake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc

# Utility rule file for ContinuousUpdate.

# Include any custom commands dependencies for this target.
include CMakeFiles/ContinuousUpdate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ContinuousUpdate.dir/progress.make

CMakeFiles/ContinuousUpdate:
	/D/CMake/bin/ctest.exe -D ContinuousUpdate

CMakeFiles/ContinuousUpdate.dir/codegen:
.PHONY : CMakeFiles/ContinuousUpdate.dir/codegen

ContinuousUpdate: CMakeFiles/ContinuousUpdate
ContinuousUpdate: CMakeFiles/ContinuousUpdate.dir/build.make
.PHONY : ContinuousUpdate

# Rule to build all files generated by this target.
CMakeFiles/ContinuousUpdate.dir/build: ContinuousUpdate
.PHONY : CMakeFiles/ContinuousUpdate.dir/build

CMakeFiles/ContinuousUpdate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ContinuousUpdate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ContinuousUpdate.dir/clean

CMakeFiles/ContinuousUpdate.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/CMakeFiles/ContinuousUpdate.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ContinuousUpdate.dir/depend

