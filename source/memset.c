// memset @ 0x140020FB0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}

