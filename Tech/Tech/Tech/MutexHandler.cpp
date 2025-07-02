#include "MutexHandler.h"
#include "TechErrors.h"

MutexHandler::MutexHandler(LPSECURITY_ATTRIBUTES lpMutexAttributes,
                           BOOL bInitialOwner, LPCWSTR lpName) {
  m_ghMutex = CreateMutex(lpMutexAttributes, bInitialOwner, lpName);
  if (m_ghMutex == NULL) {
    throw CreateMutexError("An error ocured while creating MUTEX.");
  }
  if (GetLastError() == ERROR_ALREADY_EXISTS) {
    throw CreateMutexError(
        "Cannot run program, another instance is already running.");
  }
}
MutexHandler::~MutexHandler() {
  CloseHandle(m_ghMutex);
}