// atexit @ 0x140020B28
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl atexit(void (__cdecl *a1)())
{
  return __imp_atexit(a1);
}

