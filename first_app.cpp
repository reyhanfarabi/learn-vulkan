#include "first_app.h"

namespace rfe
{
	void FirstApp::run()
	{
		while (!rfeWindow.shouldClose())
		{
			glfwPollEvents();
		}
	}
}