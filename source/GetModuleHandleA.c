// GetModuleHandleA @ 0x1400210C0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
{
  return __imp_GetModuleHandleA(lpModuleName);
}

