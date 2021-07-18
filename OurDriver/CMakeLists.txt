set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OurDriver Source/main.cpp)
target_link_libraries(OurDriver PRIVATE OurLibrary)