#pragma once
#include <iostream>
#include "C:/Users/Work/Documents/OpenGLStartupProgram/Dependencies/glfw/include/GLFW/glfw3.h"
class Core{

    public:
        Core();
        void load();
        void update();
        void render();
        void unload();
};