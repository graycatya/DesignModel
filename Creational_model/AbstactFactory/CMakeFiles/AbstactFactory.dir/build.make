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
CMAKE_COMMAND = "C:\Program Files\cmake-3.14.0-rc1-win64-x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\cmake-3.14.0-rc1-win64-x64\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\qtwork\DesignModel\Creational\AbstactFactory

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\qtwork\DesignModel\Creational\AbstactFactory

# Include any dependencies generated for this target.
include CMakeFiles/AbstactFactory.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AbstactFactory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AbstactFactory.dir/flags.make

CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.obj: CMakeFiles/AbstactFactory.dir/flags.make
CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.obj: AbstactFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\qtwork\DesignModel\Creational\AbstactFactory\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.obj"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AbstactFactory.dir\AbstactFactory.cpp.obj -c D:\qtwork\DesignModel\Creational\AbstactFactory\AbstactFactory.cpp

CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.i"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\qtwork\DesignModel\Creational\AbstactFactory\AbstactFactory.cpp > CMakeFiles\AbstactFactory.dir\AbstactFactory.cpp.i

CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.s"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\qtwork\DesignModel\Creational\AbstactFactory\AbstactFactory.cpp -o CMakeFiles\AbstactFactory.dir\AbstactFactory.cpp.s

# Object files for target AbstactFactory
AbstactFactory_OBJECTS = \
"CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.obj"

# External object files for target AbstactFactory
AbstactFactory_EXTERNAL_OBJECTS =

AbstactFactory.exe: CMakeFiles/AbstactFactory.dir/AbstactFactory.cpp.obj
AbstactFactory.exe: CMakeFiles/AbstactFactory.dir/build.make
AbstactFactory.exe: CMakeFiles/AbstactFactory.dir/linklibs.rsp
AbstactFactory.exe: CMakeFiles/AbstactFactory.dir/objects1.rsp
AbstactFactory.exe: CMakeFiles/AbstactFactory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\qtwork\DesignModel\Creational\AbstactFactory\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AbstactFactory.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AbstactFactory.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AbstactFactory.dir/build: AbstactFactory.exe

.PHONY : CMakeFiles/AbstactFactory.dir/build

CMakeFiles/AbstactFactory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AbstactFactory.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AbstactFactory.dir/clean

CMakeFiles/AbstactFactory.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\qtwork\DesignModel\Creational\AbstactFactory D:\qtwork\DesignModel\Creational\AbstactFactory D:\qtwork\DesignModel\Creational\AbstactFactory D:\qtwork\DesignModel\Creational\AbstactFactory D:\qtwork\DesignModel\Creational\AbstactFactory\CMakeFiles\AbstactFactory.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AbstactFactory.dir/depend

