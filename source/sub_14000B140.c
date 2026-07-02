// sub_14000B140 @ 0x14000B140
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000B140(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  unsigned int *v9; // rbp
  unsigned __int64 v10; // rax
  unsigned int *v11; // rbp
  unsigned __int64 v12; // r10
  unsigned int *v13; // rbp
  unsigned __int64 v14; // rax
  unsigned int *v15; // rbp
  unsigned int *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v23; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v25; // [rsp+48h] [rbp-D0h]
  int v26; // [rsp+58h] [rbp-C0h] BYREF
  int v27; // [rsp+5Ch] [rbp-BCh] BYREF
  int v28[46]; // [rsp+60h] [rbp-B8h] BYREF

  if ( a3 <= 8 )
    return -30;
  v6 = a2 + 8;
  v7 = sub_140006D50(a1 + 2566, (unsigned __int8 *)(a2 + 8), a3 - 8, (__int64)a1);
  if ( v7 > 0xFFFFFFFFFFFFFF88uLL )
    return -30;
  v8 = a2 + a3;
  v9 = (unsigned int *)(v7 + v6);
  v27 = 31;
  v22 = a2 + a3;
  v10 = sub_140001EA0(v28, &v27, &v26, v9, a2 + a3 - (_QWORD)v9);
  if ( v10 > 0xFFFFFFFFFFFFFF88uLL )
    return -30;
  if ( (unsigned int)v27 > 0x1F )
    return -30;
  if ( (unsigned int)v26 > 8 )
    return -30;
  v23 = v10;
  sub_1400111A0(
    (_DWORD)a1 + 4104,
    (unsigned int)v28,
    v27,
    (unsigned int)&unk_142423020,
    (__int64)&unk_142422FA0,
    v26,
    (__int64)(a1 + 6666));
  v11 = (unsigned int *)((char *)v9 + v23);
  v27 = 52;
  v12 = sub_140001EA0(v28, &v27, &v26, v11, v8 - (_QWORD)v11);
  if ( v12 > 0xFFFFFFFFFFFFFF88uLL )
    return -30;
  if ( (unsigned int)v27 > 0x34 )
    return -30;
  if ( (unsigned int)v26 > 9 )
    return -30;
  v24 = v12;
  sub_1400111A0(
    (_DWORD)a1 + 6160,
    (unsigned int)v28,
    v27,
    (unsigned int)&unk_142422EC0,
    (__int64)&unk_142422DE0,
    v26,
    (__int64)(a1 + 6666));
  v13 = (unsigned int *)((char *)v11 + v24);
  v27 = 35;
  v14 = sub_140001EA0(v28, &v27, &v26, v13, v8 - (_QWORD)v13);
  if ( v14 > 0xFFFFFFFFFFFFFF88uLL )
    return -30;
  if ( (unsigned int)v27 > 0x23 )
    return -30;
  if ( (unsigned int)v26 > 9 )
    return -30;
  v25 = v14;
  sub_1400111A0(
    (_DWORD)a1,
    (unsigned int)v28,
    v27,
    (unsigned int)&unk_142422D40,
    (__int64)&unk_142422CA0,
    v26,
    (__int64)(a1 + 6666));
  v15 = (unsigned int *)((char *)v13 + v25);
  v16 = v15 + 3;
  if ( v22 < (unsigned __int64)(v15 + 3) )
    return -30;
  v17 = *v15;
  v18 = v22 - (_QWORD)v16;
  if ( v22 - (unsigned __int64)v16 < v17 )
    return -30;
  if ( (_DWORD)v17 == 0 )
    return -30;
  a1[6663] = v17;
  v19 = v15[1];
  if ( v18 < v19 )
    return -30;
  if ( (_DWORD)v19 == 0 )
    return -30;
  a1[6664] = v19;
  v20 = v15[2];
  if ( v18 < v20 || (_DWORD)v20 == 0 )
    return -30;
  a1[6665] = v20;
  return (__int64)v16 - a2;
}

