// sub_140011710 @ 0x140011710
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140011710(__int64 *a1, __m128i *a2, __int64 a3, _BYTE *a4, unsigned __int64 a5)
{
  _BYTE *v8; // r10
  unsigned __int8 v9; // al
  char v10; // dl
  char v11; // dl
  unsigned __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int8 *v18; // r11
  int v19; // esi
  int v20; // ebp
  unsigned __int8 *v21; // r14
  unsigned __int64 v22; // rax
  int v23; // edx
  const __m128i *v24; // rdx
  __int8 *v25; // rdi
  signed __int64 v26; // rsi
  unsigned int v28; // ebx
  unsigned __int8 v29; // al
  int v30; // r8d
  __int64 v31; // r9
  int v32; // ecx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rbx
  int v35; // r11d
  unsigned __int8 *v36; // rsi
  int v37; // eax
  int v38; // r9d
  int v39; // edx
  int v40; // r8d
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbx
  unsigned __int16 *v43; // r8
  unsigned __int64 v44; // rax
  char *v45; // rbx
  char v46; // dl
  size_t v47; // rbx
  __int64 v48; // rax
  unsigned __int64 v49; // r10
  unsigned int *v50; // r12
  unsigned __int8 v51; // bl
  unsigned __int64 v52; // rax
  unsigned int *v53; // r12
  unsigned __int64 v54; // rax
  unsigned int *v55; // r12
  unsigned __int64 v56; // rax
  __int64 v57; // r10
  int v58; // r11d
  unsigned int v59; // r9d
  unsigned int v60; // ecx
  __int64 v61; // rdx
  __m128i v62; // xmm7
  __m128i v63; // xmm8
  __m128i v64; // xmm1
  __m128i v65; // xmm9
  __m128i v66; // xmm0
  __m128i v67; // xmm2
  __m128i v68; // xmm0
  __m128i v69; // xmm2
  __m128i v70; // xmm3
  __m128i v71; // xmm0
  __m128i v72; // xmm5
  __m128i v73; // xmm2
  __m128i v74; // xmm3
  __m128i v75; // xmm0
  __m128i v76; // xmm4
  unsigned int v77; // r8d
  int v78; // edx
  __int64 v79; // rbx
  int v80; // edx
  __int64 v81; // rbx
  __int64 v82; // rbx
  __int64 v83; // rbx
  __int64 v84; // rbx
  __int64 v85; // rbx
  __int64 v86; // rbx
  __int64 v87; // rbx
  __int64 v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rbx
  __int64 v91; // rbx
  __int64 v92; // rbx
  __int64 v93; // rbx
  __int64 v94; // rbx
  const __m128i *v95; // rdi
  unsigned __int64 v96; // rsi
  __int64 v97; // rdi
  unsigned int v98; // edx
  unsigned __int8 *v99; // r12
  unsigned int v100; // eax
  unsigned __int64 v101; // rdi
  int v102; // edx
  __int64 v103; // rax
  unsigned int v104; // edx
  unsigned __int64 v105; // r9
  unsigned int v106; // r8d
  __int64 v107; // rcx
  __int64 v108; // rax
  unsigned int v109; // edx
  unsigned __int64 v110; // r8
  unsigned int v111; // r10d
  __int64 v112; // rcx
  __int64 v113; // rax
  unsigned int v114; // r10d
  unsigned __int64 v115; // rdx
  unsigned int v116; // r11d
  __int64 v117; // rcx
  unsigned __int64 v118; // rbp
  __int64 v119; // rbx
  int v120; // r13d
  __int64 v121; // r11
  int v122; // r14d
  signed __int64 v123; // rsi
  __int64 v124; // r9
  int v125; // eax
  __int64 v126; // rdx
  unsigned __int8 v127; // r8
  char v128; // cl
  __int64 v129; // rdx
  char v130; // cl
  unsigned __int64 v131; // r8
  char v132; // cl
  __int64 v133; // rax
  int v134; // r13d
  __int64 v135; // rax
  unsigned int v136; // r11d
  int v137; // r14d
  __int64 v138; // rax
  unsigned int v139; // r15d
  unsigned __int64 v140; // r9
  const __m128i *v141; // r10
  __m128i *v142; // rcx
  const __m128i *v143; // rax
  const void *v144; // rdx
  void *v145; // rax
  __m128i *v146; // rsi
  const __m128i *v147; // rax
  __m128i *v148; // rcx
  __m128i v149; // xmm4
  unsigned int v150; // eax
  __int64 v151; // rcx
  unsigned __int64 v152; // rax
  unsigned int v153; // r8d
  int *v154; // r8
  bool v155; // zf
  char *v156; // rcx
  int v157; // edx
  char v158; // al
  unsigned int v159; // eax
  unsigned int v160; // ecx
  unsigned __int8 *v161; // rbx
  unsigned int v162; // eax
  __int64 v163; // r9
  _DWORD *v164; // r8
  int v165; // r11d
  int v166; // r11d
  char *v167; // rdx
  unsigned __int8 *v168; // r10
  __int64 v169; // r14
  unsigned __int8 *v170; // rcx
  bool v171; // r14
  _DWORD *v172; // rcx
  unsigned int v173; // r14d
  char *v174; // rax
  _DWORD *v175; // rdx
  unsigned int v176; // r14d
  char *v177; // rax
  _DWORD *v178; // rcx
  char *v179; // r14
  _DWORD *v180; // rcx
  unsigned int v181; // ecx
  unsigned int v182; // ebx
  int *v183; // rax
  const char *v184; // rax
  const char *v185; // r8
  const char *v186; // rax
  char *v187; // rax
  unsigned __int64 v188; // rax
  unsigned __int8 *v189; // r8
  unsigned __int64 v190; // rcx
  unsigned __int64 v191; // r9
  unsigned __int64 v192; // rax
  unsigned __int64 v193; // rax
  unsigned __int64 v194; // rbx
  unsigned __int16 *v195; // r8
  unsigned __int64 v196; // rax
  unsigned __int64 v197; // rax
  unsigned __int64 v198; // rax
  unsigned int v199; // ecx
  unsigned __int64 v200; // r14
  _DWORD *v201; // rcx
  char *v202; // rcx
  unsigned __int8 *v203; // r11
  __int64 v204; // r9
  unsigned __int8 *v205; // r10
  __int64 v206; // r11
  unsigned __int8 *v207; // rcx
  bool v208; // r11
  _DWORD *v209; // rcx
  unsigned int v210; // ecx
  unsigned __int8 *v211; // r11
  __int64 v212; // r9
  __int64 v213; // rax
  unsigned int v214; // eax
  unsigned __int8 *v215; // rdx
  __m128i *v216; // r8
  const __m128i *v217; // rdx
  __m128i v218; // xmm4
  unsigned __int64 v219; // rax
  __int64 *v220; // rsi
  __int32 *v221; // rax
  unsigned __int64 v222; // rbp
  __int64 *v223; // r8
  unsigned __int64 v224; // rsi
  __int64 *v225; // r10
  unsigned __int64 v226; // rsi
  __int64 v227; // rdx
  __int64 v228; // rax
  __m128 v229; // xmm0
  unsigned int v230; // ecx
  unsigned int v231; // eax
  unsigned __int64 v232; // rax
  unsigned __int64 v233; // rax
  unsigned int v234; // eax
  unsigned int v235; // eax
  char v236; // cl
  unsigned __int64 v237; // rax
  unsigned int v238; // eax
  __m128i *v239; // rcx
  const __m128i *v240; // rax
  __m128i v241; // xmm6
  __int64 v242; // [rsp+20h] [rbp-218h]
  __int64 v243; // [rsp+20h] [rbp-218h]
  void *v244; // [rsp+80h] [rbp-1B8h]
  __m128i *v245; // [rsp+80h] [rbp-1B8h]
  unsigned int *v246; // [rsp+80h] [rbp-1B8h]
  char *v247; // [rsp+80h] [rbp-1B8h]
  unsigned __int8 *v248; // [rsp+80h] [rbp-1B8h]
  char *v249; // [rsp+80h] [rbp-1B8h]
  unsigned __int8 *v250; // [rsp+80h] [rbp-1B8h]
  unsigned int v251; // [rsp+80h] [rbp-1B8h]
  _BYTE *v252; // [rsp+88h] [rbp-1B0h]
  unsigned __int64 v253; // [rsp+88h] [rbp-1B0h]
  unsigned int v254; // [rsp+88h] [rbp-1B0h]
  const __m128i *v255; // [rsp+88h] [rbp-1B0h]
  signed __int64 v256; // [rsp+88h] [rbp-1B0h]
  unsigned __int8 *v257; // [rsp+88h] [rbp-1B0h]
  unsigned __int64 v258; // [rsp+88h] [rbp-1B0h]
  unsigned int v259; // [rsp+88h] [rbp-1B0h]
  __int8 *v260; // [rsp+90h] [rbp-1A8h]
  __int64 v261; // [rsp+90h] [rbp-1A8h]
  unsigned __int8 *v262; // [rsp+90h] [rbp-1A8h]
  unsigned __int64 v263; // [rsp+90h] [rbp-1A8h]
  int v264; // [rsp+90h] [rbp-1A8h]
  int v265; // [rsp+98h] [rbp-1A0h]
  const __m128i *v266; // [rsp+98h] [rbp-1A0h]
  unsigned __int64 v267; // [rsp+98h] [rbp-1A0h]
  int v268; // [rsp+98h] [rbp-1A0h]
  unsigned __int16 v269; // [rsp+A0h] [rbp-198h]
  char *v270; // [rsp+A0h] [rbp-198h]
  char *v271; // [rsp+A0h] [rbp-198h]
  unsigned int v272; // [rsp+ACh] [rbp-18Ch]
  char v273; // [rsp+ACh] [rbp-18Ch]
  unsigned __int16 v274; // [rsp+B0h] [rbp-188h]
  unsigned __int16 v275; // [rsp+B2h] [rbp-186h]
  unsigned int v276; // [rsp+B4h] [rbp-184h]
  __int64 v277; // [rsp+B8h] [rbp-180h]
  unsigned __int8 *v278; // [rsp+C0h] [rbp-178h]
  __int64 v279; // [rsp+C8h] [rbp-170h]
  __int64 v280; // [rsp+D0h] [rbp-168h]
  __int64 v281; // [rsp+D8h] [rbp-160h]
  unsigned __int8 *v282; // [rsp+E0h] [rbp-158h]
  __int64 v283; // [rsp+F0h] [rbp-148h]
  unsigned __int64 v284; // [rsp+F8h] [rbp-140h]
  int v285; // [rsp+100h] [rbp-138h]
  unsigned int v286; // [rsp+104h] [rbp-134h]
  unsigned __int64 v287; // [rsp+108h] [rbp-130h]
  const __m128i *v288; // [rsp+118h] [rbp-120h] BYREF
  __m128i v289; // [rsp+178h] [rbp-C0h] BYREF
  __int64 v290; // [rsp+188h] [rbp-B0h]
  __int64 *v291; // [rsp+240h] [rbp+8h]
  __m128i *v292; // [rsp+248h] [rbp+10h]
  _BYTE *v294; // [rsp+258h] [rbp+20h]
  _BYTE *v295; // [rsp+258h] [rbp+20h]
  _BYTE *v296; // [rsp+258h] [rbp+20h]
  _BYTE *v298; // [rsp+258h] [rbp+20h]
  _BYTE *v299; // [rsp+258h] [rbp+20h]
  _BYTE *v300; // [rsp+258h] [rbp+20h]

  v8 = a4;
  if ( a5 <= 2 )
    return -20;
  v9 = *a4;
  v10 = *a4 & 3;
  switch ( v10 )
  {
    case 2:
      goto LABEL_23;
    case 3:
      v16 = -30;
      if ( *((_DWORD *)a1 + 7368) == 0 )
        return v16;
LABEL_23:
      if ( a5 <= 4 )
        return -20;
      v28 = *(_DWORD *)a4;
      v29 = (v9 >> 2) & 3;
      v30 = *(_DWORD *)a4 >> 4;
      if ( v29 == 2 )
      {
        v34 = v28 >> 18;
        v32 = 0;
        v31 = 4;
        v33 = v30 & 0x3FFF;
      }
      else if ( v29 == 3 )
      {
        v153 = v30 & 0x3FFFF;
        if ( v153 > 0x20000 )
          return -20;
        v33 = v153;
        v32 = 0;
        v31 = 5;
        v34 = ((unsigned __int64)(unsigned __int8)v8[4] << 10) + (v28 >> 22);
      }
      else
      {
        v31 = 3;
        v32 = v29 ^ 1;
        v33 = v30 & 0x3FF;
        v34 = (v28 >> 14) & 0x3FF;
      }
      v12 = v34 + v31;
      if ( a5 < v34 + v31 )
        return -20;
      if ( *((_DWORD *)a1 + 7419) != 0 && v33 > 0x300 )
      {
        v184 = (const char *)a1[3];
        v185 = v184 + 16448;
        _mm_prefetch(v184, 2);
        v186 = v184 + 64;
        do
        {
          _mm_prefetch(v186, 2);
          _mm_prefetch(v186 + 64, 2);
          v186 += 128;
        }
        while ( v186 != v185 );
      }
      v35 = *((_DWORD *)a1 + 7412);
      v36 = &v8[v31];
      if ( v10 != 3 )
      {
        if ( v32 != 0 )
        {
          v298 = v8;
          v246 = (unsigned int *)(a1 + 1287);
          v264 = *((_DWORD *)a1 + 7412);
          v188 = sub_140004060((unsigned int *)a1 + 2574, &v8[v31], v34, (__int64)a1 + 27324, v264);
          if ( v188 > 0xFFFFFFFFFFFFFF88uLL || v188 >= v34 )
            return -20;
          v189 = &v36[v188];
          v190 = (unsigned __int64)(a1 + 3727);
          v191 = v34 - v188;
          v252 = a1 + 3727;
          if ( v264 != 0 )
          {
            v219 = sub_140004AF0(v190, v33, v189, v191, (__int64)v246);
            v8 = v298;
            if ( v219 > 0xFFFFFFFFFFFFFF88uLL )
              return -20;
          }
          else
          {
            v192 = sub_140004830(v190, v33, v189, v191, (__int64)v246);
            v8 = v298;
            if ( v192 > 0xFFFFFFFFFFFFFF88uLL )
              return -20;
          }
        }
        else
        {
          if ( v33 == 0 || v34 == 0 )
            return -20;
          v261 = (__int64)a1 + 27324;
          v252 = a1 + 3727;
          v246 = (unsigned int *)(a1 + 1287);
          if ( v34 < v33 )
          {
            v183 = (int *)((char *)&unk_142423760 + 24 * (16 * v34 / v33));
            v40 = *v183;
            v39 = v183[1];
            v38 = v183[2];
            v37 = v183[3];
          }
          else
          {
            v37 = 145;
            v38 = 1891;
            v39 = 128;
            v40 = 722;
          }
          v294 = v8;
          if ( ((v38 + (unsigned int)(v33 >> 8) * v37) >> 3) + v38 + (unsigned int)(v33 >> 8) * v37 >= v40 + (unsigned int)(v33 >> 8) * v39 )
          {
            v268 = *((_DWORD *)a1 + 7412);
            v193 = sub_140004060(v246, v36, v34, v261, v35);
            if ( v193 >= v34 || v193 > 0xFFFFFFFFFFFFFF88uLL )
              return -20;
            v194 = v34 - v193;
            v195 = (unsigned __int16 *)&v36[v193];
            if ( v268 != 0 )
            {
              v233 = sub_140005DE0((unsigned __int64)v252, v33, v195, v194, (__int64)v246);
              v8 = v294;
              if ( v233 > 0xFFFFFFFFFFFFFF88uLL )
                return -20;
            }
            else
            {
              v196 = sub_140004DA0(v252, v33, v195, v194, (__int64)v246);
              v8 = v294;
              if ( v196 > 0xFFFFFFFFFFFFFF88uLL )
                return -20;
            }
          }
          else
          {
            v265 = *((_DWORD *)a1 + 7412);
            v41 = sub_140006D50(v246, v36, v34, v261);
            if ( v41 > 0xFFFFFFFFFFFFFF88uLL || v41 >= v34 )
              return -20;
            v42 = v34 - v41;
            v43 = (unsigned __int16 *)&v36[v41];
            if ( v265 != 0 )
            {
              v232 = sub_140008D80(v252, v33, v43, v42, (__int64)v246);
              v8 = v294;
              if ( v232 > 0xFFFFFFFFFFFFFF88uLL )
                return -20;
            }
            else
            {
              v44 = sub_140007790(v252, v33, v43, v42, (__int64)v246);
              v8 = v294;
              if ( v44 > 0xFFFFFFFFFFFFFF88uLL )
                return -20;
            }
          }
        }
        a1[3703] = v33;
        *((_DWORD *)a1 + 7368) = 1;
        a1[3699] = (__int64)v252;
        v45 = &v252[v33];
        a1[3] = (__int64)v246;
        goto LABEL_173;
      }
      v154 = (int *)a1[3];
      v155 = v32 == 0;
      v156 = (char *)(a1 + 3727);
      v157 = *v154;
      v158 = BYTE1(*v154);
      if ( v155 )
      {
        v242 = a1[3];
        v296 = v8;
        v249 = (char *)(a1 + 3727);
        if ( v158 != 0 )
        {
          if ( v35 != 0 )
          {
            if ( (unsigned __int64)sub_140008D80(v156, v33, (unsigned __int16 *)v36, v34, v242) > 0xFFFFFFFFFFFFFF88uLL )
              return -20;
          }
          else if ( (unsigned __int64)sub_140007790(v156, v33, (unsigned __int16 *)v36, v34, v242) > 0xFFFFFFFFFFFFFF88uLL )
          {
            return -20;
          }
        }
        else
        {
          if ( v35 == 0 )
          {
            v198 = sub_140004DA0(v156, v33, (unsigned __int16 *)v36, v34, v242);
            v8 = v296;
            if ( v198 > 0xFFFFFFFFFFFFFF88uLL )
              return -20;
            a1[3699] = (__int64)v249;
            v45 = &v249[v33];
            a1[3703] = v33;
            *((_DWORD *)a1 + 7368) = 1;
            goto LABEL_173;
          }
          if ( (unsigned __int64)sub_140005DE0((unsigned __int64)v156, v33, (unsigned __int16 *)v36, v34, v242) > 0xFFFFFFFFFFFFFF88uLL )
            return -20;
        }
        a1[3703] = v33;
        *((_DWORD *)a1 + 7368) = 1;
        v8 = v296;
        a1[3699] = (__int64)v249;
        v45 = &v249[v33];
      }
      else
      {
        v267 = (unsigned __int64)(a1 + 3727);
        if ( v158 != 0 )
        {
          if ( v35 == 0 )
          {
            if ( v34 == 0 )
              return -20;
            v159 = v36[v34 - 1];
            v163 = *v36;
            switch ( v34 )
            {
              case 1uLL:
                goto LABEL_295;
              case 2uLL:
                goto LABEL_294;
              case 3uLL:
                goto LABEL_293;
              case 4uLL:
                goto LABEL_292;
              case 5uLL:
                goto LABEL_291;
              case 6uLL:
                goto LABEL_290;
              case 7uLL:
                v163 += (unsigned __int64)v36[6] << 48;
LABEL_290:
                v163 += (unsigned __int64)v36[5] << 40;
LABEL_291:
                v163 += (unsigned __int64)v36[4] << 32;
LABEL_292:
                v163 += (unsigned __int64)v36[3] << 24;
LABEL_293:
                v163 += (unsigned __int64)v36[2] << 16;
LABEL_294:
                v163 += (unsigned __int64)v36[1] << 8;
LABEL_295:
                if ( (_BYTE)v159 == 0 )
                  return -20;
                _BitScanReverse(&v230, v159);
                v164 = v154 + 1;
                v248 = v36;
                v162 = 8 * (9 - v34) - v230;
                v45 = (char *)(v33 + v267);
                v273 = BYTE2(v157);
                v165 = BYTE2(v157);
LABEL_154:
                v295 = v8;
                v166 = -v165;
                v167 = (char *)(a1 + 3727);
                v257 = v36 + 8;
                v168 = v248;
                v270 = v45 - 7;
                v263 = v33;
                break;
              default:
                if ( (_BYTE)v159 == 0 )
                  return -20;
                _BitScanReverse(&v160, v159);
                v161 = &v36[v34 - 8];
                v162 = 8 - v160;
                v163 = *(_QWORD *)v161;
                v164 = v154 + 1;
                v248 = v161;
                v165 = BYTE2(v157);
                v273 = BYTE2(v157);
                v45 = (char *)(v33 + v267);
                goto LABEL_154;
            }
            while ( 1 )
            {
              if ( v168 < v257 )
              {
                if ( v168 == v36 )
                {
                  v250 = v168;
                  v200 = v263;
                  v271 = v45 - 2;
                  v8 = v295;
                  goto LABEL_229;
                }
                v169 = v162 >> 3;
                v170 = &v168[-v169];
                if ( &v168[-v169] < v36 )
                {
                  v203 = v168;
                  v200 = v263;
                  v8 = v295;
                  v204 = (unsigned int)((_DWORD)v203 - (_DWORD)v36);
                  v162 -= 8 * v204;
                  v250 = &v203[-v204];
                  v163 = *(_QWORD *)&v203[-v204];
                  goto LABEL_228;
                }
                v168 -= v169;
                v171 = v167 < v270;
                v162 -= 8 * (v162 >> 3);
                v163 = *(_QWORD *)v170;
              }
              else
              {
                v181 = v162;
                v162 &= 7u;
                v168 -= v181 >> 3;
                v163 = *(_QWORD *)v168;
                v171 = v167 < v270;
              }
              if ( !v171 )
                break;
              v172 = &v164[(unsigned __int64)(v163 << v162) >> v166];
              *(_WORD *)v167 = *(_WORD *)v172;
              v173 = v162 + *((unsigned __int8 *)v172 + 2);
              v174 = &v167[*((unsigned __int8 *)v172 + 3)];
              v175 = &v164[(unsigned __int64)(v163 << v173) >> v166];
              *(_WORD *)v174 = *(_WORD *)v175;
              v176 = *((unsigned __int8 *)v175 + 2) + v173;
              v177 = &v174[*((unsigned __int8 *)v175 + 3)];
              v178 = &v164[(unsigned __int64)(v163 << v176) >> v166];
              *(_WORD *)v177 = *(_WORD *)v178;
              LODWORD(v175) = v176 + *((unsigned __int8 *)v178 + 2);
              v179 = &v177[*((unsigned __int8 *)v178 + 3)];
              v180 = &v164[(unsigned __int64)(v163 << (char)v175) >> v166];
              *(_WORD *)v179 = *(_WORD *)v180;
              v162 = (_DWORD)v175 + *((unsigned __int8 *)v180 + 2);
              v167 = &v179[*((unsigned __int8 *)v180 + 3)];
              if ( v162 > 0x40 )
              {
                v250 = v168;
                v200 = v263;
                v271 = v45 - 2;
                v8 = v295;
LABEL_219:
                if ( v271 < v167 )
                {
                  if ( v167 >= v45 )
                    return -20;
                  goto LABEL_222;
                }
                do
                {
LABEL_220:
                  v201 = &v164[(unsigned __int64)(v163 << v162) >> -v273];
                  *(_WORD *)v167 = *(_WORD *)v201;
                  v162 += *((unsigned __int8 *)v201 + 2);
                  v167 += *((unsigned __int8 *)v201 + 3);
                }
                while ( v271 >= v167 );
                goto LABEL_221;
              }
            }
            v250 = v168;
            v200 = v263;
            v8 = v295;
LABEL_228:
            v271 = v45 - 2;
            if ( v162 > 0x40 )
              goto LABEL_219;
LABEL_229:
            v300 = v8;
            v205 = v250;
            while ( 1 )
            {
              if ( v205 < v257 )
              {
                if ( v205 == v36 )
                  break;
                v206 = v162 >> 3;
                v207 = &v205[-v206];
                if ( &v205[-v206] < v36 )
                {
                  v211 = v205;
                  v8 = v300;
                  v212 = (unsigned int)((_DWORD)v211 - (_DWORD)v36);
                  v162 -= 8 * v212;
                  v250 = &v211[-v212];
                  v163 = *(_QWORD *)&v211[-v212];
                  goto LABEL_239;
                }
                v205 -= v206;
                v208 = v271 >= v167;
                v162 -= 8 * (v162 >> 3);
                v163 = *(_QWORD *)v207;
              }
              else
              {
                v210 = v162;
                v162 &= 7u;
                v205 -= v210 >> 3;
                v163 = *(_QWORD *)v205;
                v208 = v271 >= v167;
              }
              if ( !v208 )
                break;
              v209 = &v164[(unsigned __int64)(v163 << v162) >> -v273];
              *(_WORD *)v167 = *(_WORD *)v209;
              v162 += *((unsigned __int8 *)v209 + 2);
              v167 += *((unsigned __int8 *)v209 + 3);
              if ( v162 > 0x40 )
              {
                v250 = v205;
                v8 = v300;
                goto LABEL_219;
              }
            }
            v250 = v205;
            v8 = v300;
LABEL_239:
            if ( v271 >= v167 )
              goto LABEL_220;
LABEL_221:
            if ( v167 >= v45 )
              goto LABEL_259;
LABEL_222:
            v202 = (char *)&v164[(unsigned __int64)(v163 << v162) >> -v273];
            *v167 = *v202;
            if ( v202[3] == 1 )
            {
              v162 += (unsigned __int8)v202[2];
            }
            else if ( v162 <= 0x3F )
            {
              v162 += (unsigned __int8)v202[2];
              if ( v162 > 0x40 )
              {
                if ( v250 != v36 )
                  return -20;
                goto LABEL_226;
              }
            }
LABEL_259:
            if ( v250 != v36 || v162 != 64 )
              return -20;
LABEL_226:
            a1[3703] = v200;
            *((_DWORD *)a1 + 7368) = 1;
            a1[3699] = v267;
            goto LABEL_173;
          }
          v299 = v8;
          v220 = a1 + 3727;
          if ( (unsigned __int64)sub_140007390(v156, v33, &v8[v31], v34, a1[3]) > 0xFFFFFFFFFFFFFF88uLL )
            return -20;
        }
        else
        {
          v243 = a1[3];
          v299 = v8;
          if ( v35 == 0 )
          {
            v197 = sub_140004830((unsigned __int64)v156, v33, v36, v34, v243);
            v8 = v299;
            if ( v197 > 0xFFFFFFFFFFFFFF88uLL )
              return -20;
            a1[3703] = v33;
            *((_DWORD *)a1 + 7368) = 1;
            a1[3699] = v267;
            v45 = (char *)(v267 + v33);
            goto LABEL_173;
          }
          v220 = a1 + 3727;
          if ( (unsigned __int64)sub_140004AF0(v267, v33, &v8[v31], v34, v243) > 0xFFFFFFFFFFFFFF88uLL )
            return -20;
        }
        a1[3699] = (__int64)v220;
        v8 = v299;
        v45 = (char *)v220 + v33;
        a1[3703] = v33;
        *((_DWORD *)a1 + 7368) = 1;
      }
LABEL_173:
      *(_OWORD *)v45 = 0;
      *((_OWORD *)v45 + 1) = 0;
      break;
    case 1:
      v11 = (v9 >> 2) & 3;
      if ( v11 == 1 )
      {
        v12 = 3;
        v14 = 2;
        v13 = *(_WORD *)a4 >> 4;
      }
      else if ( v11 == 3 )
      {
        v182 = *(unsigned __int16 *)a4 + ((unsigned __int8)a4[2] << 16);
        if ( v182 > 0x20000F || a5 == 3 )
          return -20;
        v13 = v182 >> 4;
        v12 = 4;
        v14 = 3;
      }
      else
      {
        v12 = 2;
        v13 = v9 >> 3;
        v14 = 1;
      }
      v15 = memset(a1 + 3727, (unsigned __int8)a4[v14], v13 + 32);
      a1[3703] = v13;
      v8 = a4;
      a1[3699] = (__int64)v15;
      break;
    default:
      v46 = (v9 >> 2) & 3;
      if ( v46 == 1 )
      {
        v48 = 2;
        v47 = *(_WORD *)a4 >> 4;
      }
      else if ( v46 == 3 )
      {
        v48 = 3;
        v47 = (unsigned int)(*(unsigned __int16 *)a4 + ((unsigned __int8)a4[2] << 16)) >> 4;
      }
      else
      {
        v47 = v9 >> 3;
        v48 = 1;
      }
      v12 = v47 + v48;
      if ( a5 >= v47 + v48 + 32 )
      {
        a1[3703] = v47;
        a1[3699] = (__int64)&a4[v48];
      }
      else
      {
        if ( a5 < v12 )
          return -20;
        v187 = (char *)memcpy(a1 + 3727, &a4[v48], v47);
        a1[3703] = v47;
        v8 = a4;
        a1[3699] = (__int64)v187;
        *(_OWORD *)&v187[v47] = 0;
        *(_OWORD *)&v187[v47 + 16] = 0;
      }
      break;
  }
  v16 = -72;
  v17 = a5 - v12;
  v244 = (void *)(a5 - v12);
  if ( a5 == v12 )
    return v16;
  v18 = &v8[v12];
  v19 = *((_DWORD *)a1 + 7419);
  v20 = (unsigned __int8)v8[v12];
  v21 = v18 + 1;
  if ( v20 == 0 )
  {
    if ( v17 != 1 )
      return v16;
    if ( a2 != nullptr )
    {
      v22 = 0;
      if ( v19 == 0 )
      {
        if ( (unsigned __int64)a1[3678] <= 0x1000000 )
          goto LABEL_15;
LABEL_178:
        v20 = 0;
        goto LABEL_15;
      }
      goto LABEL_50;
    }
    v22 = 0;
    goto LABEL_176;
  }
  v49 = (unsigned __int64)&v8[a5];
  if ( v20 > 127 )
  {
    if ( v20 == 255 )
    {
      v21 = v18 + 3;
      if ( v49 < (unsigned __int64)(v18 + 3) )
        return v16;
      v20 = *(unsigned __int16 *)(v18 + 1) + 32512;
    }
    else
    {
      if ( (unsigned __int64)v21 >= v49 )
        return v16;
      v21 = v18 + 2;
      v20 = v18[1] + ((v20 - 128) << 8);
    }
  }
  v50 = (unsigned int *)(v21 + 1);
  v16 = -72;
  if ( v49 >= (unsigned __int64)(v21 + 1) )
  {
    v51 = *v21;
    v253 = v49;
    v262 = v18;
    v52 = sub_1400114E0(
            (__int64)(a1 + 4),
            a1,
            *v21 >> 6,
            0x23u,
            9u,
            v50,
            v49 - (_QWORD)v50,
            (__int64)&unk_142422D40,
            (__int64)&unk_142422CA0,
            (__int64)&qword_142423C20,
            *((_DWORD *)a1 + 7369),
            v19,
            v20,
            (__int64)a1 + 27324,
            *((_DWORD *)a1 + 7412));
    if ( v52 > 0xFFFFFFFFFFFFFF88uLL )
      return -20;
    v53 = (unsigned int *)((char *)v50 + v52);
    v54 = sub_1400114E0(
            (__int64)(a1 + 517),
            a1 + 2,
            (v51 >> 4) & 3,
            0x1Fu,
            8u,
            v53,
            v253 - (_QWORD)v53,
            (__int64)&unk_142423020,
            (__int64)&unk_142422FA0,
            (__int64)&qword_142423B00,
            *((_DWORD *)a1 + 7369),
            *((_DWORD *)a1 + 7419),
            v20,
            (__int64)a1 + 27324,
            *((_DWORD *)a1 + 7412));
    if ( v54 > 0xFFFFFFFFFFFFFF88uLL )
      return -20;
    v55 = (unsigned int *)((char *)v53 + v54);
    v56 = sub_1400114E0(
            (__int64)(a1 + 774),
            a1 + 1,
            (v51 >> 2) & 3,
            0x34u,
            9u,
            v55,
            v253 - (_QWORD)v55,
            (__int64)&unk_142422EC0,
            (__int64)&unk_142422DE0,
            (__int64)&qword_1424238E0,
            *((_DWORD *)a1 + 7369),
            *((_DWORD *)a1 + 7419),
            v20,
            (__int64)a1 + 27324,
            *((_DWORD *)a1 + 7412));
    if ( v56 > 0xFFFFFFFFFFFFFF88uLL )
      return -20;
    v21 = (unsigned __int8 *)v55 + v56;
    v16 = (char *)v55 + v56 - (char *)v262;
    if ( v16 <= 0xFFFFFFFFFFFFFF88uLL )
    {
      v22 = (unsigned __int64)v244 - v16;
      if ( a2 != nullptr )
      {
        if ( v19 == 0 )
        {
          if ( (unsigned __int64)a1[3678] <= 0x1000000 || v20 <= 4 )
          {
LABEL_15:
            v23 = *((_DWORD *)a1 + 7412);
            *((_DWORD *)a1 + 7419) = 0;
            if ( v23 == 0 )
            {
              v24 = (const __m128i *)a1[3699];
              v245 = a2;
              v277 = (__int64)a2->m128i_i64 + a3;
              v25 = &v24->m128i_i8[a1[3703]];
              v288 = v24;
              v260 = v25;
              if ( v20 == 0 )
              {
LABEL_17:
                v16 = -70;
                v26 = v260 - (__int8 *)v24;
                if ( v277 - (__int64)v245 >= (unsigned __int64)(v260 - (__int8 *)v24) )
                {
                  if ( v245 != nullptr )
                  {
                    memcpy(v245, v24, v260 - (__int8 *)v24);
                    v245 = (__m128i *)((char *)v245 + v26);
                  }
                  return (char *)v245 - (char *)a2;
                }
                return v16;
              }
              goto LABEL_90;
            }
            return sub_14000D570(a1, a2, a3, v21, v22, v20);
          }
          v57 = a1[2];
          v58 = *(_DWORD *)(v57 + 4);
          v59 = 1 << v58;
          if ( 1 << v58 != 0 )
          {
            v60 = v59 - 1;
            if ( v59 - 1 <= 0xF )
            {
              v78 = 0;
              v77 = 0;
            }
            else
            {
              v61 = a1[2];
              v62 = 0;
              v63 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x16161616u), 0);
              v64 = _mm_srli_epi16((__m128i)-1LL, 8u);
              v65 = _mm_srli_epi32((__m128i)-1LL, 0x1Fu);
              do
              {
                v66 = _mm_loadu_si128((const __m128i *)(v61 + 10));
                v67 = _mm_loadu_si128((const __m128i *)(v61 + 26));
                v61 += 128;
                v68 = _mm_cmpeq_epi8(
                        _mm_cmpeq_epi8(
                          _mm_subs_epu8(
                            _mm_packus_epi16(
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(_mm_packus_epi16(_mm_and_si128(v66, v64), _mm_and_si128(v67, v64)), v64),
                                  _mm_and_si128(
                                    _mm_packus_epi16(
                                      _mm_and_si128(_mm_loadu_si128((const __m128i *)(v61 - 86)), v64),
                                      _mm_and_si128(_mm_loadu_si128((const __m128i *)(v61 - 70)), v64)),
                                    v64)),
                                v64),
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(
                                    _mm_packus_epi16(
                                      _mm_and_si128(_mm_loadu_si128((const __m128i *)(v61 - 54)), v64),
                                      _mm_and_si128(_mm_loadu_si128((const __m128i *)(v61 - 38)), v64)),
                                    v64),
                                  _mm_and_si128(
                                    _mm_packus_epi16(
                                      _mm_and_si128(_mm_loadu_si128((const __m128i *)(v61 - 22)), v64),
                                      _mm_and_si128(_mm_loadu_si128((const __m128i *)(v61 - 6)), v64)),
                                    v64)),
                                v64)),
                            v63),
                          (__m128i)0LL),
                        (__m128i)0LL);
                v69 = _mm_cmpgt_epi8((__m128i)0LL, v68);
                v70 = _mm_unpacklo_epi8(v68, v69);
                v71 = _mm_unpackhi_epi8(v68, v69);
                v72 = _mm_srai_epi16(v70, 0xFu);
                v73 = _mm_sub_epi32(_mm_and_si128(_mm_unpacklo_epi16(v70, v72), v65), _mm_unpackhi_epi16(v70, v72));
                v74 = _mm_srai_epi16(v71, 0xFu);
                v75 = _mm_add_epi32(
                        _mm_add_epi32(
                          v73,
                          _mm_sub_epi32(_mm_and_si128(_mm_unpacklo_epi16(v71, v74), v65), _mm_unpackhi_epi16(v71, v74))),
                        v62);
                v62 = v75;
              }
              while ( v61 != v57 + ((unsigned __int64)(v60 >> 4) << 7) );
              v76 = _mm_add_epi32(v75, _mm_srli_si128(v75, 8));
              v77 = v60 & 0xFFFFFFF0;
              v78 = _mm_cvtsi128_si32(_mm_add_epi32(v76, _mm_srli_si128(v76, 4)));
            }
            v79 = v77 + 1;
            v80 = v78 - ((*(_BYTE *)(v57 + 8 * v79 + 2) < 0x17u) - 1);
            if ( (unsigned int)v79 < v59 )
            {
              v81 = v77 + 2;
              v80 -= (*(_BYTE *)(v57 + 8 * v81 + 2) < 0x17u) - 1;
              if ( (unsigned int)v81 < v59 )
              {
                v82 = v77 + 3;
                v80 -= (*(_BYTE *)(v57 + 8 * v82 + 2) < 0x17u) - 1;
                if ( (unsigned int)v82 < v59 )
                {
                  v83 = v77 + 4;
                  v80 -= (*(_BYTE *)(v57 + 8 * v83 + 2) < 0x17u) - 1;
                  if ( (unsigned int)v83 < v59 )
                  {
                    v84 = v77 + 5;
                    v80 -= (*(_BYTE *)(v57 + 8 * v84 + 2) < 0x17u) - 1;
                    if ( (unsigned int)v84 < v59 )
                    {
                      v85 = v77 + 6;
                      v80 -= (*(_BYTE *)(v57 + 8 * v85 + 2) < 0x17u) - 1;
                      if ( (unsigned int)v85 < v59 )
                      {
                        v86 = v77 + 7;
                        v80 -= (*(_BYTE *)(v57 + 8 * v86 + 2) < 0x17u) - 1;
                        if ( (unsigned int)v86 < v59 )
                        {
                          v87 = v77 + 8;
                          v80 -= (*(_BYTE *)(v57 + 8 * v87 + 2) < 0x17u) - 1;
                          if ( (unsigned int)v87 < v59 )
                          {
                            v88 = v77 + 9;
                            v80 -= (*(_BYTE *)(v57 + 8 * v88 + 2) < 0x17u) - 1;
                            if ( (unsigned int)v88 < v59 )
                            {
                              v89 = v77 + 10;
                              v80 -= (*(_BYTE *)(v57 + 8 * v89 + 2) < 0x17u) - 1;
                              if ( (unsigned int)v89 < v59 )
                              {
                                v90 = v77 + 11;
                                v80 -= (*(_BYTE *)(v57 + 8 * v90 + 2) < 0x17u) - 1;
                                if ( (unsigned int)v90 < v59 )
                                {
                                  v91 = v77 + 12;
                                  v80 -= (*(_BYTE *)(v57 + 8 * v91 + 2) < 0x17u) - 1;
                                  if ( (unsigned int)v91 < v59 )
                                  {
                                    v92 = v77 + 13;
                                    v80 -= (*(_BYTE *)(v57 + 8 * v92 + 2) < 0x17u) - 1;
                                    if ( (unsigned int)v92 < v59 )
                                    {
                                      v93 = v77 + 14;
                                      v80 -= (*(_BYTE *)(v57 + 8 * v93 + 2) < 0x17u) - 1;
                                      if ( (unsigned int)v93 < v59 )
                                      {
                                        v94 = v77 + 15;
                                        v80 -= (*(_BYTE *)(v57 + 8 * v94 + 2) < 0x17u) - 1;
                                        if ( (unsigned int)v94 < v59 )
                                          v80 -= (*(_BYTE *)(v57 + 8LL * (v77 + 16) + 2) < 0x17u) - 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            *((_DWORD *)a1 + 7419) = 0;
            if ( (unsigned int)(v80 << (8 - v58)) > 6 )
              goto LABEL_51;
          }
          else
          {
            *((_DWORD *)a1 + 7419) = 0;
          }
          if ( *((_DWORD *)a1 + 7412) == 0 )
          {
            v277 = (__int64)a2->m128i_i64 + a3;
            v288 = (const __m128i *)a1[3699];
            v260 = &v288->m128i_i8[a1[3703]];
LABEL_90:
            v95 = (const __m128i *)a1[3673];
            v96 = a1[3675];
            *((_DWORD *)a1 + 7369) = 1;
            v266 = v95;
            v284 = v96;
            v283 = a1[3674];
            v97 = *((unsigned int *)a1 + 6673);
            v289 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)((char *)a1 + 26684)), (__m128i)0LL);
            v290 = v97;
            if ( v22 == 0 )
              return -20;
            v98 = v21[v22 - 1];
            v101 = *v21;
            switch ( v22 )
            {
              case 1uLL:
                goto LABEL_216;
              case 2uLL:
                goto LABEL_215;
              case 3uLL:
                goto LABEL_214;
              case 4uLL:
                goto LABEL_213;
              case 5uLL:
                goto LABEL_212;
              case 6uLL:
                goto LABEL_211;
              case 7uLL:
                v101 += (unsigned __int64)v21[6] << 48;
LABEL_211:
                v101 += (unsigned __int64)v21[5] << 40;
LABEL_212:
                v101 += (unsigned __int64)v21[4] << 32;
LABEL_213:
                v101 += (unsigned __int64)v21[3] << 24;
LABEL_214:
                v101 += (unsigned __int64)v21[2] << 16;
LABEL_215:
                v101 += (unsigned __int64)v21[1] << 8;
LABEL_216:
                if ( (_BYTE)v98 == 0 )
                  return -20;
                _BitScanReverse(&v199, v98);
                v99 = v21;
                v102 = 8 * (9 - v22) - v199;
LABEL_95:
                v278 = v21 + 8;
                v279 = *a1;
                v103 = *(unsigned int *)(*a1 + 4);
                v104 = v103 + v102;
                v105 = dword_1424230E0[v103] & (unsigned int)(v101 >> -(char)v104);
                if ( v104 <= 0x40 )
                {
                  if ( v99 >= v21 + 8 )
                  {
                    v231 = v104;
                    v104 &= 7u;
                    v99 -= v231 >> 3;
                    v101 = *(_QWORD *)v99;
                  }
                  else if ( v99 != v21 )
                  {
                    v106 = v104 >> 3;
                    v107 = v104 >> 3;
                    if ( &v99[-v107] >= v21 )
                    {
                      v99 -= v107;
                    }
                    else
                    {
                      v106 = (_DWORD)v99 - (_DWORD)v21;
                      v99 -= (unsigned int)((_DWORD)v99 - (_DWORD)v21);
                    }
                    v101 = *(_QWORD *)v99;
                    v104 -= 8 * v106;
                  }
                }
                v280 = a1[2];
                v108 = *(unsigned int *)(v280 + 4);
                v109 = v108 + v104;
                v110 = dword_1424230E0[v108] & (unsigned int)(v101 >> -(char)v109);
                if ( v109 <= 0x40 )
                {
                  if ( v99 >= v278 )
                  {
                    v234 = v109;
                    v109 &= 7u;
                    v99 -= v234 >> 3;
                    v101 = *(_QWORD *)v99;
                  }
                  else if ( v99 != v21 )
                  {
                    v111 = v109 >> 3;
                    v112 = v109 >> 3;
                    if ( &v99[-v112] >= v21 )
                    {
                      v99 -= v112;
                    }
                    else
                    {
                      v111 = (_DWORD)v99 - (_DWORD)v21;
                      v99 -= (unsigned int)((_DWORD)v99 - (_DWORD)v21);
                    }
                    v101 = *(_QWORD *)v99;
                    v109 -= 8 * v111;
                  }
                }
                v281 = a1[1];
                v113 = *(unsigned int *)(v281 + 4);
                v114 = v113 + v109;
                v115 = dword_1424230E0[v113] & (unsigned int)(v101 >> -(char)(v113 + v109));
                if ( v114 <= 0x40 )
                {
                  if ( v99 >= v278 )
                  {
                    v235 = v114;
                    v114 &= 7u;
                    v99 -= v235 >> 3;
                    v101 = *(_QWORD *)v99;
                  }
                  else if ( v99 != v21 )
                  {
                    v116 = v114 >> 3;
                    v117 = v114 >> 3;
                    if ( &v99[-v117] >= v21 )
                    {
                      v99 -= v117;
                    }
                    else
                    {
                      v116 = (_DWORD)v99 - (_DWORD)v21;
                      v99 -= (unsigned int)((_DWORD)v99 - (_DWORD)v21);
                    }
                    v101 = *(_QWORD *)v99;
                    v114 -= 8 * v116;
                  }
                }
                v245 = a2;
                v285 = v20;
                v282 = v21;
                v291 = a1;
                v292 = a2;
                break;
              default:
                if ( (_BYTE)v98 == 0 || v22 > 0xFFFFFFFFFFFFFF88uLL )
                  return -20;
                v99 = &v21[v22 - 8];
                _BitScanReverse(&v100, v98);
                v101 = *(_QWORD *)v99;
                v102 = 8 - v100;
                goto LABEL_95;
            }
            while ( 1 )
            {
              v118 = v289.m128i_i64[0];
              v119 = v279 + 8 * v105 + 8;
              v120 = *(unsigned __int8 *)(v279 + 8 * v105 + 10);
              v254 = *(_DWORD *)(v279 + 8 * v105 + 12);
              v121 = v281 + 8 * v115 + 8;
              v122 = *(unsigned __int8 *)(v281 + 8 * v115 + 10);
              v123 = *(unsigned int *)(v281 + 8 * v115 + 12);
              v124 = v280 + 8 * v110 + 8;
              v125 = *(unsigned __int8 *)(v280 + 8 * v110 + 10);
              v126 = *(unsigned int *)(v280 + 8 * v110 + 12);
              v127 = v125 + v120 + v122;
              if ( (unsigned __int8)v125 > 1u )
              {
                v128 = v114;
                v114 += v125;
                v129 = (v101 << v128 >> -(char)v125) + v126;
                goto LABEL_116;
              }
              if ( (_BYTE)v125 == 1 )
                break;
              if ( v254 == 0 )
              {
                v118 = v289.m128i_u64[1];
                v289 = _mm_unpacklo_epi64(
                         _mm_loadl_epi64((const __m128i *)&v289.m128i_u64[1]),
                         (__m128i)v289.m128i_u64[0]);
              }
LABEL_118:
              if ( (_BYTE)v122 != 0 )
              {
                v130 = v114;
                v114 += v122;
                v123 += v101 << v130 >> -(char)v122;
              }
              if ( v127 > 0x1Eu && v114 <= 0x40 )
              {
                if ( v99 >= v278 )
                {
                  v238 = v114;
                  v114 &= 7u;
                  v99 -= v238 >> 3;
                  v101 = *(_QWORD *)v99;
                }
                else if ( v99 != v282 )
                {
                  v214 = v114 >> 3;
                  v215 = &v99[-(v114 >> 3)];
                  if ( v215 < v282 )
                  {
                    v214 = (_DWORD)v99 - (_DWORD)v282;
                    v215 = &v99[-((_DWORD)v99 - (_DWORD)v282)];
                  }
                  v101 = *(_QWORD *)v215;
                  v99 = v215;
                  v114 -= 8 * v214;
                }
              }
              v131 = v254;
              if ( (_BYTE)v120 != 0 )
              {
                v132 = v114;
                v114 += v120;
                v131 = (v101 << v132 >> -(char)v120) + v254;
              }
              v269 = *(_WORD *)v119;
              v133 = *(unsigned __int8 *)(v119 + 3);
              v134 = v133 + v114;
              v272 = dword_1424230E0[v133];
              v274 = *(_WORD *)v121;
              v135 = *(unsigned __int8 *)(v121 + 3);
              v136 = dword_1424230E0[v135];
              v137 = v134 + v135;
              v275 = *(_WORD *)v124;
              v138 = *(unsigned __int8 *)(v124 + 3);
              v139 = v137 + v138;
              v16 = v131 + v123;
              v276 = dword_1424230E0[v138];
              v140 = (unsigned __int64)v245->m128i_u64 + v131 + v123;
              v141 = v288;
              v255 = (const __m128i *)((char *)v288 + v131);
              if ( v260 < &v288->m128i_i8[v131] || v277 - 32 < v140 )
              {
                v259 = v136;
                v213 = sub_14000BE60(
                         (unsigned __int64)v245,
                         v277,
                         v131,
                         v123,
                         (char *)v118,
                         &v288,
                         (__int64)v260,
                         v266,
                         v283,
                         v284);
                v136 = v259;
                v16 = v213;
                v245 = (__m128i *)((char *)v245 + v213);
                goto LABEL_135;
              }
              v142 = (__m128i *)((char *)v245 + v131);
              *v245 = _mm_loadu_si128(v288);
              v143 = (__m128i *)((char *)v245 + v131 - v118);
              if ( v131 > 0x10 )
              {
                v245[1] = _mm_loadu_si128(v141 + 1);
                if ( (__int64)(v131 - 16) > 16 )
                {
                  v216 = v245 + 2;
                  v217 = v141 + 2;
                  do
                  {
                    v218 = _mm_loadu_si128(v217);
                    v216 += 2;
                    v217 += 2;
                    v216[-2] = v218;
                    v216[-1] = _mm_loadu_si128(v217 - 1);
                  }
                  while ( v216 < v142 );
                }
              }
              v288 = v255;
              if ( (char *)v142 - (char *)v266 >= v118 )
                goto LABEL_130;
              if ( (unsigned __int64)v142 - v283 < v118 )
              {
                if ( v139 > 0x40 || v99 >= v278 || v99 == v282 )
                  return -20;
                v245 = (__m128i *)((char *)v245 - 20);
                v16 = -20;
                goto LABEL_138;
              }
              v144 = (const void *)(v284 + (char *)v143 - (char *)v266);
              if ( v284 < (unsigned __int64)v144 + v123 )
              {
                v287 = v140;
                v286 = v136;
                v247 = (char *)((char *)v266 - (char *)v143);
                v256 = (char *)v143 - (char *)v266;
                v145 = memmove(v142, v144, (char *)v266 - (char *)v143);
                v140 = v287;
                v136 = v286;
                v123 += v256;
                v142 = (__m128i *)&v247[(_QWORD)v145];
                v143 = v266;
LABEL_130:
                if ( v118 <= 0xF )
                {
                  if ( v118 > 7 )
                  {
                    v142->m128i_i64[0] = v143->m128i_i64[0];
                  }
                  else
                  {
                    v142->m128i_i8[0] = v143->m128i_i8[0];
                    v142->m128i_i8[1] = v143->m128i_i8[1];
                    v142->m128i_i8[2] = v143->m128i_i8[2];
                    v142->m128i_i8[3] = v143->m128i_i8[3];
                    v221 = (__int32 *)((char *)v143->m128i_i32 + dword_142423E40[v118]);
                    v142->m128i_i32[1] = *v221;
                    v143 = (const __m128i *)((char *)v221 - dword_142423E60[v118]);
                  }
                  if ( (unsigned __int64)v123 > 8 )
                  {
                    v222 = (unsigned __int64)v142->m128i_u64 + v123;
                    if ( (char *)v142 - (char *)v143 > 15 )
                    {
                      *(__m128i *)((char *)v142 + 8) = _mm_loadu_si128((const __m128i *)&v143->m128i_u64[1]);
                      if ( v123 - 8 > 16 )
                      {
                        v239 = (__m128i *)((char *)v142 + 24);
                        v240 = (const __m128i *)((char *)v143 + 24);
                        do
                        {
                          v241 = _mm_loadu_si128(v240);
                          v239 += 2;
                          v240 += 2;
                          v239[-2] = v241;
                          v239[-1] = _mm_loadu_si128(v240 - 1);
                        }
                        while ( (unsigned __int64)v239 < v222 );
                      }
                    }
                    else
                    {
                      v223 = &v143->m128i_i64[1];
                      v224 = v123 - 9;
                      v225 = &v142->m128i_i64[1];
                      if ( v222 < (unsigned __int64)&v142->m128i_u64[1] + 1
                        || v224 <= 0x17
                        || (unsigned __int64)((char *)&v142[-1].m128i_u64[1] + 7 - (char *)v143) <= 0xE )
                      {
                        do
                        {
                          v228 = *v223;
                          ++v225;
                          ++v223;
                          *(v225 - 1) = v228;
                        }
                        while ( (unsigned __int64)v225 < v222 );
                      }
                      else
                      {
                        v226 = (v224 >> 3) + 1;
                        v227 = 0;
                        do
                        {
                          *(__m128i *)((char *)&v142[v227] + 8) = _mm_loadu_si128((const __m128i *)&v143[v227].m128i_u64[1]);
                          ++v227;
                        }
                        while ( v227 != v226 >> 1 );
                        if ( (v226 & 1) != 0 )
                          v225[v226 & 0xFFFFFFFFFFFFFFFEuLL] = v223[v226 & 0xFFFFFFFFFFFFFFFEuLL];
                      }
                    }
                  }
                }
                else
                {
                  *v142 = _mm_loadu_si128(v143);
                  if ( v123 > 16 )
                  {
                    v146 = (__m128i *)((char *)v142 + v123);
                    v147 = v143 + 1;
                    v148 = v142 + 1;
                    do
                    {
                      v149 = _mm_loadu_si128(v147);
                      v148 += 2;
                      v147 += 2;
                      v148[-2] = v149;
                      v148[-1] = _mm_loadu_si128(v147 - 1);
                    }
                    while ( v148 < v146 );
                  }
                }
                goto LABEL_134;
              }
              v258 = v140;
              v251 = v136;
              memmove(v142, v144, v123);
              v136 = v251;
              v140 = v258;
LABEL_134:
              v245 = (__m128i *)v140;
LABEL_135:
              if ( v139 > 0x40 )
                goto LABEL_195;
              if ( v99 >= v278 )
              {
                v114 = v139 & 7;
                v99 -= v139 >> 3;
                v152 = *(_QWORD *)v99;
                goto LABEL_141;
              }
              if ( v99 == v282 )
              {
LABEL_195:
                v114 = v139;
                v152 = v101;
                goto LABEL_141;
              }
LABEL_138:
              v150 = v139 >> 3;
              v151 = v139 >> 3;
              if ( &v99[-v151] >= v282 )
              {
                v99 -= v151;
              }
              else
              {
                v150 = (_DWORD)v99 - (_DWORD)v282;
                v99 -= (unsigned int)((_DWORD)v99 - (_DWORD)v282);
              }
              v114 = v139 - 8 * v150;
              v152 = *(_QWORD *)v99;
LABEL_141:
              if ( v16 > 0xFFFFFFFFFFFFFF88uLL )
                return v16;
              v105 = v269 + (unsigned __int64)((unsigned int)(v101 >> -(char)v134) & v272);
              v115 = ((unsigned int)(v101 >> -(char)v137) & v136) + (unsigned __int64)v274;
              v110 = ((unsigned int)(v101 >> -(char)v139) & v276) + (unsigned __int64)v275;
              if ( --v285 == 0 )
              {
                a2 = v292;
                if ( v114 > 0x40 || v99 < v278 && v99 == v282 && v114 == 64 )
                {
                  v24 = v288;
                  v229 = (__m128)_mm_loadu_si128(&v289);
                  *((_DWORD *)v291 + 6673) = v290;
                  *(__int64 *)((char *)v291 + 26684) = _mm_shuffle_ps(v229, v229, 232).m128_u64[0];
                  goto LABEL_17;
                }
                return -20;
              }
              v101 = v152;
            }
            v236 = v114++;
            v237 = (v101 << v236 >> 63) + (v254 == 0) + (unsigned int)v126;
            if ( v237 == 3 )
            {
              v129 = (v289.m128i_i64[0] == 1) + v289.m128i_i64[0] - 1;
            }
            else
            {
              v129 = (v289.m128i_i64[v237] == 0) + v289.m128i_i64[v237];
              if ( v237 == 1 )
                goto LABEL_117;
            }
LABEL_116:
            v290 = v289.m128i_i64[1];
LABEL_117:
            v118 = v129;
            v289 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v129, (__m128i)v289.m128i_u64[0]);
            goto LABEL_118;
          }
          return sub_14000D570(a1, a2, a3, v21, v22, v20);
        }
LABEL_50:
        *((_DWORD *)a1 + 7419) = 0;
LABEL_51:
        if ( *((_DWORD *)a1 + 7412) != 0 )
          return sub_14000E190(a1, a2, a3, v21, v22, v20);
        else
          return sub_14000BFC0(a1, a2, a3, v21, v22, v20);
      }
      v16 = -70;
      if ( v20 != 0 )
        return v16;
LABEL_176:
      if ( v19 == 0 )
      {
        v20 = 0;
        if ( (unsigned __int64)a1[3678] <= 0x1000000 )
          goto LABEL_15;
        goto LABEL_178;
      }
      v20 = 0;
      goto LABEL_50;
    }
  }
  return v16;
}

