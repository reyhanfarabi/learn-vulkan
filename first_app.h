#pragma once

#include "window.h"
#include "pipeline.h"
#include "device.h"

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
		RfeDevice rfeDevice{ rfeWindow };
		RfePipeline rfePipeline{
			rfeDevice, 
			"shader/simple_shader.vert.spv", 
			"shader/simple_shader.frag.spv", 
			RfePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)
		};
	};
}