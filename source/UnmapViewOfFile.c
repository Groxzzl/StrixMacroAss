// UnmapViewOfFile @ 0x140020FE8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall UnmapViewOfFile(LPCVOID lpBaseAddress)
{
  return __imp_UnmapViewOfFile(lpBaseAddress);
}

