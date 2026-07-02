// sub_1400173E0 @ 0x1400173E0
#include <stdint.h>
#include <windows.h>

_BOOL8 __fastcall sub_1400173E0(__int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h]

  if ( *(_WORD *)a1 != 23117 )
    return false;
  v2 = *(int *)(a1 + 60) + a1;
  return *(_DWORD *)v2 == 17744 && *(_WORD *)(v2 + 24) == 523;
}

