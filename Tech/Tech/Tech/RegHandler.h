#pragma once
#include <iostream>
#include <windows.h>

class RegHandler {
public:
  HKEY m_key;
  RegHandler(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired);
  bool queryValueExA(LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType,
                     LPDWORD lpData, LPDWORD lpcbData);
  void setValueExA(LPCSTR lpValueName, DWORD Reserved, DWORD dwType,
                   const BYTE* lpData, DWORD cbData);
  ~RegHandler();
};