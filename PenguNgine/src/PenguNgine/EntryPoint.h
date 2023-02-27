#pragma once


#ifdef PENGU_PLATFORM_WINDOWS

extern Pengu::Application* Pengu::CreateApplication();

int main(int argc, char** argv) {	
	Pengu::Log::Init();
	PENGU_CORE_WARN("Initialized Log!");
	int a = 5;
	PENGU_INFO("Hello! Var={0}", a);
	
	auto app = Pengu::CreateApplication();
	app->Run();
	delete app;
}

#endif