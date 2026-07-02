// GetFileAttributesW @ 0x1400210E0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetFileAttributesW(LPCWSTR lpFileName)
{
  return __imp_GetFileAttributesW(lpFileName);
}

