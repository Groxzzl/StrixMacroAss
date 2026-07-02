// VirtualProtect @ 0x140020FE0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect)
{
  return __imp_VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}

