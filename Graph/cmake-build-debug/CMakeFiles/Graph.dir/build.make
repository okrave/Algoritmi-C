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
CMAKE_SOURCE_DIR = /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Graph.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Graph.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Graph.dir/flags.make

CMakeFiles/Graph.dir/test_on_graph.c.o: CMakeFiles/Graph.dir/flags.make
CMakeFiles/Graph.dir/test_on_graph.c.o: ../test_on_graph.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Graph.dir/test_on_graph.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Graph.dir/test_on_graph.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/test_on_graph.c

CMakeFiles/Graph.dir/test_on_graph.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph.dir/test_on_graph.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/test_on_graph.c > CMakeFiles/Graph.dir/test_on_graph.c.i

CMakeFiles/Graph.dir/test_on_graph.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph.dir/test_on_graph.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/test_on_graph.c -o CMakeFiles/Graph.dir/test_on_graph.c.s

CMakeFiles/Graph.dir/test_on_graph.c.o.requires:

.PHONY : CMakeFiles/Graph.dir/test_on_graph.c.o.requires

CMakeFiles/Graph.dir/test_on_graph.c.o.provides: CMakeFiles/Graph.dir/test_on_graph.c.o.requires
	$(MAKE) -f CMakeFiles/Graph.dir/build.make CMakeFiles/Graph.dir/test_on_graph.c.o.provides.build
.PHONY : CMakeFiles/Graph.dir/test_on_graph.c.o.provides

CMakeFiles/Graph.dir/test_on_graph.c.o.provides.build: CMakeFiles/Graph.dir/test_on_graph.c.o


CMakeFiles/Graph.dir/Kruskal.c.o: CMakeFiles/Graph.dir/flags.make
CMakeFiles/Graph.dir/Kruskal.c.o: ../Kruskal.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Graph.dir/Kruskal.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Graph.dir/Kruskal.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Kruskal.c

CMakeFiles/Graph.dir/Kruskal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph.dir/Kruskal.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Kruskal.c > CMakeFiles/Graph.dir/Kruskal.c.i

CMakeFiles/Graph.dir/Kruskal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph.dir/Kruskal.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Kruskal.c -o CMakeFiles/Graph.dir/Kruskal.c.s

CMakeFiles/Graph.dir/Kruskal.c.o.requires:

.PHONY : CMakeFiles/Graph.dir/Kruskal.c.o.requires

CMakeFiles/Graph.dir/Kruskal.c.o.provides: CMakeFiles/Graph.dir/Kruskal.c.o.requires
	$(MAKE) -f CMakeFiles/Graph.dir/build.make CMakeFiles/Graph.dir/Kruskal.c.o.provides.build
.PHONY : CMakeFiles/Graph.dir/Kruskal.c.o.provides

CMakeFiles/Graph.dir/Kruskal.c.o.provides.build: CMakeFiles/Graph.dir/Kruskal.c.o


CMakeFiles/Graph.dir/Dijkstra.c.o: CMakeFiles/Graph.dir/flags.make
CMakeFiles/Graph.dir/Dijkstra.c.o: ../Dijkstra.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Graph.dir/Dijkstra.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Graph.dir/Dijkstra.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Dijkstra.c

CMakeFiles/Graph.dir/Dijkstra.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph.dir/Dijkstra.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Dijkstra.c > CMakeFiles/Graph.dir/Dijkstra.c.i

CMakeFiles/Graph.dir/Dijkstra.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph.dir/Dijkstra.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Dijkstra.c -o CMakeFiles/Graph.dir/Dijkstra.c.s

CMakeFiles/Graph.dir/Dijkstra.c.o.requires:

.PHONY : CMakeFiles/Graph.dir/Dijkstra.c.o.requires

CMakeFiles/Graph.dir/Dijkstra.c.o.provides: CMakeFiles/Graph.dir/Dijkstra.c.o.requires
	$(MAKE) -f CMakeFiles/Graph.dir/build.make CMakeFiles/Graph.dir/Dijkstra.c.o.provides.build
.PHONY : CMakeFiles/Graph.dir/Dijkstra.c.o.provides

CMakeFiles/Graph.dir/Dijkstra.c.o.provides.build: CMakeFiles/Graph.dir/Dijkstra.c.o


CMakeFiles/Graph.dir/Graph.c.o: CMakeFiles/Graph.dir/flags.make
CMakeFiles/Graph.dir/Graph.c.o: ../Graph.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Graph.dir/Graph.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Graph.dir/Graph.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Graph.c

CMakeFiles/Graph.dir/Graph.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph.dir/Graph.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Graph.c > CMakeFiles/Graph.dir/Graph.c.i

CMakeFiles/Graph.dir/Graph.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph.dir/Graph.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Graph.c -o CMakeFiles/Graph.dir/Graph.c.s

CMakeFiles/Graph.dir/Graph.c.o.requires:

.PHONY : CMakeFiles/Graph.dir/Graph.c.o.requires

CMakeFiles/Graph.dir/Graph.c.o.provides: CMakeFiles/Graph.dir/Graph.c.o.requires
	$(MAKE) -f CMakeFiles/Graph.dir/build.make CMakeFiles/Graph.dir/Graph.c.o.provides.build
.PHONY : CMakeFiles/Graph.dir/Graph.c.o.provides

CMakeFiles/Graph.dir/Graph.c.o.provides.build: CMakeFiles/Graph.dir/Graph.c.o


CMakeFiles/Graph.dir/Strongly_CC.c.o: CMakeFiles/Graph.dir/flags.make
CMakeFiles/Graph.dir/Strongly_CC.c.o: ../Strongly_CC.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Graph.dir/Strongly_CC.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Graph.dir/Strongly_CC.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Strongly_CC.c

CMakeFiles/Graph.dir/Strongly_CC.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph.dir/Strongly_CC.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Strongly_CC.c > CMakeFiles/Graph.dir/Strongly_CC.c.i

CMakeFiles/Graph.dir/Strongly_CC.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph.dir/Strongly_CC.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/Strongly_CC.c -o CMakeFiles/Graph.dir/Strongly_CC.c.s

CMakeFiles/Graph.dir/Strongly_CC.c.o.requires:

.PHONY : CMakeFiles/Graph.dir/Strongly_CC.c.o.requires

CMakeFiles/Graph.dir/Strongly_CC.c.o.provides: CMakeFiles/Graph.dir/Strongly_CC.c.o.requires
	$(MAKE) -f CMakeFiles/Graph.dir/build.make CMakeFiles/Graph.dir/Strongly_CC.c.o.provides.build
.PHONY : CMakeFiles/Graph.dir/Strongly_CC.c.o.provides

CMakeFiles/Graph.dir/Strongly_CC.c.o.provides.build: CMakeFiles/Graph.dir/Strongly_CC.c.o


CMakeFiles/Graph.dir/test.c.o: CMakeFiles/Graph.dir/flags.make
CMakeFiles/Graph.dir/test.c.o: ../test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Graph.dir/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Graph.dir/test.c.o   -c /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/test.c

CMakeFiles/Graph.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph.dir/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/test.c > CMakeFiles/Graph.dir/test.c.i

CMakeFiles/Graph.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph.dir/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/test.c -o CMakeFiles/Graph.dir/test.c.s

CMakeFiles/Graph.dir/test.c.o.requires:

.PHONY : CMakeFiles/Graph.dir/test.c.o.requires

CMakeFiles/Graph.dir/test.c.o.provides: CMakeFiles/Graph.dir/test.c.o.requires
	$(MAKE) -f CMakeFiles/Graph.dir/build.make CMakeFiles/Graph.dir/test.c.o.provides.build
.PHONY : CMakeFiles/Graph.dir/test.c.o.provides

CMakeFiles/Graph.dir/test.c.o.provides.build: CMakeFiles/Graph.dir/test.c.o


# Object files for target Graph
Graph_OBJECTS = \
"CMakeFiles/Graph.dir/test_on_graph.c.o" \
"CMakeFiles/Graph.dir/Kruskal.c.o" \
"CMakeFiles/Graph.dir/Dijkstra.c.o" \
"CMakeFiles/Graph.dir/Graph.c.o" \
"CMakeFiles/Graph.dir/Strongly_CC.c.o" \
"CMakeFiles/Graph.dir/test.c.o"

# External object files for target Graph
Graph_EXTERNAL_OBJECTS =

Graph: CMakeFiles/Graph.dir/test_on_graph.c.o
Graph: CMakeFiles/Graph.dir/Kruskal.c.o
Graph: CMakeFiles/Graph.dir/Dijkstra.c.o
Graph: CMakeFiles/Graph.dir/Graph.c.o
Graph: CMakeFiles/Graph.dir/Strongly_CC.c.o
Graph: CMakeFiles/Graph.dir/test.c.o
Graph: CMakeFiles/Graph.dir/build.make
Graph: CMakeFiles/Graph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable Graph"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Graph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Graph.dir/build: Graph

.PHONY : CMakeFiles/Graph.dir/build

CMakeFiles/Graph.dir/requires: CMakeFiles/Graph.dir/test_on_graph.c.o.requires
CMakeFiles/Graph.dir/requires: CMakeFiles/Graph.dir/Kruskal.c.o.requires
CMakeFiles/Graph.dir/requires: CMakeFiles/Graph.dir/Dijkstra.c.o.requires
CMakeFiles/Graph.dir/requires: CMakeFiles/Graph.dir/Graph.c.o.requires
CMakeFiles/Graph.dir/requires: CMakeFiles/Graph.dir/Strongly_CC.c.o.requires
CMakeFiles/Graph.dir/requires: CMakeFiles/Graph.dir/test.c.o.requires

.PHONY : CMakeFiles/Graph.dir/requires

CMakeFiles/Graph.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Graph.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Graph.dir/clean

CMakeFiles/Graph.dir/depend:
	cd /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug /home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/Graph/cmake-build-debug/CMakeFiles/Graph.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Graph.dir/depend

