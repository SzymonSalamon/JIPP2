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
include Firstclass/CMakeFiles/firstClass.dir/depend.make
# Include the progress variables for this target.
include Firstclass/CMakeFiles/firstClass.dir/progress.make

# Include the compile flags for this target's objects.
include Firstclass/CMakeFiles/firstClass.dir/flags.make

Firstclass/CMakeFiles/firstClass.dir/src/main.cpp.o: Firstclass/CMakeFiles/firstClass.dir/flags.make
Firstclass/CMakeFiles/firstClass.dir/src/main.cpp.o: ../Firstclass/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Firstclass/CMakeFiles/firstClass.dir/src/main.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firstClass.dir/src/main.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Firstclass/src/main.cpp

Firstclass/CMakeFiles/firstClass.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstClass.dir/src/main.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Firstclass/src/main.cpp > CMakeFiles/firstClass.dir/src/main.cpp.i

Firstclass/CMakeFiles/firstClass.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstClass.dir/src/main.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Firstclass/src/main.cpp -o CMakeFiles/firstClass.dir/src/main.cpp.s

Firstclass/CMakeFiles/firstClass.dir/src/FirstClass.cpp.o: Firstclass/CMakeFiles/firstClass.dir/flags.make
Firstclass/CMakeFiles/firstClass.dir/src/FirstClass.cpp.o: ../Firstclass/src/FirstClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Firstclass/CMakeFiles/firstClass.dir/src/FirstClass.cpp.o"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firstClass.dir/src/FirstClass.cpp.o -c /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Firstclass/src/FirstClass.cpp

Firstclass/CMakeFiles/firstClass.dir/src/FirstClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstClass.dir/src/FirstClass.cpp.i"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Firstclass/src/FirstClass.cpp > CMakeFiles/firstClass.dir/src/FirstClass.cpp.i

Firstclass/CMakeFiles/firstClass.dir/src/FirstClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstClass.dir/src/FirstClass.cpp.s"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Firstclass/src/FirstClass.cpp -o CMakeFiles/firstClass.dir/src/FirstClass.cpp.s

# Object files for target firstClass
firstClass_OBJECTS = \
"CMakeFiles/firstClass.dir/src/main.cpp.o" \
"CMakeFiles/firstClass.dir/src/FirstClass.cpp.o"

# External object files for target firstClass
firstClass_EXTERNAL_OBJECTS =

Firstclass/firstClass.exe: Firstclass/CMakeFiles/firstClass.dir/src/main.cpp.o
Firstclass/firstClass.exe: Firstclass/CMakeFiles/firstClass.dir/src/FirstClass.cpp.o
Firstclass/firstClass.exe: Firstclass/CMakeFiles/firstClass.dir/build.make
Firstclass/firstClass.exe: Firstclass/CMakeFiles/firstClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable firstClass.exe"
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/firstClass.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Firstclass/CMakeFiles/firstClass.dir/build: Firstclass/firstClass.exe
.PHONY : Firstclass/CMakeFiles/firstClass.dir/build

Firstclass/CMakeFiles/firstClass.dir/clean:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass && $(CMAKE_COMMAND) -P CMakeFiles/firstClass.dir/cmake_clean.cmake
.PHONY : Firstclass/CMakeFiles/firstClass.dir/clean

Firstclass/CMakeFiles/firstClass.dir/depend:
	cd /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2 /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/Firstclass /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass /cygdrive/c/Users/Szymon/CLionProjects/JIPP2/2/cmake-build-release/Firstclass/CMakeFiles/firstClass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Firstclass/CMakeFiles/firstClass.dir/depend

