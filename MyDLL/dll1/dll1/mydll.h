#pragma once
#ifdef DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif
#include <iostream>

extern "C" {
	DECLDIR void PrintHelloWorld();
}