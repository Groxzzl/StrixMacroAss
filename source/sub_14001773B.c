// sub_14001773B @ 0x14001773B
#include <stdint.h>
#include <windows.h>

_BOOL8 __fastcall sub_14001773B(__int64 a1)
{
  __int64 v2; // [rsp+28h] [rbp-18h]

  if ( !sub_1400173E0(0x140000000LL) )
    return false;
  v2 = sub_14001745C(0x140000000LL, a1 - 0x140000000LL);
  return v2 != 0 && *(_DWORD *)(v2 + 36) >= 0;
}

