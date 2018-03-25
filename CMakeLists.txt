cmake_minimum_required(VERSION 3.0)
project(LYInterpreter C CXX)


#Include all files in the /include directory (our .h files)
include_directories(include/LY_Interpreter/)


#Define SOURCES to simplify the add_executable step. This contains our source code, and the source files from included libraries.
set (SOURCES src/main.cpp src/input.cpp)


#Add our code and loose libraries to the project
add_executable(LYInterpreter ${SOURCES})

#Put the compiled application in the bin directory
install(TARGETS LYInterpreter DESTINATION bin)
