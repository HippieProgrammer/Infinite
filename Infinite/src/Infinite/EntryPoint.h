#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Infinite::Application* Infinite::CreateApplication();

int main(int argc, char** argv)
{
	Infinite::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);
	
	auto app = Infinite::CreateApplication();
	app->Run();
	delete app;
}

#endif 