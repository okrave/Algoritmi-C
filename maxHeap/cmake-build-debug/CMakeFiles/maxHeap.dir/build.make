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
CMAKE_SOURCE_DIR = /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/maxHeap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/maxHeap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maxHeap.dir/flags.make

CMakeFiles/maxHeap.dir/test_heap.c.o: CMakeFiles/maxHeap.dir/flags.make
CMakeFiles/maxHeap.dir/test_heap.c.o: ../test_heap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/maxHeap.dir/test_heap.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/maxHeap.dir/test_heap.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/test_heap.c

CMakeFiles/maxHeap.dir/test_heap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/maxHeap.dir/test_heap.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/test_heap.c > CMakeFiles/maxHeap.dir/test_heap.c.i

CMakeFiles/maxHeap.dir/test_heap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/maxHeap.dir/test_heap.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/test_heap.c -o CMakeFiles/maxHeap.dir/test_heap.c.s

CMakeFiles/maxHeap.dir/test_heap.c.o.requires:

.PHONY : CMakeFiles/maxHeap.dir/test_heap.c.o.requires

CMakeFiles/maxHeap.dir/test_heap.c.o.provides: CMakeFiles/maxHeap.dir/test_heap.c.o.requires
	$(MAKE) -f CMakeFiles/maxHeap.dir/build.make CMakeFiles/maxHeap.dir/test_heap.c.o.provides.build
.PHONY : CMakeFiles/maxHeap.dir/test_heap.c.o.provides

CMakeFiles/maxHeap.dir/test_heap.c.o.provides.build: CMakeFiles/maxHeap.dir/test_heap.c.o


CMakeFiles/maxHeap.dir/max_heap.c.o: CMakeFiles/maxHeap.dir/flags.make
CMakeFiles/maxHeap.dir/max_heap.c.o: ../max_heap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/maxHeap.dir/max_heap.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/maxHeap.dir/max_heap.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/max_heap.c

CMakeFiles/maxHeap.dir/max_heap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/maxHeap.dir/max_heap.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/max_heap.c > CMakeFiles/maxHeap.dir/max_heap.c.i

CMakeFiles/maxHeap.dir/max_heap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/maxHeap.dir/max_heap.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/max_heap.c -o CMakeFiles/maxHeap.dir/max_heap.c.s

CMakeFiles/maxHeap.dir/max_heap.c.o.requires:

.PHONY : CMakeFiles/maxHeap.dir/max_heap.c.o.requires

CMakeFiles/maxHeap.dir/max_heap.c.o.provides: CMakeFiles/maxHeap.dir/max_heap.c.o.requires
	$(MAKE) -f CMakeFiles/maxHeap.dir/build.make CMakeFiles/maxHeap.dir/max_heap.c.o.provides.build
.PHONY : CMakeFiles/maxHeap.dir/max_heap.c.o.provides

CMakeFiles/maxHeap.dir/max_heap.c.o.provides.build: CMakeFiles/maxHeap.dir/max_heap.c.o


CMakeFiles/maxHeap.dir/test.c.o: CMakeFiles/maxHeap.dir/flags.make
CMakeFiles/maxHeap.dir/test.c.o: ../test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/maxHeap.dir/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/maxHeap.dir/test.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/test.c

CMakeFiles/maxHeap.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/maxHeap.dir/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/test.c > CMakeFiles/maxHeap.dir/test.c.i

CMakeFiles/maxHeap.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/maxHeap.dir/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/test.c -o CMakeFiles/maxHeap.dir/test.c.s

CMakeFiles/maxHeap.dir/test.c.o.requires:

.PHONY : CMakeFiles/maxHeap.dir/test.c.o.requires

CMakeFiles/maxHeap.dir/test.c.o.provides: CMakeFiles/maxHeap.dir/test.c.o.requires
	$(MAKE) -f CMakeFiles/maxHeap.dir/build.make CMakeFiles/maxHeap.dir/test.c.o.provides.build
.PHONY : CMakeFiles/maxHeap.dir/test.c.o.provides

CMakeFiles/maxHeap.dir/test.c.o.provides.build: CMakeFiles/maxHeap.dir/test.c.o


# Object files for target maxHeap
maxHeap_OBJECTS = \
"CMakeFiles/maxHeap.dir/test_heap.c.o" \
"CMakeFiles/maxHeap.dir/max_heap.c.o" \
"CMakeFiles/maxHeap.dir/test.c.o"

# External object files for target maxHeap
maxHeap_EXTERNAL_OBJECTS =

maxHeap: CMakeFiles/maxHeap.dir/test_heap.c.o
maxHeap: CMakeFiles/maxHeap.dir/max_heap.c.o
maxHeap: CMakeFiles/maxHeap.dir/test.c.o
maxHeap: CMakeFiles/maxHeap.dir/build.make
maxHeap: CMakeFiles/maxHeap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable maxHeap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maxHeap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maxHeap.dir/build: maxHeap

.PHONY : CMakeFiles/maxHeap.dir/build

CMakeFiles/maxHeap.dir/requires: CMakeFiles/maxHeap.dir/test_heap.c.o.requires
CMakeFiles/maxHeap.dir/requires: CMakeFiles/maxHeap.dir/max_heap.c.o.requires
CMakeFiles/maxHeap.dir/requires: CMakeFiles/maxHeap.dir/test.c.o.requires

.PHONY : CMakeFiles/maxHeap.dir/requires

CMakeFiles/maxHeap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/maxHeap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/maxHeap.dir/clean

CMakeFiles/maxHeap.dir/depend:
	cd /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/maxHeap/cmake-build-debug/CMakeFiles/maxHeap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/maxHeap.dir/depend
