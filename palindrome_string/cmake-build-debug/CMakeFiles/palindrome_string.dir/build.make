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
CMAKE_SOURCE_DIR = /home/chiraghs/CLionProjects/day1/palindrome_string

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chiraghs/CLionProjects/day1/palindrome_string/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/palindrome_string.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/palindrome_string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/palindrome_string.dir/flags.make

CMakeFiles/palindrome_string.dir/main.cpp.o: CMakeFiles/palindrome_string.dir/flags.make
CMakeFiles/palindrome_string.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chiraghs/CLionProjects/day1/palindrome_string/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/palindrome_string.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/palindrome_string.dir/main.cpp.o -c /home/chiraghs/CLionProjects/day1/palindrome_string/main.cpp

CMakeFiles/palindrome_string.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/palindrome_string.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chiraghs/CLionProjects/day1/palindrome_string/main.cpp > CMakeFiles/palindrome_string.dir/main.cpp.i

CMakeFiles/palindrome_string.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/palindrome_string.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chiraghs/CLionProjects/day1/palindrome_string/main.cpp -o CMakeFiles/palindrome_string.dir/main.cpp.s

# Object files for target palindrome_string
palindrome_string_OBJECTS = \
"CMakeFiles/palindrome_string.dir/main.cpp.o"

# External object files for target palindrome_string
palindrome_string_EXTERNAL_OBJECTS =

palindrome_string: CMakeFiles/palindrome_string.dir/main.cpp.o
palindrome_string: CMakeFiles/palindrome_string.dir/build.make
palindrome_string: CMakeFiles/palindrome_string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chiraghs/CLionProjects/day1/palindrome_string/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable palindrome_string"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/palindrome_string.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/palindrome_string.dir/build: palindrome_string

.PHONY : CMakeFiles/palindrome_string.dir/build

CMakeFiles/palindrome_string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/palindrome_string.dir/cmake_clean.cmake
.PHONY : CMakeFiles/palindrome_string.dir/clean

CMakeFiles/palindrome_string.dir/depend:
	cd /home/chiraghs/CLionProjects/day1/palindrome_string/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chiraghs/CLionProjects/day1/palindrome_string /home/chiraghs/CLionProjects/day1/palindrome_string /home/chiraghs/CLionProjects/day1/palindrome_string/cmake-build-debug /home/chiraghs/CLionProjects/day1/palindrome_string/cmake-build-debug /home/chiraghs/CLionProjects/day1/palindrome_string/cmake-build-debug/CMakeFiles/palindrome_string.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/palindrome_string.dir/depend

