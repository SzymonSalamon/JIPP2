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
CMAKE_BINARY_DIR = /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug

# Include any dependencies generated for this target.
include matrixApp/CMakeFiles/callLibrary.dir/depend.make
# Include the progress variables for this target.
include matrixApp/CMakeFiles/callLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include matrixApp/CMakeFiles/callLibrary.dir/flags.make

matrixApp/CMakeFiles/callLibrary.dir/main.cpp.o: matrixApp/CMakeFiles/callLibrary.dir/flags.make
matrixApp/CMakeFiles/callLibrary.dir/main.cpp.o: ../matrixApp/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object matrixApp/CMakeFiles/callLibrary.dir/main.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/matrixApp && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/callLibrary.dir/main.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/matrixApp/main.cpp

matrixApp/CMakeFiles/callLibrary.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/callLibrary.dir/main.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/matrixApp && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/matrixApp/main.cpp > CMakeFiles/callLibrary.dir/main.cpp.i

matrixApp/CMakeFiles/callLibrary.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/callLibrary.dir/main.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/matrixApp && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/matrixApp/main.cpp -o CMakeFiles/callLibrary.dir/main.cpp.s

# Object files for target callLibrary
callLibrary_OBJECTS = \
"CMakeFiles/callLibrary.dir/main.cpp.o"

# External object files for target callLibrary
callLibrary_EXTERNAL_OBJECTS =

matrixApp/callLibrary.exe: matrixApp/CMakeFiles/callLibrary.dir/main.cpp.o
matrixApp/callLibrary.exe: matrixApp/CMakeFiles/callLibrary.dir/build.make
matrixApp/callLibrary.exe: matrixLib/libmadLib.a
matrixApp/callLibrary.exe: matrixApp/CMakeFiles/callLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable callLibrary.exe"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/matrixApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/callLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
matrixApp/CMakeFiles/callLibrary.dir/build: matrixApp/callLibrary.exe
.PHONY : matrixApp/CMakeFiles/callLibrary.dir/build

matrixApp/CMakeFiles/callLibrary.dir/clean:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/matrixApp && $(CMAKE_COMMAND) -P CMakeFiles/callLibrary.dir/cmake_clean.cmake
.PHONY : matrixApp/CMakeFiles/callLibrary.dir/clean

matrixApp/CMakeFiles/callLibrary.dir/depend:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2 /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/matrixApp /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/matrixApp /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/matrixApp/CMakeFiles/callLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : matrixApp/CMakeFiles/callLibrary.dir/depend
