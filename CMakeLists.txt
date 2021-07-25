cmake_minimum_required(VERSION 3.8) #version as of 2021
project(TestProject VERSION 1.0.0) #check for C and C++ extensions
#set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})


if(UNIX AND NOT APPLE)
    set(LINUX TRUE)
endif()


if(LINUX)
    message("LINUX MACHINE")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
    set( CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -fPIC" )
endif()

set( CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -Wall -O3 -fPIC" )
set(EXE_FINAL_NAME "MyExe")

find_package(OpenGL REQUIRED)
option(GLFW_BUILD_EXAMPLES "" OFF)
option(GLFW_INSTALL "" OFF)
option(GLFW_BUILD_TESTS "" OFF)
option(BUILD_SHARED_LIBS "" OFF)

set(ROOT "${CMAKE_SOURCE_DIR}")
set(DEPENDENCIES "${CMAKE_SOURCE_DIR}/Dependencies")

set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}")
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}")

add_subdirectory(OurLibrary)
add_subdirectory(OurDriver)
add_subdirectory(Dependencies/glfw)
add_subdirectory(Dependencies/glad)
add_subdirectory(Dependencies/glm)
add_subdirectory(Dependencies/fmt EXCLUDE_FROM_ALL)

