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
CMAKE_SOURCE_DIR = /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/debug

# Include any dependencies generated for this target.
include CMakeFiles/ThroughputPublisher.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ThroughputPublisher.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ThroughputPublisher.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ThroughputPublisher.dir/flags.make

CMakeFiles/ThroughputPublisher.dir/codegen:
.PHONY : CMakeFiles/ThroughputPublisher.dir/codegen

CMakeFiles/ThroughputPublisher.dir/publisher.c.o: CMakeFiles/ThroughputPublisher.dir/flags.make
CMakeFiles/ThroughputPublisher.dir/publisher.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/publisher.c
CMakeFiles/ThroughputPublisher.dir/publisher.c.o: CMakeFiles/ThroughputPublisher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ThroughputPublisher.dir/publisher.c.o"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ThroughputPublisher.dir/publisher.c.o -MF CMakeFiles/ThroughputPublisher.dir/publisher.c.o.d -o CMakeFiles/ThroughputPublisher.dir/publisher.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/publisher.c

CMakeFiles/ThroughputPublisher.dir/publisher.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/ThroughputPublisher.dir/publisher.c.i"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/publisher.c > CMakeFiles/ThroughputPublisher.dir/publisher.c.i

CMakeFiles/ThroughputPublisher.dir/publisher.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/ThroughputPublisher.dir/publisher.c.s"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/publisher.c -o CMakeFiles/ThroughputPublisher.dir/publisher.c.s

CMakeFiles/ThroughputPublisher.dir/Throughput.c.o: CMakeFiles/ThroughputPublisher.dir/flags.make
CMakeFiles/ThroughputPublisher.dir/Throughput.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/Throughput.c
CMakeFiles/ThroughputPublisher.dir/Throughput.c.o: CMakeFiles/ThroughputPublisher.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ThroughputPublisher.dir/Throughput.c.o"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ThroughputPublisher.dir/Throughput.c.o -MF CMakeFiles/ThroughputPublisher.dir/Throughput.c.o.d -o CMakeFiles/ThroughputPublisher.dir/Throughput.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/Throughput.c

CMakeFiles/ThroughputPublisher.dir/Throughput.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/ThroughputPublisher.dir/Throughput.c.i"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/Throughput.c > CMakeFiles/ThroughputPublisher.dir/Throughput.c.i

CMakeFiles/ThroughputPublisher.dir/Throughput.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/ThroughputPublisher.dir/Throughput.c.s"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/Throughput.c -o CMakeFiles/ThroughputPublisher.dir/Throughput.c.s

# Object files for target ThroughputPublisher
ThroughputPublisher_OBJECTS = \
"CMakeFiles/ThroughputPublisher.dir/publisher.c.o" \
"CMakeFiles/ThroughputPublisher.dir/Throughput.c.o"

# External object files for target ThroughputPublisher
ThroughputPublisher_EXTERNAL_OBJECTS =

ThroughputPublisher: CMakeFiles/ThroughputPublisher.dir/publisher.c.o
ThroughputPublisher: CMakeFiles/ThroughputPublisher.dir/Throughput.c.o
ThroughputPublisher: CMakeFiles/ThroughputPublisher.dir/build.make
ThroughputPublisher: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/_install/lib/libddsc.so.0.11.0
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ThroughputPublisher"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe  -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS/include -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS/include/network -m64 -mhard-float -mlong-double-64 -mno-red-zone -fno-omit-frame-pointer -fno-strict-aliasing -Wall -fmessage-length=0 -fsigned-char -fno-short-enums   -fPIC -DSYLIXOS   -O2 -g3 -gdwarf-2 -nostartfiles -Wl,-shared -fPIC -shared   -O2 -g3 -gdwarf-2 $(ThroughputPublisher_OBJECTS) $(ThroughputPublisher_EXTERNAL_OBJECTS) -o ThroughputPublisher   -L/D/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/Release  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/Debug  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libcextern/Release  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libcextern/Debug  -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/_install/lib/libddsc.so.0.11.0 -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc

# Rule to build all files generated by this target.
CMakeFiles/ThroughputPublisher.dir/build: ThroughputPublisher
.PHONY : CMakeFiles/ThroughputPublisher.dir/build

CMakeFiles/ThroughputPublisher.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ThroughputPublisher.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ThroughputPublisher.dir/clean

CMakeFiles/ThroughputPublisher.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/debug /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/debug /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/throughput/debug/CMakeFiles/ThroughputPublisher.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ThroughputPublisher.dir/depend

