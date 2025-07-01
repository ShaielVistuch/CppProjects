#pragma once
#include <iostream>
#include <windows.h>
class RegHandler {
  PHKEY pkey;

public:
  RegHandler(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired,
             PHKEY phkResult, int* openReturnVal);
  ~RegHandler();
};