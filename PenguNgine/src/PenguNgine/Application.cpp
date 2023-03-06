#include "pengu_pch.h"
#include "Application.h"

#include "PenguNgine/Events/ApplicationEvent.h"
#include "PenguNgine/Log.h"

namespace Pengu {
	Application:: Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);

		if (e.IsInCategory(EventCategoryApplication)) {
			PENGU_TRACE(e);
		}

		if (e.IsInCategory(EventCategoryInput)) {
			PENGU_TRACE(e);
		}

		while (true);
	}
}