// sub_140004AF0 @ 0x140004AF0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140004AF0(unsigned __int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned __int8 *v9; // r8
  unsigned int v10; // r9d
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // edi
  unsigned __int64 v14; // rbp
  __int64 v15; // r9
  unsigned __int64 v16; // r13
  int v17; // r11d
  __int64 v18; // r14
  unsigned __int8 *v19; // r10
  char *v20; // r10
  char v21; // r14
  char *v22; // rax
  char v23; // r14
  char *v24; // r10
  char v25; // r14
  char *v26; // rax
  char v27; // r14
  unsigned int v28; // edx
  int v29; // edi
  char *v30; // r10
  char v31; // r11
  unsigned int v33; // r8d
  __int64 v34; // r10

  if ( a4 == 0 )
    return -72;
  v7 = a3[a4 - 1];
  v11 = *a3;
  switch ( a4 )
  {
    case 1uLL:
      goto LABEL_26;
    case 2uLL:
      goto LABEL_25;
    case 3uLL:
      goto LABEL_24;
    case 4uLL:
      goto LABEL_23;
    case 5uLL:
      goto LABEL_22;
    case 6uLL:
      goto LABEL_21;
    case 7uLL:
      v11 += (unsigned __int64)a3[6] << 48;
LABEL_21:
      v11 += (unsigned __int64)a3[5] << 40;
LABEL_22:
      v11 += (unsigned __int64)a3[4] << 32;
LABEL_23:
      v11 += (unsigned __int64)a3[3] << 24;
LABEL_24:
      v11 += (unsigned __int64)a3[2] << 16;
LABEL_25:
      v11 += (unsigned __int64)a3[1] << 8;
LABEL_26:
      if ( (_BYTE)v7 == 0 )
        return -20;
      _BitScanReverse(&v33, v7);
      v12 = 8 * (9 - a4) - v33;
      v9 = a3;
      goto LABEL_6;
    default:
      v8 = -1;
      if ( (_BYTE)v7 == 0 )
        return v8;
      if ( a4 > 0xFFFFFFFFFFFFFF88uLL )
        return a4;
      v9 = &a3[a4 - 8];
      _BitScanReverse(&v10, v7);
      v11 = *(_QWORD *)v9;
      v12 = 8 - v10;
LABEL_6:
      v13 = *(unsigned __int8 *)(a5 + 2);
      v14 = a1 + a2;
      v15 = a5 + 4;
      v16 = a1 + a2 - 3;
      v17 = -v13;
      break;
  }
  while ( v9 < a3 + 8 )
  {
    if ( a3 == v9 )
    {
      if ( a1 < v14 )
        goto LABEL_14;
      goto LABEL_31;
    }
    v18 = v12 >> 3;
    v19 = &v9[-v18];
    if ( &v9[-v18] < a3 )
    {
      v34 = (unsigned int)((_DWORD)v9 - (_DWORD)a3);
      v9 -= v34;
      v12 -= 8 * v34;
      v11 = *(_QWORD *)v9;
      if ( a1 < v14 )
        goto LABEL_14;
      goto LABEL_16;
    }
    v9 -= v18;
    v12 -= 8 * (v12 >> 3);
    v11 = *(_QWORD *)v19;
    if ( a1 >= v16 )
      goto LABEL_13;
LABEL_10:
    v20 = (char *)(v15 + 2 * ((unsigned __int64)(v11 << v12) >> v17));
    a1 += 4LL;
    v21 = *v20;
    LODWORD(v20) = v12 + (unsigned __int8)v20[1];
    *(_BYTE *)(a1 - 4) = v21;
    v22 = (char *)(v15 + 2 * ((unsigned __int64)(v11 << (char)v20) >> v17));
    v23 = *v22;
    LODWORD(v22) = (_DWORD)v20 + (unsigned __int8)v22[1];
    *(_BYTE *)(a1 - 3) = v23;
    v24 = (char *)(v15 + 2 * ((unsigned __int64)(v11 << (char)v22) >> v17));
    v25 = *v24;
    LODWORD(v24) = (_DWORD)v22 + (unsigned __int8)v24[1];
    *(_BYTE *)(a1 - 2) = v25;
    v26 = (char *)(v15 + 2 * ((unsigned __int64)(v11 << (char)v24) >> v17));
    v27 = *v26;
    v12 = (_DWORD)v24 + (unsigned __int8)v26[1];
    *(_BYTE *)(a1 - 1) = v27;
    if ( v12 > 0x40 )
      goto LABEL_13;
  }
  v28 = v12;
  v12 &= 7u;
  v9 -= v28 >> 3;
  v11 = *(_QWORD *)v9;
  if ( a1 < v16 )
    goto LABEL_10;
LABEL_13:
  if ( a1 < v14 )
  {
LABEL_14:
    v29 = -v13;
    do
    {
      v30 = (char *)(v15 + 2 * ((unsigned __int64)(v11 << v12) >> v29));
      ++a1;
      v31 = *v30;
      LODWORD(v30) = (unsigned __int8)v30[1];
      *(_BYTE *)(a1 - 1) = v31;
      v12 += (unsigned int)v30;
    }
    while ( v14 != a1 );
  }
LABEL_16:
  if ( a3 != v9 )
    return -20;
LABEL_31:
  v8 = a2;
  if ( v12 != 64 )
    return -20;
  return v8;
}

