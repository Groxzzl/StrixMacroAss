// sub_140007390 @ 0x140007390
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140007390(char *a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // edx
  int v10; // edi
  char *v11; // r12
  __int64 v12; // r11
  unsigned __int8 *v13; // r9
  __int64 v14; // r10
  unsigned int v15; // eax
  unsigned __int8 *v16; // rsi
  unsigned __int64 v17; // r13
  int v18; // r8d
  unsigned __int8 *v19; // r14
  bool v20; // r15
  __int64 v21; // rdx
  unsigned int v22; // eax
  char *v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  char *v26; // rdx
  __int64 v27; // r14
  char *v28; // rdx
  __int64 v29; // r14
  unsigned int v30; // edx
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // r8
  unsigned __int64 v34; // r8
  unsigned __int8 *v35; // r14
  bool v36; // r15
  __int64 v37; // rdx
  unsigned int v38; // edx
  __int64 v39; // rdx
  char *v40; // rdx
  __int64 v42; // r10

  if ( a4 == 0 )
    return -72;
  v7 = a3[a4 - 1];
  v14 = *a3;
  switch ( a4 )
  {
    case 1LL:
      goto LABEL_20;
    case 2LL:
      goto LABEL_19;
    case 3LL:
      goto LABEL_18;
    case 4LL:
      goto LABEL_17;
    case 5LL:
      goto LABEL_16;
    case 6LL:
      goto LABEL_15;
    case 7LL:
      v14 += (unsigned __int64)a3[6] << 48;
LABEL_15:
      v14 += (unsigned __int64)a3[5] << 40;
LABEL_16:
      v14 += (unsigned __int64)a3[4] << 32;
LABEL_17:
      v14 += (unsigned __int64)a3[3] << 24;
LABEL_18:
      v14 += (unsigned __int64)a3[2] << 16;
LABEL_19:
      v14 += (unsigned __int64)a3[1] << 8;
LABEL_20:
      if ( (_BYTE)v7 == 0 )
        return -20;
      _BitScanReverse(&v31, v7);
      v10 = *(unsigned __int8 *)(a5 + 2);
      v11 = &a1[a2];
      v12 = a5 + 4;
      v32 = 9 - a4;
      v13 = a3;
      v15 = 8 * v32 - v31;
      break;
    default:
      v8 = -1;
      if ( (_BYTE)v7 == 0 )
        return v8;
      _BitScanReverse(&v9, v7);
      v10 = *(unsigned __int8 *)(a5 + 2);
      v11 = &a1[a2];
      v12 = a5 + 4;
      v13 = &a3[a4 - 8];
      v14 = *(_QWORD *)v13;
      v15 = 8 - v9;
      break;
  }
  v16 = a3 + 8;
  v17 = (unsigned __int64)(v11 - 7);
  v18 = -v10;
  while ( v13 >= v16 )
  {
    v30 = v15;
    v15 &= 7u;
    v13 -= v30 >> 3;
    v14 = *(_QWORD *)v13;
    v20 = (unsigned __int64)a1 < v17;
LABEL_9:
    if ( !v20 )
      goto LABEL_23;
    v21 = v12 + 4 * ((unsigned __int64)(v14 << v15) >> v18);
    *(_WORD *)a1 = *(_WORD *)v21;
    v22 = *(unsigned __int8 *)(v21 + 2) + v15;
    v23 = &a1[*(unsigned __int8 *)(v21 + 3)];
    v24 = v12 + 4 * ((unsigned __int64)(v14 << v22) >> v18);
    *(_WORD *)v23 = *(_WORD *)v24;
    v25 = *(unsigned __int8 *)(v24 + 2) + v22;
    v26 = &v23[*(unsigned __int8 *)(v24 + 3)];
    v27 = v12 + 4 * ((unsigned __int64)(v14 << v25) >> v18);
    *(_WORD *)v26 = *(_WORD *)v27;
    LODWORD(v24) = v25 + *(unsigned __int8 *)(v27 + 2);
    v28 = &v26[*(unsigned __int8 *)(v27 + 3)];
    v29 = v12 + 4 * ((unsigned __int64)(v14 << v24) >> v18);
    *(_WORD *)v28 = *(_WORD *)v29;
    v15 = v24 + *(unsigned __int8 *)(v29 + 2);
    a1 = &v28[*(unsigned __int8 *)(v29 + 3)];
    if ( v15 > 0x40 )
    {
      v34 = (unsigned __int64)(v11 - 2);
      goto LABEL_33;
    }
  }
  if ( a3 == v13 )
  {
    v34 = (unsigned __int64)(v11 - 2);
    goto LABEL_30;
  }
  v19 = &v13[-(v15 >> 3)];
  if ( v19 >= a3 )
  {
    v14 = *(_QWORD *)v19;
    v13 -= v15 >> 3;
    v20 = (unsigned __int64)a1 < v17;
    v15 -= 8 * (v15 >> 3);
    goto LABEL_9;
  }
  v33 = (unsigned int)((_DWORD)v13 - (_DWORD)a3);
  v13 -= v33;
  v15 -= 8 * v33;
  v14 = *(_QWORD *)v13;
LABEL_23:
  v34 = (unsigned __int64)(v11 - 2);
  while ( v15 <= 0x40 )
  {
LABEL_30:
    if ( v13 < v16 )
    {
      if ( a3 == v13 )
        goto LABEL_42;
      v35 = &v13[-(v15 >> 3)];
      if ( v35 < a3 )
      {
        v42 = (unsigned int)((_DWORD)v13 - (_DWORD)a3);
        v13 -= v42;
        v15 -= 8 * v42;
        v14 = *(_QWORD *)v13;
LABEL_42:
        if ( v34 < (unsigned __int64)a1 )
        {
LABEL_35:
          if ( a1 < v11 )
            goto LABEL_36;
          goto LABEL_38;
        }
        do
        {
LABEL_34:
          v39 = v12 + 4 * ((unsigned __int64)(v14 << v15) >> -(char)v10);
          *(_WORD *)a1 = *(_WORD *)v39;
          v15 += *(unsigned __int8 *)(v39 + 2);
          a1 += *(unsigned __int8 *)(v39 + 3);
        }
        while ( v34 >= (unsigned __int64)a1 );
        goto LABEL_35;
      }
      v14 = *(_QWORD *)v35;
      v13 -= v15 >> 3;
      v36 = v34 >= (unsigned __int64)a1;
      v15 -= 8 * (v15 >> 3);
    }
    else
    {
      v38 = v15;
      v15 &= 7u;
      v13 -= v38 >> 3;
      v14 = *(_QWORD *)v13;
      v36 = v34 >= (unsigned __int64)a1;
    }
    if ( !v36 )
      goto LABEL_42;
    v37 = v12 + 4 * ((unsigned __int64)(v14 << v15) >> -(char)v10);
    *(_WORD *)a1 = *(_WORD *)v37;
    v15 += *(unsigned __int8 *)(v37 + 2);
    a1 += *(unsigned __int8 *)(v37 + 3);
  }
LABEL_33:
  if ( v34 >= (unsigned __int64)a1 )
    goto LABEL_34;
  if ( a1 >= v11 )
    return -20;
LABEL_36:
  v40 = (char *)(v12 + 4 * ((unsigned __int64)(v14 << v15) >> -(char)v10));
  *a1 = *v40;
  if ( v40[3] == 1 )
  {
    v15 += (unsigned __int8)v40[2];
    goto LABEL_38;
  }
  if ( v15 > 0x3F || (v15 += (unsigned __int8)v40[2], v15 <= 0x40) )
  {
LABEL_38:
    if ( a3 != v13 || v15 != 64 )
      return -20;
  }
  else if ( a3 != v13 )
  {
    return -20;
  }
  return a2;
}

