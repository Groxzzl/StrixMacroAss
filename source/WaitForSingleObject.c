// WaitForSingleObject @ 0x140020FD0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)
{
  return __imp_WaitForSingleObject(hHandle, dwMilliseconds);
}

