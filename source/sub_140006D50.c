// sub_140006D50 @ 0x140006D50
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140006D50(unsigned int *a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v8; // r12
  unsigned int v9; // r9d
  int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // r10d
  unsigned int v14; // r14d
  int *v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  __int64 v20; // rax
  _DWORD *v21; // r11
  char v22; // cl
  __int64 v23; // rdx
  int *v24; // rax
  int v25; // edx
  int v26; // ecx
  int v27; // r10d
  int v28; // r9d
  int v29; // r9d
  unsigned int v30; // ebx
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // r10
  unsigned int *v34; // rax
  unsigned int v35; // r9d
  unsigned int v36; // r9d
  int v37; // ebp
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 v42; // rbx
  unsigned int v43; // r13d
  __int64 v44; // r9
  __m128i v45; // xmm1
  __int64 v46; // r9
  int v48; // eax
  __m128i v49; // xmm5
  __int64 v50; // r8
  unsigned int *v51; // r10
  __int64 v52; // r9
  __int64 v53; // rax
  __int16 v54; // r14
  __int64 v55; // r11
  unsigned int v56; // ebp
  int v57; // ebx
  unsigned int v58; // edx
  __int64 v59; // rbx
  int v60; // esi
  const __m128i *v61; // r11
  unsigned int v62; // r12d
  __m128i v63; // xmm2
  __m128i v64; // xmm3
  __m128i v65; // xmm4
  __int64 v66; // rdi
  __int64 v67; // rsi
  _WORD *v68; // r11
  _WORD *v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // r11
  unsigned int v73; // edx
  __int16 v74; // r8
  unsigned int v75; // r10d
  __int64 v76; // rcx
  unsigned int v77; // eax
  unsigned int *v78; // rcx
  __int64 v79; // r11
  unsigned int v80; // [rsp+38h] [rbp-110h]
  __int64 v81; // [rsp+38h] [rbp-110h]
  unsigned int v82; // [rsp+40h] [rbp-108h]
  unsigned int v83; // [rsp+44h] [rbp-104h]
  int v84; // [rsp+44h] [rbp-104h]
  __int64 v85; // [rsp+48h] [rbp-100h]
  unsigned int v86; // [rsp+50h] [rbp-F8h]
  unsigned int v87; // [rsp+50h] [rbp-F8h]
  unsigned int v88; // [rsp+54h] [rbp-F4h]
  int v89; // [rsp+58h] [rbp-F0h]
  unsigned __int8 v90; // [rsp+63h] [rbp-E5h]
  unsigned __int64 v91; // [rsp+68h] [rbp-E0h]
  unsigned int v92; // [rsp+78h] [rbp-D0h] BYREF
  unsigned int v93; // [rsp+7Ch] [rbp-CCh] BYREF
  _QWORD v94[6]; // [rsp+80h] [rbp-C8h]
  int v95; // [rsp+B0h] [rbp-98h]
  _QWORD v96[6]; // [rsp+C0h] [rbp-88h]
  int v97; // [rsp+F0h] [rbp-58h]
  unsigned int *v98; // [rsp+150h] [rbp+8h]

  v4 = *a1;
  v5 = a4 + 632;
  v6 = a4 + 624;
  v80 = (unsigned __int8)*a1;
  v98 = a1;
  *(_QWORD *)(a4 + 624) = 0;
  *(_QWORD *)(a4 + 724) = 0;
  memset(
    (void *)((a4 + 632) & 0xFFFFFFFFFFFFFFF8uLL),
    0,
    8LL * (((_DWORD)a4 + 624 - (((_DWORD)a4 + 632) & 0xFFFFFFF8) + 108) >> 3));
  if ( (unsigned __int8)v4 > 0xCu )
    return -44;
  v8 = sub_140002D80((_BYTE *)(a4 + 1244), v6, &v92, &v93, a2, a3);
  if ( v8 <= 0xFFFFFFFFFFFFFF88uLL )
  {
    v9 = v93;
    if ( v80 >= v93 )
    {
      v90 = v4;
      v10 = v93 + 1;
      if ( *(_DWORD *)(v6 + 4LL * v93) != 0 )
      {
        v12 = v93 + 1;
        LODWORD(v11) = v93;
      }
      else
      {
        LODWORD(v11) = v93;
        do
        {
          v12 = v11;
          v11 = (unsigned int)(v11 - 1);
        }
        while ( *(_DWORD *)(v6 + 4 * v11) == 0 );
      }
      v13 = v92;
      v82 = v10 - v11;
      v14 = v80 - v93 + v11;
      if ( v12 <= 1 )
      {
        *(_DWORD *)(a4 + 680) = 0;
        v88 = 0;
        if ( v13 == 0 )
        {
LABEL_55:
          v77 = (v90 << 16) | v4 & 0xFF00FFFF;
          BYTE1(v77) = 1;
          *v98 = v77;
          return v8;
        }
      }
      else
      {
        v15 = (int *)(a4 + 628);
        v16 = v5 + 4LL * (v12 - 2);
        v17 = a4 + 628;
        v18 = 0;
        do
        {
          v19 = v18;
          v17 += 4;
          v18 += *(_DWORD *)(v17 - 4);
          *(_DWORD *)(v17 + 52) = v19;
        }
        while ( v16 != v17 );
        v88 = v18;
        if ( v13 == 0 )
        {
          *(_DWORD *)(a4 + 680) = 0;
          goto LABEL_15;
        }
        *(_DWORD *)(a4 + 680) = v18;
      }
      v20 = 0;
      do
      {
        v21 = (_DWORD *)(a4 + 4LL * *(unsigned __int8 *)(a4 + v20 + 1244) + 680);
        v22 = *(_BYTE *)(a4 + v20 + 1244);
        v23 = (unsigned int)*v21;
        *v21 = v23 + 1;
        *(_BYTE *)(a4 + 2 * v23 + 732) = v20++;
        *(_BYTE *)(a4 + 2 * v23 + 733) = v22;
      }
      while ( (unsigned int)v20 < v13 );
      *(_DWORD *)(a4 + 680) = 0;
      v15 = (int *)(a4 + 628);
      if ( v12 <= 1 )
      {
LABEL_38:
        v48 = *(_DWORD *)(a4 + 48);
        *(__m128i *)v94 = _mm_loadu_si128((const __m128i *)a4);
        v49 = _mm_loadu_si128((const __m128i *)(a4 + 16));
        v95 = v48;
        *(__m128i *)&v94[2] = v49;
        *(__m128i *)&v94[4] = _mm_loadu_si128((const __m128i *)(a4 + 32));
        if ( v88 != 0 )
        {
          v50 = a4;
          v91 = v8;
          v51 = v98;
          v52 = a4;
          v84 = v80 - v10;
          v89 = v10 - v80;
          v81 = a4 + 2LL * v88;
          do
          {
            v53 = *(unsigned __int8 *)(v50 + 733);
            v54 = *(unsigned __int8 *)(v50 + 732);
            v55 = *((unsigned int *)v94 + v53);
            v56 = v10 - v53;
            v57 = 1 << (v53 + v84);
            v58 = v55 + v57;
            if ( (int)v53 + v84 < v82 )
            {
              if ( (unsigned int)v55 < v58 )
              {
                v78 = &v51[v55];
                v79 = (__int64)&v51[v55 + 1 + (unsigned int)(v57 - 1)];
                do
                {
                  *((_WORD *)v78++ + 2) = v54;
                  *((_BYTE *)v78 + 2) = v56;
                  *((_BYTE *)v78 + 3) = 1;
                }
                while ( v78 != (unsigned int *)v79 );
              }
            }
            else
            {
              v59 = (__int64)&v51[v55 + 1];
              v60 = 1;
              if ( (int)(v89 + v56) > 0 )
                v60 = v89 + v56;
              v61 = (const __m128i *)(v52 + 52LL * v56);
              v62 = *(_DWORD *)(v52 + 4LL * v60 + 676);
              v63 = _mm_loadu_si128(v61);
              v64 = _mm_loadu_si128(v61 + 1);
              v65 = _mm_loadu_si128(v61 + 2);
              LODWORD(v61) = v61[3].m128i_i32[0];
              v66 = v88 - v62;
              *(__m128i *)v96 = v63;
              v97 = (int)v61;
              *(__m128i *)&v96[2] = v64;
              *(__m128i *)&v96[4] = v65;
              if ( (int)(v89 + v56) > 1 )
              {
                v67 = *((unsigned int *)v96 + v60);
                if ( (_DWORD)v67 != 0 )
                {
                  v68 = (_WORD *)v59;
                  v69 = (_WORD *)(v59 + 4 * v67);
                  do
                  {
                    *v68 = v54;
                    v68 += 2;
                    *((_BYTE *)v68 - 2) = v56;
                    *((_BYTE *)v68 - 1) = 1;
                  }
                  while ( v68 != v69 );
                }
              }
              if ( (_DWORD)v66 != 0 )
              {
                v85 = v50;
                v87 = v58;
                v70 = v62 + v66;
                v71 = v52 + 2LL * v62;
                v98 = v51;
                do
                {
                  v72 = *(unsigned __int8 *)(v71 + 733);
                  v73 = *((_DWORD *)v96 + v72);
                  v74 = v54 + (*(unsigned __int8 *)(v71 + 732) << 8);
                  v75 = v73 + (1 << (v72 + v53 + v84 - v10));
                  do
                  {
                    v76 = v73++;
                    *(_WORD *)(v59 + 4 * v76) = v74;
                    *(_BYTE *)(v59 + 4 * v76 + 2) = v56 + v10 - v72;
                    *(_BYTE *)(v59 + 4 * v76 + 3) = 2;
                  }
                  while ( v73 < v75 );
                  v71 += 2;
                  *((_DWORD *)v96 + v72) = v75;
                }
                while ( v71 != v52 + 2 * v70 );
                v50 = v85;
                v58 = v87;
                v51 = v98;
              }
            }
            *((_DWORD *)v94 + v53) = v58;
            v50 += 2;
          }
          while ( v50 != v81 );
          v8 = v91;
        }
        goto LABEL_55;
      }
LABEL_15:
      v24 = v15;
      v25 = 0;
      v26 = v80 - v9;
      v27 = v80 - v9 + v12 - 1;
      do
      {
        v28 = *v24++;
        *(v24 - 157) = v25;
        v29 = v28 << v26++;
        v25 += v29;
      }
      while ( v27 != v26 );
      if ( v82 < v14 )
      {
        v30 = v12 - 2;
        v31 = 52LL * v82;
        if ( v12 - 2 > 2 && (unsigned __int64)(v31 - 4) > 8 )
        {
          v32 = v82;
          v36 = v12 - 1;
          v33 = a4 + 4;
LABEL_26:
          v86 = v4;
          v37 = v36 & 3;
          v38 = (v36 & 0xFFFFFFFC) + 1;
          v83 = v36 & 0xFFFFFFFC;
          v39 = 16LL * (v36 >> 2);
          v40 = (v36 & 0xFFFFFFFC) + 2;
          v41 = 4 * v38;
          v42 = 4 * v40;
          v43 = v40;
          while ( 1 )
          {
            v44 = 0;
            v45 = _mm_cvtsi32_si128(v32);
            do
            {
              *(__m128i *)(v33 + v31 + v44) = _mm_srl_epi32(_mm_loadu_si128((const __m128i *)(a4 + v44 + 4)), v45);
              v44 += 16;
            }
            while ( v39 != v44 );
            if ( v37 != 0 )
            {
              *(_DWORD *)(a4 + v41 + v31) = *(_DWORD *)(a4 + v41) >> v32;
              if ( v43 < v12 )
              {
                *(_DWORD *)(a4 + v31 + v42) = *(_DWORD *)(a4 + v42) >> v32;
                v46 = v83 + 3;
                if ( (unsigned int)v46 < v12 )
                  *(_DWORD *)(a4 + v31 + 4 * v46) = *(_DWORD *)(a4 + 4 * v46) >> v32;
              }
            }
            if ( ++v32 >= v14 )
              break;
            v31 += 52;
          }
          v4 = v86;
        }
        else
        {
          v32 = v82;
          v33 = a4 + 4;
          while ( 1 )
          {
            v34 = (unsigned int *)(a4 + 4);
            do
            {
              v35 = *v34++;
              v34[(unsigned __int64)v31 / 4 - 1] = v35 >> v32;
            }
            while ( (unsigned int *)(a4 + 4LL * v30 + 8) != v34 );
            if ( ++v32 >= v14 )
              break;
            v31 += 52;
            if ( v30 > 2 )
            {
              v36 = v12 - 1;
              goto LABEL_26;
            }
          }
        }
      }
      goto LABEL_38;
    }
    return -44;
  }
  return v8;
}

