#include <PenguNgine.h>

class Sandbox : public Pengu::Application {
public:
	Sandbox() {
		
	}
	
	~Sandbox() {
		
	}
};

Pengu::Application* Pengu::CreateApplication() {
	return new Sandbox();
}