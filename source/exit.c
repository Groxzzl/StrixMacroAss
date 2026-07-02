// exit @ 0x140020B38
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __cdecl __noreturn exit(int Code)
{
  __imp_exit(Code);
}

