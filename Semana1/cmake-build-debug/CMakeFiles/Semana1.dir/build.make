# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\J\CLionProjects\Semana1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\J\CLionProjects\Semana1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Semana1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Semana1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Semana1.dir/flags.make

CMakeFiles/Semana1.dir/main.cpp.obj: CMakeFiles/Semana1.dir/flags.make
CMakeFiles/Semana1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\J\CLionProjects\Semana1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Semana1.dir/main.cpp.obj"
	C:\Mingw-w64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Semana1.dir\main.cpp.obj -c C:\Users\J\CLionProjects\Semana1\main.cpp

CMakeFiles/Semana1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Semana1.dir/main.cpp.i"
	C:\Mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\J\CLionProjects\Semana1\main.cpp > CMakeFiles\Semana1.dir\main.cpp.i

CMakeFiles/Semana1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Semana1.dir/main.cpp.s"
	C:\Mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\J\CLionProjects\Semana1\main.cpp -o CMakeFiles\Semana1.dir\main.cpp.s

# Object files for target Semana1
Semana1_OBJECTS = \
"CMakeFiles/Semana1.dir/main.cpp.obj"

# External object files for target Semana1
Semana1_EXTERNAL_OBJECTS =

Semana1.exe: CMakeFiles/Semana1.dir/main.cpp.obj
Semana1.exe: CMakeFiles/Semana1.dir/build.make
Semana1.exe: CMakeFiles/Semana1.dir/linklibs.rsp
Semana1.exe: CMakeFiles/Semana1.dir/objects1.rsp
Semana1.exe: CMakeFiles/Semana1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\J\CLionProjects\Semana1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Semana1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Semana1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Semana1.dir/build: Semana1.exe

.PHONY : CMakeFiles/Semana1.dir/build

CMakeFiles/Semana1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Semana1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Semana1.dir/clean

CMakeFiles/Semana1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\J\CLionProjects\Semana1 C:\Users\J\CLionProjects\Semana1 C:\Users\J\CLionProjects\Semana1\cmake-build-debug C:\Users\J\CLionProjects\Semana1\cmake-build-debug C:\Users\J\CLionProjects\Semana1\cmake-build-debug\CMakeFiles\Semana1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Semana1.dir/depend

