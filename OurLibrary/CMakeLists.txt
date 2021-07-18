set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(
	OurLibrary SHARED 
	Source/Core.cpp
	Source/Core.h
	)

target_link_directories(OurLibrary PRIVATE "${DEPENDENCIES}/glfw/include/")
target_link_directories(OurLibrary PRIVATE "Source")#link the root
message("\n\n\n=======================\n${DEPENDENCIES}/glfw/include/")

find_package(OpenGL REQUIRED)
target_link_libraries(OurLibrary PRIVATE OpenGL::GL)


target_link_libraries(OurLibrary PRIVATE glfw ${GLFW_LIBRARIES})

