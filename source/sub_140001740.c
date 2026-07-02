// sub_140001740 @ 0x140001740
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140001740(
        int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  char v7; // cl
  __int64 v9; // r12
  unsigned __int16 v10; // r15
  __int64 result; // rax
  unsigned int v12; // r9d
  int v13; // edi
  unsigned int v14; // esi
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  signed __int16 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rbp
  unsigned int v21; // r8d
  __int64 v22; // r13
  unsigned int v23; // ecx
  int v24; // r12d
  int v25; // edi
  __int64 v26; // rdx
  _WORD *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // r8d
  __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // r12
  unsigned __int64 v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r10
  __int64 v36; // rcx
  unsigned int v37; // edx
  unsigned int v38; // edx
  __m128i *v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rbp
  __m128i *v42; // rsi
  signed int v43; // eax
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  char v48; // r9
  __int64 v49; // [rsp+0h] [rbp-58h]
  signed int v50; // [rsp+0h] [rbp-58h]
  __int64 v51; // [rsp+8h] [rbp-50h]
  int *v52; // [rsp+60h] [rbp+8h]

  v7 = a4;
  v9 = a3 + 1LL;
  v10 = a4;
  if ( a6 < (1LL << a4) + 2 * (unsigned __int64)(a3 + 1) + 8 || a3 > 0xFF )
    return -46;
  result = -44;
  if ( a4 <= 0xC )
  {
    v49 = a3;
    v12 = a3 + 1;
    v13 = 1;
    v14 = 1 << v7;
    v15 = v14 - 1;
    v16 = 0;
    v17 = v14 - 1;
    do
    {
      while ( 1 )
      {
        v18 = *(_WORD *)(a2 + 2 * v16);
        if ( v18 == -1 )
          break;
        *(_WORD *)(a5 + 2 * v16++) = v18;
        v13 = (v18 < (signed __int16)(1 << (v10 - 1))) & (unsigned __int8)v13;
        if ( (unsigned int)v16 >= v12 )
          goto LABEL_8;
      }
      v19 = (unsigned int)v17;
      v17 = (unsigned int)(v17 - 1);
      BYTE2(a1[v19 + 1]) = v16;
      *(_WORD *)(a5 + 2 * v16++) = 1;
    }
    while ( (unsigned int)v16 < v12 );
LABEL_8:
    v20 = v49;
    *a1 = (v13 << 16) | v10;
    v21 = (v14 >> 1) + (v14 >> 3) + 3;
    v22 = 0;
    v23 = 0;
    if ( (_DWORD)v17 != v15 )
    {
      do
      {
        v24 = *(__int16 *)(a2 + 2 * v22);
        v25 = 0;
        if ( *(__int16 *)(a2 + 2 * v22) > 0 )
        {
          do
          {
            BYTE2(a1[v23 + 1]) = v22;
            do
              v23 = v15 & (v21 + v23);
            while ( (unsigned int)v17 < v23 );
            ++v25;
          }
          while ( v25 != v24 );
        }
        ++v22;
      }
      while ( (unsigned int)v22 < v12 );
      result = -1;
      if ( v23 == 0 )
      {
LABEL_15:
        v26 = 0;
        do
        {
          v27 = (_WORD *)(a5 + 2LL * BYTE2(a1[v26 + 1]));
          v28 = (unsigned __int16)*v27;
          *v27 = v28 + 1;
          _BitScanReverse(&v29, v28);
          HIBYTE(a1[v26 + 1]) = v10 - v29;
          LOWORD(a1[++v26]) = ((_WORD)v28 << (v10 - v29)) - v14;
        }
        while ( (unsigned int)v26 < v14 );
        return 0;
      }
      return result;
    }
    v50 = v14;
    v30 = a5 + 2 * v9;
    v31 = v21;
    v32 = 0;
    v51 = v17;
    v33 = 0;
    v34 = 0;
    v52 = a1;
    v35 = 2 * v20 + 10;
    while ( 1 )
    {
      v36 = *(__int16 *)(a2 + 2 * v32);
      *(_QWORD *)(v30 + v34) = v33;
      if ( (__int16)v36 > 8 )
      {
        v37 = (__int16)v36 - 9;
        if ( v37 <= 7 )
        {
          v43 = 8;
        }
        else
        {
          v38 = (v37 >> 3) + 1;
          v39 = (__m128i *)(a5 + v35 + v34);
          v40 = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
          v41 = v38 >> 1;
          v42 = &v39[v41];
          if ( ((v41 * 16) & 0x10) == 0 || (*v39 = v40, ++v39, v39 != v42) )
          {
            do
            {
              *v39 = v40;
              v39 += 2;
              v39[-1] = v40;
            }
            while ( v39 != v42 );
          }
          if ( (v38 & 1) == 0 )
            goto LABEL_29;
          v43 = 8 * (v38 & 0xFFFFFFFE) + 8;
        }
        *(_QWORD *)(v30 + v34 + v43) = v33;
      }
LABEL_29:
      ++v32;
      v34 += v36;
      v33 += 0x101010101010101LL;
      if ( (unsigned int)v32 >= v12 )
      {
        v44 = 0;
        v45 = 0;
        a1 = v52;
        v14 = v50;
        do
        {
          v46 = v45 & v51;
          v47 = v31 + v45;
          BYTE2(v52[v46 + 1]) = *(_BYTE *)(v30 + v44);
          v48 = *(_BYTE *)(v30 + v44 + 1);
          v44 += 2LL;
          BYTE2(v52[(v47 & v51) + 1]) = v48;
          v45 = v51 & (v31 + v47);
        }
        while ( v44 < v50 );
        goto LABEL_15;
      }
    }
  }
  return result;
}

