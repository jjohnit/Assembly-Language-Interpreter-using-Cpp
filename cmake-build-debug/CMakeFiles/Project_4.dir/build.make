# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/jjasan2/CLionProjects/Project_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_4.dir/flags.make

CMakeFiles/Project_4.dir/main.cpp.o: CMakeFiles/Project_4.dir/flags.make
CMakeFiles/Project_4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_4.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_4.dir/main.cpp.o -c /mnt/c/Users/jjasan2/CLionProjects/Project_4/main.cpp

CMakeFiles/Project_4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_4.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/jjasan2/CLionProjects/Project_4/main.cpp > CMakeFiles/Project_4.dir/main.cpp.i

CMakeFiles/Project_4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_4.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/jjasan2/CLionProjects/Project_4/main.cpp -o CMakeFiles/Project_4.dir/main.cpp.s

CMakeFiles/Project_4.dir/Hardware.cpp.o: CMakeFiles/Project_4.dir/flags.make
CMakeFiles/Project_4.dir/Hardware.cpp.o: ../Hardware.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project_4.dir/Hardware.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_4.dir/Hardware.cpp.o -c /mnt/c/Users/jjasan2/CLionProjects/Project_4/Hardware.cpp

CMakeFiles/Project_4.dir/Hardware.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_4.dir/Hardware.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/jjasan2/CLionProjects/Project_4/Hardware.cpp > CMakeFiles/Project_4.dir/Hardware.cpp.i

CMakeFiles/Project_4.dir/Hardware.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_4.dir/Hardware.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/jjasan2/CLionProjects/Project_4/Hardware.cpp -o CMakeFiles/Project_4.dir/Hardware.cpp.s

CMakeFiles/Project_4.dir/Instruction.cpp.o: CMakeFiles/Project_4.dir/flags.make
CMakeFiles/Project_4.dir/Instruction.cpp.o: ../Instruction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project_4.dir/Instruction.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_4.dir/Instruction.cpp.o -c /mnt/c/Users/jjasan2/CLionProjects/Project_4/Instruction.cpp

CMakeFiles/Project_4.dir/Instruction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_4.dir/Instruction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/jjasan2/CLionProjects/Project_4/Instruction.cpp > CMakeFiles/Project_4.dir/Instruction.cpp.i

CMakeFiles/Project_4.dir/Instruction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_4.dir/Instruction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/jjasan2/CLionProjects/Project_4/Instruction.cpp -o CMakeFiles/Project_4.dir/Instruction.cpp.s

CMakeFiles/Project_4.dir/ALI.cpp.o: CMakeFiles/Project_4.dir/flags.make
CMakeFiles/Project_4.dir/ALI.cpp.o: ../ALI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project_4.dir/ALI.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_4.dir/ALI.cpp.o -c /mnt/c/Users/jjasan2/CLionProjects/Project_4/ALI.cpp

CMakeFiles/Project_4.dir/ALI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_4.dir/ALI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/jjasan2/CLionProjects/Project_4/ALI.cpp > CMakeFiles/Project_4.dir/ALI.cpp.i

CMakeFiles/Project_4.dir/ALI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_4.dir/ALI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/jjasan2/CLionProjects/Project_4/ALI.cpp -o CMakeFiles/Project_4.dir/ALI.cpp.s

# Object files for target Project_4
Project_4_OBJECTS = \
"CMakeFiles/Project_4.dir/main.cpp.o" \
"CMakeFiles/Project_4.dir/Hardware.cpp.o" \
"CMakeFiles/Project_4.dir/Instruction.cpp.o" \
"CMakeFiles/Project_4.dir/ALI.cpp.o"

# External object files for target Project_4
Project_4_EXTERNAL_OBJECTS =

Project_4: CMakeFiles/Project_4.dir/main.cpp.o
Project_4: CMakeFiles/Project_4.dir/Hardware.cpp.o
Project_4: CMakeFiles/Project_4.dir/Instruction.cpp.o
Project_4: CMakeFiles/Project_4.dir/ALI.cpp.o
Project_4: CMakeFiles/Project_4.dir/build.make
Project_4: CMakeFiles/Project_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Project_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_4.dir/build: Project_4

.PHONY : CMakeFiles/Project_4.dir/build

CMakeFiles/Project_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_4.dir/clean

CMakeFiles/Project_4.dir/depend:
	cd /mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/jjasan2/CLionProjects/Project_4 /mnt/c/Users/jjasan2/CLionProjects/Project_4 /mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug /mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug /mnt/c/Users/jjasan2/CLionProjects/Project_4/cmake-build-debug/CMakeFiles/Project_4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project_4.dir/depend
