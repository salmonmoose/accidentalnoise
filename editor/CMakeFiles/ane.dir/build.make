# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/salmonmoose/dev/git/accidentalnoise

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/salmonmoose/dev/git/accidentalnoise

# Include any dependencies generated for this target.
include editor/CMakeFiles/ane.dir/depend.make

# Include the progress variables for this target.
include editor/CMakeFiles/ane.dir/progress.make

# Include the compile flags for this target's objects.
include editor/CMakeFiles/ane.dir/flags.make

editor/CMakeFiles/ane.dir/editor.cpp.o: editor/CMakeFiles/ane.dir/flags.make
editor/CMakeFiles/ane.dir/editor.cpp.o: editor/editor.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/salmonmoose/dev/git/accidentalnoise/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object editor/CMakeFiles/ane.dir/editor.cpp.o"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ane.dir/editor.cpp.o -c /home/salmonmoose/dev/git/accidentalnoise/editor/editor.cpp

editor/CMakeFiles/ane.dir/editor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ane.dir/editor.cpp.i"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/salmonmoose/dev/git/accidentalnoise/editor/editor.cpp > CMakeFiles/ane.dir/editor.cpp.i

editor/CMakeFiles/ane.dir/editor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ane.dir/editor.cpp.s"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/salmonmoose/dev/git/accidentalnoise/editor/editor.cpp -o CMakeFiles/ane.dir/editor.cpp.s

editor/CMakeFiles/ane.dir/editor.cpp.o.requires:
.PHONY : editor/CMakeFiles/ane.dir/editor.cpp.o.requires

editor/CMakeFiles/ane.dir/editor.cpp.o.provides: editor/CMakeFiles/ane.dir/editor.cpp.o.requires
	$(MAKE) -f editor/CMakeFiles/ane.dir/build.make editor/CMakeFiles/ane.dir/editor.cpp.o.provides.build
.PHONY : editor/CMakeFiles/ane.dir/editor.cpp.o.provides

editor/CMakeFiles/ane.dir/editor.cpp.o.provides.build: editor/CMakeFiles/ane.dir/editor.cpp.o

editor/CMakeFiles/ane.dir/widget.cpp.o: editor/CMakeFiles/ane.dir/flags.make
editor/CMakeFiles/ane.dir/widget.cpp.o: editor/widget.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/salmonmoose/dev/git/accidentalnoise/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object editor/CMakeFiles/ane.dir/widget.cpp.o"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ane.dir/widget.cpp.o -c /home/salmonmoose/dev/git/accidentalnoise/editor/widget.cpp

editor/CMakeFiles/ane.dir/widget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ane.dir/widget.cpp.i"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/salmonmoose/dev/git/accidentalnoise/editor/widget.cpp > CMakeFiles/ane.dir/widget.cpp.i

editor/CMakeFiles/ane.dir/widget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ane.dir/widget.cpp.s"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/salmonmoose/dev/git/accidentalnoise/editor/widget.cpp -o CMakeFiles/ane.dir/widget.cpp.s

editor/CMakeFiles/ane.dir/widget.cpp.o.requires:
.PHONY : editor/CMakeFiles/ane.dir/widget.cpp.o.requires

editor/CMakeFiles/ane.dir/widget.cpp.o.provides: editor/CMakeFiles/ane.dir/widget.cpp.o.requires
	$(MAKE) -f editor/CMakeFiles/ane.dir/build.make editor/CMakeFiles/ane.dir/widget.cpp.o.provides.build
.PHONY : editor/CMakeFiles/ane.dir/widget.cpp.o.provides

editor/CMakeFiles/ane.dir/widget.cpp.o.provides.build: editor/CMakeFiles/ane.dir/widget.cpp.o

editor/CMakeFiles/ane.dir/ane.cpp.o: editor/CMakeFiles/ane.dir/flags.make
editor/CMakeFiles/ane.dir/ane.cpp.o: editor/ane.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/salmonmoose/dev/git/accidentalnoise/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object editor/CMakeFiles/ane.dir/ane.cpp.o"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ane.dir/ane.cpp.o -c /home/salmonmoose/dev/git/accidentalnoise/editor/ane.cpp

editor/CMakeFiles/ane.dir/ane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ane.dir/ane.cpp.i"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/salmonmoose/dev/git/accidentalnoise/editor/ane.cpp > CMakeFiles/ane.dir/ane.cpp.i

editor/CMakeFiles/ane.dir/ane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ane.dir/ane.cpp.s"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/salmonmoose/dev/git/accidentalnoise/editor/ane.cpp -o CMakeFiles/ane.dir/ane.cpp.s

editor/CMakeFiles/ane.dir/ane.cpp.o.requires:
.PHONY : editor/CMakeFiles/ane.dir/ane.cpp.o.requires

editor/CMakeFiles/ane.dir/ane.cpp.o.provides: editor/CMakeFiles/ane.dir/ane.cpp.o.requires
	$(MAKE) -f editor/CMakeFiles/ane.dir/build.make editor/CMakeFiles/ane.dir/ane.cpp.o.provides.build
.PHONY : editor/CMakeFiles/ane.dir/ane.cpp.o.provides

editor/CMakeFiles/ane.dir/ane.cpp.o.provides.build: editor/CMakeFiles/ane.dir/ane.cpp.o

# Object files for target ane
ane_OBJECTS = \
"CMakeFiles/ane.dir/editor.cpp.o" \
"CMakeFiles/ane.dir/widget.cpp.o" \
"CMakeFiles/ane.dir/ane.cpp.o"

# External object files for target ane
ane_EXTERNAL_OBJECTS =

bin/ane: editor/CMakeFiles/ane.dir/editor.cpp.o
bin/ane: editor/CMakeFiles/ane.dir/widget.cpp.o
bin/ane: editor/CMakeFiles/ane.dir/ane.cpp.o
bin/ane: editor/CMakeFiles/ane.dir/build.make
bin/ane: /usr/local/lib/libsfml-system.so
bin/ane: /usr/local/lib/libsfml-window.so
bin/ane: /usr/local/lib/libsfml-graphics.so
bin/ane: /usr/local/lib/libsfml-network.so
bin/ane: /usr/local/lib/libsfml-audio.so
bin/ane: editor/CMakeFiles/ane.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/ane"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ane.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
editor/CMakeFiles/ane.dir/build: bin/ane
.PHONY : editor/CMakeFiles/ane.dir/build

editor/CMakeFiles/ane.dir/requires: editor/CMakeFiles/ane.dir/editor.cpp.o.requires
editor/CMakeFiles/ane.dir/requires: editor/CMakeFiles/ane.dir/widget.cpp.o.requires
editor/CMakeFiles/ane.dir/requires: editor/CMakeFiles/ane.dir/ane.cpp.o.requires
.PHONY : editor/CMakeFiles/ane.dir/requires

editor/CMakeFiles/ane.dir/clean:
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && $(CMAKE_COMMAND) -P CMakeFiles/ane.dir/cmake_clean.cmake
.PHONY : editor/CMakeFiles/ane.dir/clean

editor/CMakeFiles/ane.dir/depend:
	cd /home/salmonmoose/dev/git/accidentalnoise && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/salmonmoose/dev/git/accidentalnoise /home/salmonmoose/dev/git/accidentalnoise/editor /home/salmonmoose/dev/git/accidentalnoise /home/salmonmoose/dev/git/accidentalnoise/editor /home/salmonmoose/dev/git/accidentalnoise/editor/CMakeFiles/ane.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : editor/CMakeFiles/ane.dir/depend

