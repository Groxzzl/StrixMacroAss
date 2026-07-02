// sub_14000BB50 @ 0x14000BB50
#include <stdint.h>
#include <windows.h>

void __fastcall sub_14000BB50(
        unsigned __int64 *a1,
        __int16 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v7; // r10d
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned int v12; // edx
  int v13; // r14d
  __int64 v14; // rdi
  __int64 i; // rax
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  __int64 v19; // r8
  __int16 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned int v23; // eax
  int v24; // r14d
  int j; // r9d
  _QWORD *v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // edi
  __int16 *v31; // r14
  __int64 v32; // r15
  unsigned __int64 v33; // rbp
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // ecx
  __m128i *v38; // rax
  unsigned int v39; // ecx
  __m128i v40; // xmm0
  __int64 v41; // rdi
  __m128i *v42; // r10
  signed int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rdi
  unsigned __int8 *v46; // r8
  __int64 v47; // rax
  int v48; // r14d
  __int64 v49; // rbp
  __int64 v50; // rax
  unsigned int v51; // [rsp+Ch] [rbp-4Ch]
  __int64 v52; // [rsp+78h] [rbp+20h]

  v7 = 1 << a6;
  v10 = (unsigned int)((1 << a6) - 1);
  if ( a3 != -1 )
  {
    v11 = a3;
    v12 = (1 << a6) - 1;
    v13 = 1 << (a6 - 1);
    v14 = 1;
    for ( i = 0; ; i = v19 )
    {
      v20 = a2[i];
      if ( v20 == -1 )
      {
        v21 = v12--;
        HIDWORD(a1[v21 + 1]) = i;
        *(_WORD *)(a7 + 2 * i) = 1;
        v19 = i + 1;
        if ( v11 == i )
        {
LABEL_7:
          *a1 = v14 | ((unsigned __int64)a6 << 32);
          if ( (_DWORD)v10 != v12 )
          {
            v22 = 0;
            v52 = a4;
            v23 = 0;
            while ( 1 )
            {
              v24 = a2[v22];
              if ( v24 > 0 )
              {
                for ( j = 0; j != v24; ++j )
                {
                  HIDWORD(a1[v23 + 1]) = v22;
                  do
                    v23 = v10 & ((v7 >> 1) + (v7 >> 3) + 3 + v23);
                  while ( v12 < v23 );
                }
              }
              if ( v11 == v22 )
                break;
              ++v22;
            }
            a4 = v52;
            if ( v7 != 0 )
            {
LABEL_17:
              v26 = a1 + 1;
              v27 = (__int64)&a1[v10 + 2];
              do
              {
                v28 = *((unsigned int *)v26 + 1);
                v29 = *(unsigned __int16 *)(a7 + 2 * v28);
                *(_WORD *)(a7 + 2 * v28) = v29 + 1;
                _BitScanReverse(&v30, v29);
                *((_BYTE *)++v26 - 5) = a6 - v30;
                *((_WORD *)v26 - 4) = (v29 << (a6 - v30)) - v7;
                *((_BYTE *)v26 - 6) = *(_DWORD *)(a5 + 4 * v28);
                *((_DWORD *)v26 - 1) = *(_DWORD *)(a4 + 4 * v28);
              }
              while ( v26 != (_QWORD *)v27 );
            }
            return;
          }
          v31 = a2;
          v32 = a7 + 106;
          v51 = v12;
          v33 = 0;
          v34 = 0;
          v35 = 0x101010101010101LL * v19;
          while ( 2 )
          {
            v36 = *v31;
            *(_QWORD *)(v32 + v34) = v33;
            if ( (__int16)v36 > 8 )
            {
              v37 = (__int16)v36 - 9;
              if ( v37 <= 7 )
              {
                v43 = 8;
LABEL_28:
                *(_QWORD *)(v32 + v34 + v43) = v33;
              }
              else
              {
                v38 = (__m128i *)(a7 + v34 + 114);
                v39 = (v37 >> 3) + 1;
                v40 = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
                v41 = v39 >> 1;
                v42 = &v38[v41];
                if ( ((v41 * 16) & 0x10) == 0 || (*v38 = v40, v38 = (__m128i *)(a7 + v34 + 130), v42 != v38) )
                {
                  do
                  {
                    *v38 = v40;
                    v38 += 2;
                    v38[-1] = v40;
                  }
                  while ( v42 != v38 );
                }
                if ( (v39 & 1) != 0 )
                {
                  v43 = 8 * (v39 & 0xFFFFFFFE) + 8;
                  goto LABEL_28;
                }
              }
            }
            v34 += v36;
            ++v31;
            v33 += 0x101010101010101LL;
            if ( v33 == v35 )
            {
              v7 = 1 << a6;
              v10 = (unsigned int)((1 << a6) - 1);
              v44 = v51;
              goto LABEL_31;
            }
            continue;
          }
        }
      }
      else
      {
        v18 = __OFSUB__((_WORD)v13, v20);
        v16 = (_WORD)v13 == (unsigned __int16)v20;
        v17 = (__int16)(v13 - v20) < 0;
        *(_WORD *)(a7 + 2 * i) = v20;
        v19 = i + 1;
        v14 = !(v17 ^ v18 | v16) & (unsigned __int8)v14;
        if ( v11 == i )
          goto LABEL_7;
      }
    }
  }
  *a1 = ((unsigned __int64)a6 << 32) | 1;
  v44 = (unsigned int)v10;
LABEL_31:
  if ( v7 != 0 )
  {
    v45 = (v7 >> 1) + (v7 >> 3) + 3;
    v46 = (unsigned __int8 *)(a7 + 106);
    v47 = 0;
    do
    {
      v48 = *v46;
      v46 += 2;
      v49 = v47 & v44;
      v50 = v45 + v47;
      HIDWORD(a1[v49 + 1]) = v48;
      HIDWORD(a1[(v50 & v44) + 1]) = *(v46 - 1);
      v47 = v44 & (v45 + v50);
    }
    while ( (unsigned __int8 *)(a7 + ((v7 - 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 108) != v46 );
    goto LABEL_17;
  }
}

