#pragma once

#include "Core.h"

namespace Conway {
	class CONWAY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// to be defined in client
	Application* CreateApplication();
}


