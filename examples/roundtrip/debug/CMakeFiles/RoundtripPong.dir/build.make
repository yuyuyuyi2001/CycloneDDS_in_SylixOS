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
CMAKE_SOURCE_DIR = /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/debug

# Include any dependencies generated for this target.
include CMakeFiles/RoundtripPong.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/RoundtripPong.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RoundtripPong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RoundtripPong.dir/flags.make

CMakeFiles/RoundtripPong.dir/codegen:
.PHONY : CMakeFiles/RoundtripPong.dir/codegen

CMakeFiles/RoundtripPong.dir/pong.c.o: CMakeFiles/RoundtripPong.dir/flags.make
CMakeFiles/RoundtripPong.dir/pong.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/pong.c
CMakeFiles/RoundtripPong.dir/pong.c.o: CMakeFiles/RoundtripPong.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RoundtripPong.dir/pong.c.o"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/RoundtripPong.dir/pong.c.o -MF CMakeFiles/RoundtripPong.dir/pong.c.o.d -o CMakeFiles/RoundtripPong.dir/pong.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/pong.c

CMakeFiles/RoundtripPong.dir/pong.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/RoundtripPong.dir/pong.c.i"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/pong.c > CMakeFiles/RoundtripPong.dir/pong.c.i

CMakeFiles/RoundtripPong.dir/pong.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/RoundtripPong.dir/pong.c.s"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/pong.c -o CMakeFiles/RoundtripPong.dir/pong.c.s

CMakeFiles/RoundtripPong.dir/RoundTrip.c.o: CMakeFiles/RoundtripPong.dir/flags.make
CMakeFiles/RoundtripPong.dir/RoundTrip.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/RoundTrip.c
CMakeFiles/RoundtripPong.dir/RoundTrip.c.o: CMakeFiles/RoundtripPong.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/RoundtripPong.dir/RoundTrip.c.o"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/RoundtripPong.dir/RoundTrip.c.o -MF CMakeFiles/RoundtripPong.dir/RoundTrip.c.o.d -o CMakeFiles/RoundtripPong.dir/RoundTrip.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/RoundTrip.c

CMakeFiles/RoundtripPong.dir/RoundTrip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/RoundtripPong.dir/RoundTrip.c.i"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/RoundTrip.c > CMakeFiles/RoundtripPong.dir/RoundTrip.c.i

CMakeFiles/RoundtripPong.dir/RoundTrip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/RoundtripPong.dir/RoundTrip.c.s"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/RoundTrip.c -o CMakeFiles/RoundtripPong.dir/RoundTrip.c.s

# Object files for target RoundtripPong
RoundtripPong_OBJECTS = \
"CMakeFiles/RoundtripPong.dir/pong.c.o" \
"CMakeFiles/RoundtripPong.dir/RoundTrip.c.o"

# External object files for target RoundtripPong
RoundtripPong_EXTERNAL_OBJECTS =

RoundtripPong: CMakeFiles/RoundtripPong.dir/pong.c.o
RoundtripPong: CMakeFiles/RoundtripPong.dir/RoundTrip.c.o
RoundtripPong: CMakeFiles/RoundtripPong.dir/build.make
RoundtripPong: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/_install/lib/libddsc.so.0.11.0
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable RoundtripPong"
	/D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe  -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS/include -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS/include/network -m64 -mhard-float -mlong-double-64 -mno-red-zone -fno-omit-frame-pointer -fno-strict-aliasing -Wall -fmessage-length=0 -fsigned-char -fno-short-enums   -fPIC -DSYLIXOS   -O2 -g3 -gdwarf-2 -nostartfiles -Wl,-shared -fPIC -shared   -O2 -g3 -gdwarf-2 $(RoundtripPong_OBJECTS) $(RoundtripPong_EXTERNAL_OBJECTS) -o RoundtripPong   -L/D/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/Release  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/Debug  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libcextern/Release  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libcextern/Debug  -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/_install/lib/libddsc.so.0.11.0 -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc

# Rule to build all files generated by this target.
CMakeFiles/RoundtripPong.dir/build: RoundtripPong
.PHONY : CMakeFiles/RoundtripPong.dir/build

CMakeFiles/RoundtripPong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RoundtripPong.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RoundtripPong.dir/clean

CMakeFiles/RoundtripPong.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/debug /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/debug /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/examples/roundtrip/debug/CMakeFiles/RoundtripPong.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/RoundtripPong.dir/depend

