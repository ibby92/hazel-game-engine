#pragma once

#ifdef HZ_PLATFORM_WINDOWS

#include "Application.h"

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{

	Hazel::Log::Init();
	HZ_CORE_WARN ("Initialized Core Logger!");
	int a = 3;
	HZ_INFO("Hello! Var={0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
