# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /cygdrive/c/Users/Szymon/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Szymon/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release

# Include any dependencies generated for this target.
include Simple_calc/CMakeFiles/simple_Calc.dir/depend.make
# Include the progress variables for this target.
include Simple_calc/CMakeFiles/simple_Calc.dir/progress.make

# Include the compile flags for this target's objects.
include Simple_calc/CMakeFiles/simple_Calc.dir/flags.make

Simple_calc/CMakeFiles/simple_Calc.dir/src/main.cpp.o: Simple_calc/CMakeFiles/simple_Calc.dir/flags.make
Simple_calc/CMakeFiles/simple_Calc.dir/src/main.cpp.o: ../Simple_calc/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Simple_calc/CMakeFiles/simple_Calc.dir/src/main.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_Calc.dir/src/main.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Simple_calc/src/main.cpp

Simple_calc/CMakeFiles/simple_Calc.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_Calc.dir/src/main.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Simple_calc/src/main.cpp > CMakeFiles/simple_Calc.dir/src/main.cpp.i

Simple_calc/CMakeFiles/simple_Calc.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_Calc.dir/src/main.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Simple_calc/src/main.cpp -o CMakeFiles/simple_Calc.dir/src/main.cpp.s

Simple_calc/CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.o: Simple_calc/CMakeFiles/simple_Calc.dir/flags.make
Simple_calc/CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.o: ../Simple_calc/src/simplecalc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Simple_calc/CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Simple_calc/src/simplecalc.cpp

Simple_calc/CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Simple_calc/src/simplecalc.cpp > CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.i

Simple_calc/CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Simple_calc/src/simplecalc.cpp -o CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.s

# Object files for target simple_Calc
simple_Calc_OBJECTS = \
"CMakeFiles/simple_Calc.dir/src/main.cpp.o" \
"CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.o"

# External object files for target simple_Calc
simple_Calc_EXTERNAL_OBJECTS =

Simple_calc/simple_Calc.exe: Simple_calc/CMakeFiles/simple_Calc.dir/src/main.cpp.o
Simple_calc/simple_Calc.exe: Simple_calc/CMakeFiles/simple_Calc.dir/src/simplecalc.cpp.o
Simple_calc/simple_Calc.exe: Simple_calc/CMakeFiles/simple_Calc.dir/build.make
Simple_calc/simple_Calc.exe: Simple_calc/CMakeFiles/simple_Calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable simple_Calc.exe"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple_Calc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Simple_calc/CMakeFiles/simple_Calc.dir/build: Simple_calc/simple_Calc.exe
.PHONY : Simple_calc/CMakeFiles/simple_Calc.dir/build

Simple_calc/CMakeFiles/simple_Calc.dir/clean:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc && $(CMAKE_COMMAND) -P CMakeFiles/simple_Calc.dir/cmake_clean.cmake
.PHONY : Simple_calc/CMakeFiles/simple_Calc.dir/clean

Simple_calc/CMakeFiles/simple_Calc.dir/depend:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2 /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Simple_calc /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Simple_calc/CMakeFiles/simple_Calc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Simple_calc/CMakeFiles/simple_Calc.dir/depend

