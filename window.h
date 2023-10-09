#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW\glfw3.h>

#include<string>

namespace rfe
{
	class RfeWindow
	{
	public:
		RfeWindow(int w, int h, std::string name);
		~RfeWindow();

		RfeWindow(const RfeWindow&) = delete;
		RfeWindow& operator=(const RfeWindow&) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); }
		void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);

	private:
		void initWindow();

	private:
		const int width;
		const int height;

		std::string windowName;
		GLFWwindow* window;
	};
}