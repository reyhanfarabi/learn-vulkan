#pragma once

#include "window.h"

namespace rfe
{
	class FirstApp
	{
	public:
		void run();

	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

	private:
		RfeWindow rfeWindow{WIDTH, HEIGHT, "Vulkan Window"};
	};
}