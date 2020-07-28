#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Infinite::Application* Infinite::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Infinite::CreateApplication();
	app->Run();
	delete app;
}

#endif 