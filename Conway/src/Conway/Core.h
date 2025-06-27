#pragma once

#ifdef CW_PLATFORM_WINDOWS
	#ifdef CW_BUILD_DLL
		#define CONWAY_API _declspec(dllexport)
	#else
		#define CONWAY_API _declspec(dllimport)
	#endif
#else
	#error Conway only supports windows
#endif
