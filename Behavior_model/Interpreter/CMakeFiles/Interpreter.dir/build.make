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
CMAKE_SOURCE_DIR = D:\qtwork\DesignModel\Behavior_model\Interpreter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\qtwork\DesignModel\Behavior_model\Interpreter

# Include any dependencies generated for this target.
include CMakeFiles/Interpreter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Interpreter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Interpreter.dir/flags.make

CMakeFiles/Interpreter.dir/Interpret.cpp.obj: CMakeFiles/Interpreter.dir/flags.make
CMakeFiles/Interpreter.dir/Interpret.cpp.obj: Interpret.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\qtwork\DesignModel\Behavior_model\Interpreter\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Interpreter.dir/Interpret.cpp.obj"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Interpreter.dir\Interpret.cpp.obj -c D:\qtwork\DesignModel\Behavior_model\Interpreter\Interpret.cpp

CMakeFiles/Interpreter.dir/Interpret.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Interpreter.dir/Interpret.cpp.i"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\qtwork\DesignModel\Behavior_model\Interpreter\Interpret.cpp > CMakeFiles\Interpreter.dir\Interpret.cpp.i

CMakeFiles/Interpreter.dir/Interpret.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Interpreter.dir/Interpret.cpp.s"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\qtwork\DesignModel\Behavior_model\Interpreter\Interpret.cpp -o CMakeFiles\Interpreter.dir\Interpret.cpp.s

CMakeFiles/Interpreter.dir/main.cpp.obj: CMakeFiles/Interpreter.dir/flags.make
CMakeFiles/Interpreter.dir/main.cpp.obj: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\qtwork\DesignModel\Behavior_model\Interpreter\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Interpreter.dir/main.cpp.obj"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Interpreter.dir\main.cpp.obj -c D:\qtwork\DesignModel\Behavior_model\Interpreter\main.cpp

CMakeFiles/Interpreter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Interpreter.dir/main.cpp.i"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\qtwork\DesignModel\Behavior_model\Interpreter\main.cpp > CMakeFiles\Interpreter.dir\main.cpp.i

CMakeFiles/Interpreter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Interpreter.dir/main.cpp.s"
	D:\QT\QT5\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\qtwork\DesignModel\Behavior_model\Interpreter\main.cpp -o CMakeFiles\Interpreter.dir\main.cpp.s

# Object files for target Interpreter
Interpreter_OBJECTS = \
"CMakeFiles/Interpreter.dir/Interpret.cpp.obj" \
"CMakeFiles/Interpreter.dir/main.cpp.obj"

# External object files for target Interpreter
Interpreter_EXTERNAL_OBJECTS =

Interpreter.exe: CMakeFiles/Interpreter.dir/Interpret.cpp.obj
Interpreter.exe: CMakeFiles/Interpreter.dir/main.cpp.obj
Interpreter.exe: CMakeFiles/Interpreter.dir/build.make
Interpreter.exe: CMakeFiles/Interpreter.dir/linklibs.rsp
Interpreter.exe: CMakeFiles/Interpreter.dir/objects1.rsp
Interpreter.exe: CMakeFiles/Interpreter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\qtwork\DesignModel\Behavior_model\Interpreter\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Interpreter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Interpreter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Interpreter.dir/build: Interpreter.exe

.PHONY : CMakeFiles/Interpreter.dir/build

CMakeFiles/Interpreter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Interpreter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Interpreter.dir/clean

CMakeFiles/Interpreter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\qtwork\DesignModel\Behavior_model\Interpreter D:\qtwork\DesignModel\Behavior_model\Interpreter D:\qtwork\DesignModel\Behavior_model\Interpreter D:\qtwork\DesignModel\Behavior_model\Interpreter D:\qtwork\DesignModel\Behavior_model\Interpreter\CMakeFiles\Interpreter.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Interpreter.dir/depend

