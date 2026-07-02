// DeleteFileW @ 0x140021128
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall DeleteFileW(LPCWSTR lpFileName)
{
  return __imp_DeleteFileW(lpFileName);
}

