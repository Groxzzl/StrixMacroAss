// GetShortPathNameW @ 0x1400210A0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetShortPathNameW(LPCWSTR lpszLongPath, LPWSTR lpszShortPath, DWORD cchBuffer)
{
  return __imp_GetShortPathNameW(lpszLongPath, lpszShortPath, cchBuffer);
}

