// sub_140004830 @ 0x140004830
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140004830(unsigned __int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned __int8 *v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // edi
  unsigned __int64 v15; // rbp
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  int v18; // r8d
  __int64 v19; // r11
  unsigned __int8 *v20; // rcx
  _BYTE *v21; // rcx
  unsigned int v22; // r11d
  _BYTE *v23; // rax
  _BYTE *v24; // rcx
  int v25; // r11d
  _BYTE *v26; // rax
  unsigned int v27; // edx
  int v28; // edi
  char *v29; // rcx
  char v30; // r8
  unsigned int v32; // ecx
  __int64 v33; // rcx

  if ( a4 == 0 )
    return -72;
  v8 = a3[a4 - 1];
  v12 = *a3;
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
      v12 += (unsigned __int64)a3[6] << 48;
LABEL_21:
      v12 += (unsigned __int64)a3[5] << 40;
LABEL_22:
      v12 += (unsigned __int64)a3[4] << 32;
LABEL_23:
      v12 += (unsigned __int64)a3[3] << 24;
LABEL_24:
      v12 += (unsigned __int64)a3[2] << 16;
LABEL_25:
      v12 += (unsigned __int64)a3[1] << 8;
LABEL_26:
      if ( (_BYTE)v8 == 0 )
        return -20;
      _BitScanReverse(&v32, v8);
      v10 = a3;
      v13 = 8 * (9 - a4) - v32;
      goto LABEL_6;
    default:
      v9 = -1;
      if ( (_BYTE)v8 == 0 )
        return v9;
      if ( a4 > 0xFFFFFFFFFFFFFF88uLL )
        return a4;
      v10 = &a3[a4 - 8];
      _BitScanReverse(&v11, v8);
      v12 = *(_QWORD *)v10;
      v13 = 8 - v11;
LABEL_6:
      v14 = *(unsigned __int8 *)(a5 + 2);
      v15 = a1 + a2;
      v16 = a5 + 4;
      v17 = a1 + a2 - 3;
      v18 = -v14;
      break;
  }
  while ( v10 < a3 + 8 )
  {
    if ( a3 == v10 )
    {
      if ( a1 < v15 )
        goto LABEL_14;
      goto LABEL_31;
    }
    v19 = v13 >> 3;
    v20 = &v10[-v19];
    if ( &v10[-v19] < a3 )
    {
      v33 = (unsigned int)((_DWORD)v10 - (_DWORD)a3);
      v10 -= v33;
      v13 -= 8 * v33;
      v12 = *(_QWORD *)v10;
      if ( a1 < v15 )
        goto LABEL_14;
      goto LABEL_16;
    }
    v10 -= v19;
    v13 -= 8 * (v13 >> 3);
    v12 = *(_QWORD *)v20;
    if ( a1 >= v17 )
      goto LABEL_13;
LABEL_10:
    a1 += 4LL;
    v21 = (_BYTE *)(v16 + 2 * ((unsigned __int64)(v12 << v13) >> v18));
    v22 = v13 + (unsigned __int8)v21[1];
    *(_BYTE *)(a1 - 4) = *v21;
    v23 = (_BYTE *)(v16 + 2 * ((unsigned __int64)(v12 << v22) >> v18));
    LOBYTE(v21) = *v23;
    LODWORD(v23) = v22 + (unsigned __int8)v23[1];
    *(_BYTE *)(a1 - 3) = (_BYTE)v21;
    v24 = (_BYTE *)(v16 + 2 * ((unsigned __int64)(v12 << (char)v23) >> v18));
    v25 = (_DWORD)v23 + (unsigned __int8)v24[1];
    *(_BYTE *)(a1 - 2) = *v24;
    v26 = (_BYTE *)(v16 + 2 * ((unsigned __int64)(v12 << v25) >> v18));
    LOBYTE(v24) = *v26;
    v13 = v25 + (unsigned __int8)v26[1];
    *(_BYTE *)(a1 - 1) = (_BYTE)v24;
    if ( v13 > 0x40 )
      goto LABEL_13;
  }
  v27 = v13;
  v13 &= 7u;
  v10 -= v27 >> 3;
  v12 = *(_QWORD *)v10;
  if ( a1 < v17 )
    goto LABEL_10;
LABEL_13:
  if ( a1 < v15 )
  {
LABEL_14:
    v28 = -v14;
    do
    {
      ++a1;
      v29 = (char *)(v16 + 2 * ((unsigned __int64)(v12 << v13) >> v28));
      v30 = *v29;
      LODWORD(v29) = (unsigned __int8)v29[1];
      *(_BYTE *)(a1 - 1) = v30;
      v13 += (unsigned int)v29;
    }
    while ( v15 != a1 );
  }
LABEL_16:
  if ( a3 != v10 )
    return -20;
LABEL_31:
  v9 = a2;
  if ( v13 != 64 )
    return -20;
  return v9;
}

