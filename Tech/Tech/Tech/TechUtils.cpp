#include "TechUtils.h"
#include "RegHandler.h"

#include "TechErrors.h"
#include <iostream>
#include <windows.h>

using std::cout;
using std::endl;

const char* PATH_TO_EXE =
    "C:\\Users\\rinat\\shaiel\\CppProjects\\Tech\\Tech\\x64\\Debug\\Tech.exe";
const char* REGISTRY_PATH = "Software\\Microsoft\\Windows\\CurrentVersion\\Run";
const char* NAME = "MyManagmentProgram";
void setInRegistryIfNeeded() {
  int openReturnVal;
  cout << "Starting" << endl;
  RegHandler myRegHandler{HKEY_CURRENT_USER, REGISTRY_PATH, 0,
                          KEY_SET_VALUE | KEY_QUERY_VALUE};
  // Check if already set:
  bool isInRegistry = myRegHandler.queryValueExA(NAME, NULL, NULL, NULL, NULL);
  if (isInRegistry) {
    return;
  }
  // If not, do:
  myRegHandler.setValueExA(NAME, 0, REG_SZ, (const BYTE*)PATH_TO_EXE,
                           strlen(PATH_TO_EXE) + 1);
} // myRegHandler.~RegHandler() called