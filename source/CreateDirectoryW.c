// CreateDirectoryW @ 0x140021150
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall CreateDirectoryW(LPCWSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
  return __imp_CreateDirectoryW(lpPathName, lpSecurityAttributes);
}

