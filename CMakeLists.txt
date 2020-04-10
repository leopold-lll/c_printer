cmake_minimum_required(VERSION 3.10)

# Configuration
project(C++Printer)			#set project name (is it useless???)
enable_language(CXX) 		#set the language as c++
set(CMAKE_CXX_STANDARD 11)	#project standard


# Create alias
include_directories(${PROJECT_SOURCE_DIR}/src)				#we do not need to include the .hh (just their folder)
file(GLOB exec_file "${PROJECT_SOURCE_DIR}/main.cc")  		#include the main
set(source_files "${PROJECT_SOURCE_DIR}/src/printer.cc") 	#here also wild cards can be used to add files
# file(GLOB source_files "${PROJECT_SOURCE_DIR}/src/*.cc") 	#the wild card


# Create the Static library
set(LIB  CPrinter)							#set the name of the static library (.a) as projectLib.a into the build directory
add_library(${LIB} STATIC ${source_files})	#add all the .cc to static library previously defined

# Create the executable
set(EXEC printer)   						#set the name of the executable
add_executable(${EXEC} ${exec_file})		#declare the executable with its file
target_link_libraries(${EXEC} ${LIB})		#add the library to the created executable	

