// sub_14001CD90 @ 0x14001CD90
#include <stdint.h>
#include <windows.h>

_DWORD *__fastcall sub_14001CD90(int *a1, int a2)
{
  int *v3; // rax
  int *v4; // rax
  int *v5; // rax
  int *v6; // rdx
  int *v7; // rax
  unsigned __int64 v8; // [rsp+28h] [rbp-38h]
  _DWORD *v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+3Ch] [rbp-24h]
  int *v12; // [rsp+40h] [rbp-20h]
  int *v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-Ch]
  int v15; // [rsp+58h] [rbp-8h]
  int i; // [rsp+5Ch] [rbp-4h]
  int j; // [rsp+5Ch] [rbp-4h]
  char v19; // [rsp+78h] [rbp+18h]
  int v20; // [rsp+78h] [rbp+18h]

  v19 = a2;
  v10 = a2 >> 5;
  v15 = a1[2];
  v14 = a1[5] + (a2 >> 5) + 1;
  for ( i = a1[3]; v14 > i; i *= 2 )
    ++v15;
  v9 = sub_14001C66D(v15);
  if ( v9 == nullptr )
    return nullptr;
  v12 = v9 + 6;
  for ( j = 0; j < v10; ++j )
  {
    v3 = v12++;
    *v3 = 0;
  }
  v13 = a1 + 6;
  v8 = (unsigned __int64)&a1[a1[5] + 6];
  v20 = v19 & 0x1F;
  if ( v20 != 0 )
  {
    v11 = 0;
    do
    {
      v4 = v12++;
      *v4 = v11 | (*v13 << v20);
      v5 = v13++;
      v11 = (unsigned int)*v5 >> (32 - v20);
    }
    while ( (unsigned __int64)v13 < v8 );
    *v12 = v11;
    if ( *v12 != 0 )
      ++v14;
  }
  else
  {
    do
    {
      v6 = v13++;
      v7 = v12++;
      *v7 = *v6;
    }
    while ( (unsigned __int64)v13 < v8 );
  }
  v9[5] = v14 - 1;
  sub_14001C7AE(a1);
  return v9;
}

