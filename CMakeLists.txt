cmake_minimum_required(VERSION 3.8) #version as of 2021
project(TestProject VERSION 1.0.0) #check for C and C++ extensions
#set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})


find_package(OpenGL REQUIRED)
option(GLFW_BUILD_EXAMPLES "" OFF)
option(GLFW_INSTALL "" OFF)
option(GLFW_BUILD_TESTS "" OFF)

set(ROOT "${CMAKE_SOURCE_DIR}")
set(DEPENDENCIES "${CMAKE_SOURCE_DIR}/Dependencies")


add_subdirectory(OurLibrary)
add_subdirectory(OurDriver)
add_subdirectory(Dependencies/glfw)
add_subdirectory(Dependencies/glad)
