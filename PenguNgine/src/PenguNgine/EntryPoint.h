#pragma once


#ifdef PENGU_PLATFORM_WINDOWS

extern Pengu::Application* Pengu::CreateApplication();

int main(int argc, char** argv) {	
	auto app = Pengu::CreateApplication();
	app->Run();
	delete app;
}

#endif