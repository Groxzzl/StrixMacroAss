// GetProcessId @ 0x1400210A8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetProcessId(HANDLE Process)
{
  return __imp_GetProcessId(Process);
}

