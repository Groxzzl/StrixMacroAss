// sub_14001DFB1 @ 0x14001DFB1
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001DFB1(int a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  void *v5; // rsp
  char *v6; // rax
  int v7; // eax
  _BYTE *v8; // rax
  int v9; // eax
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  int v12; // eax
  _BYTE *v13; // rax
  int v14; // eax
  _BYTE *v15; // rax
  _BYTE *v16; // rax
  int v17; // eax
  __int64 result; // rax
  _QWORD v19[3]; // [rsp+20h] [rbp-40h] BYREF
  char *v20; // [rsp+38h] [rbp-28h]
  _QWORD *v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+4Ch] [rbp-14h]
  _QWORD *v24; // [rsp+50h] [rbp-10h]
  int v25; // [rsp+58h] [rbp-8h]
  int v26; // [rsp+5Ch] [rbp-4h]

  v3 = *a2;
  v4 = a2[1];
  v19[0] = v3;
  v19[1] = v4;
  if ( a1 == 111 )
    v25 = 3;
  else
    v25 = 4;
  v22 = sub_14001DB9E(2, v25, (__int64)a3);
  v5 = alloca(sub_140017890());
  v21 = v19;
  v24 = v19;
  if ( a1 == 111 )
    v23 = 7;
  else
    v23 = 15;
  while ( v19[0] != 0 )
  {
    v6 = (char *)v24;
    v24 = (_QWORD *)((char *)v24 + 1);
    v20 = v6;
    *v6 = (LOBYTE(v19[0]) & v23) + 48;
    if ( *v20 > 57 )
      *v20 = a1 & 0x20 | (*v20 + 7);
    v19[0] >>= v25;
  }
  if ( v24 == v21 )
  {
    v7 = a3[2];
    BYTE1(v7) &= ~8u;
    a3[2] = v7;
  }
  v26 = a3[4];
  if ( v26 <= 0 || (v26 -= (_DWORD)v24 - (_DWORD)v21, v26 <= 0) )
  {
    if ( a1 == 111 && (a3[2] & 0x800) != 0 )
    {
      v10 = v24;
      v24 = (_QWORD *)((char *)v24 + 1);
      *v10 = 48;
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = v26--;
      if ( v9 <= 0 )
        break;
      v8 = v24;
      v24 = (_QWORD *)((char *)v24 + 1);
      *v8 = 48;
    }
  }
  if ( v24 == v21 && a3[4] != 0 )
  {
    v11 = v24;
    v24 = (_QWORD *)((char *)v24 + 1);
    *v11 = 48;
  }
  v12 = a3[3];
  v26 = (_DWORD)v24 - (_DWORD)v21;
  if ( (int)v24 - (int)v21 >= v12 )
    a3[3] = -1;
  else
    a3[3] -= v26;
  v26 = a3[3];
  if ( v26 > 0 && a1 != 111 && (a3[2] & 0x800) != 0 )
    v26 -= 2;
  if ( v26 > 0 && (int)a3[4] < 0 && (a3[2] & 0x600) == 0x200 )
  {
    while ( 1 )
    {
      v14 = v26--;
      if ( v14 <= 0 )
        break;
      v13 = v24;
      v24 = (_QWORD *)((char *)v24 + 1);
      *v13 = 48;
    }
  }
  if ( a1 != 111 && (a3[2] & 0x800) != 0 )
  {
    v15 = v24;
    v24 = (_QWORD *)((char *)v24 + 1);
    *v15 = a1;
    v16 = v24;
    v24 = (_QWORD *)((char *)v24 + 1);
    *v16 = 48;
  }
  if ( v26 > 0 && (a3[2] & 0x400) == 0 )
  {
    while ( 1 )
    {
      v17 = v26--;
      if ( v17 <= 0 )
        break;
      sub_14001D7B0(32, (__int64)a3);
    }
  }
  while ( v21 < v24 )
  {
    v24 = (_QWORD *)((char *)v24 - 1);
    sub_14001D7B0(*(_BYTE *)v24, (__int64)a3);
  }
  while ( 1 )
  {
    result = (unsigned int)v26--;
    if ( (int)result <= 0 )
      break;
    sub_14001D7B0(32, (__int64)a3);
  }
  return result;
}

