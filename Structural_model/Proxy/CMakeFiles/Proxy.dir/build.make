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
CMAKE_SOURCE_DIR = D:\qtwork\DesignModel\Creational\Proxy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\qtwork\DesignModel\Creational\Proxy

# Include any dependencies generated for this target.
include CMakeFiles/Proxy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Proxy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proxy.dir/flags.make

CMakeFiles/Proxy.dir/Proxy.cpp.obj: CMakeFiles/Proxy.dir/flags.make
CMakeFiles/Proxy.dir/Proxy.cpp.obj: Proxy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\qtwork\DesignModel\Creational\Proxy\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proxy.dir/Proxy.cpp.obj"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Proxy.dir\Proxy.cpp.obj -c D:\qtwork\DesignModel\Creational\Proxy\Proxy.cpp

CMakeFiles/Proxy.dir/Proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proxy.dir/Proxy.cpp.i"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\qtwork\DesignModel\Creational\Proxy\Proxy.cpp > CMakeFiles\Proxy.dir\Proxy.cpp.i

CMakeFiles/Proxy.dir/Proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proxy.dir/Proxy.cpp.s"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\qtwork\DesignModel\Creational\Proxy\Proxy.cpp -o CMakeFiles\Proxy.dir\Proxy.cpp.s

# Object files for target Proxy
Proxy_OBJECTS = \
"CMakeFiles/Proxy.dir/Proxy.cpp.obj"

# External object files for target Proxy
Proxy_EXTERNAL_OBJECTS =

Proxy.exe: CMakeFiles/Proxy.dir/Proxy.cpp.obj
Proxy.exe: CMakeFiles/Proxy.dir/build.make
Proxy.exe: CMakeFiles/Proxy.dir/linklibs.rsp
Proxy.exe: CMakeFiles/Proxy.dir/objects1.rsp
Proxy.exe: CMakeFiles/Proxy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\qtwork\DesignModel\Creational\Proxy\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Proxy.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Proxy.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proxy.dir/build: Proxy.exe

.PHONY : CMakeFiles/Proxy.dir/build

CMakeFiles/Proxy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Proxy.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Proxy.dir/clean

CMakeFiles/Proxy.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\qtwork\DesignModel\Creational\Proxy D:\qtwork\DesignModel\Creational\Proxy D:\qtwork\DesignModel\Creational\Proxy D:\qtwork\DesignModel\Creational\Proxy D:\qtwork\DesignModel\Creational\Proxy\CMakeFiles\Proxy.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proxy.dir/depend

