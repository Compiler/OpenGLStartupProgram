#include <Core.h>

int main(){
    std::cout <<"Hello world!\n";
    Core core = Core();
    core.load();
    core.update();
    core.render();
    core.unload();
    return 0;
}