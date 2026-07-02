// GetTempPathW @ 0x140021080
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetTempPathW(DWORD nBufferLength, LPWSTR lpBuffer)
{
  return __imp_GetTempPathW(nBufferLength, lpBuffer);
}

