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
CMAKE_BINARY_DIR = /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc

# Include any dependencies generated for this target.
include src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.make

# Include the progress variables for this target.
include src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/progress.make

# Include the compile flags for this target's objects.
include src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/codegen:
.PHONY : src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/codegen

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o: src/core/ddsi/tests/cunit_ddsi.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o -MF CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o.d -o CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests/cunit_ddsi.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests/cunit_ddsi.c > CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests/cunit_ddsi.c -o CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/ipaddr.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/ipaddr.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/ipaddr.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/ipaddr.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/ipaddr.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/ipaddr.c.o -MF CMakeFiles/cunit_ddsi.dir/ipaddr.c.o.d -o CMakeFiles/cunit_ddsi.dir/ipaddr.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/ipaddr.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/ipaddr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/ipaddr.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/ipaddr.c > CMakeFiles/cunit_ddsi.dir/ipaddr.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/ipaddr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/ipaddr.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/ipaddr.c -o CMakeFiles/cunit_ddsi.dir/ipaddr.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/locators.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/locators.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/locators.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/locators.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/locators.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) -DCU_THEORY_INCLUDE_FILE=\"D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests/locators.h\" $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/locators.c.o -MF CMakeFiles/cunit_ddsi.dir/locators.c.o.d -o CMakeFiles/cunit_ddsi.dir/locators.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/locators.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/locators.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/locators.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) -DCU_THEORY_INCLUDE_FILE=\"D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests/locators.h\" $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/locators.c > CMakeFiles/cunit_ddsi.dir/locators.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/locators.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/locators.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) -DCU_THEORY_INCLUDE_FILE=\"D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests/locators.h\" $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/locators.c -o CMakeFiles/cunit_ddsi.dir/locators.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_generic.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_generic.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist_generic.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_generic.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_generic.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_generic.c.o -MF CMakeFiles/cunit_ddsi.dir/plist_generic.c.o.d -o CMakeFiles/cunit_ddsi.dir/plist_generic.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist_generic.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_generic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/plist_generic.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist_generic.c > CMakeFiles/cunit_ddsi.dir/plist_generic.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_generic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/plist_generic.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist_generic.c -o CMakeFiles/cunit_ddsi.dir/plist_generic.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist.c.o -MF CMakeFiles/cunit_ddsi.dir/plist.c.o.d -o CMakeFiles/cunit_ddsi.dir/plist.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/plist.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist.c > CMakeFiles/cunit_ddsi.dir/plist.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/plist.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist.c -o CMakeFiles/cunit_ddsi.dir/plist.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist_leasedur.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o -MF CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o.d -o CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist_leasedur.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist_leasedur.c > CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/plist_leasedur.c -o CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/pmd_message.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/pmd_message.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/pmd_message.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/pmd_message.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/pmd_message.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/pmd_message.c.o -MF CMakeFiles/cunit_ddsi.dir/pmd_message.c.o.d -o CMakeFiles/cunit_ddsi.dir/pmd_message.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/pmd_message.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/pmd_message.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/pmd_message.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/pmd_message.c > CMakeFiles/cunit_ddsi.dir/pmd_message.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/pmd_message.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/pmd_message.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/pmd_message.c -o CMakeFiles/cunit_ddsi.dir/pmd_message.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/radmin.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/radmin.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/radmin.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/radmin.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/radmin.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/radmin.c.o -MF CMakeFiles/cunit_ddsi.dir/radmin.c.o.d -o CMakeFiles/cunit_ddsi.dir/radmin.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/radmin.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/radmin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/radmin.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/radmin.c > CMakeFiles/cunit_ddsi.dir/radmin.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/radmin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/radmin.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/radmin.c -o CMakeFiles/cunit_ddsi.dir/radmin.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/sysdeps.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/sysdeps.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/sysdeps.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/sysdeps.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/sysdeps.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/sysdeps.c.o -MF CMakeFiles/cunit_ddsi.dir/sysdeps.c.o.d -o CMakeFiles/cunit_ddsi.dir/sysdeps.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/sysdeps.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/sysdeps.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/sysdeps.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/sysdeps.c > CMakeFiles/cunit_ddsi.dir/sysdeps.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/sysdeps.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/sysdeps.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/sysdeps.c -o CMakeFiles/cunit_ddsi.dir/sysdeps.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/wraddrset.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/wraddrset.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/wraddrset.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/wraddrset.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/wraddrset.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/wraddrset.c.o -MF CMakeFiles/cunit_ddsi.dir/wraddrset.c.o.d -o CMakeFiles/cunit_ddsi.dir/wraddrset.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/wraddrset.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/wraddrset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/wraddrset.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/wraddrset.c > CMakeFiles/cunit_ddsi.dir/wraddrset.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/wraddrset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/wraddrset.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/wraddrset.c -o CMakeFiles/cunit_ddsi.dir/wraddrset.c.s

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/security_msg.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/flags.make
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/security_msg.c.o: D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/security_msg.c
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/security_msg.c.o: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/security_msg.c.o"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -MD -MT src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/security_msg.c.o -MF CMakeFiles/cunit_ddsi.dir/security_msg.c.o.d -o CMakeFiles/cunit_ddsi.dir/security_msg.c.o -c /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/security_msg.c

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/security_msg.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cunit_ddsi.dir/security_msg.c.i"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -E /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/security_msg.c > CMakeFiles/cunit_ddsi.dir/security_msg.c.i

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/security_msg.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cunit_ddsi.dir/security_msg.c.s"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -Wno-missing-field-initializers -S /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests/security_msg.c -o CMakeFiles/cunit_ddsi.dir/security_msg.c.s

# Object files for target cunit_ddsi
cunit_ddsi_OBJECTS = \
"CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o" \
"CMakeFiles/cunit_ddsi.dir/ipaddr.c.o" \
"CMakeFiles/cunit_ddsi.dir/locators.c.o" \
"CMakeFiles/cunit_ddsi.dir/plist_generic.c.o" \
"CMakeFiles/cunit_ddsi.dir/plist.c.o" \
"CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o" \
"CMakeFiles/cunit_ddsi.dir/pmd_message.c.o" \
"CMakeFiles/cunit_ddsi.dir/radmin.c.o" \
"CMakeFiles/cunit_ddsi.dir/sysdeps.c.o" \
"CMakeFiles/cunit_ddsi.dir/wraddrset.c.o" \
"CMakeFiles/cunit_ddsi.dir/security_msg.c.o"

# External object files for target cunit_ddsi
cunit_ddsi_EXTERNAL_OBJECTS =

bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/cunit_ddsi.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/ipaddr.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/locators.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_generic.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/plist_leasedur.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/pmd_message.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/radmin.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/sysdeps.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/wraddrset.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/security_msg.c.o
bin/cunit_ddsi: src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/build.make
bin/cunit_ddsi: lib/libucunit.so
bin/cunit_ddsi: lib/libddsc.so.0.11.0
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C executable ../../../../bin/cunit_ddsi"
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && /D/RealEvo/compiler/x86_64-sylixos-toolchain/bin/x86_64-sylixos-elf-gcc.exe  -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS/include -ID:/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/SylixOS/include/network -m64 -mhard-float -mlong-double-64 -mno-red-zone -fno-omit-frame-pointer -fno-strict-aliasing -Wall -fmessage-length=0 -fsigned-char -fno-short-enums   -fPIC -DSYLIXOS   -O0 -g3 -gdwarf-2 -nostartfiles -Wl,-shared -fPIC -shared   -O0 -g3 -gdwarf-2 $(cunit_ddsi_OBJECTS) $(cunit_ddsi_EXTERNAL_OBJECTS) -o ../../../../bin/cunit_ddsi   -L/D/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/Release  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libsylixos/Debug  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libcextern/Release  -L/D/RealEvo_workspace/vsoa_demo/x86_base/libcextern/Debug  -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc ../../../../lib/libucunit.so ../../../../lib/libddsc.so.0.11.0 -lcextern -lvpmpdm -lstdc++ -ldsohandle -lm -lgcc

# Rule to build all files generated by this target.
src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/build: bin/cunit_ddsi
.PHONY : src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/build

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/clean:
	cd /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests && $(CMAKE_COMMAND) -P CMakeFiles/cunit_ddsi.dir/cmake_clean.cmake
.PHONY : src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/clean

src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/core/ddsi/tests /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests /D/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/core/ddsi/tests/CMakeFiles/cunit_ddsi.dir/depend

