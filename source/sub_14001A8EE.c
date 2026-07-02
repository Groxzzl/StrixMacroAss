// sub_14001A8EE @ 0x14001A8EE
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001A8EE(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rax
  unsigned int *v5; // rax
  unsigned int *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-50h]
  __int64 v8; // [rsp+20h] [rbp-50h]
  unsigned __int64 v9; // [rsp+28h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-48h]
  unsigned int *v11; // [rsp+30h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-38h]
  unsigned __int64 v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-30h]
  unsigned int *v16; // [rsp+48h] [rbp-28h]
  unsigned int *v17; // [rsp+48h] [rbp-28h]
  unsigned int v18; // [rsp+54h] [rbp-1Ch]
  _DWORD *v19; // [rsp+58h] [rbp-18h]
  _DWORD *v20; // [rsp+58h] [rbp-18h]
  unsigned int *v21; // [rsp+60h] [rbp-10h]
  unsigned int *v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+6Ch] [rbp-4h]
  int v24; // [rsp+6Ch] [rbp-4h]

  v23 = *(_DWORD *)(a2 + 20);
  if ( v23 > *(_DWORD *)(a1 + 20) )
    return 0;
  v16 = (unsigned int *)(a2 + 24);
  v24 = v23 - 1;
  v11 = (unsigned int *)(4LL * v24 + a2 + 24);
  v21 = (unsigned int *)(a1 + 24);
  v19 = (_DWORD *)(4LL * v24 + a1 + 24);
  v18 = *v19 / (*v11 + 1);
  if ( v18 != 0 )
  {
    v14 = 0;
    v12 = 0;
    do
    {
      v3 = v16++;
      v9 = v18 * (unsigned __int64)*v3 + v12;
      v12 = HIDWORD(v9);
      v7 = *v21 - (unsigned __int64)(unsigned int)v9 - v14;
      v14 = BYTE4(v7) & 1;
      v4 = v21++;
      *v4 = v7;
    }
    while ( v11 >= v16 );
    if ( *v19 == 0 )
    {
      while ( a1 + 24 < (unsigned __int64)--v19 && *v19 == 0 )
        --v24;
      *(_DWORD *)(a1 + 20) = v24;
    }
  }
  if ( (int)sub_14001CF1D(a1, a2) >= 0 )
  {
    ++v18;
    v15 = 0;
    v13 = 0;
    v22 = (unsigned int *)(a1 + 24);
    v17 = (unsigned int *)(a2 + 24);
    do
    {
      v5 = v17++;
      v10 = *v5 + v13;
      v13 = HIDWORD(v10);
      v8 = *v22 - (unsigned __int64)(unsigned int)v10 - v15;
      v15 = BYTE4(v8) & 1;
      v6 = v22++;
      *v6 = v8;
    }
    while ( v11 >= v17 );
    v20 = (_DWORD *)(4LL * v24 + a1 + 24);
    if ( *v20 == 0 )
    {
      while ( a1 + 24 < (unsigned __int64)--v20 && *v20 == 0 )
        --v24;
      *(_DWORD *)(a1 + 20) = v24;
    }
  }
  return v18;
}

