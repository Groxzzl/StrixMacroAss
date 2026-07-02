// sub_140004060 @ 0x140004060
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140004060(unsigned int *a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  int *v8; // r9
  unsigned __int64 v9; // r13
  size_t v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int8 *v12; // rdx
  unsigned int v13; // ebp
  int v14; // r12d
  char v15; // r14
  int v16; // edi
  int v17; // r11d
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // r10d
  int v31; // r9d
  int v32; // eax
  int v33; // r8d
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  int v44; // edx
  int v45; // eax
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // rdx
  _DWORD *v50; // r9
  char v51; // r15
  __int64 v52; // rcx
  int v53; // r12d
  int v54; // ebp
  unsigned __int8 v55; // dl
  int v56; // r8d
  int v57; // edi
  int v58; // eax
  __int64 v59; // r10
  char v60; // r13
  unsigned __int64 v62; // rax
  unsigned int v63; // r10d
  unsigned int v64; // r8d
  __int64 v65; // rax
  _BYTE *v66; // rax
  __int64 v67; // rdx
  int v68; // r13d
  int v69; // r10d
  int v70; // edx
  __int64 v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // rax
  int v74; // r13d
  int v75; // r14d
  int v76; // edi
  unsigned int v77; // edx
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  __m128i *v80; // rax
  int v81; // eax
  _BYTE *v82; // rdi
  int v83; // r10d
  int v84; // edi
  int v85; // r14d
  int v86; // edx
  int v87; // r10d
  __int64 v88; // rax
  __int64 v89; // rbp
  int v90; // eax
  int v91; // edx
  int v92; // eax
  int v93; // edx
  int v94; // eax
  int v95; // edx
  int v96; // eax
  int v97; // edx
  int v98; // eax
  int v99; // edx
  int v100; // eax
  int v101; // edx
  int v102; // eax
  int v103; // edx
  unsigned int v104; // ebp
  unsigned int v105; // edx
  int v106; // eax
  __int64 v107; // rax
  unsigned int v108; // eax
  int v109; // eax
  __int64 v110; // [rsp+48h] [rbp-70h]
  int v111; // [rsp+54h] [rbp-64h]
  unsigned __int64 v112; // [rsp+58h] [rbp-60h]
  unsigned int v113; // [rsp+68h] [rbp-50h] BYREF
  int v114[19]; // [rsp+6Ch] [rbp-4Ch] BYREF

  v113 = 0;
  v114[0] = 0;
  v8 = (int *)(a4 + 128);
  if ( a5 == 0 )
  {
    v9 = -72;
    if ( a3 == 0 )
      return v9;
    v10 = *a2;
    if ( v10 <= 0x7F )
    {
      if ( a3 < v10 + 1 )
        return v9;
      v62 = sub_140002220((_BYTE *)(a4 + 740), (unsigned int *)(a2 + 1), v10, v8);
      v9 = v62;
      if ( v62 > 0xFFFFFFFFFFFFFF88uLL )
        return v9;
      *(_DWORD *)(a4 + 48) = 0;
      *(_OWORD *)a4 = 0;
      *(_OWORD *)(a4 + 16) = 0;
      *(_OWORD *)(a4 + 32) = 0;
      if ( v62 == 0 )
        return -20;
    }
    else
    {
      if ( a3 < (v10 >> 1) - 62 )
        return v9;
      v9 = v10 - 127;
      v10 = (v10 >> 1) - 63;
      v11 = 0;
      do
      {
        v12 = &a2[((unsigned int)v11 >> 1) + 1];
        *(_BYTE *)(a4 + v11 + 740) = *v12 >> 4;
        *(_BYTE *)(a4 + v11 + 741) = *v12 & 0xF;
        v11 += 2LL;
      }
      while ( v11 < v9 );
      *(_DWORD *)(a4 + 48) = 0;
      *(_OWORD *)a4 = 0;
      *(_OWORD *)(a4 + 16) = 0;
      *(_OWORD *)(a4 + 32) = 0;
    }
    v63 = 0;
    v64 = 0;
    v65 = 0;
    do
    {
      v66 = (_BYTE *)(a4 + 740 + v65);
      v67 = (unsigned __int8)*v66;
      if ( (unsigned __int8)v67 > 0xBu )
        return -20;
      ++*(_DWORD *)(a4 + 4 * v67);
      v64 += 1 << *v66 >> 1;
      v65 = ++v63;
    }
    while ( v63 < v9 );
    if ( v64 != 0 )
    {
      _BitScanReverse(&v104, v64);
      v13 = v104 + 1;
      if ( v13 <= 0xC )
      {
        v105 = (1 << v13) - v64;
        _BitScanReverse((unsigned int *)&v106, v105);
        if ( v105 == 1 << v106 )
        {
          v107 = (unsigned int)(v106 + 1);
          *(_BYTE *)(a4 + v9 + 740) = v107;
          ++*(_DWORD *)(a4 + 4 * v107);
          v108 = *(_DWORD *)(a4 + 4);
          if ( v108 > 1 && (v108 & 1) == 0 )
          {
            v109 = v9 + 1;
            v9 = v10 + 1;
            v114[0] = v109;
            goto LABEL_10;
          }
        }
      }
    }
    return -20;
  }
  v9 = sub_140003E60((_BYTE *)(a4 + 740), a4, v114, &v113, a2, a3, v8);
  if ( v9 > 0xFFFFFFFFFFFFFF88uLL )
    return v9;
  v13 = v113;
LABEL_10:
  if ( (unsigned int)(unsigned __int8)*a1 + 1 < v13 )
    return -44;
  v14 = v114[0];
  v15 = v13;
  v16 = v114[0] - 3;
  *a1 = ((unsigned __int8)v13 << 16) | *a1 & 0xFF0000FF;
  v17 = *(_DWORD *)a4;
  *(_DWORD *)(a4 + 64) = 0;
  if ( v13 != 0 )
  {
    *(_DWORD *)(a4 + 68) = v17;
    if ( v13 == 1 )
      goto LABEL_19;
    v18 = v17 + *(_DWORD *)(a4 + 4);
    v19 = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 72) = v18;
    if ( v13 == 2 )
      goto LABEL_19;
    v20 = v19 + v18;
    v21 = *(_DWORD *)(a4 + 12);
    *(_DWORD *)(a4 + 76) = v20;
    if ( v13 == 3 )
      goto LABEL_19;
    v22 = v21 + v20;
    v23 = *(_DWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 80) = v22;
    if ( v13 == 4 )
      goto LABEL_19;
    v24 = v23 + v22;
    v25 = *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 84) = v24;
    if ( v13 == 5 )
      goto LABEL_19;
    v26 = v25 + v24;
    v27 = *(_DWORD *)(a4 + 24);
    *(_DWORD *)(a4 + 88) = v26;
    if ( v13 == 6 )
      goto LABEL_19;
    v28 = v27 + v26;
    v29 = *(_DWORD *)(a4 + 28);
    *(_DWORD *)(a4 + 92) = v28;
    if ( v13 == 7 )
      goto LABEL_19;
    v90 = v29 + v28;
    v91 = *(_DWORD *)(a4 + 32);
    *(_DWORD *)(a4 + 96) = v90;
    if ( v13 == 8 )
      goto LABEL_19;
    v92 = v91 + v90;
    v93 = *(_DWORD *)(a4 + 36);
    *(_DWORD *)(a4 + 100) = v92;
    if ( v13 == 9 )
      goto LABEL_19;
    v94 = v93 + v92;
    v95 = *(_DWORD *)(a4 + 40);
    *(_DWORD *)(a4 + 104) = v94;
    if ( v13 == 10 )
      goto LABEL_19;
    v96 = v95 + v94;
    v97 = *(_DWORD *)(a4 + 44);
    *(_DWORD *)(a4 + 108) = v96;
    if ( v13 == 11 )
      goto LABEL_19;
    v98 = v97 + v96;
    v99 = *(_DWORD *)(a4 + 48);
    *(_DWORD *)(a4 + 112) = v98;
    if ( v13 == 12
      || (v100 = v99 + v98, v101 = *(_DWORD *)(a4 + 52), *(_DWORD *)(a4 + 116) = v100, v13 == 13)
      || (v102 = v101 + v100, v103 = *(_DWORD *)(a4 + 56), *(_DWORD *)(a4 + 120) = v102, v13 == 14) )
    {
LABEL_19:
      if ( v16 <= 0 )
      {
LABEL_72:
        if ( v14 <= 0 )
          goto LABEL_27;
        v32 = 0;
        goto LABEL_23;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 124) = v103 + v102;
      if ( v16 <= 0 )
        goto LABEL_72;
    }
LABEL_20:
    v30 = 3;
    v31 = 2;
    v32 = 0;
    v33 = 1;
    do
    {
      v34 = *(unsigned __int8 *)(a4 + v32 + 740) + 16LL;
      v35 = *(unsigned int *)(a4 + 4 * v34);
      *(_DWORD *)(a4 + 4 * v34) = v35 + 1;
      *(_BYTE *)(a4 + v35 + 484) = v32;
      v32 += 4;
      v36 = *(unsigned __int8 *)(a4 + v33 + 740) + 16LL;
      v37 = *(unsigned int *)(a4 + 4 * v36);
      *(_DWORD *)(a4 + 4 * v36) = v37 + 1;
      *(_BYTE *)(a4 + v37 + 484) = v33;
      v33 += 4;
      v38 = *(unsigned __int8 *)(a4 + v31 + 740) + 16LL;
      v39 = *(unsigned int *)(a4 + 4 * v38);
      *(_DWORD *)(a4 + 4 * v38) = v39 + 1;
      *(_BYTE *)(a4 + v39 + 484) = v31;
      v31 += 4;
      v40 = *(unsigned __int8 *)(a4 + v30 + 740) + 16LL;
      v41 = *(unsigned int *)(a4 + 4 * v40);
      *(_DWORD *)(a4 + 4 * v40) = v41 + 1;
      *(_BYTE *)(a4 + v41 + 484) = v30;
      v30 += 4;
    }
    while ( v16 > v32 );
    v15 = v13;
    if ( v14 <= v32 )
      goto LABEL_26;
    goto LABEL_23;
  }
  if ( v16 > 0 )
    goto LABEL_20;
  if ( v14 <= 0 )
    return v9;
  v32 = 0;
LABEL_23:
  v42 = *(unsigned __int8 *)(a4 + v32 + 740) + 16LL;
  v43 = *(unsigned int *)(a4 + 4 * v42);
  *(_DWORD *)(a4 + 4 * v42) = v43 + 1;
  *(_BYTE *)(a4 + v43 + 484) = v32;
  v44 = v32 + 1;
  if ( v14 > v32 + 1 )
  {
    v45 = v32 + 2;
    v46 = *(unsigned __int8 *)(a4 + v44 + 740) + 16LL;
    v47 = *(unsigned int *)(a4 + 4 * v46);
    *(_DWORD *)(a4 + 4 * v46) = v47 + 1;
    *(_BYTE *)(a4 + v47 + 484) = v44;
    if ( v14 > v45 )
    {
      v48 = *(unsigned __int8 *)(a4 + v45 + 740) + 16LL;
      v49 = *(unsigned int *)(a4 + 4 * v48);
      *(_DWORD *)(a4 + 4 * v48) = v49 + 1;
      *(_BYTE *)(a4 + v49 + 484) = v45;
    }
  }
LABEL_26:
  if ( v13 != 0 )
  {
LABEL_27:
    v112 = v9;
    v50 = a1 + 1;
    v51 = v15 + 1;
    v110 = v13 + 1;
    v52 = 1;
    v53 = 0;
    while ( 1 )
    {
      v54 = *(_DWORD *)(a4 + 4 * v52);
      v55 = v51 - v52;
      v56 = 1 << v52 >> 1;
      if ( v56 == 4 )
      {
        if ( v54 > 0 )
        {
          v111 = *(_DWORD *)(a4 + 4 * v52);
          v84 = v17;
          v85 = v53 + 4 * v54;
          v86 = v55 << 8;
          v87 = v53;
          do
          {
            v88 = v84;
            v89 = v87;
            v87 += 4;
            ++v84;
            *(_QWORD *)((char *)v50 + 2 * v89) = 0x1000100010001LL * (v86 + *(unsigned __int8 *)(a4 + v88 + 484));
          }
          while ( v87 != v85 );
          v54 = v111;
          v17 += v111;
          goto LABEL_36;
        }
      }
      else if ( v56 > 4 )
      {
        if ( v56 != 8 )
        {
LABEL_51:
          if ( v54 > 0 )
          {
            v74 = v17;
            v75 = v53;
            v76 = v55 << 8;
            v17 += v54;
            do
            {
              v77 = 0;
              v78 = (__m128i)(unsigned __int64)(0x1000100010001LL * (v76 + *(unsigned __int8 *)(a4 + v74 + 484)));
              v79 = _mm_unpacklo_epi64(v78, v78);
              v80 = (__m128i *)((char *)a1 + 2 * v75 + 4);
              do
              {
                ++v77;
                *v80 = v79;
                v80 += 2;
                v80[-1] = v79;
              }
              while ( v77 < ((unsigned int)(v56 - 1) >> 4) + 1 );
              ++v74;
              v75 += v56;
            }
            while ( v74 != v17 );
            goto LABEL_36;
          }
          goto LABEL_35;
        }
        if ( v54 > 0 )
        {
          v68 = v17;
          v69 = v53;
          v70 = v55 << 8;
          do
          {
            v71 = v68++;
            v72 = (__m128i)(unsigned __int64)(0x1000100010001LL * (v70 + *(unsigned __int8 *)(a4 + v71 + 484)));
            v73 = v69;
            v69 += 8;
            *(__m128i *)((char *)v50 + 2 * v73) = _mm_unpacklo_epi64(v72, v72);
          }
          while ( v69 != v53 + 8 * v54 );
        }
      }
      else if ( v56 == 1 )
      {
        v81 = v53;
        if ( v54 > 0 )
        {
          do
          {
            v82 = (char *)v50 + 2 * v81;
            v83 = v17 - v53 + v81++;
            LOBYTE(v83) = *(_BYTE *)(a4 + v83 + 484);
            v82[1] = v55;
            *v82 = v83;
          }
          while ( v81 != v54 + v53 );
        }
      }
      else
      {
        if ( v56 != 2 )
          goto LABEL_51;
        if ( v54 > 0 )
        {
          v57 = v17;
          v58 = v53;
          do
          {
            v59 = v57++;
            v60 = *(_BYTE *)(a4 + v59 + 484);
            *((_BYTE *)v50 + 2 * v58 + 1) = v55;
            *((_BYTE *)v50 + 2 * v58) = v60;
            LODWORD(v59) = v58 + 1;
            v58 += 2;
            *((_BYTE *)v50 + 2 * (int)v59) = v60;
            *((_BYTE *)v50 + 2 * (int)v59 + 1) = v55;
          }
          while ( v58 != v53 + 2 * v54 );
        }
      }
LABEL_35:
      v17 += v54;
LABEL_36:
      ++v52;
      v53 += v54 * v56;
      if ( v110 == v52 )
        return v112;
    }
  }
  return v9;
}

