#include "MutexHandler.h"
#include "TechUtils.h"

#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <windows.h>

using std::cerr;
using std::endl;
using std::runtime_error;

HANDLE ghMutex;
int main() {
  try {
    MutexHandler myMutex{NULL, TRUE, (LPCWSTR) "MyManagmentProgram"};
    MessageBox(NULL, L"MANAGMENT PROGRAM IS UP", L"Tech", MB_OK);
    setInRegistry();
    Sleep(60 * 1000);
  } catch (const runtime_error& ex) {
    cerr << ex.what() << endl;
  }
  return 0;
} // myMutex.~MutexHandler() called