# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/cmake-gui -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target package_source
package_source:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool for source..."
	/usr/bin/cpack --config ./CPackSourceConfig.cmake /home/zack/git-repos/KeyGenerator/CPackSourceConfig.cmake
.PHONY : package_source

# Special rule for the target package_source
package_source/fast: package_source

.PHONY : package_source/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target package
package: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool..."
	/usr/bin/cpack --config ./CPackConfig.cmake
.PHONY : package

# Special rule for the target package
package/fast: package

.PHONY : package/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: install/local

.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: install/strip

.PHONY : install/strip/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/zack/git-repos/KeyGenerator/CMakeFiles /home/zack/git-repos/KeyGenerator/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/zack/git-repos/KeyGenerator/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named myproject

# Build rule for target.
myproject: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 myproject
.PHONY : myproject

# fast build rule for target.
myproject/fast:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/build
.PHONY : myproject/fast

ButtonObj.o: ButtonObj.cpp.o

.PHONY : ButtonObj.o

# target to build an object file
ButtonObj.cpp.o:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/ButtonObj.cpp.o
.PHONY : ButtonObj.cpp.o

ButtonObj.i: ButtonObj.cpp.i

.PHONY : ButtonObj.i

# target to preprocess a source file
ButtonObj.cpp.i:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/ButtonObj.cpp.i
.PHONY : ButtonObj.cpp.i

ButtonObj.s: ButtonObj.cpp.s

.PHONY : ButtonObj.s

# target to generate assembly for a file
ButtonObj.cpp.s:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/ButtonObj.cpp.s
.PHONY : ButtonObj.cpp.s

DisplayWindow.o: DisplayWindow.cpp.o

.PHONY : DisplayWindow.o

# target to build an object file
DisplayWindow.cpp.o:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/DisplayWindow.cpp.o
.PHONY : DisplayWindow.cpp.o

DisplayWindow.i: DisplayWindow.cpp.i

.PHONY : DisplayWindow.i

# target to preprocess a source file
DisplayWindow.cpp.i:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/DisplayWindow.cpp.i
.PHONY : DisplayWindow.cpp.i

DisplayWindow.s: DisplayWindow.cpp.s

.PHONY : DisplayWindow.s

# target to generate assembly for a file
DisplayWindow.cpp.s:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/DisplayWindow.cpp.s
.PHONY : DisplayWindow.cpp.s

FileHandler.o: FileHandler.cpp.o

.PHONY : FileHandler.o

# target to build an object file
FileHandler.cpp.o:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/FileHandler.cpp.o
.PHONY : FileHandler.cpp.o

FileHandler.i: FileHandler.cpp.i

.PHONY : FileHandler.i

# target to preprocess a source file
FileHandler.cpp.i:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/FileHandler.cpp.i
.PHONY : FileHandler.cpp.i

FileHandler.s: FileHandler.cpp.s

.PHONY : FileHandler.s

# target to generate assembly for a file
FileHandler.cpp.s:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/FileHandler.cpp.s
.PHONY : FileHandler.cpp.s

Sprite.o: Sprite.cpp.o

.PHONY : Sprite.o

# target to build an object file
Sprite.cpp.o:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/Sprite.cpp.o
.PHONY : Sprite.cpp.o

Sprite.i: Sprite.cpp.i

.PHONY : Sprite.i

# target to preprocess a source file
Sprite.cpp.i:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/Sprite.cpp.i
.PHONY : Sprite.cpp.i

Sprite.s: Sprite.cpp.s

.PHONY : Sprite.s

# target to generate assembly for a file
Sprite.cpp.s:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/Sprite.cpp.s
.PHONY : Sprite.cpp.s

TaskObj.o: TaskObj.cpp.o

.PHONY : TaskObj.o

# target to build an object file
TaskObj.cpp.o:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/TaskObj.cpp.o
.PHONY : TaskObj.cpp.o

TaskObj.i: TaskObj.cpp.i

.PHONY : TaskObj.i

# target to preprocess a source file
TaskObj.cpp.i:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/TaskObj.cpp.i
.PHONY : TaskObj.cpp.i

TaskObj.s: TaskObj.cpp.s

.PHONY : TaskObj.s

# target to generate assembly for a file
TaskObj.cpp.s:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/TaskObj.cpp.s
.PHONY : TaskObj.cpp.s

TextObj.o: TextObj.cpp.o

.PHONY : TextObj.o

# target to build an object file
TextObj.cpp.o:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/TextObj.cpp.o
.PHONY : TextObj.cpp.o

TextObj.i: TextObj.cpp.i

.PHONY : TextObj.i

# target to preprocess a source file
TextObj.cpp.i:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/TextObj.cpp.i
.PHONY : TextObj.cpp.i

TextObj.s: TextObj.cpp.s

.PHONY : TextObj.s

# target to generate assembly for a file
TextObj.cpp.s:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/TextObj.cpp.s
.PHONY : TextObj.cpp.s

c_string.o: c_string.cpp.o

.PHONY : c_string.o

# target to build an object file
c_string.cpp.o:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/c_string.cpp.o
.PHONY : c_string.cpp.o

c_string.i: c_string.cpp.i

.PHONY : c_string.i

# target to preprocess a source file
c_string.cpp.i:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/c_string.cpp.i
.PHONY : c_string.cpp.i

c_string.s: c_string.cpp.s

.PHONY : c_string.s

# target to generate assembly for a file
c_string.cpp.s:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/c_string.cpp.s
.PHONY : c_string.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/myproject.dir/build.make CMakeFiles/myproject.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... package_source"
	@echo "... rebuild_cache"
	@echo "... package"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... myproject"
	@echo "... install"
	@echo "... ButtonObj.o"
	@echo "... ButtonObj.i"
	@echo "... ButtonObj.s"
	@echo "... DisplayWindow.o"
	@echo "... DisplayWindow.i"
	@echo "... DisplayWindow.s"
	@echo "... FileHandler.o"
	@echo "... FileHandler.i"
	@echo "... FileHandler.s"
	@echo "... Sprite.o"
	@echo "... Sprite.i"
	@echo "... Sprite.s"
	@echo "... TaskObj.o"
	@echo "... TaskObj.i"
	@echo "... TaskObj.s"
	@echo "... TextObj.o"
	@echo "... TextObj.i"
	@echo "... TextObj.s"
	@echo "... c_string.o"
	@echo "... c_string.i"
	@echo "... c_string.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

