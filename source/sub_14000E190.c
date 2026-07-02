// sub_14000E190 @ 0x14000E190
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000E190(
        __int64 *a1,
        __m128i *a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        int a6)
{
  __int64 v6; // r8
  const __m128i *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  const __m128i *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned __int8 *v14; // r11
  unsigned __int8 *v15; // rdi
  unsigned __int64 v16; // rax
  unsigned int v17; // r10d
  __m128i *v18; // rcx
  unsigned __int64 v19; // rbx
  size_t v20; // rbx
  __m128i *v21; // rdi
  __int64 v22; // rsi
  int v24; // r12d
  unsigned __int64 v25; // rbx
  int v26; // edx
  __int64 v27; // rdi
  int v28; // esi
  unsigned int v29; // r10d
  unsigned int v30; // edx
  unsigned __int8 *v31; // rcx
  int v32; // edx
  int v33; // ebp
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned __int8 *v36; // r8
  int v37; // ecx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // ecx
  unsigned int v41; // r12d
  unsigned __int8 *v42; // r14
  unsigned __int64 v43; // r15
  unsigned int v44; // r13d
  unsigned __int8 *v45; // r12
  int v46; // r14d
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  size_t *v50; // r9
  unsigned __int64 v51; // r8
  size_t v52; // rdi
  unsigned __int64 v53; // rax
  size_t v54; // rbp
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rsi
  size_t v57; // rax
  const char *v58; // rsi
  __int64 v59; // rdx
  int v60; // r13d
  __int64 v61; // rdx
  int v62; // r13d
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r11
  unsigned int v66; // r8d
  __int64 v67; // r11
  unsigned __int16 *v68; // rbx
  int v69; // esi
  unsigned __int16 *v70; // r10
  int v71; // edx
  int v72; // edi
  unsigned __int16 *v73; // r11
  int v74; // ecx
  unsigned __int8 v75; // bp
  unsigned int v76; // r8d
  unsigned __int8 *v77; // rdi
  __m128i *v78; // r14
  unsigned int v79; // r8d
  unsigned __int8 *v80; // r9
  __int64 v81; // r8
  int v82; // r9d
  size_t v83; // r12
  unsigned __int16 *v84; // rcx
  int v85; // r10d
  size_t v86; // rbp
  unsigned __int16 *v87; // rdx
  int v88; // eax
  __int64 v89; // r11
  unsigned __int8 v90; // bl
  unsigned __int64 v91; // rsi
  __int64 v92; // r11
  __m128 v93; // xmm0
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // r10
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  const __m128i *v101; // rax
  __int64 v102; // rdi
  unsigned __int64 v103; // r8
  signed __int64 v104; // rsi
  unsigned __int64 v105; // r11
  const __m128i *v106; // rdx
  unsigned __int64 v107; // r9
  __int8 *v108; // rcx
  const __m128i *v109; // rbx
  signed __int64 v110; // rbx
  const void *v111; // rdx
  char *v112; // rax
  __int8 *v113; // rsi
  const __m128i *v114; // rbx
  __m128i *v115; // rcx
  __m128i v116; // xmm2
  size_t v117; // rsi
  unsigned int v118; // ebx
  __int64 v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // r9
  const char *v122; // r8
  int v123; // eax
  char v124; // cl
  unsigned int v125; // ebx
  __int64 v126; // rdx
  unsigned int v127; // ebx
  unsigned int v128; // eax
  __int64 v129; // rcx
  __m128 v130; // xmm1
  unsigned int v131; // r8d
  unsigned int v132; // eax
  unsigned __int8 *v133; // r10
  __int64 v134; // rax
  __m128i *v135; // r8
  const __m128i *v136; // rax
  __m128i v137; // xmm1
  unsigned __int64 v138; // rax
  __int64 *v139; // r8
  unsigned __int64 v140; // rsi
  char *v141; // r9
  unsigned __int64 v142; // rsi
  __int64 v143; // rax
  unsigned __int64 v144; // rdx
  unsigned __int64 v145; // rdx
  __int64 v146; // rdi
  unsigned int v147; // eax
  int v148; // ebp
  __m128i *v149; // r12
  unsigned __int64 v150; // rbx
  unsigned __int64 v151; // r8
  signed __int64 v152; // rdi
  unsigned __int64 v153; // r13
  const __m128i *v154; // rax
  unsigned __int64 v155; // r14
  const __m128i *v156; // rdx
  __m128i *v157; // rcx
  const __m128i *v158; // rsi
  signed __int64 v159; // rsi
  const void *v160; // rdx
  signed __int64 v161; // r8
  __m128i *v162; // rdi
  const __m128i *v163; // rsi
  __m128i *v164; // rcx
  __m128i v165; // xmm4
  __m128 v166; // xmm0
  unsigned __int64 v167; // rsi
  unsigned __int64 v168; // rax
  _DWORD *v169; // rax
  __int64 v170; // rdx
  __m128i *v171; // r8
  const __m128i *v172; // rax
  __m128i v173; // xmm1
  unsigned int v174; // eax
  __int32 *v175; // rax
  unsigned __int64 v176; // rax
  __int64 *v177; // r13
  unsigned __int64 v178; // rdi
  __int64 *v179; // r8
  __int64 v180; // rax
  unsigned __int64 v181; // rdx
  __int64 v182; // rdx
  __m128i *v183; // rcx
  const __m128i *v184; // rbx
  __m128i v185; // xmm5
  __m128i *v186; // rcx
  const __m128i *v187; // rsi
  __m128i v188; // xmm1
  signed __int64 v189; // [rsp+58h] [rbp-220h]
  unsigned __int64 v190; // [rsp+58h] [rbp-220h]
  const __m128i *v191; // [rsp+60h] [rbp-218h]
  unsigned __int64 v192; // [rsp+68h] [rbp-210h] BYREF
  unsigned __int64 v193; // [rsp+70h] [rbp-208h]
  __int64 v194; // [rsp+78h] [rbp-200h]
  unsigned __int64 v195; // [rsp+80h] [rbp-1F8h]
  unsigned __int64 v196; // [rsp+88h] [rbp-1F0h]
  __int64 v197; // [rsp+90h] [rbp-1E8h]
  __int64 v198; // [rsp+98h] [rbp-1E0h]
  __int64 v199; // [rsp+A0h] [rbp-1D8h]
  unsigned __int64 v200; // [rsp+A8h] [rbp-1D0h]
  unsigned __int64 v201; // [rsp+B0h] [rbp-1C8h]
  int v202; // [rsp+B8h] [rbp-1C0h]
  int v203; // [rsp+BCh] [rbp-1BCh]
  unsigned int v204; // [rsp+C0h] [rbp-1B8h]
  int v205; // [rsp+C4h] [rbp-1B4h]
  unsigned int v206; // [rsp+C8h] [rbp-1B0h]
  unsigned __int16 v207; // [rsp+CCh] [rbp-1ACh]
  unsigned __int16 v208; // [rsp+CEh] [rbp-1AAh]
  int v209; // [rsp+D0h] [rbp-1A8h]
  unsigned int v210; // [rsp+D4h] [rbp-1A4h]
  __int64 v211; // [rsp+D8h] [rbp-1A0h]
  __int64 v212; // [rsp+E0h] [rbp-198h]
  unsigned __int64 v213; // [rsp+E8h] [rbp-190h]
  signed __int64 v214; // [rsp+F0h] [rbp-188h]
  unsigned __int64 v215; // [rsp+F8h] [rbp-180h]
  unsigned __int64 v216; // [rsp+100h] [rbp-178h]
  unsigned __int64 v217; // [rsp+108h] [rbp-170h]
  const __m128i *v218; // [rsp+118h] [rbp-160h] BYREF
  size_t v219[27]; // [rsp+120h] [rbp-158h] BYREF
  __m128i v220; // [rsp+1F8h] [rbp-80h] BYREF
  __int64 v221; // [rsp+208h] [rbp-70h]

  v6 = (__int64)a2->m128i_i64 + a3;
  v7 = (const __m128i *)a1[3699];
  v8 = a1[3703];
  v211 = v6;
  v9 = (unsigned __int64)v7->m128i_u64 + v8;
  v218 = v7;
  v200 = v9;
  if ( a6 != 0 )
  {
    v10 = (const __m128i *)a1[3673];
    v11 = _mm_loadl_epi64((const __m128i *)((char *)a1 + 26684));
    *((_DWORD *)a1 + 7369) = 1;
    v191 = v10;
    v12 = a1[3674];
    v220 = _mm_unpacklo_epi32(v11, (__m128i)0LL);
    v212 = v12;
    v193 = a1[3675];
    v221 = *((unsigned int *)a1 + 6673);
    if ( a5 != 0 )
    {
      v13 = a4[a5 - 1];
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
          if ( (_BYTE)v13 == 0 )
            return -20;
          _BitScanReverse(&v13, v13);
          v14 = a4;
          v15 = a4;
          v17 = 8 * (9 - a5) - v13;
LABEL_24:
          v25 = (unsigned __int64)(v15 + 8);
          v26 = 4;
          if ( a6 <= 4 )
            v26 = a6;
          v196 = (unsigned __int64)(v15 + 8);
          v27 = *a1;
          v202 = v26;
          v28 = *(_DWORD *)(v27 + 4);
          v29 = v28 + v17;
          if ( v29 > 0x40 )
          {
            v192 = v16;
            v32 = v29;
          }
          else if ( (unsigned __int64)v14 >= v25 )
          {
            v14 -= v29 >> 3;
            v32 = v29 & 7;
            v192 = *(_QWORD *)v14;
          }
          else
          {
            if ( a4 == v14 )
            {
              v192 = v16;
              v33 = *(_DWORD *)(a1[2] + 4);
              v194 = a1[2];
              v34 = v29 + v33;
              if ( v29 + v33 > 0x40 )
              {
                v195 = v16;
                v37 = v29 + v33;
                goto LABEL_38;
              }
LABEL_34:
              if ( a4 == v14 )
              {
                v38 = a1[1];
                v39 = *(unsigned int *)(v38 + 4);
                v44 = v34 + v39;
                if ( v34 + (unsigned int)v39 <= 0x40 )
                {
                  v43 = v192;
                  v42 = a4;
                  LOBYTE(v40) = v34 + v39;
                  v195 = v192;
                  goto LABEL_44;
                }
LABEL_144:
                if ( a6 > 0 )
                  return -20;
                v18 = a2;
                v24 = 0;
LABEL_146:
                v148 = v24 - v202;
                if ( a6 <= v24 - v202 )
                {
LABEL_162:
                  v7 = v218;
                  v19 = v200;
                  v166 = (__m128)_mm_loadu_si128(&v220);
                  *(__int64 *)((char *)a1 + 26684) = _mm_shuffle_ps(v166, v166, 232).m128_u64[0];
                  *((_DWORD *)a1 + 6673) = v221;
                  goto LABEL_8;
                }
                v149 = v18;
                v150 = v211 - 32;
                while ( 1 )
                {
                  v151 = v219[4 * (v148 & 3)];
                  v152 = v219[4 * (v148 & 3) + 1];
                  v153 = v219[4 * (v148 & 3) + 2];
                  v154 = v218;
                  v155 = v151 + v152;
                  v156 = (const __m128i *)((char *)v218 + v151);
                  if ( v150 < (unsigned __int64)v149->m128i_u64 + v151 + v152 || v200 < (unsigned __int64)v156 )
                  {
                    v155 = sub_14000BE60(
                             (unsigned __int64)v149,
                             v211,
                             v151,
                             v152,
                             (char *)v153,
                             &v218,
                             v200,
                             v191,
                             v212,
                             v193);
                  }
                  else
                  {
                    v157 = (__m128i *)((char *)v149 + v151);
                    v158 = (__m128i *)((char *)v149 + v151 - v153);
                    *v149 = _mm_loadu_si128(v218);
                    if ( v151 > 0x10 )
                    {
                      v149[1] = _mm_loadu_si128(v154 + 1);
                      if ( (__int64)(v151 - 16) > 16 )
                      {
                        v171 = v149 + 2;
                        v172 = v154 + 2;
                        do
                        {
                          v173 = _mm_loadu_si128(v172);
                          v171 += 2;
                          v172 += 2;
                          v171[-2] = v173;
                          v171[-1] = _mm_loadu_si128(v172 - 1);
                        }
                        while ( v171 < v157 );
                      }
                    }
                    v218 = v156;
                    if ( (char *)v157 - (char *)v191 < v153 )
                    {
                      if ( (unsigned __int64)v157 - v212 < v153 )
                        return -20;
                      v159 = (char *)v158 - (char *)v191;
                      v160 = (const void *)(v193 + v159);
                      if ( v193 >= v193 + v159 + v152 )
                      {
                        memmove(v157, v160, v152);
                        goto LABEL_159;
                      }
                      v161 = v159;
                      v152 += v159;
                      v158 = v191;
                      v157 = (__m128i *)((char *)memmove(v157, v160, -v161) - v161);
                    }
                    if ( v153 <= 0xF )
                    {
                      if ( v153 > 7 )
                      {
                        v157->m128i_i64[0] = v158->m128i_i64[0];
                      }
                      else
                      {
                        v157->m128i_i8[0] = v158->m128i_i8[0];
                        v157->m128i_i8[1] = v158->m128i_i8[1];
                        v157->m128i_i8[2] = v158->m128i_i8[2];
                        v157->m128i_i8[3] = v158->m128i_i8[3];
                        v175 = (__int32 *)((char *)v158->m128i_i32 + dword_142423E40[v153]);
                        v157->m128i_i32[1] = *v175;
                        v158 = (const __m128i *)((char *)v175 - dword_142423E60[v153]);
                      }
                      if ( (unsigned __int64)v152 > 8 )
                      {
                        v176 = (unsigned __int64)v157->m128i_u64 + v152;
                        if ( (char *)v157 - (char *)v158 > 15 )
                        {
                          *(__m128i *)((char *)v157 + 8) = _mm_loadu_si128((const __m128i *)&v158->m128i_u64[1]);
                          if ( v152 - 8 > 16 )
                          {
                            v186 = (__m128i *)((char *)v157 + 24);
                            v187 = (const __m128i *)((char *)v158 + 24);
                            do
                            {
                              v188 = _mm_loadu_si128(v187);
                              v186 += 2;
                              v187 += 2;
                              v186[-2] = v188;
                              v186[-1] = _mm_loadu_si128(v187 - 1);
                            }
                            while ( (unsigned __int64)v186 < v176 );
                          }
                        }
                        else
                        {
                          v177 = &v158->m128i_i64[1];
                          v178 = v152 - 9;
                          v179 = &v157->m128i_i64[1];
                          if ( v176 < (unsigned __int64)&v157->m128i_u64[1] + 1
                            || v178 <= 0x17
                            || (unsigned __int64)((char *)&v157[-1].m128i_u64[1] + 7 - (char *)v158) <= 0xE )
                          {
                            do
                            {
                              v182 = *v177;
                              ++v179;
                              ++v177;
                              *(v179 - 1) = v182;
                            }
                            while ( (unsigned __int64)v179 < v176 );
                          }
                          else
                          {
                            v180 = 0;
                            v181 = (v178 >> 3) + 1;
                            do
                            {
                              *(__m128i *)((char *)&v157[v180] + 8) = _mm_loadu_si128((const __m128i *)&v158[v180].m128i_u64[1]);
                              ++v180;
                            }
                            while ( v181 >> 1 != v180 );
                            if ( (v181 & 1) != 0 )
                              v179[v181 & 0xFFFFFFFFFFFFFFFEuLL] = v177[v181 & 0xFFFFFFFFFFFFFFFEuLL];
                          }
                        }
                      }
                    }
                    else
                    {
                      *v157 = _mm_loadu_si128(v158);
                      if ( v152 > 16 )
                      {
                        v162 = (__m128i *)((char *)v157 + v152);
                        v163 = v158 + 1;
                        v164 = v157 + 1;
                        do
                        {
                          v165 = _mm_loadu_si128(v163);
                          v164 += 2;
                          v163 += 2;
                          v164[-2] = v165;
                          v164[-1] = _mm_loadu_si128(v163 - 1);
                        }
                        while ( v164 < v162 );
                      }
                    }
                  }
LABEL_159:
                  if ( v155 > 0xFFFFFFFFFFFFFF88uLL )
                    return v155;
                  v149 = (__m128i *)((char *)v149 + v155);
                  if ( a6 == ++v148 )
                  {
                    v18 = v149;
                    goto LABEL_162;
                  }
                }
              }
              v35 = v34 >> 3;
              v36 = &v14[-(v34 >> 3)];
              if ( v36 < a4 )
              {
                v35 = (_DWORD)v14 - (_DWORD)a4;
                v36 = &v14[-((_DWORD)v14 - (_DWORD)a4)];
              }
              v14 = v36;
              v37 = v34 - 8 * v35;
              v195 = *(_QWORD *)v36;
LABEL_38:
              v38 = a1[1];
              v39 = *(unsigned int *)(v38 + 4);
              v40 = v39 + v37;
              if ( v40 <= 0x40 )
              {
                if ( (unsigned __int64)v14 >= v196 )
                {
                  v44 = v40 & 7;
                  v42 = &v14[-(v40 >> 3)];
                  v43 = *(_QWORD *)v42;
                }
                else
                {
                  if ( a4 != v14 )
                  {
                    v41 = v40 >> 3;
                    v42 = &v14[-(v40 >> 3)];
                    if ( v42 < a4 )
                    {
                      v41 = (_DWORD)v14 - (_DWORD)a4;
                      v42 = &v14[-((_DWORD)v14 - (_DWORD)a4)];
                    }
                    v43 = *(_QWORD *)v42;
                    v44 = v40 - 8 * v41;
                    if ( v44 <= 0x40 )
                      goto LABEL_44;
                    goto LABEL_144;
                  }
                  v43 = v195;
                  v42 = a4;
                  v44 = v40;
                }
LABEL_44:
                v45 = v42;
                v198 = v27 + 8;
                v46 = 0;
                v47 = dword_1424230E0[v28] & (unsigned int)(v16 >> -(char)v29);
                v48 = dword_1424230E0[v39] & (unsigned int)(v195 >> -(char)v40);
                v49 = dword_1424230E0[v33] & (unsigned int)(v192 >> -(char)v34);
                v189 = (char *)a2 - (char *)v191;
                v50 = v219;
                v197 = v194 + 8;
                v199 = v38 + 8;
                while ( 1 )
                {
                  if ( (unsigned __int64)v45 >= v196 )
                  {
                    v76 = v44;
                    v44 &= 7u;
                    v45 -= v76 >> 3;
                    v43 = *(_QWORD *)v45;
                    if ( v202 <= v46 )
                      goto LABEL_65;
                  }
                  else
                  {
                    if ( a4 != v45 )
                    {
                      v66 = v44 >> 3;
                      v67 = v44 >> 3;
                      if ( &v45[-v67] >= a4 )
                      {
                        v45 -= v67;
                      }
                      else
                      {
                        v66 = (_DWORD)v45 - (_DWORD)a4;
                        v45 -= (unsigned int)((_DWORD)v45 - (_DWORD)a4);
                      }
                      v43 = *(_QWORD *)v45;
                      v44 -= 8 * v66;
                    }
                    if ( v202 <= v46 )
                    {
LABEL_65:
                      v77 = v45;
                      v24 = v46;
                      if ( v44 > 0x40 )
                      {
LABEL_209:
                        v18 = a2;
LABEL_98:
                        if ( a6 > v24 )
                          return -20;
                        goto LABEL_146;
                      }
                      LODWORD(v194) = v46;
                      v195 = (unsigned __int64)v77;
                      v78 = a2;
                      v213 = v211 - 32;
                      while ( 2 )
                      {
                        if ( v195 >= v196 )
                        {
                          v131 = v44;
                          v44 &= 7u;
                          v195 -= v131 >> 3;
                          v43 = *(_QWORD *)v195;
                        }
                        else if ( a4 != (unsigned __int8 *)v195 )
                        {
                          v79 = v44 >> 3;
                          v80 = (unsigned __int8 *)(v195 - (v44 >> 3));
                          if ( v80 < a4 )
                          {
                            v79 = v195 - (_DWORD)a4;
                            v80 = (unsigned __int8 *)(v195 - (unsigned int)(v195 - (_DWORD)a4));
                          }
                          v195 = (unsigned __int64)v80;
                          v43 = *(_QWORD *)v80;
                          v44 -= 8 * v79;
                        }
                        if ( a6 <= (int)v194 )
                        {
                          v24 = v194;
                          v18 = v78;
                          goto LABEL_146;
                        }
                        v81 = v198 + 8 * v47;
                        v192 = v220.m128i_i64[0];
                        v82 = *(unsigned __int8 *)(v81 + 2);
                        v83 = *(unsigned int *)(v81 + 4);
                        v84 = (unsigned __int16 *)(v199 + 8 * v48);
                        v85 = *((unsigned __int8 *)v84 + 2);
                        v86 = *((unsigned int *)v84 + 1);
                        v87 = (unsigned __int16 *)(v197 + 8 * v49);
                        v88 = *((unsigned __int8 *)v87 + 2);
                        v89 = *((unsigned int *)v87 + 1);
                        v90 = v88 + v82 + v85;
                        if ( (unsigned __int8)v88 > 1u )
                        {
                          v91 = v43 << v44;
                          v44 += v88;
                          v92 = (v91 >> -(char)v88) + v89;
                          goto LABEL_75;
                        }
                        if ( (_BYTE)v88 != 1 )
                        {
                          if ( (_DWORD)v83 == 0 )
                          {
                            v130 = _mm_loadh_ps((const double *)&v192);
                            v192 = v220.m128i_u64[1];
                            v220 = (__m128i)v130;
                          }
LABEL_77:
                          if ( (_BYTE)v85 != 0 )
                          {
                            v94 = v43 << v44;
                            v44 += v85;
                            v86 += v94 >> -(char)v85;
                          }
                          if ( v90 > 0x1Eu && v44 <= 0x40 )
                          {
                            if ( v195 >= v196 )
                            {
                              v174 = v44;
                              v44 &= 7u;
                              v195 -= v174 >> 3;
                              v43 = *(_QWORD *)v195;
                            }
                            else if ( a4 != (unsigned __int8 *)v195 )
                            {
                              v132 = v44 >> 3;
                              v133 = (unsigned __int8 *)(v195 - (v44 >> 3));
                              if ( v133 < a4 )
                              {
                                v132 = v195 - (_DWORD)a4;
                                v133 = (unsigned __int8 *)(v195 - (unsigned int)(v195 - (_DWORD)a4));
                              }
                              v195 = (unsigned __int64)v133;
                              v43 = *(_QWORD *)v133;
                              v44 -= 8 * v132;
                            }
                          }
                          if ( (_BYTE)v82 != 0 )
                          {
                            v95 = v43 << v44;
                            v44 += v82;
                            v83 += v95 >> -(char)v82;
                          }
                          v96 = v193;
                          v97 = v83 + v189;
                          if ( v83 + v189 >= v192 )
                            v96 = (unsigned __int64)v191;
                          v190 = v96;
                          LOWORD(v201) = *(_WORD *)v81;
                          v98 = *(unsigned __int8 *)(v81 + 3);
                          v203 = *(unsigned __int8 *)(v81 + 3);
                          v204 = dword_1424230E0[v98];
                          v207 = *v84;
                          v99 = *((unsigned __int8 *)v84 + 3);
                          v205 = *((unsigned __int8 *)v84 + 3);
                          v206 = dword_1424230E0[v99];
                          v208 = *v87;
                          v100 = *((unsigned __int8 *)v87 + 3);
                          v209 = *((unsigned __int8 *)v87 + 3);
                          v210 = dword_1424230E0[v100];
                          v101 = v218;
                          v102 = v194 & 3;
                          v103 = v219[4 * v102];
                          v104 = v219[4 * v102 + 1];
                          v105 = v103 + v104;
                          v106 = (const __m128i *)((char *)v218 + v103);
                          if ( v213 < (unsigned __int64)v78->m128i_u64 + v103 + v104 || v200 < (unsigned __int64)v106 )
                          {
                            v214 = v97;
                            v134 = sub_14000BE60(
                                     (unsigned __int64)v78,
                                     v211,
                                     v103,
                                     v219[4 * v102 + 1],
                                     (char *)v219[4 * v102 + 2],
                                     &v218,
                                     v200,
                                     v191,
                                     v212,
                                     v193);
                            v97 = v214;
                            v105 = v134;
                          }
                          else
                          {
                            v107 = v219[4 * (v194 & 3) + 2];
                            v108 = &v78->m128i_i8[v103];
                            v109 = (__m128i *)((char *)v78 + v103 - v107);
                            *v78 = _mm_loadu_si128(v218);
                            if ( v103 > 0x10 )
                            {
                              v78[1] = _mm_loadu_si128(v101 + 1);
                              if ( (__int64)(v103 - 16) > 16 )
                              {
                                v135 = v78 + 2;
                                v136 = v101 + 2;
                                do
                                {
                                  v137 = _mm_loadu_si128(v136);
                                  v135 += 2;
                                  v136 += 2;
                                  v135[-2] = v137;
                                  v135[-1] = _mm_loadu_si128(v136 - 1);
                                }
                                while ( v135 < (__m128i *)v108 );
                              }
                            }
                            v218 = v106;
                            if ( v108 - (__int8 *)v191 >= v107 )
                            {
LABEL_91:
                              if ( v107 <= 0xF )
                              {
                                if ( v107 <= 7 )
                                {
                                  *v108 = v109->m128i_i8[0];
                                  v108[1] = v109->m128i_i8[1];
                                  v108[2] = v109->m128i_i8[2];
                                  v108[3] = v109->m128i_i8[3];
                                  v169 = (__int32 *)((char *)v109->m128i_i32 + dword_142423E40[v107]);
                                  *((_DWORD *)v108 + 1) = *v169;
                                  v109 = (const __m128i *)((char *)v169 - dword_142423E60[v107]);
                                }
                                else
                                {
                                  *(_QWORD *)v108 = v109->m128i_i64[0];
                                }
                                if ( (unsigned __int64)v104 > 8 )
                                {
                                  v138 = (unsigned __int64)&v108[v104];
                                  if ( v108 - (__int8 *)v109 > 15 )
                                  {
                                    *(__m128i *)(v108 + 8) = _mm_loadu_si128((const __m128i *)&v109->m128i_u64[1]);
                                    if ( v104 - 8 > 16 )
                                    {
                                      v183 = (__m128i *)(v108 + 24);
                                      v184 = (const __m128i *)((char *)v109 + 24);
                                      do
                                      {
                                        v185 = _mm_loadu_si128(v184);
                                        v183 += 2;
                                        v184 += 2;
                                        v183[-2] = v185;
                                        v183[-1] = _mm_loadu_si128(v184 - 1);
                                      }
                                      while ( (unsigned __int64)v183 < v138 );
                                    }
                                  }
                                  else
                                  {
                                    v139 = &v109->m128i_i64[1];
                                    v140 = v104 - 9;
                                    v141 = v108 + 8;
                                    if ( v138 < (unsigned __int64)(v108 + 9)
                                      || v140 <= 0x17
                                      || (unsigned __int64)(v108 - 1 - (__int8 *)v109) <= 0xE )
                                    {
                                      do
                                      {
                                        v170 = *v139;
                                        v141 += 8;
                                        ++v139;
                                        *((_QWORD *)v141 - 1) = v170;
                                      }
                                      while ( (unsigned __int64)v141 < v138 );
                                    }
                                    else
                                    {
                                      v142 = (v140 >> 3) + 1;
                                      v143 = 0;
                                      do
                                      {
                                        *(__m128i *)&v108[v143 * 16 + 8] = _mm_loadu_si128((const __m128i *)&v109[v143].m128i_u64[1]);
                                        ++v143;
                                      }
                                      while ( v142 >> 1 != v143 );
                                      if ( (v142 & 1) != 0 )
                                        *(_QWORD *)&v141[8 * (v142 & 0xFFFFFFFFFFFFFFFEuLL)] = v139[v142 & 0xFFFFFFFFFFFFFFFEuLL];
                                    }
                                  }
                                }
                              }
                              else
                              {
                                *(__m128i *)v108 = _mm_loadu_si128(v109);
                                if ( v104 > 16 )
                                {
                                  v113 = &v108[v104];
                                  v114 = v109 + 1;
                                  v115 = (__m128i *)(v108 + 16);
                                  do
                                  {
                                    v116 = _mm_loadu_si128(v114);
                                    v115 += 2;
                                    v114 += 2;
                                    v115[-2] = v116;
                                    v115[-1] = _mm_loadu_si128(v114 - 1);
                                  }
                                  while ( v115 < (__m128i *)v113 );
                                }
                              }
                            }
                            else
                            {
                              if ( (unsigned __int64)&v108[-v212] < v107 )
                                return -20;
                              v110 = (char *)v109 - (char *)v191;
                              v111 = (const void *)(v193 + v110);
                              if ( v193 < v193 + v110 + v104 )
                              {
                                v217 = v105;
                                v104 += v110;
                                v216 = v107;
                                v215 = v97;
                                v214 = -v110;
                                v112 = (char *)memmove(v108, v111, -v110);
                                v109 = v191;
                                v105 = v217;
                                v107 = v216;
                                v97 = v215;
                                v108 = &v112[v214];
                                goto LABEL_91;
                              }
                              v215 = v105;
                              v214 = v97;
                              memmove(v108, v111, v104);
                              v97 = v214;
                              v105 = v215;
                            }
                          }
                          if ( v105 > 0xFFFFFFFFFFFFFF88uLL )
                            return v105;
                          v117 = v192;
                          v78 = (__m128i *)((char *)v78 + v105);
                          v118 = v204;
                          v119 = 4 * v102;
                          v120 = (unsigned __int16)v201;
                          v121 = v208;
                          v122 = (const char *)(v190 + v97 - v192);
                          v189 = v97 + v86;
                          v123 = v203 + v44;
                          _mm_prefetch(v122, 1);
                          v124 = v205 + v123;
                          v44 = v209 + v205 + v123;
                          _mm_prefetch(&v122[v86 - 1], 1);
                          LODWORD(v194) = v194 + 1;
                          v47 = ((unsigned int)(v43 >> -(char)v123) & v118) + v120;
                          v125 = v206;
                          v126 = v207;
                          v219[v119] = v83;
                          v219[v119 + 1] = v86;
                          v48 = ((unsigned int)(v43 >> -v124) & v125) + v126;
                          v127 = v210;
                          v219[v119 + 2] = v117;
                          v219[v119 + 3] = (size_t)v122;
                          v49 = ((unsigned int)(v43 >> -(char)v44) & v127) + v121;
                          if ( v44 > 0x40 )
                          {
                            v24 = v194;
                            v18 = v78;
                            goto LABEL_98;
                          }
                          continue;
                        }
                        break;
                      }
                      v167 = v43 << v44++;
                      v168 = (v167 >> 63) + ((_DWORD)v83 == 0) + (unsigned int)v89;
                      if ( v168 != 3 )
                      {
                        v92 = (v220.m128i_i64[v168] == 0) + v220.m128i_i64[v168];
                        if ( v168 != 1 )
LABEL_75:
                          v221 = v220.m128i_i64[1];
                        v93 = _mm_loadh_ps((const double *)&v192);
                        v192 = v92;
                        v220 = (__m128i)v93;
                        goto LABEL_77;
                      }
                      v92 = v192 - 1 + (v192 == 1);
                      goto LABEL_75;
                    }
                  }
                  v51 = v220.m128i_i64[0];
                  v68 = (unsigned __int16 *)(v198 + 8 * v47);
                  v69 = *((unsigned __int8 *)v68 + 2);
                  v70 = (unsigned __int16 *)(v197 + 8 * v49);
                  v71 = *((unsigned __int8 *)v70 + 2);
                  v72 = *((_DWORD *)v70 + 1);
                  LODWORD(v192) = *((_DWORD *)v68 + 1);
                  LODWORD(v195) = v72;
                  v73 = (unsigned __int16 *)(v199 + 8 * v48);
                  v74 = *((unsigned __int8 *)v73 + 2);
                  LODWORD(v194) = *((_DWORD *)v73 + 1);
                  v75 = v71 + v69 + v74;
                  if ( (unsigned __int8)v71 <= 1u )
                    break;
                  v201 = v43 << v44;
                  v44 += v71;
                  v221 = v220.m128i_i64[1];
                  v51 = (v201 >> -(char)v71) + (unsigned int)v195;
                  v220 = _mm_unpacklo_epi64((__m128i)v51, (__m128i)v220.m128i_u64[0]);
LABEL_46:
                  v52 = (unsigned int)v194;
                  if ( (_BYTE)v74 != 0 )
                  {
                    v53 = v43 << v44;
                    v44 += v74;
                    v52 = (v53 >> -(char)v74) + (unsigned int)v194;
                  }
                  if ( v75 > 0x1Eu && v44 <= 0x40 )
                  {
                    if ( (unsigned __int64)v45 >= v196 )
                    {
                      v147 = v44;
                      v44 &= 7u;
                      v45 -= v147 >> 3;
                      v43 = *(_QWORD *)v45;
                    }
                    else if ( a4 != v45 )
                    {
                      v128 = v44 >> 3;
                      v129 = v44 >> 3;
                      if ( &v45[-v129] < a4 )
                      {
                        v128 = (_DWORD)v45 - (_DWORD)a4;
                        v45 -= (unsigned int)((_DWORD)v45 - (_DWORD)a4);
                      }
                      else
                      {
                        v45 -= v129;
                      }
                      v43 = *(_QWORD *)v45;
                      v44 -= 8 * v128;
                    }
                  }
                  v54 = (unsigned int)v192;
                  if ( (_BYTE)v69 != 0 )
                  {
                    v55 = v43 << v44;
                    v44 += v69;
                    v54 = (v55 >> -(char)v69) + (unsigned int)v192;
                  }
                  v56 = v193;
                  *v50 = v54;
                  v50[1] = v52;
                  v57 = v54 + v189;
                  v50[2] = v51;
                  if ( v54 + v189 >= v51 )
                    v56 = (unsigned __int64)v191;
                  v189 = v52 + v57;
                  ++v46;
                  v50 += 4;
                  v58 = (const char *)(v57 - v51 + v56);
                  v59 = *((unsigned __int8 *)v68 + 3);
                  *(v50 - 1) = (size_t)v58;
                  _mm_prefetch(v58, 1);
                  _mm_prefetch(&v58[v52 - 1], 1);
                  v60 = v59 + v44;
                  v47 = *v68 + (unsigned __int64)(dword_1424230E0[v59] & (unsigned int)(v43 >> -(char)v60));
                  v61 = *((unsigned __int8 *)v73 + 3);
                  v62 = v61 + v60;
                  v63 = dword_1424230E0[v61] & (unsigned int)(v43 >> -(char)v62);
                  v64 = *v73;
                  v65 = *((unsigned __int8 *)v70 + 3);
                  v48 = v64 + v63;
                  v44 = v65 + v62;
                  v49 = *v70 + (unsigned __int64)(dword_1424230E0[v65] & (unsigned int)(v43 >> -(char)v44));
                  if ( v44 > 0x40 )
                  {
                    v24 = v46;
                    if ( v202 > v46 )
                      return -20;
                    goto LABEL_209;
                  }
                }
                if ( (_BYTE)v71 != 1 )
                {
                  if ( (_DWORD)v192 == 0 )
                  {
                    v51 = v220.m128i_u64[1];
                    v220 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&v220.m128i_u64[1]),
                             (__m128i)v220.m128i_u64[0]);
                  }
                  goto LABEL_46;
                }
                v144 = v43 << v44++;
                v145 = (unsigned int)((_DWORD)v192 == 0) + v72 + (v144 >> 63);
                if ( v145 == 3 )
                {
                  v146 = v220.m128i_i64[0] - 1 + (v220.m128i_i64[0] == 1);
                }
                else
                {
                  v146 = (v220.m128i_i64[v145] == 0) + v220.m128i_i64[v145];
                  if ( v145 == 1 )
                  {
LABEL_136:
                    v51 = v146;
                    v220 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v146, (__m128i)v220.m128i_u64[0]);
                    goto LABEL_46;
                  }
                }
                v221 = v220.m128i_i64[1];
                goto LABEL_136;
              }
              goto LABEL_144;
            }
            v30 = v29 >> 3;
            v31 = &v14[-(v29 >> 3)];
            if ( v31 < a4 )
            {
              v30 = (_DWORD)v14 - (_DWORD)a4;
              v31 = &v14[-((_DWORD)v14 - (_DWORD)a4)];
            }
            v14 = v31;
            v32 = v29 - 8 * v30;
            v192 = *(_QWORD *)v31;
          }
          v33 = *(_DWORD *)(a1[2] + 4);
          v194 = a1[2];
          v34 = v33 + v32;
          if ( v34 > 0x40 )
          {
            v37 = v34;
            v195 = v192;
            goto LABEL_38;
          }
          if ( (unsigned __int64)v14 >= v196 )
          {
            v14 -= v34 >> 3;
            v37 = v34 & 7;
            v195 = *(_QWORD *)v14;
            goto LABEL_38;
          }
          goto LABEL_34;
        default:
          if ( (_BYTE)v13 == 0 || a5 > 0xFFFFFFFFFFFFFF88uLL )
            return -20;
          v14 = &a4[a5 - 8];
          _BitScanReverse(&v13, v13);
          v15 = a4;
          v16 = *(_QWORD *)v14;
          v17 = 8 - v13;
          goto LABEL_24;
      }
    }
    return -20;
  }
  else
  {
    v18 = a2;
    v19 = v9;
LABEL_8:
    v20 = v19 - (_QWORD)v7;
    v21 = v18;
    v22 = -70;
    if ( v211 - (__int64)v18 >= v20 )
    {
      if ( v18 != nullptr )
      {
        memcpy(v18, v7, v20);
        v18 = (__m128i *)((char *)v21 + v20);
      }
      return (char *)v18 - (char *)a2;
    }
  }
  return v22;
}

