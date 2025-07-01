#pragma once
#include <windows.h>
class MutexHandler {
  HANDLE* MutexHandlerpghMutex;

public:
  MutexHandler(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner,
               LPCWSTR lpName, HANDLE* openReturnVal);
  ~MutexHandler();
};