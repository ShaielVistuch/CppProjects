#include "TechUtils.h"
#include "RegHandler.h"

#include <iostream>
#include <windows.h>
#include "TechErrors.h"

using std::cout;
using std::endl;

const char* PATH_TO_EXE =
    "C:\\Users\\rinat\\shaiel\\CppProjects\\Tech\\Tech\\x64\\Debug\\Tech.exe";
const char* REGISTRY_PATH = "Software\\Microsoft\\Windows\\CurrentVersion\\Run";
const char* NAME = "MyManagmentProgram";
int setInRegistry() {
  int openReturnVal;

  cout << "Starting" << endl;

  RegHandler myRegHandler{HKEY_CURRENT_USER,
                          REGISTRY_PATH,
                          0,
                          KEY_SET_VALUE | KEY_QUERY_VALUE};

  // Check if already set:
  int queryReturnVal =
      RegQueryValueExA(myRegHandler.m_key, NAME, NULL, NULL, NULL, NULL);

  if (queryReturnVal == ERROR_MORE_DATA) {
    throw RegQueryValueExAError(
        "Error in query: Buffer to small to recieve data.");
  }

  if (queryReturnVal == ERROR_FILE_NOT_FOUND) {
    cout << "File not found in registry. Setting it..." << endl;
    // If not, do:
    int setReturnVal = RegSetValueExA(myRegHandler.m_key, NAME, 0, REG_SZ,
                       (const BYTE*)PATH_TO_EXE, strlen(PATH_TO_EXE) + 1);
    if (setReturnVal != ERROR_SUCCESS) {
      throw RegSetValueExAError(
          "Error in setting file.");
    }
    cout << "Successfully placed file in destination!" << endl;
    return 0;
  } else if (queryReturnVal != ERROR_SUCCESS) {
    throw RegQueryValueExAError(
        "Error in query.");
  }

  cout << "An entry with this name already exists in the registry." << endl;
  return 0;
} // myRegHandler.~RegHandler() called