#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_PLATFORM_WINDOWS
		#define INFINITE_API __declspec(dllexport)
	#else
		#define INFINITE_API __declspec(dllimport)
	#endif
#else
	#error The Infinite Engine currently only supports the Windows platform.
#endif
