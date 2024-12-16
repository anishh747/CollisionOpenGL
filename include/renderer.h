#pragma once

#include <GLFW/glfw3.h>
#include <iostream>


class Renderer {
	GLFWwindow* window;

public:
		Renderer();
		~Renderer();

		void init();
		void render();
		void cleanup();

		void setWindow(GLFWwindow* window);
		GLFWwindow* getWindow();
};
