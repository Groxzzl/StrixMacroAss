// sub_14000D570 @ 0x14000D570
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000D570(_DWORD *a1, __m128i *a2, __int64 a3, unsigned __int8 *a4, unsigned __int64 a5, int a6)
{
  __int64 v6; // rdi
  __m128i *v7; // rsi
  const __m128i *v8; // rdx
  __int8 *v10; // rbx
  const __m128i *v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // edx
  unsigned __int8 *v15; // rbx
  unsigned __int64 v16; // r14
  unsigned int v17; // eax
  __m128i *v18; // r15
  __int64 v19; // rax
  size_t v20; // rbx
  unsigned __int64 v21; // rbp
  __m128i *v22; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned __int64 v27; // r8
  unsigned int v28; // edx
  unsigned __int8 *v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // rdx
  unsigned int v33; // ecx
  unsigned __int8 *v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned __int64 v37; // r9
  unsigned int v38; // ecx
  unsigned __int8 *v39; // r10
  __int64 v40; // r11
  __int64 v41; // r10
  int v42; // edi
  __int64 v43; // r9
  int v44; // r8d
  int v45; // edx
  unsigned int v46; // ecx
  signed __int64 v47; // rbx
  __int64 v48; // rbp
  unsigned __int64 v49; // rsi
  unsigned __int8 v50; // r12
  unsigned __int64 v51; // r13
  __int64 v52; // rbp
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // rdx
  __int64 v56; // rdx
  int v57; // r12d
  unsigned int v58; // r13d
  const __m128i *v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // r10
  unsigned int v62; // r11d
  int v63; // r14d
  __int64 v64; // rax
  const __m128i *v65; // r9
  unsigned int v66; // edi
  __int8 *v67; // rcx
  const __m128i *v68; // rax
  signed __int64 v69; // r15
  const void *v70; // rdx
  char *v71; // rax
  __int8 *v72; // rbx
  const __m128i *v73; // rax
  __m128i *v74; // rcx
  __m128i v75; // xmm0
  unsigned int v76; // eax
  unsigned __int8 *v77; // rdx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  unsigned int v81; // edx
  unsigned __int8 *v82; // r8
  __m128i *v83; // r8
  const __m128i *v84; // rdx
  __m128i v85; // xmm4
  __int8 *v86; // rdx
  __int64 *v87; // rax
  __int8 *v88; // rcx
  __int64 v89; // r8
  unsigned int v90; // ecx
  unsigned int v91; // ecx
  unsigned int v92; // edx
  unsigned __int64 v93; // r13
  unsigned __int64 v94; // rdx
  _DWORD *v95; // rax
  __int64 v96; // rcx
  unsigned int v97; // edx
  __m128i *v98; // rcx
  const __m128i *v99; // rax
  __m128i v100; // xmm4
  unsigned __int8 *v101; // [rsp+58h] [rbp-170h]
  unsigned __int64 v102; // [rsp+60h] [rbp-168h]
  unsigned __int64 v103; // [rsp+68h] [rbp-160h]
  const __m128i *v104; // [rsp+70h] [rbp-158h]
  unsigned __int16 v105; // [rsp+7Eh] [rbp-14Ah]
  unsigned __int16 v106; // [rsp+80h] [rbp-148h]
  unsigned __int16 v107; // [rsp+82h] [rbp-146h]
  unsigned int v108; // [rsp+84h] [rbp-144h]
  __int64 v109; // [rsp+88h] [rbp-140h]
  unsigned __int64 v110; // [rsp+90h] [rbp-138h]
  __int64 v111; // [rsp+98h] [rbp-130h]
  __int64 v112; // [rsp+A0h] [rbp-128h]
  __int64 v113; // [rsp+A8h] [rbp-120h]
  __int64 v114; // [rsp+B8h] [rbp-110h]
  unsigned __int64 v115; // [rsp+C0h] [rbp-108h]
  unsigned int v116; // [rsp+C8h] [rbp-100h]
  unsigned int v117; // [rsp+C8h] [rbp-100h]
  unsigned int v118; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 v119; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 v120; // [rsp+D8h] [rbp-F0h]
  const __m128i *v121; // [rsp+E8h] [rbp-E0h] BYREF
  unsigned __int64 v122; // [rsp+148h] [rbp-80h]
  unsigned __int64 v123; // [rsp+150h] [rbp-78h]
  unsigned __int64 v124; // [rsp+158h] [rbp-70h]
  _DWORD *v125; // [rsp+1D0h] [rbp+8h]
  __m128i *v126; // [rsp+1D8h] [rbp+10h]

  v6 = (__int64)a2->m128i_i64 + a3;
  v7 = a2;
  v8 = *((const __m128i **)a1 + 3699);
  v10 = &v8->m128i_i8[*((_QWORD *)a1 + 3703)];
  v109 = v6;
  v121 = v8;
  v103 = (unsigned __int64)v10;
  if ( a6 == 0 )
  {
    v18 = v7;
    v19 = v6;
LABEL_8:
    v20 = v10 - (__int8 *)v8;
    v21 = -70;
    if ( v19 - (__int64)v18 >= v20 )
    {
      if ( v18 != nullptr )
      {
        v22 = v18;
        v18 = (__m128i *)((char *)v18 + v20);
        memcpy(v22, v8, v20);
      }
      return (char *)v18 - (char *)v7;
    }
    return v21;
  }
  v11 = *((const __m128i **)a1 + 3673);
  v12 = (unsigned int)a1[6672];
  a1[7369] = 1;
  v104 = v11;
  v13 = *((_QWORD *)a1 + 3674);
  v123 = v12;
  v114 = v13;
  v115 = *((_QWORD *)a1 + 3675);
  v122 = (unsigned int)a1[6671];
  v124 = (unsigned int)a1[6673];
  if ( a5 == 0 )
    return -20;
  v14 = a4[a5 - 1];
  v16 = *a4;
  switch ( a5 )
  {
    case 1uLL:
      goto LABEL_19;
    case 2uLL:
      goto LABEL_18;
    case 3uLL:
      goto LABEL_17;
    case 4uLL:
      goto LABEL_16;
    case 5uLL:
      goto LABEL_15;
    case 6uLL:
      goto LABEL_14;
    case 7uLL:
      v16 += (unsigned __int64)a4[6] << 48;
LABEL_14:
      v16 += (unsigned __int64)a4[5] << 40;
LABEL_15:
      v16 += (unsigned __int64)a4[4] << 32;
LABEL_16:
      v16 += (unsigned __int64)a4[3] << 24;
LABEL_17:
      v16 += (unsigned __int64)a4[2] << 16;
LABEL_18:
      v16 += (unsigned __int64)a4[1] << 8;
LABEL_19:
      if ( (_BYTE)v14 == 0 )
        return -20;
      _BitScanReverse(&v14, v14);
      v101 = a4;
      v15 = a4;
      v17 = 8 * (9 - a5) - v14;
LABEL_23:
      v24 = (unsigned __int64)(v15 + 8);
      v110 = v24;
      v25 = *(unsigned int *)(*(_QWORD *)a1 + 4LL);
      v111 = *(_QWORD *)a1;
      v26 = v25 + v17;
      v27 = dword_1424230E0[v25] & (unsigned int)(v16 >> -(char)v26);
      if ( v26 <= 0x40 )
      {
        if ( (unsigned __int64)v101 >= v24 )
        {
          v92 = v26;
          v26 &= 7u;
          v101 -= v92 >> 3;
          v16 = *(_QWORD *)v101;
        }
        else if ( a4 != v101 )
        {
          v28 = v26 >> 3;
          v29 = &v101[-(v26 >> 3)];
          if ( v29 < a4 )
          {
            v28 = (_DWORD)v101 - (_DWORD)a4;
            v29 = &v101[-((_DWORD)v101 - (_DWORD)a4)];
          }
          v101 = v29;
          v16 = *(_QWORD *)v29;
          v26 -= 8 * v28;
        }
      }
      v30 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL);
      v112 = *((_QWORD *)a1 + 2);
      v31 = v30 + v26;
      v32 = dword_1424230E0[v30] & (unsigned int)(v16 >> -(char)v31);
      if ( v31 > 0x40 )
        goto LABEL_35;
      if ( (unsigned __int64)v101 >= v24 )
      {
        v91 = v31;
        v31 &= 7u;
        v101 -= v91 >> 3;
        v16 = *(_QWORD *)v101;
      }
      else
      {
        if ( a4 == v101 )
        {
          v96 = *(unsigned int *)(*((_QWORD *)a1 + 1) + 4LL);
          v113 = *((_QWORD *)a1 + 1);
          v36 = v96 + v31;
          v37 = dword_1424230E0[v96] & (unsigned int)(v16 >> -(char)v36);
          goto LABEL_41;
        }
        v33 = v31 >> 3;
        v34 = &v101[-(v31 >> 3)];
        if ( v34 < a4 )
        {
          v33 = (_DWORD)v101 - (_DWORD)a4;
          v34 = &v101[-((_DWORD)v101 - (_DWORD)a4)];
        }
        v101 = v34;
        v16 = *(_QWORD *)v34;
        v31 -= 8 * v33;
      }
LABEL_35:
      v35 = *(unsigned int *)(*((_QWORD *)a1 + 1) + 4LL);
      v113 = *((_QWORD *)a1 + 1);
      v36 = v35 + v31;
      v37 = dword_1424230E0[v35] & (unsigned int)(v16 >> -(char)v36);
      if ( v36 <= 0x40 )
      {
        if ( (unsigned __int64)v101 >= v24 )
        {
          v90 = v36;
          v36 &= 7u;
          v101 -= v90 >> 3;
          v16 = *(_QWORD *)v101;
        }
        else if ( a4 != v101 )
        {
          v38 = v36 >> 3;
          v39 = &v101[-(v36 >> 3)];
          if ( v39 < a4 )
          {
            v38 = (_DWORD)v101 - (_DWORD)a4;
            v39 = &v101[-((_DWORD)v101 - (_DWORD)a4)];
          }
          v101 = v39;
          v16 = *(_QWORD *)v39;
          v36 -= 8 * v38;
        }
      }
LABEL_41:
      v102 = v16;
      v18 = v7;
      v125 = a1;
      v126 = v7;
      break;
    default:
      if ( (_BYTE)v14 == 0 || a5 > 0xFFFFFFFFFFFFFF88uLL )
        return -20;
      _BitScanReverse(&v14, v14);
      v15 = a4;
      v101 = &a4[a5 - 8];
      v16 = *(_QWORD *)v101;
      v17 = 8 - v14;
      goto LABEL_23;
  }
  while ( 1 )
  {
    v40 = v111 + 8 * v27 + 8;
    v41 = v113 + 8 * v37 + 8;
    v42 = *(unsigned __int8 *)(v111 + 8 * v27 + 10);
    v43 = v112 + 8 * v32 + 8;
    v44 = *(unsigned __int8 *)(v41 + 2);
    v45 = *(unsigned __int8 *)(v112 + 8 * v32 + 10);
    v46 = *(_DWORD *)(v40 + 4);
    v47 = *(unsigned int *)(v41 + 4);
    v48 = *(unsigned int *)(v43 + 4);
    v49 = v122;
    v50 = v45 + v42 + v44;
    if ( (unsigned __int8)v45 > 1u )
    {
      v51 = v102 << v36;
      v36 += v45;
      v52 = (v51 >> -(char)v45) + v48;
      goto LABEL_44;
    }
    if ( (_BYTE)v45 == 1 )
    {
      v93 = v102 << v36++;
      v94 = (v93 >> 63) + (v46 == 0) + (unsigned int)v48;
      if ( v94 == 3 )
      {
        v52 = v122 - 1 + (v122 == 1);
      }
      else
      {
        v52 = (*(&v122 + v94) == 0) + *(&v122 + v94);
        if ( v94 == 1 )
          goto LABEL_45;
      }
LABEL_44:
      v124 = v123;
LABEL_45:
      v122 = v52;
      v123 = v49;
      v49 = v52;
      goto LABEL_46;
    }
    if ( v46 == 0 )
    {
      v79 = v123;
      v123 = v122;
      v122 = v79;
      v49 = v79;
    }
LABEL_46:
    if ( (_BYTE)v44 != 0 )
    {
      v53 = v102 << v36;
      v36 += v44;
      v47 += v53 >> -(char)v44;
    }
    if ( v50 > 0x1Eu && v36 <= 0x40 )
    {
      if ( (unsigned __int64)v101 >= v110 )
      {
        v97 = v36;
        v36 &= 7u;
        v101 -= v97 >> 3;
        v102 = *(_QWORD *)v101;
      }
      else if ( a4 != v101 )
      {
        v81 = v36 >> 3;
        v82 = &v101[-(v36 >> 3)];
        if ( v82 < a4 )
        {
          v81 = (_DWORD)v101 - (_DWORD)a4;
          v82 = &v101[-((_DWORD)v101 - (_DWORD)a4)];
        }
        v101 = v82;
        v36 -= 8 * v81;
        v102 = *(_QWORD *)v82;
      }
    }
    v54 = v46;
    if ( (_BYTE)v42 != 0 )
    {
      v55 = v102 << v36;
      v36 += v42;
      v54 = (v55 >> -(char)v42) + v46;
    }
    v56 = *(unsigned __int8 *)(v40 + 3);
    v21 = v54 + v47;
    v57 = v56 + v36;
    v105 = *(_WORD *)v40;
    v58 = dword_1424230E0[v56];
    v59 = v121;
    v106 = *(_WORD *)v41;
    v60 = *(unsigned __int8 *)(v41 + 3);
    v61 = (unsigned __int64)v18->m128i_u64 + v54 + v47;
    v62 = dword_1424230E0[v60];
    v63 = v57 + v60;
    v107 = *(_WORD *)v43;
    v64 = *(unsigned __int8 *)(v43 + 3);
    v65 = (const __m128i *)((char *)v121 + v54);
    v66 = v63 + v64;
    v108 = dword_1424230E0[v64];
    if ( v103 < (unsigned __int64)v121->m128i_u64 + v54 || v109 - 32 < v61 )
    {
      v117 = v62;
      v80 = sub_14000BE60((unsigned __int64)v18, v109, v54, v47, (char *)v49, &v121, v103, v104, v114, v115);
      v62 = v117;
      v21 = v80;
      v18 = (__m128i *)((char *)v18 + v80);
      goto LABEL_63;
    }
    v67 = &v18->m128i_i8[v54];
    v68 = (__m128i *)((char *)v18 + v54 - v49);
    *v18 = _mm_loadu_si128(v121);
    if ( v54 > 0x10 )
    {
      v18[1] = _mm_loadu_si128(v59 + 1);
      if ( (__int64)(v54 - 16) > 16 )
      {
        v83 = v18 + 2;
        v84 = v59 + 2;
        do
        {
          v85 = _mm_loadu_si128(v84);
          v83 += 2;
          v84 += 2;
          v83[-2] = v85;
          v83[-1] = _mm_loadu_si128(v84 - 1);
        }
        while ( v83 < (__m128i *)v67 );
      }
    }
    v121 = v65;
    if ( v67 - (__int8 *)v104 >= v49 )
      goto LABEL_58;
    if ( (unsigned __int64)&v67[-v114] < v49 )
    {
      if ( v66 > 0x40 || (unsigned __int64)v101 >= v110 || a4 == v101 )
        return -20;
      v18 = (__m128i *)((char *)v18 - 20);
      v21 = -20;
      goto LABEL_66;
    }
    v69 = (char *)v68 - (char *)v104;
    v70 = (const void *)(v115 + (char *)v68 - (char *)v104);
    if ( v115 < (unsigned __int64)v70 + v47 )
    {
      v120 = v61;
      v47 += v69;
      v118 = v62;
      v71 = (char *)memmove(v67, v70, (char *)v104 - (char *)v68);
      v61 = v120;
      v62 = v118;
      v67 = &v71[-v69];
      v68 = v104;
LABEL_58:
      if ( v49 <= 0xF )
      {
        if ( v49 <= 7 )
        {
          *v67 = v68->m128i_i8[0];
          v67[1] = v68->m128i_i8[1];
          v67[2] = v68->m128i_i8[2];
          v67[3] = v68->m128i_i8[3];
          v95 = (__int32 *)((char *)v68->m128i_i32 + dword_142423E40[v49]);
          *((_DWORD *)v67 + 1) = *v95;
          v68 = (const __m128i *)((char *)v95 - dword_142423E60[v49]);
        }
        else
        {
          *(_QWORD *)v67 = v68->m128i_i64[0];
        }
        if ( (unsigned __int64)v47 > 8 )
        {
          v86 = &v67[v47];
          if ( v67 - (__int8 *)v68 > 15 )
          {
            *(__m128i *)(v67 + 8) = _mm_loadu_si128((const __m128i *)&v68->m128i_u64[1]);
            if ( v47 - 8 > 16 )
            {
              v98 = (__m128i *)(v67 + 24);
              v99 = (const __m128i *)((char *)v68 + 24);
              do
              {
                v100 = _mm_loadu_si128(v99);
                v98 += 2;
                v99 += 2;
                v98[-2] = v100;
                v98[-1] = _mm_loadu_si128(v99 - 1);
              }
              while ( v98 < (__m128i *)v86 );
            }
          }
          else
          {
            v87 = &v68->m128i_i64[1];
            v88 = v67 + 8;
            do
            {
              v89 = *v87;
              v88 += 8;
              ++v87;
              *((_QWORD *)v88 - 1) = v89;
            }
            while ( v88 < v86 );
          }
        }
      }
      else
      {
        *(__m128i *)v67 = _mm_loadu_si128(v68);
        if ( v47 > 16 )
        {
          v72 = &v67[v47];
          v73 = v68 + 1;
          v74 = (__m128i *)(v67 + 16);
          do
          {
            v75 = _mm_loadu_si128(v73);
            v74 += 2;
            v73 += 2;
            v74[-2] = v75;
            v74[-1] = _mm_loadu_si128(v73 - 1);
          }
          while ( v74 < (__m128i *)v72 );
        }
      }
      goto LABEL_62;
    }
    v119 = v61;
    v116 = v62;
    memmove(v67, v70, v47);
    v62 = v116;
    v61 = v119;
LABEL_62:
    v18 = (__m128i *)v61;
LABEL_63:
    if ( v66 > 0x40 )
      goto LABEL_75;
    if ( (unsigned __int64)v101 >= v110 )
    {
      v101 -= v66 >> 3;
      v36 = v66 & 7;
      v78 = *(_QWORD *)v101;
      goto LABEL_69;
    }
    if ( a4 == v101 )
    {
LABEL_75:
      v78 = v102;
      v36 = v66;
      goto LABEL_69;
    }
LABEL_66:
    v76 = v66 >> 3;
    v77 = &v101[-(v66 >> 3)];
    if ( v77 < a4 )
    {
      v76 = (_DWORD)v101 - (_DWORD)a4;
      v77 = &v101[-((_DWORD)v101 - (_DWORD)a4)];
    }
    v101 = v77;
    v36 = v66 - 8 * v76;
    v78 = *(_QWORD *)v77;
LABEL_69:
    if ( v21 > 0xFFFFFFFFFFFFFF88uLL )
      return v21;
    v27 = ((unsigned int)(v102 >> -(char)v57) & v58) + (unsigned __int64)v105;
    v37 = v106 + (unsigned __int64)(v62 & (unsigned int)(v102 >> -(char)v63));
    v32 = ((unsigned int)(v102 >> -(char)v66) & v108) + (unsigned __int64)v107;
    if ( --a6 == 0 )
      break;
    v102 = v78;
  }
  v7 = v126;
  if ( v36 > 0x40 || (unsigned __int64)v101 < v110 && a4 == v101 && v36 == 64 )
  {
    v8 = v121;
    v10 = (__int8 *)v103;
    v125[6671] = v122;
    v125[6672] = v123;
    v125[6673] = v124;
    v19 = v109;
    goto LABEL_8;
  }
  return -20;
}

