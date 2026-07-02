// sub_14000BFC0 @ 0x14000BFC0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000BFC0(
        __int64 *a1,
        __m128i *a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        int a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  const __m128i *v8; // rdx
  __int64 *v9; // rbx
  unsigned __int64 v10; // rax
  const __m128i *v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int8 *v15; // r11
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  __m128i *v18; // rdi
  unsigned __int64 v19; // rbx
  size_t v20; // rbx
  __int64 v21; // rsi
  __m128i *v22; // rcx
  int v24; // esi
  __int64 v25; // r13
  int v26; // edx
  int v27; // edi
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  unsigned __int8 *v30; // rdx
  int v31; // r9d
  __int64 v32; // r12
  int v33; // ebp
  unsigned int v34; // r9d
  unsigned int v35; // edx
  unsigned __int8 *v36; // r8
  int v37; // edx
  __int64 v38; // r8
  __int64 v39; // r10
  unsigned int v40; // edx
  unsigned int v41; // esi
  unsigned int v42; // r15d
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  unsigned __int8 *v46; // r12
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  size_t *v50; // r10
  char v51; // cl
  unsigned __int64 v52; // r8
  size_t v53; // r13
  char v54; // cl
  size_t v55; // rbp
  char v56; // cl
  unsigned __int64 v57; // rdi
  __int64 v58; // r9
  size_t v59; // rax
  const char *v60; // rdi
  __int64 v61; // rdx
  char v62; // cl
  int v63; // r15d
  __int64 v64; // rdx
  __int64 v65; // r9
  unsigned int v66; // ecx
  __int64 v67; // r11
  int v68; // ebx
  unsigned __int16 *v69; // rsi
  int v70; // edi
  unsigned __int16 *v71; // rbx
  int v72; // ebp
  unsigned int v73; // eax
  unsigned __int16 *v74; // r11
  int v75; // edx
  __int64 v76; // r9
  unsigned int v77; // ecx
  __m128i *v78; // r13
  unsigned int v79; // ecx
  unsigned __int8 *v80; // r8
  unsigned __int16 *v81; // r11
  int v82; // r10d
  size_t v83; // r12
  unsigned __int16 *v84; // r8
  int v85; // ebx
  size_t v86; // rbp
  unsigned __int16 *v87; // rdx
  int v88; // eax
  __int64 v89; // r9
  unsigned __int8 v90; // si
  char v91; // cl
  __m128 v92; // xmm0
  char v93; // cl
  char v94; // cl
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // r10
  unsigned __int64 v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int64 v100; // r8
  __int64 v101; // rax
  signed __int64 v102; // rsi
  const __m128i *v103; // rax
  unsigned __int64 v104; // r11
  const __m128i *v105; // rdx
  unsigned __int64 v106; // r9
  __int8 *v107; // rcx
  const __m128i *v108; // rbx
  signed __int64 v109; // rbx
  const void *v110; // rdx
  char *v111; // rax
  __int8 *v112; // rsi
  const __m128i *v113; // rbx
  __m128i *v114; // rcx
  __m128i v115; // xmm2
  size_t v116; // rbx
  unsigned int v117; // esi
  __int64 v118; // rdi
  char v119; // cl
  __int64 v120; // rdx
  int v121; // r15d
  __int64 v122; // r9
  const char *v123; // r8
  unsigned __int64 v124; // rax
  char v125; // cl
  unsigned int v126; // esi
  unsigned __int64 v127; // rdx
  __int64 v128; // rcx
  unsigned int v129; // eax
  __int64 v130; // rcx
  __m128 v131; // xmm1
  unsigned int v132; // ecx
  unsigned int v133; // eax
  unsigned __int8 *v134; // rcx
  __int64 v135; // rax
  __m128i *v136; // r8
  const __m128i *v137; // rax
  __m128i v138; // xmm1
  unsigned __int64 v139; // rax
  __int64 *v140; // r8
  unsigned __int64 v141; // rsi
  char *v142; // r9
  unsigned __int64 v143; // rsi
  __int64 v144; // rax
  char v145; // cl
  unsigned __int64 v146; // rdx
  __int64 v147; // rcx
  unsigned int v148; // eax
  int v149; // ebp
  __m128i *v150; // r12
  unsigned __int64 v151; // rsi
  unsigned __int64 v152; // r8
  signed __int64 v153; // rdi
  unsigned __int64 v154; // r13
  const __m128i *v155; // rax
  unsigned __int64 v156; // r14
  const __m128i *v157; // rdx
  __m128i *v158; // rcx
  const __m128i *v159; // rbx
  signed __int64 v160; // rbx
  const void *v161; // rdx
  signed __int64 v162; // r8
  __m128i *v163; // rdi
  const __m128i *v164; // rbx
  __m128i *v165; // rcx
  __m128i v166; // xmm4
  __m128 v167; // xmm0
  char v168; // cl
  unsigned __int64 v169; // rax
  __int64 v170; // rcx
  __m128 v171; // xmm0
  _DWORD *v172; // rax
  __int64 v173; // rdx
  __m128i *v174; // r8
  const __m128i *v175; // rax
  __m128i v176; // xmm1
  unsigned int v177; // eax
  __int32 *v178; // rax
  unsigned __int64 v179; // rax
  __int64 *v180; // r13
  unsigned __int64 v181; // rdi
  __int64 *v182; // r8
  __int64 v183; // rax
  unsigned __int64 v184; // rdx
  __int64 v185; // rdx
  __m128i *v186; // rcx
  const __m128i *v187; // rbx
  __m128i v188; // xmm5
  __m128i *v189; // rcx
  const __m128i *v190; // rbx
  __m128i v191; // xmm1
  signed __int64 v192; // [rsp+58h] [rbp-220h]
  unsigned __int64 v193; // [rsp+58h] [rbp-220h]
  const __m128i *v194; // [rsp+60h] [rbp-218h]
  unsigned __int64 v195; // [rsp+68h] [rbp-210h] BYREF
  unsigned __int64 v196; // [rsp+70h] [rbp-208h]
  unsigned __int64 v197; // [rsp+78h] [rbp-200h]
  unsigned __int8 *v198; // [rsp+80h] [rbp-1F8h]
  unsigned __int8 *v199; // [rsp+88h] [rbp-1F0h]
  __int64 v200; // [rsp+90h] [rbp-1E8h]
  __int64 v201; // [rsp+98h] [rbp-1E0h]
  __int64 v202; // [rsp+A0h] [rbp-1D8h]
  unsigned __int64 v203; // [rsp+A8h] [rbp-1D0h]
  int v204; // [rsp+B4h] [rbp-1C4h]
  unsigned __int16 v205; // [rsp+BAh] [rbp-1BEh]
  int v206; // [rsp+BCh] [rbp-1BCh]
  unsigned int v207; // [rsp+C0h] [rbp-1B8h]
  int v208; // [rsp+C4h] [rbp-1B4h]
  unsigned int v209; // [rsp+C8h] [rbp-1B0h]
  unsigned __int16 v210; // [rsp+CCh] [rbp-1ACh]
  unsigned __int16 v211; // [rsp+CEh] [rbp-1AAh]
  int v212; // [rsp+D0h] [rbp-1A8h]
  unsigned int v213; // [rsp+D4h] [rbp-1A4h]
  __int64 v214; // [rsp+D8h] [rbp-1A0h]
  __int64 v215; // [rsp+E0h] [rbp-198h]
  unsigned __int64 v216; // [rsp+E8h] [rbp-190h]
  signed __int64 v217; // [rsp+F0h] [rbp-188h]
  unsigned __int64 v218; // [rsp+F8h] [rbp-180h]
  unsigned __int64 v219; // [rsp+100h] [rbp-178h]
  unsigned __int64 v220; // [rsp+108h] [rbp-170h]
  const __m128i *v221; // [rsp+118h] [rbp-160h] BYREF
  size_t v222[27]; // [rsp+120h] [rbp-158h] BYREF
  __m128i v223; // [rsp+1F8h] [rbp-80h] BYREF
  __int64 v224; // [rsp+208h] [rbp-70h]
  __int64 *v225; // [rsp+280h] [rbp+8h]
  __int64 *v226; // [rsp+280h] [rbp+8h]

  v6 = a1[3703];
  v7 = (__int64)a2->m128i_i64 + a3;
  v8 = (const __m128i *)a1[3699];
  v9 = a1;
  v214 = v7;
  v10 = (unsigned __int64)v8->m128i_u64 + v6;
  v221 = v8;
  v203 = v10;
  if ( a6 != 0 )
  {
    v11 = (const __m128i *)a1[3673];
    v12 = _mm_loadl_epi64((const __m128i *)((char *)a1 + 26684));
    *((_DWORD *)a1 + 7369) = 1;
    v194 = v11;
    v13 = a1[3674];
    v223 = _mm_unpacklo_epi32(v12, (__m128i)0LL);
    v215 = v13;
    v196 = a1[3675];
    v224 = *((unsigned int *)a1 + 6673);
    if ( a5 != 0 )
    {
      v14 = a4[a5 - 1];
      v16 = *a4;
      switch ( a5 )
      {
        case 1uLL:
          goto LABEL_22;
        case 2uLL:
          goto LABEL_21;
        case 3uLL:
          goto LABEL_20;
        case 4uLL:
          goto LABEL_19;
        case 5uLL:
          goto LABEL_18;
        case 6uLL:
          goto LABEL_17;
        case 7uLL:
          v16 += (unsigned __int64)a4[6] << 48;
LABEL_17:
          v16 += (unsigned __int64)a4[5] << 40;
LABEL_18:
          v16 += (unsigned __int64)a4[4] << 32;
LABEL_19:
          v16 += (unsigned __int64)a4[3] << 24;
LABEL_20:
          v16 += (unsigned __int64)a4[2] << 16;
LABEL_21:
          v16 += (unsigned __int64)a4[1] << 8;
LABEL_22:
          if ( (_BYTE)v14 == 0 )
            return -20;
          _BitScanReverse(&v14, v14);
          v15 = a4;
          v17 = 8 * (9 - a5) - v14;
LABEL_24:
          v25 = *v9;
          v26 = 4;
          if ( a6 <= 4 )
            v26 = a6;
          v27 = *(_DWORD *)(v25 + 4);
          v204 = v26;
          v28 = v27 + v17;
          v199 = a4 + 8;
          if ( v28 > 0x40 )
          {
            v195 = v16;
            v31 = v28;
          }
          else if ( v15 >= a4 + 8 )
          {
            v31 = v28 & 7;
            v15 -= v28 >> 3;
            v195 = *(_QWORD *)v15;
          }
          else
          {
            if ( a4 == v15 )
            {
              v32 = v9[2];
              v195 = v16;
              v33 = *(_DWORD *)(v32 + 4);
              v34 = v28 + v33;
              if ( v28 + v33 > 0x40 )
              {
                v197 = v16;
                v37 = v28 + v33;
                goto LABEL_38;
              }
LABEL_34:
              if ( a4 == v15 )
              {
                v38 = v9[1];
                v39 = *(unsigned int *)(v38 + 4);
                v42 = v34 + v39;
                if ( v34 + (unsigned int)v39 <= 0x40 )
                {
                  v43 = v195;
                  LOBYTE(v40) = v34 + v39;
                  v197 = v195;
                  v198 = a4;
                  goto LABEL_44;
                }
LABEL_142:
                if ( a6 > 0 )
                  return -20;
                v18 = a2;
                v24 = 0;
LABEL_144:
                v149 = v24 - v204;
                if ( a6 <= v24 - v204 )
                {
LABEL_160:
                  v8 = v221;
                  v167 = (__m128)_mm_loadu_si128(&v223);
                  *((_DWORD *)v9 + 6673) = v224;
                  *(__int64 *)((char *)v9 + 26684) = _mm_shuffle_ps(v167, v167, 232).m128_u64[0];
                  v19 = v203;
                  goto LABEL_8;
                }
                v226 = v9;
                v150 = v18;
                v151 = v214 - 32;
                while ( 1 )
                {
                  v152 = v222[4 * (v149 & 3)];
                  v153 = v222[4 * (v149 & 3) + 1];
                  v154 = v222[4 * (v149 & 3) + 2];
                  v155 = v221;
                  v156 = v152 + v153;
                  v157 = (const __m128i *)((char *)v221 + v152);
                  if ( v151 < (unsigned __int64)v150->m128i_u64 + v152 + v153 || v203 < (unsigned __int64)v157 )
                  {
                    v156 = sub_14000BE60(
                             (unsigned __int64)v150,
                             v214,
                             v152,
                             v153,
                             (char *)v154,
                             &v221,
                             v203,
                             v194,
                             v215,
                             v196);
                  }
                  else
                  {
                    v158 = (__m128i *)((char *)v150 + v152);
                    v159 = (__m128i *)((char *)v150 + v152 - v154);
                    *v150 = _mm_loadu_si128(v221);
                    if ( v152 > 0x10 )
                    {
                      v150[1] = _mm_loadu_si128(v155 + 1);
                      if ( (__int64)(v152 - 16) > 16 )
                      {
                        v174 = v150 + 2;
                        v175 = v155 + 2;
                        do
                        {
                          v176 = _mm_loadu_si128(v175);
                          v174 += 2;
                          v175 += 2;
                          v174[-2] = v176;
                          v174[-1] = _mm_loadu_si128(v175 - 1);
                        }
                        while ( v174 < v158 );
                      }
                    }
                    v221 = v157;
                    if ( (char *)v158 - (char *)v194 < v154 )
                    {
                      if ( (unsigned __int64)v158 - v215 < v154 )
                        return -20;
                      v160 = (char *)v159 - (char *)v194;
                      v161 = (const void *)(v196 + v160);
                      if ( v196 >= v196 + v160 + v153 )
                      {
                        memmove(v158, v161, v153);
                        goto LABEL_157;
                      }
                      v162 = v160;
                      v153 += v160;
                      v159 = v194;
                      v158 = (__m128i *)((char *)memmove(v158, v161, -v162) - v162);
                    }
                    if ( v154 <= 0xF )
                    {
                      if ( v154 > 7 )
                      {
                        v158->m128i_i64[0] = v159->m128i_i64[0];
                      }
                      else
                      {
                        v158->m128i_i8[0] = v159->m128i_i8[0];
                        v158->m128i_i8[1] = v159->m128i_i8[1];
                        v158->m128i_i8[2] = v159->m128i_i8[2];
                        v158->m128i_i8[3] = v159->m128i_i8[3];
                        v178 = (__int32 *)((char *)v159->m128i_i32 + dword_142423E40[v154]);
                        v158->m128i_i32[1] = *v178;
                        v159 = (const __m128i *)((char *)v178 - dword_142423E60[v154]);
                      }
                      if ( (unsigned __int64)v153 > 8 )
                      {
                        v179 = (unsigned __int64)v158->m128i_u64 + v153;
                        if ( (char *)v158 - (char *)v159 > 15 )
                        {
                          *(__m128i *)((char *)v158 + 8) = _mm_loadu_si128((const __m128i *)&v159->m128i_u64[1]);
                          if ( v153 - 8 > 16 )
                          {
                            v189 = (__m128i *)((char *)v158 + 24);
                            v190 = (const __m128i *)((char *)v159 + 24);
                            do
                            {
                              v191 = _mm_loadu_si128(v190);
                              v189 += 2;
                              v190 += 2;
                              v189[-2] = v191;
                              v189[-1] = _mm_loadu_si128(v190 - 1);
                            }
                            while ( (unsigned __int64)v189 < v179 );
                          }
                        }
                        else
                        {
                          v180 = &v159->m128i_i64[1];
                          v181 = v153 - 9;
                          v182 = &v158->m128i_i64[1];
                          if ( v179 < (unsigned __int64)&v158->m128i_u64[1] + 1
                            || v181 <= 0x17
                            || (unsigned __int64)((char *)&v158[-1].m128i_u64[1] + 7 - (char *)v159) <= 0xE )
                          {
                            do
                            {
                              v185 = *v180;
                              ++v182;
                              ++v180;
                              *(v182 - 1) = v185;
                            }
                            while ( (unsigned __int64)v182 < v179 );
                          }
                          else
                          {
                            v183 = 0;
                            v184 = (v181 >> 3) + 1;
                            do
                            {
                              *(__m128i *)((char *)&v158[v183] + 8) = _mm_loadu_si128((const __m128i *)&v159[v183].m128i_u64[1]);
                              ++v183;
                            }
                            while ( v184 >> 1 != v183 );
                            if ( (v184 & 1) != 0 )
                              v182[v184 & 0xFFFFFFFFFFFFFFFEuLL] = v180[v184 & 0xFFFFFFFFFFFFFFFEuLL];
                          }
                        }
                      }
                    }
                    else
                    {
                      *v158 = _mm_loadu_si128(v159);
                      if ( v153 > 16 )
                      {
                        v163 = (__m128i *)((char *)v158 + v153);
                        v164 = v159 + 1;
                        v165 = v158 + 1;
                        do
                        {
                          v166 = _mm_loadu_si128(v164);
                          v165 += 2;
                          v164 += 2;
                          v165[-2] = v166;
                          v165[-1] = _mm_loadu_si128(v164 - 1);
                        }
                        while ( v165 < v163 );
                      }
                    }
                  }
LABEL_157:
                  if ( v156 > 0xFFFFFFFFFFFFFF88uLL )
                    return v156;
                  v150 = (__m128i *)((char *)v150 + v156);
                  if ( a6 == ++v149 )
                  {
                    v9 = v226;
                    v18 = v150;
                    goto LABEL_160;
                  }
                }
              }
              v35 = v34 >> 3;
              v36 = &v15[-(v34 >> 3)];
              if ( v36 < a4 )
              {
                v35 = (_DWORD)v15 - (_DWORD)a4;
                v36 = &v15[-((_DWORD)v15 - (_DWORD)a4)];
              }
              v15 = v36;
              v37 = v34 - 8 * v35;
              v197 = *(_QWORD *)v36;
LABEL_38:
              v38 = v9[1];
              v39 = *(unsigned int *)(v38 + 4);
              v40 = v39 + v37;
              if ( v40 <= 0x40 )
              {
                if ( v15 >= v199 )
                {
                  v42 = v40 & 7;
                  v198 = &v15[-(v40 >> 3)];
                  v43 = *(_QWORD *)v198;
                }
                else
                {
                  if ( a4 != v15 )
                  {
                    v41 = v40 >> 3;
                    v198 = &v15[-(v40 >> 3)];
                    if ( v198 < a4 )
                    {
                      v41 = (_DWORD)v15 - (_DWORD)a4;
                      v198 = &v15[-((_DWORD)v15 - (_DWORD)a4)];
                    }
                    v42 = v40 - 8 * v41;
                    v43 = *(_QWORD *)v198;
                    if ( v42 <= 0x40 )
                      goto LABEL_44;
                    goto LABEL_142;
                  }
                  v43 = v197;
                  v42 = v40;
                  v198 = a4;
                }
LABEL_44:
                v192 = (char *)a2 - (char *)v194;
                v225 = v9;
                v44 = dword_1424230E0[v27] & (unsigned int)(v16 >> -(char)v28);
                v201 = v25 + 8;
                v45 = v32 + 8;
                v46 = v198;
                v200 = v45;
                v47 = v197;
                v48 = dword_1424230E0[v33] & (unsigned int)(v195 >> -(char)v34);
                LODWORD(v197) = 0;
                v49 = dword_1424230E0[v39] & (unsigned int)(v47 >> -(char)v40);
                v202 = v38 + 8;
                v50 = v222;
                while ( 1 )
                {
                  if ( v46 >= v199 )
                  {
                    v77 = v42;
                    v68 = v197;
                    v42 &= 7u;
                    v46 -= v77 >> 3;
                    v43 = *(_QWORD *)v46;
                    if ( v204 <= (int)v197 )
                      goto LABEL_65;
                  }
                  else
                  {
                    if ( a4 != v46 )
                    {
                      v66 = v42 >> 3;
                      v67 = v42 >> 3;
                      if ( &v46[-v67] >= a4 )
                      {
                        v46 -= v67;
                      }
                      else
                      {
                        v66 = (_DWORD)v46 - (_DWORD)a4;
                        v46 -= (unsigned int)((_DWORD)v46 - (_DWORD)a4);
                      }
                      v43 = *(_QWORD *)v46;
                      v42 -= 8 * v66;
                    }
                    v68 = v197;
                    if ( v204 <= (int)v197 )
                    {
LABEL_65:
                      v24 = v68;
                      v198 = v46;
                      v9 = v225;
                      if ( v42 > 0x40 )
                      {
LABEL_208:
                        v18 = a2;
LABEL_96:
                        if ( a6 > v24 )
                          return -20;
                        goto LABEL_144;
                      }
                      v78 = a2;
                      v216 = v214 - 32;
                      while ( 2 )
                      {
                        if ( v198 >= v199 )
                        {
                          v132 = v42;
                          v42 &= 7u;
                          v198 -= v132 >> 3;
                          v43 = *(_QWORD *)v198;
                        }
                        else if ( a4 != v198 )
                        {
                          v79 = v42 >> 3;
                          v80 = &v198[-(v42 >> 3)];
                          if ( v80 < a4 )
                          {
                            v79 = (_DWORD)v198 - (_DWORD)a4;
                            v80 = &v198[-((_DWORD)v198 - (_DWORD)a4)];
                          }
                          v198 = v80;
                          v43 = *(_QWORD *)v80;
                          v42 -= 8 * v79;
                        }
                        v24 = v197;
                        if ( a6 <= (int)v197 )
                        {
                          v9 = v225;
                          v18 = v78;
                          goto LABEL_144;
                        }
                        v81 = (unsigned __int16 *)(v201 + 8 * v44);
                        v82 = *((unsigned __int8 *)v81 + 2);
                        v83 = *((unsigned int *)v81 + 1);
                        v84 = (unsigned __int16 *)(v202 + 8 * v49);
                        v195 = v223.m128i_i64[0];
                        v85 = *((unsigned __int8 *)v84 + 2);
                        v86 = *((unsigned int *)v84 + 1);
                        v87 = (unsigned __int16 *)(v200 + 8 * v48);
                        v88 = *((unsigned __int8 *)v87 + 2);
                        v89 = *((unsigned int *)v87 + 1);
                        v90 = v88 + v82 + v85;
                        if ( (unsigned __int8)v88 > 1u )
                        {
                          v91 = v42;
                          v42 += v88;
                          v224 = v223.m128i_i64[1];
                          v92 = _mm_loadh_ps((const double *)&v195);
                          v195 = (v43 << v91 >> -(char)v88) + v89;
                          v223 = (__m128i)v92;
                          goto LABEL_75;
                        }
                        if ( (_BYTE)v88 != 1 )
                        {
                          if ( (_DWORD)v83 == 0 )
                          {
                            v131 = _mm_loadh_ps((const double *)&v195);
                            v195 = v223.m128i_u64[1];
                            v223 = (__m128i)v131;
                          }
LABEL_75:
                          if ( (_BYTE)v85 != 0 )
                          {
                            v93 = v42;
                            v42 += v85;
                            v86 += v43 << v93 >> -(char)v85;
                          }
                          if ( v90 > 0x1Eu && v42 <= 0x40 )
                          {
                            if ( v198 >= v199 )
                            {
                              v177 = v42;
                              v42 &= 7u;
                              v198 -= v177 >> 3;
                              v43 = *(_QWORD *)v198;
                            }
                            else if ( a4 != v198 )
                            {
                              v133 = v42 >> 3;
                              v134 = &v198[-(v42 >> 3)];
                              if ( v134 < a4 )
                              {
                                v133 = (_DWORD)v198 - (_DWORD)a4;
                                v134 = &v198[-((_DWORD)v198 - (_DWORD)a4)];
                              }
                              v198 = v134;
                              v43 = *(_QWORD *)v134;
                              v42 -= 8 * v133;
                            }
                          }
                          if ( (_BYTE)v82 != 0 )
                          {
                            v94 = v42;
                            v42 += v82;
                            v83 += v43 << v94 >> -(char)v82;
                          }
                          v95 = v196;
                          v96 = v83 + v192;
                          if ( v83 + v192 >= v195 )
                            v95 = (unsigned __int64)v194;
                          v97 = v197 & 3;
                          v193 = v95;
                          v205 = *v81;
                          v98 = *((unsigned __int8 *)v81 + 3);
                          v206 = *((unsigned __int8 *)v81 + 3);
                          v207 = dword_1424230E0[v98];
                          v210 = *v84;
                          v99 = *((unsigned __int8 *)v84 + 3);
                          v100 = v222[4 * v97];
                          v208 = v99;
                          v209 = dword_1424230E0[v99];
                          v211 = *v87;
                          v101 = *((unsigned __int8 *)v87 + 3);
                          v212 = *((unsigned __int8 *)v87 + 3);
                          v102 = v222[4 * v97 + 1];
                          v213 = dword_1424230E0[v101];
                          v103 = v221;
                          v104 = v100 + v102;
                          v105 = (const __m128i *)((char *)v221 + v100);
                          if ( v216 < (unsigned __int64)v78->m128i_u64 + v100 + v102 || v203 < (unsigned __int64)v105 )
                          {
                            v217 = v96;
                            v135 = sub_14000BE60(
                                     (unsigned __int64)v78,
                                     v214,
                                     v100,
                                     v222[4 * v97 + 1],
                                     (char *)v222[4 * v97 + 2],
                                     &v221,
                                     v203,
                                     v194,
                                     v215,
                                     v196);
                            v96 = v217;
                            v104 = v135;
                          }
                          else
                          {
                            v106 = v222[4 * v97 + 2];
                            v107 = &v78->m128i_i8[v100];
                            v108 = (__m128i *)((char *)v78 + v100 - v106);
                            *v78 = _mm_loadu_si128(v221);
                            if ( v100 > 0x10 )
                            {
                              v78[1] = _mm_loadu_si128(v103 + 1);
                              if ( (__int64)(v100 - 16) > 16 )
                              {
                                v136 = v78 + 2;
                                v137 = v103 + 2;
                                do
                                {
                                  v138 = _mm_loadu_si128(v137);
                                  v136 += 2;
                                  v137 += 2;
                                  v136[-2] = v138;
                                  v136[-1] = _mm_loadu_si128(v137 - 1);
                                }
                                while ( v136 < (__m128i *)v107 );
                              }
                            }
                            v221 = v105;
                            if ( v107 - (__int8 *)v194 >= v106 )
                            {
LABEL_89:
                              if ( v106 <= 0xF )
                              {
                                if ( v106 <= 7 )
                                {
                                  *v107 = v108->m128i_i8[0];
                                  v107[1] = v108->m128i_i8[1];
                                  v107[2] = v108->m128i_i8[2];
                                  v107[3] = v108->m128i_i8[3];
                                  v172 = (__int32 *)((char *)v108->m128i_i32 + dword_142423E40[v106]);
                                  *((_DWORD *)v107 + 1) = *v172;
                                  v108 = (const __m128i *)((char *)v172 - dword_142423E60[v106]);
                                }
                                else
                                {
                                  *(_QWORD *)v107 = v108->m128i_i64[0];
                                }
                                if ( (unsigned __int64)v102 > 8 )
                                {
                                  v139 = (unsigned __int64)&v107[v102];
                                  if ( v107 - (__int8 *)v108 > 15 )
                                  {
                                    *(__m128i *)(v107 + 8) = _mm_loadu_si128((const __m128i *)&v108->m128i_u64[1]);
                                    if ( v102 - 8 > 16 )
                                    {
                                      v186 = (__m128i *)(v107 + 24);
                                      v187 = (const __m128i *)((char *)v108 + 24);
                                      do
                                      {
                                        v188 = _mm_loadu_si128(v187);
                                        v186 += 2;
                                        v187 += 2;
                                        v186[-2] = v188;
                                        v186[-1] = _mm_loadu_si128(v187 - 1);
                                      }
                                      while ( (unsigned __int64)v186 < v139 );
                                    }
                                  }
                                  else
                                  {
                                    v140 = &v108->m128i_i64[1];
                                    v141 = v102 - 9;
                                    v142 = v107 + 8;
                                    if ( v139 < (unsigned __int64)(v107 + 9)
                                      || v141 <= 0x17
                                      || (unsigned __int64)(v107 - 1 - (__int8 *)v108) <= 0xE )
                                    {
                                      do
                                      {
                                        v173 = *v140;
                                        v142 += 8;
                                        ++v140;
                                        *((_QWORD *)v142 - 1) = v173;
                                      }
                                      while ( (unsigned __int64)v142 < v139 );
                                    }
                                    else
                                    {
                                      v143 = (v141 >> 3) + 1;
                                      v144 = 0;
                                      do
                                      {
                                        *(__m128i *)&v107[v144 * 16 + 8] = _mm_loadu_si128((const __m128i *)&v108[v144].m128i_u64[1]);
                                        ++v144;
                                      }
                                      while ( v143 >> 1 != v144 );
                                      if ( (v143 & 1) != 0 )
                                        *(_QWORD *)&v142[8 * (v143 & 0xFFFFFFFFFFFFFFFEuLL)] = v140[v143 & 0xFFFFFFFFFFFFFFFEuLL];
                                    }
                                  }
                                }
                              }
                              else
                              {
                                *(__m128i *)v107 = _mm_loadu_si128(v108);
                                if ( v102 > 16 )
                                {
                                  v112 = &v107[v102];
                                  v113 = v108 + 1;
                                  v114 = (__m128i *)(v107 + 16);
                                  do
                                  {
                                    v115 = _mm_loadu_si128(v113);
                                    v114 += 2;
                                    v113 += 2;
                                    v114[-2] = v115;
                                    v114[-1] = _mm_loadu_si128(v113 - 1);
                                  }
                                  while ( v114 < (__m128i *)v112 );
                                }
                              }
                            }
                            else
                            {
                              if ( (unsigned __int64)&v107[-v215] < v106 )
                                return -20;
                              v109 = (char *)v108 - (char *)v194;
                              v110 = (const void *)(v196 + v109);
                              if ( v196 < v196 + v109 + v102 )
                              {
                                v220 = v104;
                                v102 += v109;
                                v219 = v106;
                                v218 = v96;
                                v217 = -v109;
                                v111 = (char *)memmove(v107, v110, -v109);
                                v108 = v194;
                                v104 = v220;
                                v106 = v219;
                                v96 = v218;
                                v107 = &v111[v217];
                                goto LABEL_89;
                              }
                              v218 = v104;
                              v217 = v96;
                              memmove(v107, v110, v102);
                              v96 = v217;
                              v104 = v218;
                            }
                          }
                          if ( v104 > 0xFFFFFFFFFFFFFF88uLL )
                            return v104;
                          v116 = v195;
                          v78 = (__m128i *)((char *)v78 + v104);
                          v117 = v207;
                          v118 = 4 * v97;
                          v119 = v206 + v42;
                          v120 = v205;
                          v121 = v208 + v206 + v42;
                          v122 = v211;
                          v123 = (const char *)(v193 + v96 - v195);
                          v192 = v96 + v86;
                          _mm_prefetch(v123, 1);
                          _mm_prefetch(&v123[v86 - 1], 1);
                          v124 = v43 >> -v119;
                          v125 = v121;
                          v42 = v212 + v121;
                          LODWORD(v197) = v197 + 1;
                          v222[v118] = v83;
                          v44 = ((unsigned int)v124 & v117) + v120;
                          v126 = v209;
                          v222[v118 + 1] = v86;
                          v127 = v43 >> -v125;
                          v128 = v210;
                          v222[v118 + 2] = v116;
                          v222[v118 + 3] = (size_t)v123;
                          v49 = ((unsigned int)v127 & v126) + v128;
                          v48 = ((unsigned int)(v43 >> -(char)v42) & v213) + v122;
                          if ( v42 > 0x40 )
                          {
                            v24 = v197;
                            v9 = v225;
                            v18 = v78;
                            goto LABEL_96;
                          }
                          continue;
                        }
                        break;
                      }
                      v168 = v42++;
                      v169 = (v43 << v168 >> 63) + ((_DWORD)v83 == 0) + (unsigned int)v89;
                      if ( v169 == 3 )
                      {
                        v170 = v223.m128i_i64[0] - 1 + (v223.m128i_i64[0] == 1);
LABEL_163:
                        v224 = v223.m128i_i64[1];
                      }
                      else
                      {
                        v170 = (v223.m128i_i64[v169] == 0) + v223.m128i_i64[v169];
                        if ( v169 != 1 )
                          goto LABEL_163;
                      }
                      v171 = _mm_loadh_ps((const double *)&v195);
                      v195 = v170;
                      v223 = (__m128i)v171;
                      goto LABEL_75;
                    }
                  }
                  v52 = v223.m128i_i64[0];
                  v69 = (unsigned __int16 *)(v201 + 8 * v44);
                  v70 = *((unsigned __int8 *)v69 + 2);
                  LODWORD(v195) = *((_DWORD *)v69 + 1);
                  v71 = (unsigned __int16 *)(v202 + 8 * v49);
                  v72 = *((unsigned __int8 *)v71 + 2);
                  v73 = *((_DWORD *)v71 + 1);
                  v74 = (unsigned __int16 *)(v200 + 8 * v48);
                  v75 = *((unsigned __int8 *)v74 + 2);
                  v76 = *((unsigned int *)v74 + 1);
                  LOBYTE(v198) = v75 + v70 + v72;
                  if ( (unsigned __int8)v75 <= 1u )
                    break;
                  v51 = v42;
                  v42 += v75;
                  v224 = v223.m128i_i64[1];
                  v52 = (v43 << v51 >> -(char)v75) + v76;
                  v223 = _mm_unpacklo_epi64((__m128i)v52, (__m128i)v223.m128i_u64[0]);
LABEL_46:
                  v53 = v73;
                  if ( (_BYTE)v72 != 0 )
                  {
                    v54 = v42;
                    v42 += v72;
                    v53 = (v43 << v54 >> -(char)v72) + v73;
                  }
                  if ( (unsigned __int8)v198 > 0x1Eu && v42 <= 0x40 )
                  {
                    if ( v46 >= v199 )
                    {
                      v148 = v42;
                      v42 &= 7u;
                      v46 -= v148 >> 3;
                      v43 = *(_QWORD *)v46;
                    }
                    else if ( a4 != v46 )
                    {
                      v129 = v42 >> 3;
                      v130 = v42 >> 3;
                      if ( &v46[-v130] < a4 )
                      {
                        v129 = (_DWORD)v46 - (_DWORD)a4;
                        v46 -= (unsigned int)((_DWORD)v46 - (_DWORD)a4);
                      }
                      else
                      {
                        v46 -= v130;
                      }
                      v43 = *(_QWORD *)v46;
                      v42 -= 8 * v129;
                    }
                  }
                  v55 = (unsigned int)v195;
                  if ( (_BYTE)v70 != 0 )
                  {
                    v56 = v42;
                    v42 += v70;
                    v55 = (v43 << v56 >> -(char)v70) + (unsigned int)v195;
                  }
                  v57 = v196;
                  *v50 = v55;
                  v58 = *((unsigned __int8 *)v71 + 3);
                  v50[1] = v53;
                  v59 = v55 + v192;
                  v50[2] = v52;
                  if ( v55 + v192 >= v52 )
                    v57 = (unsigned __int64)v194;
                  v192 = v53 + v59;
                  v50 += 4;
                  v60 = (const char *)(v59 - v52 + v57);
                  v61 = *((unsigned __int8 *)v69 + 3);
                  _mm_prefetch(v60, 1);
                  _mm_prefetch(&v60[v53 - 1], 1);
                  *(v50 - 1) = (size_t)v60;
                  LODWORD(v197) = v197 + 1;
                  v62 = v61 + v42;
                  v63 = v58 + v61 + v42;
                  v44 = *v69 + (unsigned __int64)(dword_1424230E0[v61] & (unsigned int)(v43 >> -v62));
                  v64 = dword_1424230E0[v58] & (unsigned int)(v43 >> -(char)v63);
                  v65 = *((unsigned __int8 *)v74 + 3);
                  v42 = v65 + v63;
                  v49 = *v71 + v64;
                  v48 = (dword_1424230E0[v65] & (unsigned int)(v43 >> -(char)v42)) + (unsigned __int64)*v74;
                  if ( v42 > 0x40 )
                  {
                    v24 = v197;
                    v9 = v225;
                    if ( v204 > (int)v197 )
                      return -20;
                    goto LABEL_208;
                  }
                }
                if ( (_BYTE)v75 != 1 )
                {
                  if ( (_DWORD)v195 == 0 )
                  {
                    v52 = v223.m128i_u64[1];
                    v223 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&v223.m128i_u64[1]),
                             (__m128i)v223.m128i_u64[0]);
                  }
                  goto LABEL_46;
                }
                v145 = v42++;
                v146 = (v43 << v145 >> 63) + ((_DWORD)v195 == 0) + (unsigned int)v76;
                if ( v146 == 3 )
                {
                  v147 = v223.m128i_i64[0] - 1 + (v223.m128i_i64[0] == 1);
                }
                else
                {
                  v147 = (v223.m128i_i64[v146] == 0) + v223.m128i_i64[v146];
                  if ( v146 == 1 )
                  {
LABEL_134:
                    v52 = v147;
                    v223 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v147, (__m128i)v223.m128i_u64[0]);
                    goto LABEL_46;
                  }
                }
                v224 = v223.m128i_i64[1];
                goto LABEL_134;
              }
              goto LABEL_142;
            }
            v29 = v28 >> 3;
            v30 = &v15[-(v28 >> 3)];
            if ( v30 < a4 )
            {
              v29 = (_DWORD)v15 - (_DWORD)a4;
              v30 = &v15[-((_DWORD)v15 - (_DWORD)a4)];
            }
            v15 = v30;
            v31 = v28 - 8 * v29;
            v195 = *(_QWORD *)v30;
          }
          v32 = v9[2];
          v33 = *(_DWORD *)(v32 + 4);
          v34 = v33 + v31;
          if ( v34 > 0x40 )
          {
            v37 = v34;
            v197 = v195;
            goto LABEL_38;
          }
          if ( v15 >= v199 )
          {
            v15 -= v34 >> 3;
            v37 = v34 & 7;
            v197 = *(_QWORD *)v15;
            goto LABEL_38;
          }
          goto LABEL_34;
        default:
          if ( (_BYTE)v14 == 0 || a5 > 0xFFFFFFFFFFFFFF88uLL )
            return -20;
          v15 = &a4[a5 - 8];
          _BitScanReverse(&v14, v14);
          v16 = *(_QWORD *)v15;
          v17 = 8 - v14;
          goto LABEL_24;
      }
    }
    return -20;
  }
  else
  {
    v18 = a2;
    v19 = v10;
LABEL_8:
    v20 = v19 - (_QWORD)v8;
    v21 = -70;
    if ( v214 - (__int64)v18 >= v20 )
    {
      if ( v18 != nullptr )
      {
        v22 = v18;
        v18 = (__m128i *)((char *)v18 + v20);
        memcpy(v22, v8, v20);
      }
      return (char *)v18 - (char *)a2;
    }
  }
  return v21;
}

