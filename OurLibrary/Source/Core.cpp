#include "Core.h"


Core::Core(){
    std::cout << "Constructor called\n";
    glm::vec3 vec{1,2,3};
}
void Core::load(){
    LOG("Core::load() Called.");
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, true);
    GLFWwindow* _window = glfwCreateWindow(500, 500, "Tester!", 0, 0);
    glfwMakeContextCurrent(_window);
    LOG("Context: Current");
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        FATAL("Failed to initialize GLAD");
    }   
    int flags; glGetIntegerv(GL_CONTEXT_FLAGS, &flags);
    if (flags & GL_CONTEXT_FLAG_DEBUG_BIT) LOG("Initialized!");

    
}
void Core::update(){
    std::cout << "update called\n";
}
void Core::render(){
    std::cout << "render called\n";
}
void Core::unload(){
    std::cout << "unload called\n";
}