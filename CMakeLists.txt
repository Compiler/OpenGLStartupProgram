cmake_minimum_required(VERSION 3.8) #version as of 2021
project(TestProject LANGUAGES CXX C) #check for C and C++ extensions
set (CMAKE_CXX_STANDARD 17) #standard of C++ is 17

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

add_executable(${PROJECT_NAME} OurDriver/Source/main.cpp)

file(GLOB_RECURSE SRC_FILES "Source/*.cpp" "Source/*.h")

find_package(OpenGL REQUIRED)
option(GLFW_BUILD_EXAMPLES "" OFF)
option(GLFW_INSTALL "" OFF)
option(GLFW_BUILD_TESTS "" OFF)



add_subdirectory(Dependencies/glfw)

target_include_directories(${PROJECT_NAME} PRIVATE Source)