// sub_1400111A0 @ 0x1400111A0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400111A0(
        _QWORD *a1,
        __int16 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 result; // rax
  unsigned int v10; // r13d
  unsigned int v11; // r10d
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // r8
  unsigned int v16; // r13d
  bool v17; // zf
  bool v18; // sf
  bool v19; // of
  __int64 v20; // rcx
  __int16 v21; // cx
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rdi
  int v25; // r13d
  int i; // r8d
  _QWORD *v27; // rdx
  __int64 v28; // r10
  __int64 v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // ebx
  __int16 *v32; // r15
  __int64 v33; // r13
  __int64 v34; // rbp
  unsigned __int64 v35; // rdi
  __int64 v36; // r9
  __int64 v37; // rcx
  unsigned int v38; // edx
  __m128i *v39; // rax
  unsigned int v40; // edx
  __m128i v41; // xmm0
  __int64 v42; // r12
  __m128i *v43; // r8
  signed int v44; // eax
  __int64 v45; // r8
  unsigned __int8 *v46; // rcx
  unsigned __int64 v47; // rax
  int v48; // r12d
  __int64 v49; // rdi
  __int64 v50; // rax
  unsigned int v51; // [rsp+8h] [rbp-50h]
  unsigned int v52; // [rsp+Ch] [rbp-4Ch]
  __int64 v53; // [rsp+78h] [rbp+20h]

  result = ((unsigned __int64)a6 << 32) | 1;
  v10 = 1 << a6;
  v11 = (1 << a6) - 1;
  if ( a3 != -1 )
  {
    v52 = 1 << a6;
    v12 = a3;
    v13 = 0;
    v14 = 1 << (a6 - 1);
    v15 = 1;
    v16 = (1 << a6) - 1;
    while ( 1 )
    {
      v21 = a2[v13];
      if ( v21 == -1 )
      {
        v22 = v16--;
        HIDWORD(a1[v22 + 1]) = v13;
        *(_WORD *)(a7 + 2 * v13) = 1;
        v20 = v13 + 1;
        if ( v12 == v13 )
        {
LABEL_7:
          v51 = v16;
          *a1 = v15 | ((unsigned __int64)a6 << 32);
          if ( v11 != v16 )
          {
            v23 = v16;
            v24 = 0;
            result = 0;
            while ( 1 )
            {
              v25 = a2[v24];
              if ( v25 > 0 )
              {
                for ( i = 0; i != v25; ++i )
                {
                  HIDWORD(a1[(unsigned int)result + 1]) = v24;
                  do
                    result = v11 & ((v52 >> 1) + (v52 >> 3) + 3 + (_DWORD)result);
                  while ( v23 < (unsigned int)result );
                }
              }
              if ( v12 == v24 )
                break;
              ++v24;
            }
            LOWORD(v10) = 1 << a6;
            if ( v52 != 0 )
            {
LABEL_17:
              v27 = a1 + 1;
              v28 = (__int64)&a1[v11 + 2];
              do
              {
                v29 = *((unsigned int *)v27 + 1);
                v30 = *(unsigned __int16 *)(a7 + 2 * v29);
                *(_WORD *)(a7 + 2 * v29) = v30 + 1;
                _BitScanReverse(&v31, v30);
                *((_BYTE *)++v27 - 5) = a6 - v31;
                *((_WORD *)v27 - 4) = (v30 << (a6 - v31)) - v10;
                *((_BYTE *)v27 - 6) = *(_DWORD *)(a5 + 4 * v29);
                result = *(unsigned int *)(a4 + 4 * v29);
                *((_DWORD *)v27 - 1) = result;
              }
              while ( v27 != (_QWORD *)v28 );
            }
            return result;
          }
          v53 = a4;
          v32 = a2;
          v33 = a7 + 106;
          v34 = 0;
          v35 = 0;
          v36 = 0x101010101010101LL * v20;
          while ( 2 )
          {
            v37 = *v32;
            *(_QWORD *)(v33 + v34) = v35;
            if ( (__int16)v37 > 8 )
            {
              v38 = (__int16)v37 - 9;
              if ( v38 <= 7 )
              {
                v44 = 8;
LABEL_28:
                *(_QWORD *)(v33 + v34 + v44) = v35;
              }
              else
              {
                v39 = (__m128i *)(a7 + v34 + 114);
                v40 = (v38 >> 3) + 1;
                v41 = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
                v42 = v40 >> 1;
                v43 = &v39[v42];
                if ( ((v42 * 16) & 0x10) == 0 || (*v39 = v41, v39 = (__m128i *)(a7 + v34 + 130), v43 != v39) )
                {
                  do
                  {
                    *v39 = v41;
                    v39 += 2;
                    v39[-1] = v41;
                  }
                  while ( v43 != v39 );
                }
                if ( (v40 & 1) != 0 )
                {
                  v44 = 8 * (v40 & 0xFFFFFFFE) + 8;
                  goto LABEL_28;
                }
              }
            }
            result = 0x101010101010101LL;
            v34 += v37;
            ++v32;
            v35 += 0x101010101010101LL;
            if ( v35 == v36 )
            {
              v10 = 1 << a6;
              a4 = v53;
              goto LABEL_31;
            }
            continue;
          }
        }
      }
      else
      {
        v19 = __OFSUB__((_WORD)v14, v21);
        v17 = (_WORD)v14 == (unsigned __int16)v21;
        v18 = (__int16)(v14 - v21) < 0;
        *(_WORD *)(a7 + 2 * v13) = v21;
        v20 = v13 + 1;
        v15 = !(v18 ^ v19 | v17) & (unsigned __int8)v15;
        if ( v12 == v13 )
          goto LABEL_7;
      }
      v13 = v20;
    }
  }
  *a1 = result;
  v51 = (1 << a6) - 1;
LABEL_31:
  if ( v10 != 0 )
  {
    v45 = (v10 >> 1) + (v10 >> 3) + 3;
    v46 = (unsigned __int8 *)(a7 + 106);
    v47 = 0;
    do
    {
      v48 = *v46;
      v46 += 2;
      v49 = (unsigned int)v47 & v51;
      v50 = v45 + v47;
      HIDWORD(a1[v49 + 1]) = v48;
      HIDWORD(a1[((unsigned int)v50 & v51) + 1]) = *(v46 - 1);
      v47 = v51 & (unsigned __int64)(v45 + v50);
    }
    while ( (unsigned __int8 *)(a7 + ((v10 - 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 108) != v46 );
    goto LABEL_17;
  }
  return result;
}

