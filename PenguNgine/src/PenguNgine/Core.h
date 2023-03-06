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

#ifdef PENGU_ENABLE_ASSERTS
	#define PENGU_ASSERT(x, ...) { if(!(x)) { PENGU_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define PENGU_CORE_ASSERT(x, ...) { if(!(x)) { PENGU_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define PENGU_ASSERT(x, ...)
	#define PENGU_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)