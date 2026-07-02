// sub_1400204F0 @ 0x1400204F0
#include <stdint.h>
#include <windows.h>

_BYTE *__fastcall sub_1400204F0(_BYTE *a1, unsigned __int64 a2)
{
  _BYTE *i; // [rsp+8h] [rbp-8h]

  for ( i = a1; i - a1 < a2 && *i != 0; ++i )
    ;
  return (_BYTE *)(i - a1);
}

