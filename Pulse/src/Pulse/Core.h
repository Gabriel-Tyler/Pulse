#pragma once

#ifdef PLS_PLATFORM_WINDOWS
	#ifdef PLS_BUILD_DLL
		#define PULSE_API __declspec(dllexport)
	#else
		#define PULSE_API __declspec(dllimport)
	#endif // PLS_BUILD_DLL
#else
	#error Pulse only supports Windows
#endif // PLS_PLATFORM_WINDOWS


