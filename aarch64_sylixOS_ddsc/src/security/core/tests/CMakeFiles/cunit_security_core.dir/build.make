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

# Include any dependencies generated for this target.
include src/security/core/tests/CMakeFiles/cunit_security_core.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/security/core/tests/CMakeFiles/cunit_security_core.dir/compiler_depend.make

# Include the progress variables for this target.
include src/security/core/tests/CMakeFiles/cunit_security_core.dir/progress.make

# Include the compile flags for this target's objects.
include src/security/core/tests/CMakeFiles/cunit_security_core.dir/flags.make

src/security/core/tests/CMakeFiles/cunit_security_core.dir/codegen:
.PHONY : src/security/core/tests/CMakeFiles/cunit_security_core.dir/codegen

src/security/core/tests/CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/flags.make
src/security/core/tests/CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o: src/security/core/tests/cunit_security_core.c
src/security/core/tests/CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/security/core/tests/CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/security/core/tests/CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o -MF CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o.d -o CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests/cunit_security_core.c

src/security/core/tests/CMakeFiles/cunit_security_core.dir/cunit_security_core.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_security_core.dir/cunit_security_core.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests/cunit_security_core.c > CMakeFiles/cunit_security_core.dir/cunit_security_core.c.i

src/security/core/tests/CMakeFiles/cunit_security_core.dir/cunit_security_core.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_security_core.dir/cunit_security_core.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests/cunit_security_core.c -o CMakeFiles/cunit_security_core.dir/cunit_security_core.c.s

src/security/core/tests/CMakeFiles/cunit_security_core.dir/fsm.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/flags.make
src/security/core/tests/CMakeFiles/cunit_security_core.dir/fsm.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/fsm.c
src/security/core/tests/CMakeFiles/cunit_security_core.dir/fsm.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/security/core/tests/CMakeFiles/cunit_security_core.dir/fsm.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/security/core/tests/CMakeFiles/cunit_security_core.dir/fsm.c.o -MF CMakeFiles/cunit_security_core.dir/fsm.c.o.d -o CMakeFiles/cunit_security_core.dir/fsm.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/fsm.c

src/security/core/tests/CMakeFiles/cunit_security_core.dir/fsm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_security_core.dir/fsm.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/fsm.c > CMakeFiles/cunit_security_core.dir/fsm.c.i

src/security/core/tests/CMakeFiles/cunit_security_core.dir/fsm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_security_core.dir/fsm.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/fsm.c -o CMakeFiles/cunit_security_core.dir/fsm.c.s

src/security/core/tests/CMakeFiles/cunit_security_core.dir/timed_cb.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/flags.make
src/security/core/tests/CMakeFiles/cunit_security_core.dir/timed_cb.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/timed_cb.c
src/security/core/tests/CMakeFiles/cunit_security_core.dir/timed_cb.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/security/core/tests/CMakeFiles/cunit_security_core.dir/timed_cb.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/security/core/tests/CMakeFiles/cunit_security_core.dir/timed_cb.c.o -MF CMakeFiles/cunit_security_core.dir/timed_cb.c.o.d -o CMakeFiles/cunit_security_core.dir/timed_cb.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/timed_cb.c

src/security/core/tests/CMakeFiles/cunit_security_core.dir/timed_cb.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_security_core.dir/timed_cb.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/timed_cb.c > CMakeFiles/cunit_security_core.dir/timed_cb.c.i

src/security/core/tests/CMakeFiles/cunit_security_core.dir/timed_cb.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_security_core.dir/timed_cb.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/timed_cb.c -o CMakeFiles/cunit_security_core.dir/timed_cb.c.s

src/security/core/tests/CMakeFiles/cunit_security_core.dir/security_utils.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/flags.make
src/security/core/tests/CMakeFiles/cunit_security_core.dir/security_utils.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/security_utils.c
src/security/core/tests/CMakeFiles/cunit_security_core.dir/security_utils.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/security/core/tests/CMakeFiles/cunit_security_core.dir/security_utils.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/security/core/tests/CMakeFiles/cunit_security_core.dir/security_utils.c.o -MF CMakeFiles/cunit_security_core.dir/security_utils.c.o.d -o CMakeFiles/cunit_security_core.dir/security_utils.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/security_utils.c

src/security/core/tests/CMakeFiles/cunit_security_core.dir/security_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_security_core.dir/security_utils.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/security_utils.c > CMakeFiles/cunit_security_core.dir/security_utils.c.i

src/security/core/tests/CMakeFiles/cunit_security_core.dir/security_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_security_core.dir/security_utils.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/security_utils.c -o CMakeFiles/cunit_security_core.dir/security_utils.c.s

src/security/core/tests/CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/flags.make
src/security/core/tests/CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/SecurityCoreTests.c
src/security/core/tests/CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o: src/security/core/tests/CMakeFiles/cunit_security_core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/security/core/tests/CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/security/core/tests/CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o -MF CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o.d -o CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/SecurityCoreTests.c

src/security/core/tests/CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/SecurityCoreTests.c > CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.i

src/security/core/tests/CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/SecurityCoreTests.c -o CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.s

# Object files for target cunit_security_core
cunit_security_core_OBJECTS = \
"CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o" \
"CMakeFiles/cunit_security_core.dir/fsm.c.o" \
"CMakeFiles/cunit_security_core.dir/timed_cb.c.o" \
"CMakeFiles/cunit_security_core.dir/security_utils.c.o" \
"CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o"

# External object files for target cunit_security_core
cunit_security_core_EXTERNAL_OBJECTS =

bin/cunit_security_core: src/security/core/tests/CMakeFiles/cunit_security_core.dir/cunit_security_core.c.o
bin/cunit_security_core: src/security/core/tests/CMakeFiles/cunit_security_core.dir/fsm.c.o
bin/cunit_security_core: src/security/core/tests/CMakeFiles/cunit_security_core.dir/timed_cb.c.o
bin/cunit_security_core: src/security/core/tests/CMakeFiles/cunit_security_core.dir/security_utils.c.o
bin/cunit_security_core: src/security/core/tests/CMakeFiles/cunit_security_core.dir/SecurityCoreTests.c.o
bin/cunit_security_core: src/security/core/tests/CMakeFiles/cunit_security_core.dir/build.make
bin/cunit_security_core: lib/libucunit.so
bin/cunit_security_core: lib/libddsc.so.0.11.0
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable ../../../../bin/cunit_security_core"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && /D/RealEvo/compiler/aarch64-sylixos-toolchain/bin/aarch64-sylixos-elf-gcc.exe  -ID:/RealEvo_workspace/vsoa_demo/aarc64/libsylixos/SylixOS -ID:/RealEvo_workspace/vsoa_demo/aarc64/libsylixos/SylixOS/include -ID:/RealEvo_workspace/vsoa_demo/aarc64/libsylixos/SylixOS/include/network -mcpu=generic  -fno-omit-frame-pointer -mstrict-align -ffixed-x18 -fno-strict-aliasing -Wall -fmessage-length=0 -fsigned-char -fno-short-enums   -fPIC -DSYLIXOS   -fPIC -O0 -g3 -gdwarf-2 -nostartfiles -Wl,-shared -fPIC -shared   -O0 -g3 -gdwarf-2 $(cunit_security_core_OBJECTS) $(cunit_security_core_EXTERNAL_OBJECTS) -o ../../../../bin/cunit_security_core   -L/D/RealEvo_workspace/vsoa_demo/aarc64/libsylixos/Release  -L/D/RealEvo_workspace/vsoa_demo/aarc64/libsylixos/Debug  -L/D/RealEvo_workspace/vsoa_demo/aarc64/libcextern/Release  -L/D/RealEvo_workspace/vsoa_demo/aarc64/libcextern/Debug  -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc ../../../../lib/libucunit.so ../../../../lib/libddsc.so.0.11.0 -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc

# Rule to build all files generated by this target.
src/security/core/tests/CMakeFiles/cunit_security_core.dir/build: bin/cunit_security_core
.PHONY : src/security/core/tests/CMakeFiles/cunit_security_core.dir/build

src/security/core/tests/CMakeFiles/cunit_security_core.dir/clean:
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests && $(CMAKE_COMMAND) -P CMakeFiles/cunit_security_core.dir/cmake_clean.cmake
.PHONY : src/security/core/tests/CMakeFiles/cunit_security_core.dir/clean

src/security/core/tests/CMakeFiles/cunit_security_core.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/aarch64_sylixOS_ddsc/src/security/core/tests/CMakeFiles/cunit_security_core.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/security/core/tests/CMakeFiles/cunit_security_core.dir/depend

