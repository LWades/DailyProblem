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
CMAKE_SOURCE_DIR = "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CompareStringContainBackspace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CompareStringContainBackspace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CompareStringContainBackspace.dir/flags.make

CMakeFiles/CompareStringContainBackspace.dir/main.cpp.obj: CMakeFiles/CompareStringContainBackspace.dir/flags.make
CMakeFiles/CompareStringContainBackspace.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CompareStringContainBackspace.dir/main.cpp.obj"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CompareStringContainBackspace.dir\main.cpp.obj -c "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\main.cpp"

CMakeFiles/CompareStringContainBackspace.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CompareStringContainBackspace.dir/main.cpp.i"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\main.cpp" > CMakeFiles\CompareStringContainBackspace.dir\main.cpp.i

CMakeFiles/CompareStringContainBackspace.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CompareStringContainBackspace.dir/main.cpp.s"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\main.cpp" -o CMakeFiles\CompareStringContainBackspace.dir\main.cpp.s

# Object files for target CompareStringContainBackspace
CompareStringContainBackspace_OBJECTS = \
"CMakeFiles/CompareStringContainBackspace.dir/main.cpp.obj"

# External object files for target CompareStringContainBackspace
CompareStringContainBackspace_EXTERNAL_OBJECTS =

CompareStringContainBackspace.exe: CMakeFiles/CompareStringContainBackspace.dir/main.cpp.obj
CompareStringContainBackspace.exe: CMakeFiles/CompareStringContainBackspace.dir/build.make
CompareStringContainBackspace.exe: CMakeFiles/CompareStringContainBackspace.dir/linklibs.rsp
CompareStringContainBackspace.exe: CMakeFiles/CompareStringContainBackspace.dir/objects1.rsp
CompareStringContainBackspace.exe: CMakeFiles/CompareStringContainBackspace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CompareStringContainBackspace.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CompareStringContainBackspace.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CompareStringContainBackspace.dir/build: CompareStringContainBackspace.exe

.PHONY : CMakeFiles/CompareStringContainBackspace.dir/build

CMakeFiles/CompareStringContainBackspace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CompareStringContainBackspace.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CompareStringContainBackspace.dir/clean

CMakeFiles/CompareStringContainBackspace.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\cmake-build-debug" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\cmake-build-debug" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\CompareStringContainBackspace\cmake-build-debug\CMakeFiles\CompareStringContainBackspace.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CompareStringContainBackspace.dir/depend

