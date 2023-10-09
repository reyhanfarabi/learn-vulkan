#include "window.h"

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

	void RfeWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}
