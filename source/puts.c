// puts @ 0x140020FB8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl puts(const char *Buffer)
{
  return __imp_puts(Buffer);
}

