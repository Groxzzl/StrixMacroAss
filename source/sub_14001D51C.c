// sub_14001D51C @ 0x14001D51C
#include <stdint.h>
#include <windows.h>

_BYTE *__fastcall sub_14001D51C(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // rax

  while ( 1 )
  {
    v2 = a2++;
    *a1 = *v2;
    if ( *a1 == 0 )
      break;
    ++a1;
  }
  return a1;
}

