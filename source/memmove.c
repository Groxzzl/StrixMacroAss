// memmove @ 0x140020FA8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}

