#pragma once

#ifdef CW_PLATFORM_WINDOWS

extern Conway::Application* Conway::CreateApplication();

int main(int argc, char** argv) {
	
	printf("Conway Engine\n");
	auto app = Conway::CreateApplication();
	app->Run();
	delete app;
}

#endif