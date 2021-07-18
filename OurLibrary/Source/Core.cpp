#include "Core.h"


Core::Core(){
    std::cout << "Constructor called\n";
}
void Core::load(){
    glfwInit();
    std::cout << "load called\n";
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