# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = C:\Users\J\CLionProjects\PruebaSFML

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\J\CLionProjects\PruebaSFML\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PruebaSFML.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PruebaSFML.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PruebaSFML.dir/flags.make

CMakeFiles/PruebaSFML.dir/main.cpp.obj: CMakeFiles/PruebaSFML.dir/flags.make
CMakeFiles/PruebaSFML.dir/main.cpp.obj: CMakeFiles/PruebaSFML.dir/includes_CXX.rsp
CMakeFiles/PruebaSFML.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\J\CLionProjects\PruebaSFML\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PruebaSFML.dir/main.cpp.obj"
	C:\Mingw-w64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PruebaSFML.dir\main.cpp.obj -c C:\Users\J\CLionProjects\PruebaSFML\main.cpp

CMakeFiles/PruebaSFML.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebaSFML.dir/main.cpp.i"
	C:\Mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\J\CLionProjects\PruebaSFML\main.cpp > CMakeFiles\PruebaSFML.dir\main.cpp.i

CMakeFiles/PruebaSFML.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebaSFML.dir/main.cpp.s"
	C:\Mingw-w64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\J\CLionProjects\PruebaSFML\main.cpp -o CMakeFiles\PruebaSFML.dir\main.cpp.s

# Object files for target PruebaSFML
PruebaSFML_OBJECTS = \
"CMakeFiles/PruebaSFML.dir/main.cpp.obj"

# External object files for target PruebaSFML
PruebaSFML_EXTERNAL_OBJECTS =

PruebaSFML.exe: CMakeFiles/PruebaSFML.dir/main.cpp.obj
PruebaSFML.exe: CMakeFiles/PruebaSFML.dir/build.make
PruebaSFML.exe: C:/Mingw-w64/mingw32/lib/libsfml-system-s-d.a
PruebaSFML.exe: C:/Mingw-w64/mingw32/lib/libsfml-window-s-d.a
PruebaSFML.exe: C:/Mingw-w64/mingw32/lib/libsfml-graphics-s-d.a
PruebaSFML.exe: C:/Mingw-w64/mingw32/lib/libsfml-window-s-d.a
PruebaSFML.exe: C:/Mingw-w64/mingw32/lib/libsfml-system-s-d.a
PruebaSFML.exe: C:/Mingw-w64/mingw32/lib/libfreetype.a
PruebaSFML.exe: CMakeFiles/PruebaSFML.dir/linklibs.rsp
PruebaSFML.exe: CMakeFiles/PruebaSFML.dir/objects1.rsp
PruebaSFML.exe: CMakeFiles/PruebaSFML.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\J\CLionProjects\PruebaSFML\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PruebaSFML.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PruebaSFML.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PruebaSFML.dir/build: PruebaSFML.exe

.PHONY : CMakeFiles/PruebaSFML.dir/build

CMakeFiles/PruebaSFML.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PruebaSFML.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PruebaSFML.dir/clean

CMakeFiles/PruebaSFML.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\J\CLionProjects\PruebaSFML C:\Users\J\CLionProjects\PruebaSFML C:\Users\J\CLionProjects\PruebaSFML\cmake-build-debug C:\Users\J\CLionProjects\PruebaSFML\cmake-build-debug C:\Users\J\CLionProjects\PruebaSFML\cmake-build-debug\CMakeFiles\PruebaSFML.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PruebaSFML.dir/depend

