# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/luca/Scaricati/clion-2017.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/luca/Scaricati/clion-2017.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HEAPSORT_TEST.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HEAPSORT_TEST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HEAPSORT_TEST.dir/flags.make

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o: CMakeFiles/HEAPSORT_TEST.dir/flags.make
CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o: ../SelectionSort/SelectionSort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/SelectionSort.c

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/SelectionSort.c > CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.i

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/SelectionSort.c -o CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.s

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o.requires:

.PHONY : CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o.requires

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o.provides: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o.requires
	$(MAKE) -f CMakeFiles/HEAPSORT_TEST.dir/build.make CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o.provides.build
.PHONY : CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o.provides

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o.provides.build: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o


CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o: CMakeFiles/HEAPSORT_TEST.dir/flags.make
CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o: ../SelectionSort/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/test.c

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/test.c > CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.i

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/test.c -o CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.s

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o.requires:

.PHONY : CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o.requires

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o.provides: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o.requires
	$(MAKE) -f CMakeFiles/HEAPSORT_TEST.dir/build.make CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o.provides.build
.PHONY : CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o.provides

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o.provides.build: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o


CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o: CMakeFiles/HEAPSORT_TEST.dir/flags.make
CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o: ../SelectionSort/test_file_csv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/test_file_csv.c

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/test_file_csv.c > CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.i

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/SelectionSort/test_file_csv.c -o CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.s

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o.requires:

.PHONY : CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o.requires

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o.provides: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o.requires
	$(MAKE) -f CMakeFiles/HEAPSORT_TEST.dir/build.make CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o.provides.build
.PHONY : CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o.provides

CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o.provides.build: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o


# Object files for target HEAPSORT_TEST
HEAPSORT_TEST_OBJECTS = \
"CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o" \
"CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o" \
"CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o"

# External object files for target HEAPSORT_TEST
HEAPSORT_TEST_EXTERNAL_OBJECTS =

HEAPSORT_TEST: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o
HEAPSORT_TEST: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o
HEAPSORT_TEST: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o
HEAPSORT_TEST: CMakeFiles/HEAPSORT_TEST.dir/build.make
HEAPSORT_TEST: CMakeFiles/HEAPSORT_TEST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable HEAPSORT_TEST"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HEAPSORT_TEST.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HEAPSORT_TEST.dir/build: HEAPSORT_TEST

.PHONY : CMakeFiles/HEAPSORT_TEST.dir/build

CMakeFiles/HEAPSORT_TEST.dir/requires: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/SelectionSort.c.o.requires
CMakeFiles/HEAPSORT_TEST.dir/requires: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test.c.o.requires
CMakeFiles/HEAPSORT_TEST.dir/requires: CMakeFiles/HEAPSORT_TEST.dir/SelectionSort/test_file_csv.c.o.requires

.PHONY : CMakeFiles/HEAPSORT_TEST.dir/requires

CMakeFiles/HEAPSORT_TEST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HEAPSORT_TEST.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HEAPSORT_TEST.dir/clean

CMakeFiles/HEAPSORT_TEST.dir/depend:
	cd /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/sorting/cmake-build-debug/CMakeFiles/HEAPSORT_TEST.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HEAPSORT_TEST.dir/depend
