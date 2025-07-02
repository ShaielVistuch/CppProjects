#pragma once
#include <windows.h>
#include <iostream>

using std::cout;
using std::endl;

class MutexHandler {
  HANDLE m_ghMutex;

public:
  MutexHandler(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner,
               LPCWSTR lpName);
  ~MutexHandler();
};