// memcpy @ 0x140020B80
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}

