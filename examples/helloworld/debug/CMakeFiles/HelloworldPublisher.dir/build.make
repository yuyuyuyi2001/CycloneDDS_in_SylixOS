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
CMAKE_SOURCE_DIR = /D/MSYS2/download/cyclonedds/examples/helloworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /D/MSYS2/download/cyclonedds/examples/helloworld/debug

# Include any dependencies generated for this target.
include CMakeFiles/HelloworldPublisher.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/HelloworldPublisher.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HelloworldPublisher.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HelloworldPublisher.dir/flags.make

CMakeFiles/HelloworldPublisher.dir/codegen:
.PHONY : CMakeFiles/HelloworldPublisher.dir/codegen

CMakeFiles/HelloworldPublisher.dir/publisher.c.o: CMakeFiles/HelloworldPublisher.dir/flags.make
CMakeFiles/HelloworldPublisher.dir/publisher.c.o: D:/MSYS2/download/cyclonedds/examples/helloworld/publisher.c
CMakeFiles/HelloworldPublisher.dir/publisher.c.o: CMakeFiles/HelloworldPublisher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/cyclonedds/examples/helloworld/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HelloworldPublisher.dir/publisher.c.o"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/HelloworldPublisher.dir/publisher.c.o -MF CMakeFiles/HelloworldPublisher.dir/publisher.c.o.d -o CMakeFiles/HelloworldPublisher.dir/publisher.c.o -c /D/MSYS2/download/cyclonedds/examples/helloworld/publisher.c

CMakeFiles/HelloworldPublisher.dir/publisher.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/HelloworldPublisher.dir/publisher.c.i"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/MSYS2/download/cyclonedds/examples/helloworld/publisher.c > CMakeFiles/HelloworldPublisher.dir/publisher.c.i

CMakeFiles/HelloworldPublisher.dir/publisher.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/HelloworldPublisher.dir/publisher.c.s"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/MSYS2/download/cyclonedds/examples/helloworld/publisher.c -o CMakeFiles/HelloworldPublisher.dir/publisher.c.s

CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o: CMakeFiles/HelloworldPublisher.dir/flags.make
CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o: D:/MSYS2/download/cyclonedds/examples/helloworld/HelloWorldData.c
CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o: CMakeFiles/HelloworldPublisher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/cyclonedds/examples/helloworld/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o -MF CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o.d -o CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o -c /D/MSYS2/download/cyclonedds/examples/helloworld/HelloWorldData.c

CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.i"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/MSYS2/download/cyclonedds/examples/helloworld/HelloWorldData.c > CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.i

CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.s"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/MSYS2/download/cyclonedds/examples/helloworld/HelloWorldData.c -o CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.s

# Object files for target HelloworldPublisher
HelloworldPublisher_OBJECTS = \
"CMakeFiles/HelloworldPublisher.dir/publisher.c.o" \
"CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o"

# External object files for target HelloworldPublisher
HelloworldPublisher_EXTERNAL_OBJECTS =

HelloworldPublisher: CMakeFiles/HelloworldPublisher.dir/publisher.c.o
HelloworldPublisher: CMakeFiles/HelloworldPublisher.dir/HelloWorldData.c.o
HelloworldPublisher: CMakeFiles/HelloworldPublisher.dir/build.make
HelloworldPublisher: CycloneDDS::ddsc-NOTFOUND
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/D/MSYS2/download/cyclonedds/examples/helloworld/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable HelloworldPublisher"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe  -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS/include -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS/include/network -m64 -mhard-float -mlong-double-64 -mno-red-zone -fno-omit-frame-pointer -fno-strict-aliasing -Wall -fmessage-length=0 -fsigned-char -fno-short-enums   -fPIC -DSYLIXOS   $(HelloworldPublisher_OBJECTS) $(HelloworldPublisher_EXTERNAL_OBJECTS) -o HelloworldPublisher   -L/D/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/Release  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/Debug  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libcextern/Release  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libcextern/Debug  -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc CycloneDDS::ddsc-NOTFOUND

# Rule to build all files generated by this target.
CMakeFiles/HelloworldPublisher.dir/build: HelloworldPublisher
.PHONY : CMakeFiles/HelloworldPublisher.dir/build

CMakeFiles/HelloworldPublisher.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HelloworldPublisher.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HelloworldPublisher.dir/clean

CMakeFiles/HelloworldPublisher.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/MSYS2/download/cyclonedds/examples/helloworld /D/MSYS2/download/cyclonedds/examples/helloworld /D/MSYS2/download/cyclonedds/examples/helloworld/debug /D/MSYS2/download/cyclonedds/examples/helloworld/debug /D/MSYS2/download/cyclonedds/examples/helloworld/debug/CMakeFiles/HelloworldPublisher.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/HelloworldPublisher.dir/depend

