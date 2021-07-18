set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(
	OurLibrary SHARED 
	Source/Core.cpp
	Source/Core.h
	Source/OtherStuff/OtherStuffTest.h
	)

target_include_directories(OurLibrary PUBLIC "${DEPENDENCIES}/glfw/include")
target_include_directories(OurLibrary PUBLIC "${DEPENDENCIES}/glad/include")
target_include_directories(OurLibrary PUBLIC "${ROOT}/OurLibrary/Source/")#link the root
message("\n\n\n=======================\n${DEPENDENCIES}/glfw/include")

target_link_libraries(OurLibrary PRIVATE glad)
target_link_libraries(OurLibrary PRIVATE glfw ${GLFW_LIBRARIES})

