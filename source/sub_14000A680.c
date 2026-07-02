// sub_14000A680 @ 0x14000A680
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000A680(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  int v4; // ecx
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r11
  unsigned __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int8 *v13; // r14
  unsigned __int8 v14; // bl
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // r8
  bool v17; // si
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // cl
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  char v23; // r8
  char v24; // di
  BOOL v25; // ebx
  int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // rdx
  __m128i si128; // xmm3
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32[2]; // [rsp+0h] [rbp-88h] BYREF
  __m128i v33[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v34; // [rsp+50h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 29576);
  if ( v4 != 0 )
  {
    v6 = 3;
    v7 = 0;
    v8 = 2;
    v9 = 1;
  }
  else
  {
    v6 = 7;
    v7 = 1;
    v8 = 6;
    v9 = 5;
  }
  v10 = -72;
  *(_QWORD *)(a1 + 29448) = 0;
  *(_OWORD *)(a1 + 29416) = 0;
  *(_OWORD *)(a1 + 29432) = 0;
  if ( a3 < v9 )
    return v10;
  if ( a2 == nullptr )
    return -1;
  if ( v4 != 1 && *a2 != -47205080 )
  {
    v10 = -10;
    if ( (*a2 & 0xFFFFFFF0) != 0x184D2A50 )
      return v10;
    v10 = -72;
    if ( a3 <= 7 )
      return v10;
    v11 = (unsigned int)a2[1];
    *(_DWORD *)(a1 + 29436) = 1;
    *(_QWORD *)(a1 + 29416) = v11;
LABEL_10:
    *(_DWORD *)(a1 + 29584) = 0;
    return 0;
  }
  v13 = (unsigned __int8 *)&a2[v7];
  v14 = a2[v7];
  v15 = ((unsigned __int8)(v14 >> 5) & (v14 >> 6 == 0))
      + ((v14 & 0x20) == 0)
      + v9
      + qword_1424230C0[v14 & 3]
      + qword_1424230A0[v14 >> 6];
  if ( a3 >= v15 )
  {
    *(_DWORD *)(a1 + 29440) = v15;
    v16 = *v13;
    v10 = -14;
    if ( (*v13 & 8) != 0 )
      return v10;
    v17 = (v16 & 0x20) != 0;
    if ( (v16 & 0x20) != 0 )
    {
      v22 = 0;
    }
    else
    {
      v18 = *((_BYTE *)a2 + v9);
      v10 = -16;
      v19 = (v18 >> 3) + 10;
      if ( v19 > 0x1Fu )
        return v10;
      v20 = 1LL << v19;
      v21 = (v18 & 7) * ((unsigned __int64)(1LL << v19) >> 3);
      v9 = v8;
      v8 = v6;
      v22 = v21 + v20;
    }
    v23 = v16 >> 6;
    v24 = *v13 & 3;
    v25 = (*v13 & 4) != 0;
    if ( v24 == 2 )
    {
      v26 = *(unsigned __int16 *)((char *)a2 + v9);
      v9 += 2LL;
    }
    else if ( v24 == 3 )
    {
      v26 = *(_DWORD *)((char *)a2 + v9);
      v9 += 4LL;
    }
    else
    {
      v26 = 0;
      if ( v24 == 1 )
      {
        v26 = *((unsigned __int8 *)a2 + v9);
        v9 = v8;
      }
    }
    switch ( v23 )
    {
      case 2:
        v27 = *(unsigned int *)((char *)a2 + v9);
        break;
      case 3:
        v27 = *(_QWORD *)((char *)a2 + v9);
        break;
      case 1:
        v27 = *(unsigned __int16 *)((char *)a2 + v9) + 256LL;
        break;
      default:
        v27 = -1;
        if ( v17 )
        {
          v22 = *((unsigned __int8 *)a2 + v9);
          v27 = v22;
        }
LABEL_27:
        *(_QWORD *)(a1 + 29416) = v27;
        *(_QWORD *)(a1 + 29424) = v22;
        if ( v22 > 0x20000 )
          LODWORD(v22) = 0x20000;
        *(_DWORD *)(a1 + 29444) = v26;
        *(_DWORD *)(a1 + 29448) = v25;
        *(_DWORD *)(a1 + 29432) = v22;
        if ( v26 != 0 )
        {
          v10 = -32;
          if ( *(_DWORD *)(a1 + 29672) != v26 )
            return v10;
        }
        if ( v25 && *(_DWORD *)(a1 + 29580) == 0 )
        {
          v28 = v34;
          *(_DWORD *)(a1 + 29584) = 1;
          memset(v32, 0, sizeof(v32));
          v33[0] = (__m128i)0x61C8864E7A143579uLL;
          si128 = _mm_load_si128(v33);
          *(__m128i *)((char *)v32 + 8) = _mm_load_si128((const __m128i *)&xmmword_142423160);
          v30 = _mm_load_si128(v32);
          v31 = _mm_load_si128(&v32[1]);
          *(_QWORD *)(a1 + 29560) = v28;
          v10 = 0;
          *(_QWORD *)(a1 + 29528) = 0;
          *(_QWORD *)(a1 + 29536) = 0;
          *(_QWORD *)(a1 + 29544) = 0;
          *(_QWORD *)(a1 + 29552) = 0;
          *(__m128i *)(a1 + 29480) = v30;
          *(__m128i *)(a1 + 29496) = v31;
          *(__m128i *)(a1 + 29512) = si128;
          return v10;
        }
        goto LABEL_10;
    }
    if ( v17 )
      v22 = v27;
    goto LABEL_27;
  }
  if ( v15 <= 0xFFFFFFFFFFFFFF88uLL )
    return -72;
  return v15;
}

