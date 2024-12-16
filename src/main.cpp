#include "renderer.h"

int main() {
    Renderer renderer;

    renderer.init();
    while (!glfwWindowShouldClose(renderer.getWindow())) {
        renderer.render();
    }
    renderer.cleanup();

    return 0;
}

