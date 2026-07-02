// GetEnvironmentVariableW @ 0x1400210F0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetEnvironmentVariableW(LPCWSTR lpName, LPWSTR lpBuffer, DWORD nSize)
{
  return __imp_GetEnvironmentVariableW(lpName, lpBuffer, nSize);
}

