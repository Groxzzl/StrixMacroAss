// sub_14001CFED @ 0x14001CFED
#include <stdint.h>
#include <windows.h>

_DWORD *__fastcall sub_14001CFED(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rax
  __int64 v4; // rcx
  unsigned int *v5; // rax
  _DWORD *v6; // rax
  unsigned int *v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-50h]
  __int64 v10; // [rsp+20h] [rbp-50h]
  unsigned __int64 v11; // [rsp+28h] [rbp-48h]
  _DWORD *v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  _DWORD *v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  _DWORD *v16; // [rsp+50h] [rbp-20h]
  unsigned int *v17; // [rsp+58h] [rbp-18h]
  unsigned __int64 v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+68h] [rbp-8h]
  int v20; // [rsp+6Ch] [rbp-4h]
  int v21; // [rsp+6Ch] [rbp-4h]
  __int64 v22; // [rsp+80h] [rbp+10h]
  __int64 v23; // [rsp+88h] [rbp+18h]

  v22 = a1;
  v23 = a2;
  v20 = sub_14001CF1D(a1, a2);
  if ( v20 != 0 )
  {
    if ( v20 >= 0 )
    {
      v21 = 0;
    }
    else
    {
      v13 = v22;
      v22 = v23;
      v23 = v13;
      v21 = 1;
    }
    v14 = sub_14001C66D(*(_DWORD *)(v22 + 8));
    if ( v14 != nullptr )
    {
      v14[4] = v21;
      v19 = *(_DWORD *)(v22 + 20);
      v18 = v22 + 24;
      v17 = (unsigned int *)(v23 + 24);
      v11 = 4LL * *(int *)(v23 + 20) + v23 + 24;
      v16 = v14 + 6;
      v15 = 0;
      do
      {
        v3 = (unsigned int *)v18;
        v18 += 4LL;
        v4 = *v3;
        v5 = v17++;
        v9 = v4 - *v5 - v15;
        v15 = BYTE4(v9) & 1;
        v6 = v16++;
        *v6 = v9;
      }
      while ( (unsigned __int64)v17 < v11 );
      while ( v18 < 4LL * v19 + v22 + 24 )
      {
        v7 = (unsigned int *)v18;
        v18 += 4LL;
        v10 = *v7 - v15;
        v15 = BYTE4(v10) & 1;
        v8 = v16++;
        *v8 = v10;
      }
      while ( *--v16 == 0 )
        --v19;
      v14[5] = v19;
      return v14;
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    v12 = sub_14001C66D(0);
    if ( v12 != nullptr )
    {
      v12[5] = 1;
      v12[6] = 0;
      return v12;
    }
    else
    {
      return nullptr;
    }
  }
}

