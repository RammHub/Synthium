# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sriramprasath/projects/synthium

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sriramprasath/projects/synthium

# Include any dependencies generated for this target.
include CMakeFiles/synthium.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/synthium.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/synthium.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/synthium.dir/flags.make

CMakeFiles/synthium.dir/codegen:
.PHONY : CMakeFiles/synthium.dir/codegen

CMakeFiles/synthium.dir/src/lexer.cpp.o: CMakeFiles/synthium.dir/flags.make
CMakeFiles/synthium.dir/src/lexer.cpp.o: src/lexer.cpp
CMakeFiles/synthium.dir/src/lexer.cpp.o: CMakeFiles/synthium.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sriramprasath/projects/synthium/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/synthium.dir/src/lexer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synthium.dir/src/lexer.cpp.o -MF CMakeFiles/synthium.dir/src/lexer.cpp.o.d -o CMakeFiles/synthium.dir/src/lexer.cpp.o -c /Users/sriramprasath/projects/synthium/src/lexer.cpp

CMakeFiles/synthium.dir/src/lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/synthium.dir/src/lexer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sriramprasath/projects/synthium/src/lexer.cpp > CMakeFiles/synthium.dir/src/lexer.cpp.i

CMakeFiles/synthium.dir/src/lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/synthium.dir/src/lexer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sriramprasath/projects/synthium/src/lexer.cpp -o CMakeFiles/synthium.dir/src/lexer.cpp.s

CMakeFiles/synthium.dir/src/parser.cpp.o: CMakeFiles/synthium.dir/flags.make
CMakeFiles/synthium.dir/src/parser.cpp.o: src/parser.cpp
CMakeFiles/synthium.dir/src/parser.cpp.o: CMakeFiles/synthium.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sriramprasath/projects/synthium/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/synthium.dir/src/parser.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synthium.dir/src/parser.cpp.o -MF CMakeFiles/synthium.dir/src/parser.cpp.o.d -o CMakeFiles/synthium.dir/src/parser.cpp.o -c /Users/sriramprasath/projects/synthium/src/parser.cpp

CMakeFiles/synthium.dir/src/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/synthium.dir/src/parser.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sriramprasath/projects/synthium/src/parser.cpp > CMakeFiles/synthium.dir/src/parser.cpp.i

CMakeFiles/synthium.dir/src/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/synthium.dir/src/parser.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sriramprasath/projects/synthium/src/parser.cpp -o CMakeFiles/synthium.dir/src/parser.cpp.s

CMakeFiles/synthium.dir/src/ast.cpp.o: CMakeFiles/synthium.dir/flags.make
CMakeFiles/synthium.dir/src/ast.cpp.o: src/ast.cpp
CMakeFiles/synthium.dir/src/ast.cpp.o: CMakeFiles/synthium.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sriramprasath/projects/synthium/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/synthium.dir/src/ast.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synthium.dir/src/ast.cpp.o -MF CMakeFiles/synthium.dir/src/ast.cpp.o.d -o CMakeFiles/synthium.dir/src/ast.cpp.o -c /Users/sriramprasath/projects/synthium/src/ast.cpp

CMakeFiles/synthium.dir/src/ast.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/synthium.dir/src/ast.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sriramprasath/projects/synthium/src/ast.cpp > CMakeFiles/synthium.dir/src/ast.cpp.i

CMakeFiles/synthium.dir/src/ast.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/synthium.dir/src/ast.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sriramprasath/projects/synthium/src/ast.cpp -o CMakeFiles/synthium.dir/src/ast.cpp.s

CMakeFiles/synthium.dir/src/token.cpp.o: CMakeFiles/synthium.dir/flags.make
CMakeFiles/synthium.dir/src/token.cpp.o: src/token.cpp
CMakeFiles/synthium.dir/src/token.cpp.o: CMakeFiles/synthium.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sriramprasath/projects/synthium/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/synthium.dir/src/token.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synthium.dir/src/token.cpp.o -MF CMakeFiles/synthium.dir/src/token.cpp.o.d -o CMakeFiles/synthium.dir/src/token.cpp.o -c /Users/sriramprasath/projects/synthium/src/token.cpp

CMakeFiles/synthium.dir/src/token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/synthium.dir/src/token.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sriramprasath/projects/synthium/src/token.cpp > CMakeFiles/synthium.dir/src/token.cpp.i

CMakeFiles/synthium.dir/src/token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/synthium.dir/src/token.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sriramprasath/projects/synthium/src/token.cpp -o CMakeFiles/synthium.dir/src/token.cpp.s

CMakeFiles/synthium.dir/src/simulator.cpp.o: CMakeFiles/synthium.dir/flags.make
CMakeFiles/synthium.dir/src/simulator.cpp.o: src/simulator.cpp
CMakeFiles/synthium.dir/src/simulator.cpp.o: CMakeFiles/synthium.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sriramprasath/projects/synthium/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/synthium.dir/src/simulator.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synthium.dir/src/simulator.cpp.o -MF CMakeFiles/synthium.dir/src/simulator.cpp.o.d -o CMakeFiles/synthium.dir/src/simulator.cpp.o -c /Users/sriramprasath/projects/synthium/src/simulator.cpp

CMakeFiles/synthium.dir/src/simulator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/synthium.dir/src/simulator.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sriramprasath/projects/synthium/src/simulator.cpp > CMakeFiles/synthium.dir/src/simulator.cpp.i

CMakeFiles/synthium.dir/src/simulator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/synthium.dir/src/simulator.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sriramprasath/projects/synthium/src/simulator.cpp -o CMakeFiles/synthium.dir/src/simulator.cpp.s

CMakeFiles/synthium.dir/src/main.cpp.o: CMakeFiles/synthium.dir/flags.make
CMakeFiles/synthium.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/synthium.dir/src/main.cpp.o: CMakeFiles/synthium.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sriramprasath/projects/synthium/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/synthium.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synthium.dir/src/main.cpp.o -MF CMakeFiles/synthium.dir/src/main.cpp.o.d -o CMakeFiles/synthium.dir/src/main.cpp.o -c /Users/sriramprasath/projects/synthium/src/main.cpp

CMakeFiles/synthium.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/synthium.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sriramprasath/projects/synthium/src/main.cpp > CMakeFiles/synthium.dir/src/main.cpp.i

CMakeFiles/synthium.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/synthium.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sriramprasath/projects/synthium/src/main.cpp -o CMakeFiles/synthium.dir/src/main.cpp.s

# Object files for target synthium
synthium_OBJECTS = \
"CMakeFiles/synthium.dir/src/lexer.cpp.o" \
"CMakeFiles/synthium.dir/src/parser.cpp.o" \
"CMakeFiles/synthium.dir/src/ast.cpp.o" \
"CMakeFiles/synthium.dir/src/token.cpp.o" \
"CMakeFiles/synthium.dir/src/simulator.cpp.o" \
"CMakeFiles/synthium.dir/src/main.cpp.o"

# External object files for target synthium
synthium_EXTERNAL_OBJECTS =

synthium: CMakeFiles/synthium.dir/src/lexer.cpp.o
synthium: CMakeFiles/synthium.dir/src/parser.cpp.o
synthium: CMakeFiles/synthium.dir/src/ast.cpp.o
synthium: CMakeFiles/synthium.dir/src/token.cpp.o
synthium: CMakeFiles/synthium.dir/src/simulator.cpp.o
synthium: CMakeFiles/synthium.dir/src/main.cpp.o
synthium: CMakeFiles/synthium.dir/build.make
synthium: CMakeFiles/synthium.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/sriramprasath/projects/synthium/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable synthium"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/synthium.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/synthium.dir/build: synthium
.PHONY : CMakeFiles/synthium.dir/build

CMakeFiles/synthium.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/synthium.dir/cmake_clean.cmake
.PHONY : CMakeFiles/synthium.dir/clean

CMakeFiles/synthium.dir/depend:
	cd /Users/sriramprasath/projects/synthium && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sriramprasath/projects/synthium /Users/sriramprasath/projects/synthium /Users/sriramprasath/projects/synthium /Users/sriramprasath/projects/synthium /Users/sriramprasath/projects/synthium/CMakeFiles/synthium.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/synthium.dir/depend

