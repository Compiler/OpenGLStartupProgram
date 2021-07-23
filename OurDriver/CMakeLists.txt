set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OurDriver Source/main.cpp)
set_target_properties(OurDriver PROPERTIES OUTPUT_NAME "${EXE_FINAL_NAME}")
target_link_libraries(OurDriver PRIVATE OurLibrary)