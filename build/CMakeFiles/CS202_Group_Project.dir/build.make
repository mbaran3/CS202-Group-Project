# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/cmake/858/bin/cmake

# The command to remove a file.
RM = /snap/cmake/858/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zogwort/myDev/CS202-Group-Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zogwort/myDev/CS202-Group-Project/build

# Include any dependencies generated for this target.
include CMakeFiles/CS202_Group_Project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CS202_Group_Project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CS202_Group_Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS202_Group_Project.dir/flags.make

CMakeFiles/CS202_Group_Project.dir/main.cpp.o: CMakeFiles/CS202_Group_Project.dir/flags.make
CMakeFiles/CS202_Group_Project.dir/main.cpp.o: ../main.cpp
CMakeFiles/CS202_Group_Project.dir/main.cpp.o: CMakeFiles/CS202_Group_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS202_Group_Project.dir/main.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS202_Group_Project.dir/main.cpp.o -MF CMakeFiles/CS202_Group_Project.dir/main.cpp.o.d -o CMakeFiles/CS202_Group_Project.dir/main.cpp.o -c /home/zogwort/myDev/CS202-Group-Project/main.cpp

CMakeFiles/CS202_Group_Project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/main.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zogwort/myDev/CS202-Group-Project/main.cpp > CMakeFiles/CS202_Group_Project.dir/main.cpp.i

CMakeFiles/CS202_Group_Project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/main.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zogwort/myDev/CS202-Group-Project/main.cpp -o CMakeFiles/CS202_Group_Project.dir/main.cpp.s

CMakeFiles/CS202_Group_Project.dir/PC.cpp.o: CMakeFiles/CS202_Group_Project.dir/flags.make
CMakeFiles/CS202_Group_Project.dir/PC.cpp.o: ../PC.cpp
CMakeFiles/CS202_Group_Project.dir/PC.cpp.o: CMakeFiles/CS202_Group_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CS202_Group_Project.dir/PC.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS202_Group_Project.dir/PC.cpp.o -MF CMakeFiles/CS202_Group_Project.dir/PC.cpp.o.d -o CMakeFiles/CS202_Group_Project.dir/PC.cpp.o -c /home/zogwort/myDev/CS202-Group-Project/PC.cpp

CMakeFiles/CS202_Group_Project.dir/PC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/PC.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zogwort/myDev/CS202-Group-Project/PC.cpp > CMakeFiles/CS202_Group_Project.dir/PC.cpp.i

CMakeFiles/CS202_Group_Project.dir/PC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/PC.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zogwort/myDev/CS202-Group-Project/PC.cpp -o CMakeFiles/CS202_Group_Project.dir/PC.cpp.s

CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o: CMakeFiles/CS202_Group_Project.dir/flags.make
CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o: ../Skill.cpp
CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o: CMakeFiles/CS202_Group_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o -MF CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o.d -o CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o -c /home/zogwort/myDev/CS202-Group-Project/Skill.cpp

CMakeFiles/CS202_Group_Project.dir/Skill.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/Skill.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zogwort/myDev/CS202-Group-Project/Skill.cpp > CMakeFiles/CS202_Group_Project.dir/Skill.cpp.i

CMakeFiles/CS202_Group_Project.dir/Skill.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/Skill.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zogwort/myDev/CS202-Group-Project/Skill.cpp -o CMakeFiles/CS202_Group_Project.dir/Skill.cpp.s

CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o: CMakeFiles/CS202_Group_Project.dir/flags.make
CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o: ../Character_Creation.cpp
CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o: CMakeFiles/CS202_Group_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o -MF CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o.d -o CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o -c /home/zogwort/myDev/CS202-Group-Project/Character_Creation.cpp

CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zogwort/myDev/CS202-Group-Project/Character_Creation.cpp > CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.i

CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zogwort/myDev/CS202-Group-Project/Character_Creation.cpp -o CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.s

CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o: CMakeFiles/CS202_Group_Project.dir/flags.make
CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o: ../Character_Class.cpp
CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o: CMakeFiles/CS202_Group_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o -MF CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o.d -o CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o -c /home/zogwort/myDev/CS202-Group-Project/Character_Class.cpp

CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zogwort/myDev/CS202-Group-Project/Character_Class.cpp > CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.i

CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zogwort/myDev/CS202-Group-Project/Character_Class.cpp -o CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.s

CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o: CMakeFiles/CS202_Group_Project.dir/flags.make
CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o: ../SkillDescription.cpp
CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o: CMakeFiles/CS202_Group_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o -MF CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o.d -o CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o -c /home/zogwort/myDev/CS202-Group-Project/SkillDescription.cpp

CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zogwort/myDev/CS202-Group-Project/SkillDescription.cpp > CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.i

CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zogwort/myDev/CS202-Group-Project/SkillDescription.cpp -o CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.s

CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o: CMakeFiles/CS202_Group_Project.dir/flags.make
CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o: ../CharacterClassDescriptions.cpp
CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o: CMakeFiles/CS202_Group_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o -MF CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o.d -o CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o -c /home/zogwort/myDev/CS202-Group-Project/CharacterClassDescriptions.cpp

CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zogwort/myDev/CS202-Group-Project/CharacterClassDescriptions.cpp > CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.i

CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zogwort/myDev/CS202-Group-Project/CharacterClassDescriptions.cpp -o CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.s

# Object files for target CS202_Group_Project
CS202_Group_Project_OBJECTS = \
"CMakeFiles/CS202_Group_Project.dir/main.cpp.o" \
"CMakeFiles/CS202_Group_Project.dir/PC.cpp.o" \
"CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o" \
"CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o" \
"CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o" \
"CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o" \
"CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o"

# External object files for target CS202_Group_Project
CS202_Group_Project_EXTERNAL_OBJECTS =

CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/main.cpp.o
CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/PC.cpp.o
CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/Skill.cpp.o
CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/Character_Creation.cpp.o
CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/Character_Class.cpp.o
CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/SkillDescription.cpp.o
CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/CharacterClassDescriptions.cpp.o
CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/build.make
CS202_Group_Project: CMakeFiles/CS202_Group_Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable CS202_Group_Project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CS202_Group_Project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS202_Group_Project.dir/build: CS202_Group_Project
.PHONY : CMakeFiles/CS202_Group_Project.dir/build

CMakeFiles/CS202_Group_Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CS202_Group_Project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CS202_Group_Project.dir/clean

CMakeFiles/CS202_Group_Project.dir/depend:
	cd /home/zogwort/myDev/CS202-Group-Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zogwort/myDev/CS202-Group-Project /home/zogwort/myDev/CS202-Group-Project /home/zogwort/myDev/CS202-Group-Project/build /home/zogwort/myDev/CS202-Group-Project/build /home/zogwort/myDev/CS202-Group-Project/build/CMakeFiles/CS202_Group_Project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS202_Group_Project.dir/depend

