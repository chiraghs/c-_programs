# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/chiraghs/Downloads/clion-2019.3.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/chiraghs/Downloads/clion-2019.3.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stock_span.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stock_span.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stock_span.dir/flags.make

CMakeFiles/stock_span.dir/main.cpp.o: CMakeFiles/stock_span.dir/flags.make
CMakeFiles/stock_span.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stock_span.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stock_span.dir/main.cpp.o -c /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/main.cpp

CMakeFiles/stock_span.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stock_span.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/main.cpp > CMakeFiles/stock_span.dir/main.cpp.i

CMakeFiles/stock_span.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stock_span.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/main.cpp -o CMakeFiles/stock_span.dir/main.cpp.s

# Object files for target stock_span
stock_span_OBJECTS = \
"CMakeFiles/stock_span.dir/main.cpp.o"

# External object files for target stock_span
stock_span_EXTERNAL_OBJECTS =

stock_span: CMakeFiles/stock_span.dir/main.cpp.o
stock_span: CMakeFiles/stock_span.dir/build.make
stock_span: CMakeFiles/stock_span.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stock_span"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stock_span.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stock_span.dir/build: stock_span

.PHONY : CMakeFiles/stock_span.dir/build

CMakeFiles/stock_span.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stock_span.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stock_span.dir/clean

CMakeFiles/stock_span.dir/depend:
	cd /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/cmake-build-debug /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/cmake-build-debug /home/chiraghs/CLionProjects/day4/arrays_1d/stock_span/cmake-build-debug/CMakeFiles/stock_span.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stock_span.dir/depend

