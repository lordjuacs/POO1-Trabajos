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
CMAKE_SOURCE_DIR = C:\Users\J\CLionProjects\Ejercicio6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\J\CLionProjects\Ejercicio6\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ejercicio6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicio6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicio6.dir/flags.make

CMakeFiles/Ejercicio6.dir/main.cpp.obj: CMakeFiles/Ejercicio6.dir/flags.make
CMakeFiles/Ejercicio6.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\J\CLionProjects\Ejercicio6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicio6.dir/main.cpp.obj"
	C:\Mingw-w64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio6.dir\main.cpp.obj -c C:\Users\J\CLionProjects\Ejercicio6\main.cpp

CMakeFiles/Ejercicio6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio6.dir/main.cpp.i"
	C:\Mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\J\CLionProjects\Ejercicio6\main.cpp > CMakeFiles\Ejercicio6.dir\main.cpp.i

CMakeFiles/Ejercicio6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio6.dir/main.cpp.s"
	C:\Mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\J\CLionProjects\Ejercicio6\main.cpp -o CMakeFiles\Ejercicio6.dir\main.cpp.s

# Object files for target Ejercicio6
Ejercicio6_OBJECTS = \
"CMakeFiles/Ejercicio6.dir/main.cpp.obj"

# External object files for target Ejercicio6
Ejercicio6_EXTERNAL_OBJECTS =

Ejercicio6.exe: CMakeFiles/Ejercicio6.dir/main.cpp.obj
Ejercicio6.exe: CMakeFiles/Ejercicio6.dir/build.make
Ejercicio6.exe: CMakeFiles/Ejercicio6.dir/linklibs.rsp
Ejercicio6.exe: CMakeFiles/Ejercicio6.dir/objects1.rsp
Ejercicio6.exe: CMakeFiles/Ejercicio6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\J\CLionProjects\Ejercicio6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ejercicio6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ejercicio6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicio6.dir/build: Ejercicio6.exe

.PHONY : CMakeFiles/Ejercicio6.dir/build

CMakeFiles/Ejercicio6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ejercicio6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicio6.dir/clean

CMakeFiles/Ejercicio6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\J\CLionProjects\Ejercicio6 C:\Users\J\CLionProjects\Ejercicio6 C:\Users\J\CLionProjects\Ejercicio6\cmake-build-debug C:\Users\J\CLionProjects\Ejercicio6\cmake-build-debug C:\Users\J\CLionProjects\Ejercicio6\cmake-build-debug\CMakeFiles\Ejercicio6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicio6.dir/depend

