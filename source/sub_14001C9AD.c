// sub_14001C9AD @ 0x14001C9AD
#include <stdint.h>
#include <windows.h>

_DWORD *__fastcall sub_14001C9AD(_DWORD *a1, _DWORD *a2)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rax
  _DWORD *v5; // rax
  unsigned __int64 v6; // [rsp+28h] [rbp-68h]
  unsigned int v7; // [rsp+34h] [rbp-5Ch]
  int v8; // [rsp+50h] [rbp-40h]
  int v9; // [rsp+54h] [rbp-3Ch]
  _DWORD *v10; // [rsp+58h] [rbp-38h]
  unsigned __int64 v11; // [rsp+60h] [rbp-30h]
  _DWORD *v12; // [rsp+68h] [rbp-28h]
  _DWORD *v13; // [rsp+70h] [rbp-20h]
  _DWORD *v14; // [rsp+70h] [rbp-20h]
  unsigned __int64 v15; // [rsp+78h] [rbp-18h]
  _DWORD *i; // [rsp+80h] [rbp-10h]
  unsigned __int64 v17; // [rsp+80h] [rbp-10h]
  int v18; // [rsp+88h] [rbp-8h]
  int v19; // [rsp+8Ch] [rbp-4h]
  _DWORD *v20; // [rsp+A0h] [rbp+10h]
  _DWORD *v21; // [rsp+A8h] [rbp+18h]

  v20 = a1;
  v21 = a2;
  if ( a1[5] < a2[5] )
  {
    v20 = a2;
    v21 = a1;
  }
  v19 = v20[2];
  v9 = v20[5];
  v8 = v21[5];
  v18 = v9 + v8;
  if ( v9 + v8 > v20[3] )
    ++v19;
  v10 = sub_14001C66D(v19);
  if ( v10 == nullptr )
    return nullptr;
  for ( i = v10 + 6; i < &v10[v18 + 6]; ++i )
    *i = 0;
  v15 = (unsigned __int64)(v21 + 6);
  v12 = v10 + 6;
  while ( v15 < (unsigned __int64)&v21[v8 + 6] )
  {
    v3 = (unsigned int *)v15;
    v15 += 4LL;
    v7 = *v3;
    if ( *v3 != 0 )
    {
      v17 = (unsigned __int64)(v20 + 6);
      v13 = v12;
      v11 = 0;
      do
      {
        v4 = (unsigned int *)v17;
        v17 += 4LL;
        v6 = (unsigned int)*v13 + v7 * (unsigned __int64)*v4 + v11;
        v11 = HIDWORD(v6);
        v5 = v13++;
        *v5 = v6;
      }
      while ( v17 < (unsigned __int64)&v20[v9 + 6] );
      *v13 = HIDWORD(v6);
    }
    ++v12;
  }
  v14 = &v10[v18 + 6];
  while ( v18 > 0 )
  {
    if ( *--v14 != 0 )
      break;
    --v18;
  }
  v10[5] = v18;
  return v10;
}

