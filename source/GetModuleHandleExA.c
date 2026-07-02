// GetModuleHandleExA @ 0x1400210B8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall GetModuleHandleExA(DWORD dwFlags, LPCSTR lpModuleName, HMODULE *phModule)
{
  return __imp_GetModuleHandleExA(dwFlags, lpModuleName, phModule);
}

