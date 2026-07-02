// CopyFileW @ 0x140021158
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall CopyFileW(LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName, BOOL bFailIfExists)
{
  return __imp_CopyFileW(lpExistingFileName, lpNewFileName, bFailIfExists);
}

