#pragma once
#include <iostream>
#include <windows.h>

using std::cout;
using std::endl;

class MutexHandler final {
public:
  MutexHandler(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner,
               LPCWSTR lpName);
  HANDLE getMutexHandle();
  ~MutexHandler();

private:
  HANDLE m_ghMutex;
};