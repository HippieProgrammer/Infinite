#include "infpch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Infinite
{
	Application::Application()
	{
	}
	Application::~Application()
	{
	}

	void Application::Run()
	{
		Infinite::Log::Init();
		WindowResizeEvent e(1280, 720);
		HZ_TRACE(e);

		while (true);
	}
}
