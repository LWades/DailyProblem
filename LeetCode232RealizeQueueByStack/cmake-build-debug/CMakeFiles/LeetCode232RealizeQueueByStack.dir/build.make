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
CMAKE_SOURCE_DIR = "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LeetCode232RealizeQueueByStack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LeetCode232RealizeQueueByStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LeetCode232RealizeQueueByStack.dir/flags.make

CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.obj: CMakeFiles/LeetCode232RealizeQueueByStack.dir/flags.make
CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.obj"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LeetCode232RealizeQueueByStack.dir\main.cpp.obj -c "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\main.cpp"

CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.i"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\main.cpp" > CMakeFiles\LeetCode232RealizeQueueByStack.dir\main.cpp.i

CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.s"
	"F:\Software\JetBrains\CLion 2018.3.4\MinGW\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\main.cpp" -o CMakeFiles\LeetCode232RealizeQueueByStack.dir\main.cpp.s

# Object files for target LeetCode232RealizeQueueByStack
LeetCode232RealizeQueueByStack_OBJECTS = \
"CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.obj"

# External object files for target LeetCode232RealizeQueueByStack
LeetCode232RealizeQueueByStack_EXTERNAL_OBJECTS =

LeetCode232RealizeQueueByStack.exe: CMakeFiles/LeetCode232RealizeQueueByStack.dir/main.cpp.obj
LeetCode232RealizeQueueByStack.exe: CMakeFiles/LeetCode232RealizeQueueByStack.dir/build.make
LeetCode232RealizeQueueByStack.exe: CMakeFiles/LeetCode232RealizeQueueByStack.dir/linklibs.rsp
LeetCode232RealizeQueueByStack.exe: CMakeFiles/LeetCode232RealizeQueueByStack.dir/objects1.rsp
LeetCode232RealizeQueueByStack.exe: CMakeFiles/LeetCode232RealizeQueueByStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LeetCode232RealizeQueueByStack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LeetCode232RealizeQueueByStack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LeetCode232RealizeQueueByStack.dir/build: LeetCode232RealizeQueueByStack.exe

.PHONY : CMakeFiles/LeetCode232RealizeQueueByStack.dir/build

CMakeFiles/LeetCode232RealizeQueueByStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LeetCode232RealizeQueueByStack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LeetCode232RealizeQueueByStack.dir/clean

CMakeFiles/LeetCode232RealizeQueueByStack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\cmake-build-debug" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\cmake-build-debug" "F:\Software\JetBrains\CLion 2018.3.4\CLionProjects\DailyProblem\LeetCode232RealizeQueueByStack\cmake-build-debug\CMakeFiles\LeetCode232RealizeQueueByStack.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LeetCode232RealizeQueueByStack.dir/depend

