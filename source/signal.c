// signal @ 0x140020B88
#include <stdint.h>
#include <windows.h>

// attributes: thunk
_crt_signal_t __cdecl signal(int Signal, _crt_signal_t Function)
{
  return __imp_signal(Signal, Function);
}

