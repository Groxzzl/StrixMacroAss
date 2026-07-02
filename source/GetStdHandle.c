// GetStdHandle @ 0x140021090
#include <stdint.h>
#include <windows.h>

// attributes: thunk
HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
{
  return __imp_GetStdHandle(nStdHandle);
}

