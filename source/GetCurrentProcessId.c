// GetCurrentProcessId @ 0x1400210F8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetCurrentProcessId()
{
  return __imp_GetCurrentProcessId();
}

