// calloc @ 0x140020B30
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void *__cdecl calloc(size_t Count, size_t Size)
{
  return __imp_calloc(Count, Size);
}

