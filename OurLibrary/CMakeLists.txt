set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(
	OurLibrary SHARED 
	Source/Core.cpp
	Source/Core.h
	Source/Logging/Logging.h
	Source/OtherStuff/OtherStuffTest.h
	src/Cast/Core/EngineCore.cpp
	src/Cast/Core/EngineCore.h
	src/Cast/Core/Components/Transform.h
	src/Cast/Core/Debug/Logger.h
	src/Cast/Core/Debug/LoggingHeaderOnly.h
	src/Cast/Core/Debug/LoggingUserFormatter.h
	src/Cast/Core/Input/InputManager.cpp
	src/Cast/Core/Input/InputManager.h
	src/Cast/Core/Rendering/RenderContext.cpp
	src/Cast/Core/Rendering/RenderContext.h
	src/Cast/Core/Rendering/Renderer.h
	src/Cast/Core/Rendering/Window.cpp
	src/Cast/Core/Rendering/Window.h
	src/Cast/Core/Rendering/Shader/OpenGLShaderProgram.cpp
	src/Cast/Core/Rendering/Shader/OpenGLShaderProgram.h
	src/Cast/Core/Rendering/Shader/ShaderParser.cpp
	src/Cast/Core/Rendering/Shader/ShaderParser.h
	src/Cast/Core/Utils/DebugScene.cpp
	src/Cast/Core/Utils/DebugScene.h
	src/Cast/Core/Utils/Files/FileLoaderFactory.cpp
	src/Cast/Core/Utils/Files/FileLoaderFactory.h
	src/Cast/Platform/GLFW/GLFWInputKeyStore.h
	src/Cast/Platform/OpenGL/OpenGLCallbacks.cpp
	src/Cast/Platform/OpenGL/OpenGLCallbacks.h
	src/Cast/Platform/OpenGL/OpenGLContext.cpp
	src/Cast/Platform/OpenGL/OpenGLContext.h
	src/Cast/Platform/OpenGL/OpenGLWindow.cpp
	src/Cast/Platform/OpenGL/OpenGLWindow.h
	)


add_definitions(-D_DEBUG_MODE_)

target_include_directories(OurLibrary PUBLIC "${DEPENDENCIES}/glfw/include")
target_include_directories(OurLibrary PUBLIC "${DEPENDENCIES}/glad/include")
target_include_directories(OurLibrary PUBLIC "${DEPENDENCIES}/fmt/include")
target_include_directories(OurLibrary PUBLIC "${DEPENDENCIES}/glm")
target_include_directories(OurLibrary PUBLIC "${DEPENDENCIES}/stbimage")

target_include_directories(OurLibrary PUBLIC "${ROOT}/OurLibrary/Source/")#link the root
target_include_directories(OurLibrary PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Source")
message("\n\n\n=======================\n${DEPENDENCIES}/glfw/include")


target_link_libraries(OurLibrary PRIVATE glad)
target_link_libraries(OurLibrary PRIVATE glfw ${GLFW_LIBRARIES})
target_link_libraries(OurLibrary PRIVATE fmt)

