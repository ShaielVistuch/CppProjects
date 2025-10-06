#include "RegHandler.h"
#include "TechErrors.h"

using std::cout;
using std::endl;

RegHandler::RegHandler(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions,
                       REGSAM samDesired) {
  long openReturnVal = RegOpenKeyExA(hKey, lpSubKey, 0, samDesired, &m_key);
  if (openReturnVal != ERROR_SUCCESS) {
    throw RegOpenKeyExAError("Error opening registry.");
  }
}
bool RegHandler::queryValueExA(LPCSTR lpValueName, LPDWORD lpReserved,
                               LPDWORD lpType, LPBYTE lpData,
                               LPDWORD lpcbData) {
  int queryReturnVal = RegQueryValueExA(m_key, lpValueName, lpReserved, lpType,
                                        lpData, lpcbData);

  if (queryReturnVal == ERROR_MORE_DATA) {
    throw RegQueryValueExAError(
        "Error in query: Buffer to small to recieve data.");
  }

  if (queryReturnVal == ERROR_FILE_NOT_FOUND) {
    cout << "File not found in registry. Need to set it..." << endl;
    return false;
  } else if (queryReturnVal != ERROR_SUCCESS) {
    throw RegQueryValueExAError("Error in query.");
  }

  cout << "An entry with this name already exists in the registry." << endl;
  return true;
}
void RegHandler::setValueExA(LPCSTR lpValueName, DWORD Reserved, DWORD dwType,
                             const BYTE* lpData, DWORD cbData) {
  int setReturnVal =
      RegSetValueExA(m_key, lpValueName, Reserved, dwType, lpData, cbData);
  if (setReturnVal != ERROR_SUCCESS) {
    throw RegSetValueExAError("Error in setting file.");
  }
  cout << "Successfully placed file in destination!" << endl;
}
RegHandler::~RegHandler() {
  RegCloseKey(m_key);
}

HKEY RegHandler::getKey() {
  return m_key;
}
