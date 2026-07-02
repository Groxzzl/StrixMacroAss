// strlen @ 0x140020B98
#include <stdint.h>
#include <windows.h>

// attributes: thunk
size_t __cdecl strlen(const char *Str)
{
  return __imp_strlen(Str);
}

