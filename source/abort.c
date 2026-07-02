// abort @ 0x140020B20
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __cdecl __noreturn abort()
{
  __imp_abort();
}

