#include <iostream>
#include <windows.h>

using std::cout;
using std::endl;

int main() {
  HKEY key;
  PHKEY pkey = &key;
  const char* pathToExe =
      "C:\\Users\\rinat\\shaiel\\CppProjects\\Tech\\Tech\\x64\\Debug\\Tech.exe";
  const char* registeryPath =
      "Software\\Microsoft\\Windows\\CurrentVersion\\Run";
  const char* name = "MyManagmentProgram";
  cout << "Starting" << endl;
  int openReturnVal =
      RegOpenKeyExA(HKEY_CURRENT_USER, registeryPath, 0, KEY_SET_VALUE, pkey);
  if (openReturnVal == ERROR_SUCCESS) {
    int setReturnVal = RegSetValueExA(
        key, name, 0, REG_SZ, (const BYTE*)pathToExe, strlen(pathToExe) + 1);
    if (setReturnVal == ERROR_SUCCESS) {
      cout << "Successfuly added to registery!" << endl;
    } else {
      cout << "Error in set" << endl;
    }
  } else {
    cout << "Error in open" << endl;
  }
  RegCloseKey(key);
  return 0;
}