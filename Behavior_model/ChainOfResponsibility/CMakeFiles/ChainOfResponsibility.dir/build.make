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
CMAKE_SOURCE_DIR = D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility

# Include any dependencies generated for this target.
include CMakeFiles/ChainOfResponsibility.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ChainOfResponsibility.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ChainOfResponsibility.dir/flags.make

CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.obj: CMakeFiles/ChainOfResponsibility.dir/flags.make
CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.obj: Handle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.obj"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ChainOfResponsibility.dir\Handle.cpp.obj -c D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\Handle.cpp

CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.i"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\Handle.cpp > CMakeFiles\ChainOfResponsibility.dir\Handle.cpp.i

CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.s"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\Handle.cpp -o CMakeFiles\ChainOfResponsibility.dir\Handle.cpp.s

CMakeFiles/ChainOfResponsibility.dir/main.cpp.obj: CMakeFiles/ChainOfResponsibility.dir/flags.make
CMakeFiles/ChainOfResponsibility.dir/main.cpp.obj: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ChainOfResponsibility.dir/main.cpp.obj"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ChainOfResponsibility.dir\main.cpp.obj -c D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\main.cpp

CMakeFiles/ChainOfResponsibility.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChainOfResponsibility.dir/main.cpp.i"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\main.cpp > CMakeFiles\ChainOfResponsibility.dir\main.cpp.i

CMakeFiles/ChainOfResponsibility.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChainOfResponsibility.dir/main.cpp.s"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\main.cpp -o CMakeFiles\ChainOfResponsibility.dir\main.cpp.s

# Object files for target ChainOfResponsibility
ChainOfResponsibility_OBJECTS = \
"CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.obj" \
"CMakeFiles/ChainOfResponsibility.dir/main.cpp.obj"

# External object files for target ChainOfResponsibility
ChainOfResponsibility_EXTERNAL_OBJECTS =

ChainOfResponsibility.exe: CMakeFiles/ChainOfResponsibility.dir/Handle.cpp.obj
ChainOfResponsibility.exe: CMakeFiles/ChainOfResponsibility.dir/main.cpp.obj
ChainOfResponsibility.exe: CMakeFiles/ChainOfResponsibility.dir/build.make
ChainOfResponsibility.exe: CMakeFiles/ChainOfResponsibility.dir/linklibs.rsp
ChainOfResponsibility.exe: CMakeFiles/ChainOfResponsibility.dir/objects1.rsp
ChainOfResponsibility.exe: CMakeFiles/ChainOfResponsibility.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ChainOfResponsibility.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ChainOfResponsibility.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ChainOfResponsibility.dir/build: ChainOfResponsibility.exe

.PHONY : CMakeFiles/ChainOfResponsibility.dir/build

CMakeFiles/ChainOfResponsibility.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ChainOfResponsibility.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ChainOfResponsibility.dir/clean

CMakeFiles/ChainOfResponsibility.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility D:\qtwork\DesignModel\Behavior_model\ChainOfResponsibility\CMakeFiles\ChainOfResponsibility.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ChainOfResponsibility.dir/depend

