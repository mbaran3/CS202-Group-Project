# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Dev\CS202 Group Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Dev\CS202 Group Project\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\CS202_Group_Project.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\CS202_Group_Project.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CS202_Group_Project.dir\flags.make

CMakeFiles\CS202_Group_Project.dir\main.cpp.obj: CMakeFiles\CS202_Group_Project.dir\flags.make
CMakeFiles\CS202_Group_Project.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Dev\CS202 Group Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS202_Group_Project.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CS202_Group_Project.dir\main.cpp.obj /FdCMakeFiles\CS202_Group_Project.dir\ /FS -c "C:\Dev\CS202 Group Project\main.cpp"
<<

CMakeFiles\CS202_Group_Project.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\CS202_Group_Project.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Dev\CS202 Group Project\main.cpp"
<<

CMakeFiles\CS202_Group_Project.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CS202_Group_Project.dir\main.cpp.s /c "C:\Dev\CS202 Group Project\main.cpp"
<<

CMakeFiles\CS202_Group_Project.dir\PC.cpp.obj: CMakeFiles\CS202_Group_Project.dir\flags.make
CMakeFiles\CS202_Group_Project.dir\PC.cpp.obj: ..\PC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Dev\CS202 Group Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CS202_Group_Project.dir/PC.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CS202_Group_Project.dir\PC.cpp.obj /FdCMakeFiles\CS202_Group_Project.dir\ /FS -c "C:\Dev\CS202 Group Project\PC.cpp"
<<

CMakeFiles\CS202_Group_Project.dir\PC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/PC.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\CS202_Group_Project.dir\PC.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Dev\CS202 Group Project\PC.cpp"
<<

CMakeFiles\CS202_Group_Project.dir\PC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/PC.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CS202_Group_Project.dir\PC.cpp.s /c "C:\Dev\CS202 Group Project\PC.cpp"
<<

CMakeFiles\CS202_Group_Project.dir\Skill.cpp.obj: CMakeFiles\CS202_Group_Project.dir\flags.make
CMakeFiles\CS202_Group_Project.dir\Skill.cpp.obj: ..\Skill.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Dev\CS202 Group Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CS202_Group_Project.dir/Skill.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CS202_Group_Project.dir\Skill.cpp.obj /FdCMakeFiles\CS202_Group_Project.dir\ /FS -c "C:\Dev\CS202 Group Project\Skill.cpp"
<<

CMakeFiles\CS202_Group_Project.dir\Skill.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS202_Group_Project.dir/Skill.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\CS202_Group_Project.dir\Skill.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Dev\CS202 Group Project\Skill.cpp"
<<

CMakeFiles\CS202_Group_Project.dir\Skill.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS202_Group_Project.dir/Skill.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CS202_Group_Project.dir\Skill.cpp.s /c "C:\Dev\CS202 Group Project\Skill.cpp"
<<

# Object files for target CS202_Group_Project
CS202_Group_Project_OBJECTS = \
"CMakeFiles\CS202_Group_Project.dir\main.cpp.obj" \
"CMakeFiles\CS202_Group_Project.dir\PC.cpp.obj" \
"CMakeFiles\CS202_Group_Project.dir\Skill.cpp.obj"

# External object files for target CS202_Group_Project
CS202_Group_Project_EXTERNAL_OBJECTS =

CS202_Group_Project.exe: CMakeFiles\CS202_Group_Project.dir\main.cpp.obj
CS202_Group_Project.exe: CMakeFiles\CS202_Group_Project.dir\PC.cpp.obj
CS202_Group_Project.exe: CMakeFiles\CS202_Group_Project.dir\Skill.cpp.obj
CS202_Group_Project.exe: CMakeFiles\CS202_Group_Project.dir\build.make
CS202_Group_Project.exe: CMakeFiles\CS202_Group_Project.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Dev\CS202 Group Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CS202_Group_Project.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\CS202_Group_Project.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\CS202_Group_Project.dir\objects1.rsp @<<
 /out:CS202_Group_Project.exe /implib:CS202_Group_Project.lib /pdb:"C:\Dev\CS202 Group Project\cmake-build-debug\CS202_Group_Project.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CS202_Group_Project.dir\build: CS202_Group_Project.exe

.PHONY : CMakeFiles\CS202_Group_Project.dir\build

CMakeFiles\CS202_Group_Project.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CS202_Group_Project.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CS202_Group_Project.dir\clean

CMakeFiles\CS202_Group_Project.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Dev\CS202 Group Project" "C:\Dev\CS202 Group Project" "C:\Dev\CS202 Group Project\cmake-build-debug" "C:\Dev\CS202 Group Project\cmake-build-debug" "C:\Dev\CS202 Group Project\cmake-build-debug\CMakeFiles\CS202_Group_Project.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\CS202_Group_Project.dir\depend

