// GetProcAddress @ 0x1400210B0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
{
  return __imp_GetProcAddress(hModule, lpProcName);
}

