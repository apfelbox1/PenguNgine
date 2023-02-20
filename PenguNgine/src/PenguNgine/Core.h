#pragma once

#ifdef PENGU_PLATFORM_WINDOWS
	#ifdef PENGU_BUILD_DLL
		#define PENGU_API __declspec(dllexport)
	#else
		#define PENGU_API __declspec(dllimport)
	#endif
#else
	#error Pengu only supports Windows!
#endif

