#pragma once
#include <iostream>
#include <Logging/Logging.h>
#include <glad/glad.h>
#include  <GLFW/glfw3.h>
#include <glm/vec3.hpp> // glm::vec3
class Core{

    public:
        Core();
        void load();
        void update();
        void render();
        void unload();
};