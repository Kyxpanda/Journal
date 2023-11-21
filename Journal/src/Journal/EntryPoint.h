#pragma once



#ifdef JR_PLATFORM_WINDOWS

extern Journal::Application* Journal::CreateApplication();

	int main(int argc, char** argv)
	{
		auto app = Journal::CreateApplication();
		app->Run();
		delete app;
	}
#endif