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
include Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/depend.make
# Include the progress variables for this target.
include Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/progress.make

# Include the compile flags for this target's objects.
include Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/flags.make

Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.o: Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/flags.make
Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.o: ../Projekt1-Matrix/matrixApp/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/Projekt1-Matrix/matrixApp && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrixApp.dir/main.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Projekt1-Matrix/matrixApp/main.cpp

Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixApp.dir/main.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/Projekt1-Matrix/matrixApp && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Projekt1-Matrix/matrixApp/main.cpp > CMakeFiles/matrixApp.dir/main.cpp.i

Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixApp.dir/main.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/Projekt1-Matrix/matrixApp && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Projekt1-Matrix/matrixApp/main.cpp -o CMakeFiles/matrixApp.dir/main.cpp.s

# Object files for target matrixApp
matrixApp_OBJECTS = \
"CMakeFiles/matrixApp.dir/main.cpp.o"

# External object files for target matrixApp
matrixApp_EXTERNAL_OBJECTS =

Projekt1-Matrix/matrixApp/matrixApp.exe: Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.o
Projekt1-Matrix/matrixApp/matrixApp.exe: Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/build.make
Projekt1-Matrix/matrixApp/matrixApp.exe: Projekt1-Matrix/matrixLib/libmadLib.a
Projekt1-Matrix/matrixApp/matrixApp.exe: Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable matrixApp.exe"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/Projekt1-Matrix/matrixApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrixApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/build: Projekt1-Matrix/matrixApp/matrixApp.exe
.PHONY : Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/build

Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/clean:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/Projekt1-Matrix/matrixApp && $(CMAKE_COMMAND) -P CMakeFiles/matrixApp.dir/cmake_clean.cmake
.PHONY : Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/clean

Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/depend:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2 /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Projekt1-Matrix/matrixApp /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/Projekt1-Matrix/matrixApp /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-debug/Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Projekt1-Matrix/matrixApp/CMakeFiles/matrixApp.dir/depend

