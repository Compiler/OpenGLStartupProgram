set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(
	OurLibrary SHARED 
	Source/Core.cpp
	Source/Core.h
	)

find_package(OpenGL REQUIRED)
target_link_libraries(OurLibrary OpenGL::GL)


