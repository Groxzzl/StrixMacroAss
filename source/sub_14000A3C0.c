// sub_14000A3C0 @ 0x14000A3C0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000A3C0(__int64 a1, _DWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // rsi
  unsigned __int8 *v11; // r14
  unsigned __int8 v12; // di
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // r8
  bool v15; // r14
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // bl
  unsigned __int8 v20; // r9
  char v21; // r8
  char v22; // bl
  BOOL v23; // r9d
  int v24; // r15d
  __int64 v25; // r8
  int v26; // edi
  int v27; // esi

  if ( a4 != 0 )
  {
    v5 = 3;
    v6 = 0;
    v7 = 2;
    v8 = 1;
  }
  else
  {
    v5 = 7;
    v6 = 1;
    v7 = 6;
    v8 = 5;
  }
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a3 < v8 )
    return v8;
  if ( a2 == nullptr )
    return -1;
  if ( a4 != 1 && *a2 != -47205080 )
  {
    v8 = -10;
    if ( (*a2 & 0xFFFFFFF0) != 0x184D2A50 )
      return v8;
    v8 = 8;
    if ( a3 <= 7 )
      return v8;
    v9 = (unsigned int)a2[1];
    *(_DWORD *)(a1 + 20) = 1;
    *(_QWORD *)a1 = v9;
    return 0;
  }
  v11 = (unsigned __int8 *)&a2[v6];
  v12 = a2[v6];
  v13 = ((unsigned __int8)(v12 >> 5) & (v12 >> 6 == 0))
      + ((v12 & 0x20) == 0)
      + v8
      + qword_1424230C0[v12 & 3]
      + qword_1424230A0[v12 >> 6];
  if ( a3 >= v13 )
  {
    *(_DWORD *)(a1 + 24) = v13;
    v14 = *v11;
    if ( (*v11 & 8) != 0 )
      return -14;
    v15 = (v14 & 0x20) != 0;
    if ( (v14 & 0x20) != 0 )
    {
      v18 = 0;
    }
    else
    {
      v16 = *((_BYTE *)a2 + v8);
      v8 = -16;
      v17 = (v16 >> 3) + 10;
      if ( v17 > 0x1Fu )
        return v8;
      v18 = (1LL << v17) + (v16 & 7) * ((unsigned __int64)(1LL << v17) >> 3);
      v8 = v7;
      v7 = v5;
    }
    v19 = v14;
    v20 = v14;
    v21 = v14 >> 6;
    v22 = v19 & 3;
    v23 = (v20 & 4) != 0;
    if ( v22 == 2 )
    {
      v27 = *(unsigned __int16 *)((char *)a2 + v8);
      v8 += 2LL;
      v24 = v27;
    }
    else if ( v22 == 3 )
    {
      v24 = *(_DWORD *)((char *)a2 + v8);
      v8 += 4LL;
    }
    else
    {
      v24 = 0;
      if ( v22 == 1 )
      {
        v26 = *((unsigned __int8 *)a2 + v8);
        v8 = v7;
        v24 = v26;
      }
    }
    switch ( v21 )
    {
      case 2:
        v25 = *(unsigned int *)((char *)a2 + v8);
        break;
      case 3:
        v25 = *(_QWORD *)((char *)a2 + v8);
        break;
      case 1:
        v25 = *(unsigned __int16 *)((char *)a2 + v8) + 256LL;
        break;
      default:
        v25 = -1;
        if ( v15 )
        {
          v18 = *((unsigned __int8 *)a2 + v8);
          v25 = v18;
        }
        goto LABEL_27;
    }
    if ( v15 )
      v18 = v25;
LABEL_27:
    *(_QWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = v25;
    if ( v18 > 0x20000 )
      LODWORD(v18) = 0x20000;
    *(_DWORD *)(a1 + 28) = v24;
    *(_DWORD *)(a1 + 32) = v23;
    *(_DWORD *)(a1 + 16) = v18;
    return 0;
  }
  return ((unsigned __int8)(v12 >> 5) & (v12 >> 6 == 0))
       + ((v12 & 0x20) == 0)
       + v8
       + qword_1424230C0[v12 & 3]
       + qword_1424230A0[v12 >> 6];
}

