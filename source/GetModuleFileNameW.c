// GetModuleFileNameW @ 0x1400210C8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetModuleFileNameW(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
{
  return __imp_GetModuleFileNameW(hModule, lpFilename, nSize);
}

