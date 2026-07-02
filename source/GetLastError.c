// GetLastError @ 0x1400210D0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetLastError()
{
  return __imp_GetLastError();
}

