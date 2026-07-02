// sub_14001CF1D @ 0x14001CF1D
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001CF1D(__int64 a1, __int64 a2)
{
  int v3; // [rsp+18h] [rbp-18h]
  unsigned int v4; // [rsp+1Ch] [rbp-14h]
  _DWORD *v5; // [rsp+20h] [rbp-10h]
  _DWORD *v6; // [rsp+28h] [rbp-8h]

  v3 = *(_DWORD *)(a2 + 20);
  v4 = *(_DWORD *)(a1 + 20) - v3;
  if ( v4 != 0 )
    return v4;
  v6 = (_DWORD *)(4LL * v3 + a1 + 24);
  v5 = (_DWORD *)(4LL * v3 + a2 + 24);
  while ( *--v6 == *--v5 )
  {
    if ( a1 + 24 >= (unsigned __int64)v6 )
      return 0;
  }
  if ( *v6 >= *v5 )
    return 1;
  else
    return 0xFFFFFFFFLL;
}

