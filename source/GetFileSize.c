// GetFileSize @ 0x1400210D8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
{
  return __imp_GetFileSize(hFile, lpFileSizeHigh);
}

