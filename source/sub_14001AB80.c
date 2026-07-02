// sub_14001AB80 @ 0x14001AB80
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001AB80(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // rax
  __int64 v5; // [rsp+28h] [rbp-28h]
  _DWORD *v6; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  _DWORD *v8; // [rsp+40h] [rbp-10h]
  unsigned int v9; // [rsp+48h] [rbp-8h]
  int v10; // [rsp+4Ch] [rbp-4h]
  int v11; // [rsp+4Ch] [rbp-4h]

  v10 = 32;
  v9 = 0;
  while ( v10 < a2 )
  {
    v10 *= 2;
    ++v9;
  }
  v7 = sub_14001C66D(v9);
  v6 = &a1[(a2 - 1) >> 5];
  v5 = v7 + 24;
  v8 = (_DWORD *)(v7 + 24);
  do
  {
    v3 = v8++;
    *v3 = *a1++;
  }
  while ( v6 >= a1 );
  v11 = ((__int64)v8 - v5) >> 2;
  while ( *(_DWORD *)(4LL * --v11 + v5) == 0 )
  {
    if ( v11 == 0 )
    {
      *(_DWORD *)(v7 + 20) = 0;
      *a3 = 0;
      return v7;
    }
  }
  *(_DWORD *)(v7 + 20) = v11 + 1;
  *a3 = 32 * (v11 + 1) - sub_14001AB70(*(_DWORD *)(v7 + 4 * (v11 + 4LL) + 8));
  return v7;
}

