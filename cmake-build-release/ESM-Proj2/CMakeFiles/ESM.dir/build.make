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
include ESM-Proj2/CMakeFiles/ESM.dir/depend.make
# Include the progress variables for this target.
include ESM-Proj2/CMakeFiles/ESM.dir/progress.make

# Include the compile flags for this target's objects.
include ESM-Proj2/CMakeFiles/ESM.dir/flags.make

ESM-Proj2/CMakeFiles/ESM.dir/src/main.cpp.o: ESM-Proj2/CMakeFiles/ESM.dir/flags.make
ESM-Proj2/CMakeFiles/ESM.dir/src/main.cpp.o: ../ESM-Proj2/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ESM-Proj2/CMakeFiles/ESM.dir/src/main.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ESM.dir/src/main.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/ESM-Proj2/src/main.cpp

ESM-Proj2/CMakeFiles/ESM.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ESM.dir/src/main.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/ESM-Proj2/src/main.cpp > CMakeFiles/ESM.dir/src/main.cpp.i

ESM-Proj2/CMakeFiles/ESM.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ESM.dir/src/main.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/ESM-Proj2/src/main.cpp -o CMakeFiles/ESM.dir/src/main.cpp.s

ESM-Proj2/CMakeFiles/ESM.dir/src/ESM.cpp.o: ESM-Proj2/CMakeFiles/ESM.dir/flags.make
ESM-Proj2/CMakeFiles/ESM.dir/src/ESM.cpp.o: ../ESM-Proj2/src/ESM.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object ESM-Proj2/CMakeFiles/ESM.dir/src/ESM.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ESM.dir/src/ESM.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/ESM-Proj2/src/ESM.cpp

ESM-Proj2/CMakeFiles/ESM.dir/src/ESM.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ESM.dir/src/ESM.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/ESM-Proj2/src/ESM.cpp > CMakeFiles/ESM.dir/src/ESM.cpp.i

ESM-Proj2/CMakeFiles/ESM.dir/src/ESM.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ESM.dir/src/ESM.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/ESM-Proj2/src/ESM.cpp -o CMakeFiles/ESM.dir/src/ESM.cpp.s

# Object files for target ESM
ESM_OBJECTS = \
"CMakeFiles/ESM.dir/src/main.cpp.o" \
"CMakeFiles/ESM.dir/src/ESM.cpp.o"

# External object files for target ESM
ESM_EXTERNAL_OBJECTS =

ESM-Proj2/ESM.exe: ESM-Proj2/CMakeFiles/ESM.dir/src/main.cpp.o
ESM-Proj2/ESM.exe: ESM-Proj2/CMakeFiles/ESM.dir/src/ESM.cpp.o
ESM-Proj2/ESM.exe: ESM-Proj2/CMakeFiles/ESM.dir/build.make
ESM-Proj2/ESM.exe: ESM-Proj2/CMakeFiles/ESM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ESM.exe"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ESM.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ESM-Proj2/CMakeFiles/ESM.dir/build: ESM-Proj2/ESM.exe
.PHONY : ESM-Proj2/CMakeFiles/ESM.dir/build

ESM-Proj2/CMakeFiles/ESM.dir/clean:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 && $(CMAKE_COMMAND) -P CMakeFiles/ESM.dir/cmake_clean.cmake
.PHONY : ESM-Proj2/CMakeFiles/ESM.dir/clean

ESM-Proj2/CMakeFiles/ESM.dir/depend:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2 /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/ESM-Proj2 /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2 /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/ESM-Proj2/CMakeFiles/ESM.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ESM-Proj2/CMakeFiles/ESM.dir/depend

