# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/arad/robo/rcssserver-18.1.3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arad/robo/rcssserver-18.1.3/build

# Include any dependencies generated for this target.
include rcss/net/CMakeFiles/RCSSNet.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include rcss/net/CMakeFiles/RCSSNet.dir/compiler_depend.make

# Include the progress variables for this target.
include rcss/net/CMakeFiles/RCSSNet.dir/progress.make

# Include the compile flags for this target's objects.
include rcss/net/CMakeFiles/RCSSNet.dir/flags.make

rcss/net/CMakeFiles/RCSSNet.dir/addr.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/flags.make
rcss/net/CMakeFiles/RCSSNet.dir/addr.cpp.o: ../rcss/net/addr.cpp
rcss/net/CMakeFiles/RCSSNet.dir/addr.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arad/robo/rcssserver-18.1.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object rcss/net/CMakeFiles/RCSSNet.dir/addr.cpp.o"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT rcss/net/CMakeFiles/RCSSNet.dir/addr.cpp.o -MF CMakeFiles/RCSSNet.dir/addr.cpp.o.d -o CMakeFiles/RCSSNet.dir/addr.cpp.o -c /home/arad/robo/rcssserver-18.1.3/rcss/net/addr.cpp

rcss/net/CMakeFiles/RCSSNet.dir/addr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RCSSNet.dir/addr.cpp.i"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arad/robo/rcssserver-18.1.3/rcss/net/addr.cpp > CMakeFiles/RCSSNet.dir/addr.cpp.i

rcss/net/CMakeFiles/RCSSNet.dir/addr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RCSSNet.dir/addr.cpp.s"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arad/robo/rcssserver-18.1.3/rcss/net/addr.cpp -o CMakeFiles/RCSSNet.dir/addr.cpp.s

rcss/net/CMakeFiles/RCSSNet.dir/socket.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/flags.make
rcss/net/CMakeFiles/RCSSNet.dir/socket.cpp.o: ../rcss/net/socket.cpp
rcss/net/CMakeFiles/RCSSNet.dir/socket.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arad/robo/rcssserver-18.1.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object rcss/net/CMakeFiles/RCSSNet.dir/socket.cpp.o"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT rcss/net/CMakeFiles/RCSSNet.dir/socket.cpp.o -MF CMakeFiles/RCSSNet.dir/socket.cpp.o.d -o CMakeFiles/RCSSNet.dir/socket.cpp.o -c /home/arad/robo/rcssserver-18.1.3/rcss/net/socket.cpp

rcss/net/CMakeFiles/RCSSNet.dir/socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RCSSNet.dir/socket.cpp.i"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arad/robo/rcssserver-18.1.3/rcss/net/socket.cpp > CMakeFiles/RCSSNet.dir/socket.cpp.i

rcss/net/CMakeFiles/RCSSNet.dir/socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RCSSNet.dir/socket.cpp.s"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arad/robo/rcssserver-18.1.3/rcss/net/socket.cpp -o CMakeFiles/RCSSNet.dir/socket.cpp.s

rcss/net/CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/flags.make
rcss/net/CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o: ../rcss/net/socketstreambuf.cpp
rcss/net/CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arad/robo/rcssserver-18.1.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object rcss/net/CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT rcss/net/CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o -MF CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o.d -o CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o -c /home/arad/robo/rcssserver-18.1.3/rcss/net/socketstreambuf.cpp

rcss/net/CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.i"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arad/robo/rcssserver-18.1.3/rcss/net/socketstreambuf.cpp > CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.i

rcss/net/CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.s"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arad/robo/rcssserver-18.1.3/rcss/net/socketstreambuf.cpp -o CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.s

rcss/net/CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/flags.make
rcss/net/CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o: ../rcss/net/tcpsocket.cpp
rcss/net/CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arad/robo/rcssserver-18.1.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object rcss/net/CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT rcss/net/CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o -MF CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o.d -o CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o -c /home/arad/robo/rcssserver-18.1.3/rcss/net/tcpsocket.cpp

rcss/net/CMakeFiles/RCSSNet.dir/tcpsocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RCSSNet.dir/tcpsocket.cpp.i"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arad/robo/rcssserver-18.1.3/rcss/net/tcpsocket.cpp > CMakeFiles/RCSSNet.dir/tcpsocket.cpp.i

rcss/net/CMakeFiles/RCSSNet.dir/tcpsocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RCSSNet.dir/tcpsocket.cpp.s"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arad/robo/rcssserver-18.1.3/rcss/net/tcpsocket.cpp -o CMakeFiles/RCSSNet.dir/tcpsocket.cpp.s

rcss/net/CMakeFiles/RCSSNet.dir/udpsocket.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/flags.make
rcss/net/CMakeFiles/RCSSNet.dir/udpsocket.cpp.o: ../rcss/net/udpsocket.cpp
rcss/net/CMakeFiles/RCSSNet.dir/udpsocket.cpp.o: rcss/net/CMakeFiles/RCSSNet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arad/robo/rcssserver-18.1.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object rcss/net/CMakeFiles/RCSSNet.dir/udpsocket.cpp.o"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT rcss/net/CMakeFiles/RCSSNet.dir/udpsocket.cpp.o -MF CMakeFiles/RCSSNet.dir/udpsocket.cpp.o.d -o CMakeFiles/RCSSNet.dir/udpsocket.cpp.o -c /home/arad/robo/rcssserver-18.1.3/rcss/net/udpsocket.cpp

rcss/net/CMakeFiles/RCSSNet.dir/udpsocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RCSSNet.dir/udpsocket.cpp.i"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arad/robo/rcssserver-18.1.3/rcss/net/udpsocket.cpp > CMakeFiles/RCSSNet.dir/udpsocket.cpp.i

rcss/net/CMakeFiles/RCSSNet.dir/udpsocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RCSSNet.dir/udpsocket.cpp.s"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arad/robo/rcssserver-18.1.3/rcss/net/udpsocket.cpp -o CMakeFiles/RCSSNet.dir/udpsocket.cpp.s

# Object files for target RCSSNet
RCSSNet_OBJECTS = \
"CMakeFiles/RCSSNet.dir/addr.cpp.o" \
"CMakeFiles/RCSSNet.dir/socket.cpp.o" \
"CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o" \
"CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o" \
"CMakeFiles/RCSSNet.dir/udpsocket.cpp.o"

# External object files for target RCSSNet
RCSSNet_EXTERNAL_OBJECTS =

rcss/net/librcssnet.so.1.0.1: rcss/net/CMakeFiles/RCSSNet.dir/addr.cpp.o
rcss/net/librcssnet.so.1.0.1: rcss/net/CMakeFiles/RCSSNet.dir/socket.cpp.o
rcss/net/librcssnet.so.1.0.1: rcss/net/CMakeFiles/RCSSNet.dir/socketstreambuf.cpp.o
rcss/net/librcssnet.so.1.0.1: rcss/net/CMakeFiles/RCSSNet.dir/tcpsocket.cpp.o
rcss/net/librcssnet.so.1.0.1: rcss/net/CMakeFiles/RCSSNet.dir/udpsocket.cpp.o
rcss/net/librcssnet.so.1.0.1: rcss/net/CMakeFiles/RCSSNet.dir/build.make
rcss/net/librcssnet.so.1.0.1: rcss/net/CMakeFiles/RCSSNet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/arad/robo/rcssserver-18.1.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library librcssnet.so"
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RCSSNet.dir/link.txt --verbose=$(VERBOSE)
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && $(CMAKE_COMMAND) -E cmake_symlink_library librcssnet.so.1.0.1 librcssnet.so.1 librcssnet.so

rcss/net/librcssnet.so.1: rcss/net/librcssnet.so.1.0.1
	@$(CMAKE_COMMAND) -E touch_nocreate rcss/net/librcssnet.so.1

rcss/net/librcssnet.so: rcss/net/librcssnet.so.1.0.1
	@$(CMAKE_COMMAND) -E touch_nocreate rcss/net/librcssnet.so

# Rule to build all files generated by this target.
rcss/net/CMakeFiles/RCSSNet.dir/build: rcss/net/librcssnet.so
.PHONY : rcss/net/CMakeFiles/RCSSNet.dir/build

rcss/net/CMakeFiles/RCSSNet.dir/clean:
	cd /home/arad/robo/rcssserver-18.1.3/build/rcss/net && $(CMAKE_COMMAND) -P CMakeFiles/RCSSNet.dir/cmake_clean.cmake
.PHONY : rcss/net/CMakeFiles/RCSSNet.dir/clean

rcss/net/CMakeFiles/RCSSNet.dir/depend:
	cd /home/arad/robo/rcssserver-18.1.3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arad/robo/rcssserver-18.1.3 /home/arad/robo/rcssserver-18.1.3/rcss/net /home/arad/robo/rcssserver-18.1.3/build /home/arad/robo/rcssserver-18.1.3/build/rcss/net /home/arad/robo/rcssserver-18.1.3/build/rcss/net/CMakeFiles/RCSSNet.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rcss/net/CMakeFiles/RCSSNet.dir/depend

