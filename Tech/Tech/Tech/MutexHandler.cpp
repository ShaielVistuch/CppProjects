#include "MutexHandler.h"

MutexHandler::MutexHandler(LPSECURITY_ATTRIBUTES lpMutexAttributes,
                           BOOL bInitialOwner, LPCWSTR lpName,
                           HANDLE* pghMutex) {
  (*pghMutex) = CreateMutex(lpMutexAttributes, bInitialOwner, lpName);
  MutexHandlerpghMutex = pghMutex;
}
MutexHandler::~MutexHandler() {
  CloseHandle(*MutexHandlerpghMutex);
}