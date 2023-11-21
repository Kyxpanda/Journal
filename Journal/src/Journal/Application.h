#pragma once

#include "Core.h"

namespace Journal
{
	class JOURNAL_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();
	};

	// To be defiened in client
	Application* CreateApplication();
}



