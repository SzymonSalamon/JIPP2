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
include Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/depend.make
# Include the progress variables for this target.
include Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/progress.make

# Include the compile flags for this target's objects.
include Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/flags.make

Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/src/madlib.cpp.o: Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/flags.make
Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/src/madlib.cpp.o: ../Projekt1-Matrix/matrixLib/src/madlib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/src/madlib.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Projekt1-Matrix/matrixLib && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/madLib.dir/src/madlib.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Projekt1-Matrix/matrixLib/src/madlib.cpp

Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/src/madlib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/madLib.dir/src/madlib.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Projekt1-Matrix/matrixLib && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Projekt1-Matrix/matrixLib/src/madlib.cpp > CMakeFiles/madLib.dir/src/madlib.cpp.i

Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/src/madlib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/madLib.dir/src/madlib.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Projekt1-Matrix/matrixLib && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Projekt1-Matrix/matrixLib/src/madlib.cpp -o CMakeFiles/madLib.dir/src/madlib.cpp.s

# Object files for target madLib
madLib_OBJECTS = \
"CMakeFiles/madLib.dir/src/madlib.cpp.o"

# External object files for target madLib
madLib_EXTERNAL_OBJECTS =

Projekt1-Matrix/matrixLib/libmadLib.a: Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/src/madlib.cpp.o
Projekt1-Matrix/matrixLib/libmadLib.a: Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/build.make
Projekt1-Matrix/matrixLib/libmadLib.a: Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmadLib.a"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Projekt1-Matrix/matrixLib && $(CMAKE_COMMAND) -P CMakeFiles/madLib.dir/cmake_clean_target.cmake
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Projekt1-Matrix/matrixLib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/madLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/build: Projekt1-Matrix/matrixLib/libmadLib.a
.PHONY : Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/build

Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/clean:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Projekt1-Matrix/matrixLib && $(CMAKE_COMMAND) -P CMakeFiles/madLib.dir/cmake_clean.cmake
.PHONY : Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/clean

Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/depend:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2 /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Projekt1-Matrix/matrixLib /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Projekt1-Matrix/matrixLib /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Projekt1-Matrix/matrixLib/CMakeFiles/madLib.dir/depend

