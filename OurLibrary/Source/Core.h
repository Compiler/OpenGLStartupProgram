#pragma once
#include <iostream>
#include <Logging/Logging.h>
#include <glad/glad.h>
#include  <GLFW/glfw3.h>
class Core{

    public:
        Core();
        void load();
        void update();
        void render();
        void unload();
};