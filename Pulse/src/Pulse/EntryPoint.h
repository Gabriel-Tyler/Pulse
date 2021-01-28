#pragma once

#ifdef PLS_PLATFORM_WINDOWS

extern Pulse::Application* Pulse::CreateApplication();
	
int main(int argc, char* argv[])
{
	Pulse::Log::init();
	PLS_CORE_WARN("Initialized Log!");
	int a { 5 };
	PLS_INFO("Hello! Var={0}", a);

	auto app { Pulse::CreateApplication() };
	app->Run();
	delete app;
}

#endif // PLS_PLATFORM_WINDOWS