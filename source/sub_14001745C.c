// sub_14001745C @ 0x14001745C
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001745C(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-18h]
  unsigned int v4; // [rsp+14h] [rbp-Ch]
  __int64 v5; // [rsp+18h] [rbp-8h]

  v3 = *(int *)(a1 + 60) + a1;
  v4 = 0;
  v5 = *(unsigned __int16 *)(v3 + 20) + v3 + 24;
  while ( v4 < *(unsigned __int16 *)(v3 + 6) )
  {
    if ( a2 >= *(unsigned int *)(v5 + 12) && a2 < (unsigned int)(*(_DWORD *)(v5 + 12) + *(_DWORD *)(v5 + 8)) )
      return v5;
    ++v4;
    v5 += 40;
  }
  return 0;
}

