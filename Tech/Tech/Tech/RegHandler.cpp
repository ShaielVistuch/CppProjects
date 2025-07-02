#include "RegHandler.h"
#include "TechErrors.h"

using std::cout;
using std::endl;

RegHandler::RegHandler(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions,
                       REGSAM samDesired) {
  long openReturnVal = RegOpenKeyExA(hKey, lpSubKey, 0, samDesired, &m_key);
  if (openReturnVal != ERROR_SUCCESS) {
    cout << "Error in open" << endl;
    throw RegOpenKeyExAError("Error opening file.");
  }
}
RegHandler::~RegHandler() {
  RegCloseKey(m_key);
}