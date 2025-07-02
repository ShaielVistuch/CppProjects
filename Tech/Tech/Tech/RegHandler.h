#pragma once
#include <iostream>
#include <windows.h>

class RegHandler {
public:
  HKEY m_key;
  RegHandler(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired);
  ~RegHandler();
};