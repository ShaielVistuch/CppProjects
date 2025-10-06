#pragma once
#include <iostream>
#include <windows.h>

class RegHandler {
public:
  RegHandler(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired);
  bool queryValueExA(LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType,
                     LPBYTE lpData, LPDWORD lpcbData);
  void setValueExA(LPCSTR lpValueName, DWORD Reserved, DWORD dwType,
                   const BYTE* lpData, DWORD cbData);
  ~RegHandler();
  HKEY getKey();

private:
  HKEY m_key;
};