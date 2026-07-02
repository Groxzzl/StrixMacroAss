// VirtualQuery @ 0x140020FD8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength)
{
  return __imp_VirtualQuery(lpAddress, lpBuffer, dwLength);
}

