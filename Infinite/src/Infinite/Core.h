#pragma once

#ifdef INF_PLATFORM_WINDOWS
	#ifdef INF_PLATFORM_WINDOWS
		#define INFINITE_API __declspec(dllexport)
	#else
		#define INFINITE_API __declspec(dllimport)
	#endif
#else
	#error The Infinite Engine currently only supports the Windows platform.
#endif

#define BIT(x) (1 << x)