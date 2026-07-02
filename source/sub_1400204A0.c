// sub_1400204A0 @ 0x1400204A0
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_1400204A0(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // [rsp+8h] [rbp-8h]

  for ( i = 0; i < a2 && *a1 != 0; ++i )
    ++a1;
  return i;
}

