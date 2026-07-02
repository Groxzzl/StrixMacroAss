// malloc @ 0x140020B70
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void *__cdecl malloc(size_t Size)
{
  return __imp_malloc(Size);
}

