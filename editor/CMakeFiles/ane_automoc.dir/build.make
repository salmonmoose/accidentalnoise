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

# Utility rule file for ane_automoc.

# Include the progress variables for this target.
include editor/CMakeFiles/ane_automoc.dir/progress.make

editor/CMakeFiles/ane_automoc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/salmonmoose/dev/git/accidentalnoise/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Automoc for target ane"
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && /usr/bin/cmake -E cmake_automoc /home/salmonmoose/dev/git/accidentalnoise/editor/CMakeFiles/ane_automoc.dir/

ane_automoc: editor/CMakeFiles/ane_automoc
ane_automoc: editor/CMakeFiles/ane_automoc.dir/build.make
.PHONY : ane_automoc

# Rule to build all files generated by this target.
editor/CMakeFiles/ane_automoc.dir/build: ane_automoc
.PHONY : editor/CMakeFiles/ane_automoc.dir/build

editor/CMakeFiles/ane_automoc.dir/clean:
	cd /home/salmonmoose/dev/git/accidentalnoise/editor && $(CMAKE_COMMAND) -P CMakeFiles/ane_automoc.dir/cmake_clean.cmake
.PHONY : editor/CMakeFiles/ane_automoc.dir/clean

editor/CMakeFiles/ane_automoc.dir/depend:
	cd /home/salmonmoose/dev/git/accidentalnoise && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/salmonmoose/dev/git/accidentalnoise /home/salmonmoose/dev/git/accidentalnoise/editor /home/salmonmoose/dev/git/accidentalnoise /home/salmonmoose/dev/git/accidentalnoise/editor /home/salmonmoose/dev/git/accidentalnoise/editor/CMakeFiles/ane_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : editor/CMakeFiles/ane_automoc.dir/depend

