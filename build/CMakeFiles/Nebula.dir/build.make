# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Dev\Nebula

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Dev\Nebula\build

# Include any dependencies generated for this target.
include CMakeFiles/Nebula.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Nebula.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Nebula.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nebula.dir/flags.make

CMakeFiles/Nebula.dir/main.cpp.obj: CMakeFiles/Nebula.dir/flags.make
CMakeFiles/Nebula.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Nebula.dir/main.cpp.obj: CMakeFiles/Nebula.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\Nebula\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Nebula.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Nebula.dir/main.cpp.obj -MF CMakeFiles\Nebula.dir\main.cpp.obj.d -o CMakeFiles\Nebula.dir\main.cpp.obj -c C:\Dev\Nebula\main.cpp

CMakeFiles/Nebula.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Nebula.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Dev\Nebula\main.cpp > CMakeFiles\Nebula.dir\main.cpp.i

CMakeFiles/Nebula.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Nebula.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Dev\Nebula\main.cpp -o CMakeFiles\Nebula.dir\main.cpp.s

# Object files for target Nebula
Nebula_OBJECTS = \
"CMakeFiles/Nebula.dir/main.cpp.obj"

# External object files for target Nebula
Nebula_EXTERNAL_OBJECTS =

Nebula.exe: CMakeFiles/Nebula.dir/main.cpp.obj
Nebula.exe: CMakeFiles/Nebula.dir/build.make
Nebula.exe: CMakeFiles/Nebula.dir/linklibs.rsp
Nebula.exe: CMakeFiles/Nebula.dir/objects1.rsp
Nebula.exe: CMakeFiles/Nebula.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Dev\Nebula\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Nebula.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Nebula.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nebula.dir/build: Nebula.exe
.PHONY : CMakeFiles/Nebula.dir/build

CMakeFiles/Nebula.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Nebula.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Nebula.dir/clean

CMakeFiles/Nebula.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Dev\Nebula C:\Dev\Nebula C:\Dev\Nebula\build C:\Dev\Nebula\build C:\Dev\Nebula\build\CMakeFiles\Nebula.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nebula.dir/depend

