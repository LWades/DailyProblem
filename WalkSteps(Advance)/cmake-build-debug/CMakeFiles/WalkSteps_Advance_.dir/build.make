# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "F:\Software\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\Software\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/WalkSteps_Advance_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WalkSteps_Advance_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WalkSteps_Advance_.dir/flags.make

CMakeFiles/WalkSteps_Advance_.dir/main.cpp.obj: CMakeFiles/WalkSteps_Advance_.dir/flags.make
CMakeFiles/WalkSteps_Advance_.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WalkSteps_Advance_.dir/main.cpp.obj"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\WalkSteps_Advance_.dir\main.cpp.obj -c "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\main.cpp"

CMakeFiles/WalkSteps_Advance_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WalkSteps_Advance_.dir/main.cpp.i"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\main.cpp" > CMakeFiles\WalkSteps_Advance_.dir\main.cpp.i

CMakeFiles/WalkSteps_Advance_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WalkSteps_Advance_.dir/main.cpp.s"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\main.cpp" -o CMakeFiles\WalkSteps_Advance_.dir\main.cpp.s

# Object files for target WalkSteps_Advance_
WalkSteps_Advance__OBJECTS = \
"CMakeFiles/WalkSteps_Advance_.dir/main.cpp.obj"

# External object files for target WalkSteps_Advance_
WalkSteps_Advance__EXTERNAL_OBJECTS =

WalkSteps_Advance_.exe: CMakeFiles/WalkSteps_Advance_.dir/main.cpp.obj
WalkSteps_Advance_.exe: CMakeFiles/WalkSteps_Advance_.dir/build.make
WalkSteps_Advance_.exe: CMakeFiles/WalkSteps_Advance_.dir/linklibs.rsp
WalkSteps_Advance_.exe: CMakeFiles/WalkSteps_Advance_.dir/objects1.rsp
WalkSteps_Advance_.exe: CMakeFiles/WalkSteps_Advance_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable WalkSteps_Advance_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\WalkSteps_Advance_.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WalkSteps_Advance_.dir/build: WalkSteps_Advance_.exe

.PHONY : CMakeFiles/WalkSteps_Advance_.dir/build

CMakeFiles/WalkSteps_Advance_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\WalkSteps_Advance_.dir\cmake_clean.cmake
.PHONY : CMakeFiles/WalkSteps_Advance_.dir/clean

CMakeFiles/WalkSteps_Advance_.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\cmake-build-debug" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\cmake-build-debug" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\WalkSteps(Advance)\cmake-build-debug\CMakeFiles\WalkSteps_Advance_.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/WalkSteps_Advance_.dir/depend

