# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zack/git-repos/KeyGenerator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zack/git-repos/KeyGenerator

# Include any dependencies generated for this target.
include CMakeFiles/myproject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myproject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myproject.dir/flags.make

CMakeFiles/myproject.dir/main.cpp.o: CMakeFiles/myproject.dir/flags.make
CMakeFiles/myproject.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myproject.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myproject.dir/main.cpp.o -c /home/zack/git-repos/KeyGenerator/main.cpp

CMakeFiles/myproject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myproject.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zack/git-repos/KeyGenerator/main.cpp > CMakeFiles/myproject.dir/main.cpp.i

CMakeFiles/myproject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myproject.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zack/git-repos/KeyGenerator/main.cpp -o CMakeFiles/myproject.dir/main.cpp.s

CMakeFiles/myproject.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/myproject.dir/main.cpp.o.requires

CMakeFiles/myproject.dir/main.cpp.o.provides: CMakeFiles/myproject.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/myproject.dir/main.cpp.o.provides

CMakeFiles/myproject.dir/main.cpp.o.provides.build: CMakeFiles/myproject.dir/main.cpp.o


CMakeFiles/myproject.dir/ButtonObj.cpp.o: CMakeFiles/myproject.dir/flags.make
CMakeFiles/myproject.dir/ButtonObj.cpp.o: ButtonObj.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myproject.dir/ButtonObj.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myproject.dir/ButtonObj.cpp.o -c /home/zack/git-repos/KeyGenerator/ButtonObj.cpp

CMakeFiles/myproject.dir/ButtonObj.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myproject.dir/ButtonObj.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zack/git-repos/KeyGenerator/ButtonObj.cpp > CMakeFiles/myproject.dir/ButtonObj.cpp.i

CMakeFiles/myproject.dir/ButtonObj.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myproject.dir/ButtonObj.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zack/git-repos/KeyGenerator/ButtonObj.cpp -o CMakeFiles/myproject.dir/ButtonObj.cpp.s

CMakeFiles/myproject.dir/ButtonObj.cpp.o.requires:

.PHONY : CMakeFiles/myproject.dir/ButtonObj.cpp.o.requires

CMakeFiles/myproject.dir/ButtonObj.cpp.o.provides: CMakeFiles/myproject.dir/ButtonObj.cpp.o.requires
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/ButtonObj.cpp.o.provides.build
.PHONY : CMakeFiles/myproject.dir/ButtonObj.cpp.o.provides

CMakeFiles/myproject.dir/ButtonObj.cpp.o.provides.build: CMakeFiles/myproject.dir/ButtonObj.cpp.o


CMakeFiles/myproject.dir/TextObj.cpp.o: CMakeFiles/myproject.dir/flags.make
CMakeFiles/myproject.dir/TextObj.cpp.o: TextObj.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myproject.dir/TextObj.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myproject.dir/TextObj.cpp.o -c /home/zack/git-repos/KeyGenerator/TextObj.cpp

CMakeFiles/myproject.dir/TextObj.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myproject.dir/TextObj.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zack/git-repos/KeyGenerator/TextObj.cpp > CMakeFiles/myproject.dir/TextObj.cpp.i

CMakeFiles/myproject.dir/TextObj.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myproject.dir/TextObj.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zack/git-repos/KeyGenerator/TextObj.cpp -o CMakeFiles/myproject.dir/TextObj.cpp.s

CMakeFiles/myproject.dir/TextObj.cpp.o.requires:

.PHONY : CMakeFiles/myproject.dir/TextObj.cpp.o.requires

CMakeFiles/myproject.dir/TextObj.cpp.o.provides: CMakeFiles/myproject.dir/TextObj.cpp.o.requires
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/TextObj.cpp.o.provides.build
.PHONY : CMakeFiles/myproject.dir/TextObj.cpp.o.provides

CMakeFiles/myproject.dir/TextObj.cpp.o.provides.build: CMakeFiles/myproject.dir/TextObj.cpp.o


CMakeFiles/myproject.dir/FileHandler.cpp.o: CMakeFiles/myproject.dir/flags.make
CMakeFiles/myproject.dir/FileHandler.cpp.o: FileHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myproject.dir/FileHandler.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myproject.dir/FileHandler.cpp.o -c /home/zack/git-repos/KeyGenerator/FileHandler.cpp

CMakeFiles/myproject.dir/FileHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myproject.dir/FileHandler.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zack/git-repos/KeyGenerator/FileHandler.cpp > CMakeFiles/myproject.dir/FileHandler.cpp.i

CMakeFiles/myproject.dir/FileHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myproject.dir/FileHandler.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zack/git-repos/KeyGenerator/FileHandler.cpp -o CMakeFiles/myproject.dir/FileHandler.cpp.s

CMakeFiles/myproject.dir/FileHandler.cpp.o.requires:

.PHONY : CMakeFiles/myproject.dir/FileHandler.cpp.o.requires

CMakeFiles/myproject.dir/FileHandler.cpp.o.provides: CMakeFiles/myproject.dir/FileHandler.cpp.o.requires
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/FileHandler.cpp.o.provides.build
.PHONY : CMakeFiles/myproject.dir/FileHandler.cpp.o.provides

CMakeFiles/myproject.dir/FileHandler.cpp.o.provides.build: CMakeFiles/myproject.dir/FileHandler.cpp.o


CMakeFiles/myproject.dir/TaskObj.cpp.o: CMakeFiles/myproject.dir/flags.make
CMakeFiles/myproject.dir/TaskObj.cpp.o: TaskObj.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/myproject.dir/TaskObj.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myproject.dir/TaskObj.cpp.o -c /home/zack/git-repos/KeyGenerator/TaskObj.cpp

CMakeFiles/myproject.dir/TaskObj.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myproject.dir/TaskObj.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zack/git-repos/KeyGenerator/TaskObj.cpp > CMakeFiles/myproject.dir/TaskObj.cpp.i

CMakeFiles/myproject.dir/TaskObj.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myproject.dir/TaskObj.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zack/git-repos/KeyGenerator/TaskObj.cpp -o CMakeFiles/myproject.dir/TaskObj.cpp.s

CMakeFiles/myproject.dir/TaskObj.cpp.o.requires:

.PHONY : CMakeFiles/myproject.dir/TaskObj.cpp.o.requires

CMakeFiles/myproject.dir/TaskObj.cpp.o.provides: CMakeFiles/myproject.dir/TaskObj.cpp.o.requires
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/TaskObj.cpp.o.provides.build
.PHONY : CMakeFiles/myproject.dir/TaskObj.cpp.o.provides

CMakeFiles/myproject.dir/TaskObj.cpp.o.provides.build: CMakeFiles/myproject.dir/TaskObj.cpp.o


CMakeFiles/myproject.dir/c_string.cpp.o: CMakeFiles/myproject.dir/flags.make
CMakeFiles/myproject.dir/c_string.cpp.o: c_string.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/myproject.dir/c_string.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myproject.dir/c_string.cpp.o -c /home/zack/git-repos/KeyGenerator/c_string.cpp

CMakeFiles/myproject.dir/c_string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myproject.dir/c_string.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zack/git-repos/KeyGenerator/c_string.cpp > CMakeFiles/myproject.dir/c_string.cpp.i

CMakeFiles/myproject.dir/c_string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myproject.dir/c_string.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zack/git-repos/KeyGenerator/c_string.cpp -o CMakeFiles/myproject.dir/c_string.cpp.s

CMakeFiles/myproject.dir/c_string.cpp.o.requires:

.PHONY : CMakeFiles/myproject.dir/c_string.cpp.o.requires

CMakeFiles/myproject.dir/c_string.cpp.o.provides: CMakeFiles/myproject.dir/c_string.cpp.o.requires
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/c_string.cpp.o.provides.build
.PHONY : CMakeFiles/myproject.dir/c_string.cpp.o.provides

CMakeFiles/myproject.dir/c_string.cpp.o.provides.build: CMakeFiles/myproject.dir/c_string.cpp.o


CMakeFiles/myproject.dir/Sprite.cpp.o: CMakeFiles/myproject.dir/flags.make
CMakeFiles/myproject.dir/Sprite.cpp.o: Sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/myproject.dir/Sprite.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myproject.dir/Sprite.cpp.o -c /home/zack/git-repos/KeyGenerator/Sprite.cpp

CMakeFiles/myproject.dir/Sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myproject.dir/Sprite.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zack/git-repos/KeyGenerator/Sprite.cpp > CMakeFiles/myproject.dir/Sprite.cpp.i

CMakeFiles/myproject.dir/Sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myproject.dir/Sprite.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zack/git-repos/KeyGenerator/Sprite.cpp -o CMakeFiles/myproject.dir/Sprite.cpp.s

CMakeFiles/myproject.dir/Sprite.cpp.o.requires:

.PHONY : CMakeFiles/myproject.dir/Sprite.cpp.o.requires

CMakeFiles/myproject.dir/Sprite.cpp.o.provides: CMakeFiles/myproject.dir/Sprite.cpp.o.requires
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/Sprite.cpp.o.provides.build
.PHONY : CMakeFiles/myproject.dir/Sprite.cpp.o.provides

CMakeFiles/myproject.dir/Sprite.cpp.o.provides.build: CMakeFiles/myproject.dir/Sprite.cpp.o


CMakeFiles/myproject.dir/DisplayWindow.cpp.o: CMakeFiles/myproject.dir/flags.make
CMakeFiles/myproject.dir/DisplayWindow.cpp.o: DisplayWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/myproject.dir/DisplayWindow.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myproject.dir/DisplayWindow.cpp.o -c /home/zack/git-repos/KeyGenerator/DisplayWindow.cpp

CMakeFiles/myproject.dir/DisplayWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myproject.dir/DisplayWindow.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zack/git-repos/KeyGenerator/DisplayWindow.cpp > CMakeFiles/myproject.dir/DisplayWindow.cpp.i

CMakeFiles/myproject.dir/DisplayWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myproject.dir/DisplayWindow.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zack/git-repos/KeyGenerator/DisplayWindow.cpp -o CMakeFiles/myproject.dir/DisplayWindow.cpp.s

CMakeFiles/myproject.dir/DisplayWindow.cpp.o.requires:

.PHONY : CMakeFiles/myproject.dir/DisplayWindow.cpp.o.requires

CMakeFiles/myproject.dir/DisplayWindow.cpp.o.provides: CMakeFiles/myproject.dir/DisplayWindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/DisplayWindow.cpp.o.provides.build
.PHONY : CMakeFiles/myproject.dir/DisplayWindow.cpp.o.provides

CMakeFiles/myproject.dir/DisplayWindow.cpp.o.provides.build: CMakeFiles/myproject.dir/DisplayWindow.cpp.o


# Object files for target myproject
myproject_OBJECTS = \
"CMakeFiles/myproject.dir/main.cpp.o" \
"CMakeFiles/myproject.dir/ButtonObj.cpp.o" \
"CMakeFiles/myproject.dir/TextObj.cpp.o" \
"CMakeFiles/myproject.dir/FileHandler.cpp.o" \
"CMakeFiles/myproject.dir/TaskObj.cpp.o" \
"CMakeFiles/myproject.dir/c_string.cpp.o" \
"CMakeFiles/myproject.dir/Sprite.cpp.o" \
"CMakeFiles/myproject.dir/DisplayWindow.cpp.o"

# External object files for target myproject
myproject_EXTERNAL_OBJECTS =

myproject: CMakeFiles/myproject.dir/main.cpp.o
myproject: CMakeFiles/myproject.dir/ButtonObj.cpp.o
myproject: CMakeFiles/myproject.dir/TextObj.cpp.o
myproject: CMakeFiles/myproject.dir/FileHandler.cpp.o
myproject: CMakeFiles/myproject.dir/TaskObj.cpp.o
myproject: CMakeFiles/myproject.dir/c_string.cpp.o
myproject: CMakeFiles/myproject.dir/Sprite.cpp.o
myproject: CMakeFiles/myproject.dir/DisplayWindow.cpp.o
myproject: CMakeFiles/myproject.dir/build.make
myproject: /usr/lib/x86_64-linux-gnu/libsfml-system.so
myproject: /usr/lib/x86_64-linux-gnu/libsfml-window.so
myproject: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
myproject: /usr/lib/x86_64-linux-gnu/libsfml-network.so
myproject: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
myproject: CMakeFiles/myproject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zack/git-repos/KeyGenerator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable myproject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myproject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myproject.dir/build: myproject

.PHONY : CMakeFiles/myproject.dir/build

CMakeFiles/myproject.dir/requires: CMakeFiles/myproject.dir/main.cpp.o.requires
CMakeFiles/myproject.dir/requires: CMakeFiles/myproject.dir/ButtonObj.cpp.o.requires
CMakeFiles/myproject.dir/requires: CMakeFiles/myproject.dir/TextObj.cpp.o.requires
CMakeFiles/myproject.dir/requires: CMakeFiles/myproject.dir/FileHandler.cpp.o.requires
CMakeFiles/myproject.dir/requires: CMakeFiles/myproject.dir/TaskObj.cpp.o.requires
CMakeFiles/myproject.dir/requires: CMakeFiles/myproject.dir/c_string.cpp.o.requires
CMakeFiles/myproject.dir/requires: CMakeFiles/myproject.dir/Sprite.cpp.o.requires
CMakeFiles/myproject.dir/requires: CMakeFiles/myproject.dir/DisplayWindow.cpp.o.requires

.PHONY : CMakeFiles/myproject.dir/requires

CMakeFiles/myproject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myproject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myproject.dir/clean

CMakeFiles/myproject.dir/depend:
	cd /home/zack/git-repos/KeyGenerator && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zack/git-repos/KeyGenerator /home/zack/git-repos/KeyGenerator /home/zack/git-repos/KeyGenerator /home/zack/git-repos/KeyGenerator /home/zack/git-repos/KeyGenerator/CMakeFiles/myproject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myproject.dir/depend

