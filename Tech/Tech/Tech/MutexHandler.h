#pragma once
#include <iostream>
#include <windows.h>

using std::cout;
using std::endl;

class MutexHandler {
  HANDLE m_ghMutex;

public:
  MutexHandler(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner,
               LPCWSTR lpName);
  ~MutexHandler();
};