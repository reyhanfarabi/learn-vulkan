#include "window.h"
#include <stdexcept>

namespace rfe
{
	RfeWindow::RfeWindow(int w, int h, std::string name)
		:
		width{ w },
		height{ h },
		windowName{ name }
	{
		initWindow();
	}

	RfeWindow::~RfeWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void RfeWindow::createWindowSurface(VkInstance instance, VkSurfaceKHR* surface)
	{
		if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS)
		{
			throw std::runtime_error("failed to create window surface");
		}
	}

	void RfeWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}
