#include "RegHandler.h"

RegHandler::RegHandler(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions,
                       REGSAM samDesired, PHKEY phkResult, int* openReturnVal) {
  (*openReturnVal) = RegOpenKeyExA(hKey, lpSubKey, 0, samDesired, phkResult);
  pkey = phkResult;
}
RegHandler::~RegHandler() {
  RegCloseKey(*pkey);
}