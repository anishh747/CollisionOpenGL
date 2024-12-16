#include "renderer.h"

Renderer::Renderer(){
	window = nullptr;
}

Renderer::~Renderer(){
	cleanup();
}

void Renderer::init(){
	if (!glfwInit()) {
		std::cerr << "Failed to initialize GLFW" << std::endl;
	}

	window = glfwCreateWindow(1200, 800, "OpenGL", NULL, NULL);
	if (!window) {
		std::cerr << "Failed to create window" << std::endl;
		glfwTerminate();
	}

	glfwMakeContextCurrent(window);
}

void Renderer::render(){
	glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glfwSwapBuffers(window);
	glfwPollEvents();
}

void Renderer::cleanup(){
	glfwDestroyWindow(window);
	glfwTerminate();
	window = nullptr;
}

void Renderer::setWindow(GLFWwindow* window){
	this->window = window;
}

GLFWwindow* Renderer::getWindow(){
	return window;
}

