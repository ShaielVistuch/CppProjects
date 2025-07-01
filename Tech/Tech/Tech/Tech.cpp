#include <iostream>
#include <stdio.h>
#include <windows.h>

using std::cout;
using std::endl;

HANDLE ghMutex;
int main() {
  ghMutex = CreateMutex(NULL, TRUE, L"MyManagmentProgram");
  if (GetLastError() == ERROR_ALREADY_EXISTS) {
    cout << "Cannot run program, another instance is already running." << endl;
    return 1;
  }
  if (ghMutex == NULL) {
    cout << "An error ocured while creating MUTEX." << endl;
    return 2;
  }
  MessageBox(NULL, L"MANAGMENT PROGRAM IS UP", L"Tech", MB_OK);
  Sleep(60 * 60 * 1000);
  return 0;
}
