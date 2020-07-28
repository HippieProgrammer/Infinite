#pragma once

#include "Core.h"

namespace Infinite
{
	class INFINITE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	
	// To be defined in CLIENT
	Application* CreateApplication();
}