#include "TechUtils.h"
#include "RegHandler.h"

#include <iostream>
#include <windows.h>

using std::cout;
using std::endl;

const char* pathToExe =
    "C:\\Users\\rinat\\shaiel\\CppProjects\\Tech\\Tech\\x64\\Debug\\Tech.exe";
const char* registryPath = "Software\\Microsoft\\Windows\\CurrentVersion\\Run";
const char* name = "MyManagmentProgram";
int setInRegistry() {
  int openReturnVal;
  HKEY key;
  PHKEY pkey = &key;

  cout << "Starting" << endl;

  RegHandler myRegHandler{HKEY_CURRENT_USER,
                          registryPath,
                          0,
                          KEY_SET_VALUE | KEY_QUERY_VALUE,
                          pkey,
                          &openReturnVal};

  if (openReturnVal != ERROR_SUCCESS) {
    cout << "Error in open" << endl;
  }
  // Check if already set:
  int queryReturnVal = RegQueryValueExA(key, name, NULL, NULL, NULL, NULL);

  if (queryReturnVal == ERROR_MORE_DATA) {
    cout << "Error in query: Buffer to small to recieve data." << endl;
    return 3;
  }

  if (queryReturnVal == ERROR_FILE_NOT_FOUND) {
    cout << "Error in query: File not found." << endl;
    // If not, do:
    int setReturnVal = RegSetValueExA(
        key, name, 0, REG_SZ, (const BYTE*)pathToExe, strlen(pathToExe) + 1);
    if (setReturnVal != ERROR_SUCCESS) {
      cout << "Error in set" << endl;
      return 2;
    }
  }

  if (queryReturnVal != ERROR_SUCCESS) {
    cout << "Error in query" << endl;
    return 5;
  }

  cout << "An entry with this name already exists in the registry." << endl;
  return 0;
} // myRegHandler.~RegHandler() called