// sub_140013760 @ 0x140013760
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_140013760(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  char *v3; // r13
  __int64 v4; // rdx
  char *v5; // rdi
  __int64 v6; // rbp
  size_t v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  size_t v10; // r14
  size_t v11; // rsi
  size_t v12; // rsi
  unsigned __int64 v13; // r8
  int v14; // r14d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  size_t v17; // r9
  size_t v18; // r10
  __m128i si128; // xmm1
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // r10
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r14
  size_t v25; // r8
  char *v26; // r10
  size_t v27; // rax
  size_t v28; // rdx
  size_t v29; // rdx
  size_t v30; // r14
  unsigned __int64 v32; // rax
  __m128i *v33; // r14
  signed __int64 v34; // r10
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // eax
  __int64 v38; // r14
  void (*v39)(void); // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // eax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r14
  size_t v46; // r8
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  size_t v49; // rcx
  bool v50; // dl
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  char *v53; // rax
  unsigned __int64 v54; // rax
  void *v55; // rdx
  __int64 v56; // rcx
  void (__fastcall *v57)(__int64); // rax
  __int64 (__fastcall *v58)(__int64, size_t); // rax
  char *v59; // rax
  unsigned __int64 v60; // r8
  char *v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned int v63; // eax
  int v64; // r9d
  __int64 v65; // r11
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // r9
  int v68; // eax
  __m128i *v69; // r11
  __int64 v70; // rsi
  void (__fastcall *v71)(__int64); // rdi
  __int64 v72; // r12
  unsigned __int64 v73; // r14
  _DWORD *v74; // r15
  char *v75; // rdi
  _DWORD *v76; // r12
  int v77; // ecx
  unsigned __int64 v78; // rsi
  __m128i *v79; // r15
  int v80; // ebp
  unsigned __int64 v81; // rax
  __m128i *v82; // rax
  char *v83; // rax
  __int64 v84; // r8
  unsigned __int8 v85; // al
  unsigned __int64 v86; // rbp
  unsigned __int64 v87; // rax
  __m128i *v88; // r12
  char *v89; // rax
  __int64 v90; // rbp
  unsigned int v91; // ebx
  unsigned int v92; // edx
  int v93; // ecx
  __int64 v94; // r14
  unsigned __int64 v95; // rsi
  char *v96; // rdi
  unsigned __int64 v97; // r8
  unsigned __int64 v98; // rax
  size_t v99; // r13
  __m128i *v100; // rbp
  __int64 v101; // rax
  __m128i v102; // xmm2
  unsigned __int64 v103; // rdx
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rax
  int v107; // r9d
  unsigned __int64 v108; // r14
  unsigned __int64 v109; // rax
  int v110; // eax
  __int64 v111; // r10
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  __m128i v114; // xmm0
  unsigned __int64 v115; // rax
  char *v116; // rdx
  __int64 v117; // rax
  char *v118; // rcx
  __int64 v119; // [rsp+38h] [rbp-100h]
  char *v120; // [rsp+40h] [rbp-F8h]
  _DWORD *v121; // [rsp+48h] [rbp-F0h]
  __m128i *v122; // [rsp+48h] [rbp-F0h]
  __int64 v123; // [rsp+48h] [rbp-F0h]
  __m128i *v124; // [rsp+48h] [rbp-F0h]
  __int64 v125; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v126; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v127; // [rsp+58h] [rbp-E0h]
  void (*v128)(void); // [rsp+58h] [rbp-E0h]
  size_t v129; // [rsp+58h] [rbp-E0h]
  size_t v130; // [rsp+58h] [rbp-E0h]
  size_t v131; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v132; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v133; // [rsp+58h] [rbp-E0h]
  int v134; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v135; // [rsp+58h] [rbp-E0h]
  char *v136; // [rsp+60h] [rbp-D8h]
  __int64 v137; // [rsp+68h] [rbp-D0h]
  signed __int64 v138; // [rsp+68h] [rbp-D0h]
  __int8 *v139; // [rsp+68h] [rbp-D0h]
  int v140; // [rsp+74h] [rbp-C4h]
  __m128i *v141; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v142; // [rsp+80h] [rbp-B8h]
  char *v143; // [rsp+88h] [rbp-B0h]
  _DWORD *v144; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v145; // [rsp+98h] [rbp-A0h]
  void *v146; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v147; // [rsp+B0h] [rbp-88h]
  char v148[24]; // [rsp+C0h] [rbp-78h] BYREF
  unsigned int v149; // [rsp+D8h] [rbp-60h]
  int v150; // [rsp+E0h] [rbp-58h]

  v1 = qword_142450938;
  v2 = a1;
  v3 = (char *)Block + qword_142450960;
  v146 = (char *)Block + qword_142450960;
  if ( qword_142450938 < (unsigned __int64)qword_142450940 )
    return -72;
  if ( (unsigned __int64)*(&Block + 1) < qword_142450960 )
    return -70;
  v4 = *(unsigned int *)(a1 + 29684);
  if ( *(_DWORD *)(a1 + 29784) == 1
    && (_DWORD)v4 != 0
    && (*(_QWORD *)(a1 + 29808) != qword_142450960
     || *(_QWORD *)(a1 + 29792) != (_QWORD)Block
     || *(void **)(a1 + 29800) != *(&Block + 1)) )
  {
    return -104;
  }
  v5 = (char *)(qword_142450930 + qword_142450940);
  v119 = qword_142450930 + qword_142450938;
  v6 = qword_142450940;
  v120 = (char *)*(&Block + 1) + (_QWORD)Block;
  v136 = (char *)(qword_142450930 + qword_142450940);
  v121 = (_DWORD *)(a1 + 160920);
  while ( 2 )
  {
    switch ( v4 )
    {
      case 0LL:
        si128 = _mm_load_si128((const __m128i *)&Block);
        v13 = 0;
        v20 = qword_142450960;
        *(_DWORD *)(v2 + 29684) = 1;
        *(_QWORD *)(v2 + 29704) = 0;
        *(_QWORD *)(v2 + 29752) = 0;
        *(_QWORD *)(v2 + 29772) = 0;
        *(_QWORD *)(v2 + 29808) = v20;
        *(_OWORD *)(v2 + 29736) = 0;
        *(__m128i *)(v2 + 29792) = si128;
        goto LABEL_18;
      case 1LL:
        v13 = *(_QWORD *)(v2 + 29752);
LABEL_18:
        v14 = *(_DWORD *)(v2 + 29576);
        v126 = v13;
        v15 = sub_14000A3C0(v2 + 29416, v121, v13, v14);
        v12 = v15;
        if ( v15 > 0xFFFFFFFFFFFFFF88uLL )
          return v12;
        if ( v15 != 0 )
        {
          v16 = v126;
          v17 = v15 - v126;
          v18 = v119 - (_QWORD)v5;
          if ( v119 - (__int64)v5 < v15 - v126 )
          {
            v107 = v14;
            v108 = v126;
            if ( v18 != 0 )
            {
              memcpy((char *)v121 + v126, v5, v18);
              v111 = *(_QWORD *)(v2 + 29752) + v119 - (_QWORD)v5;
              *(_QWORD *)(v2 + 29752) = v111;
              v107 = *(_DWORD *)(v2 + 29576);
              v108 = v111;
            }
            qword_142450940 = qword_142450938;
            v109 = v107 == 0 ? 6LL : 2LL;
            if ( v12 >= v109 )
              v109 = v12;
            return v109 - v108 + 3;
          }
          v127 = v15 - v126;
          memcpy((char *)v121 + v16, v5, v17);
          v4 = *(unsigned int *)(v2 + 29684);
          v5 += v127;
          *(_QWORD *)(v2 + 29752) = v12;
          continue;
        }
        v32 = *(_QWORD *)(v2 + 29416);
        if ( v32 == -1 || *(_DWORD *)(v2 + 29436) == 1 )
          goto LABEL_52;
        v33 = (__m128i *)v146;
        v34 = v120 - (_BYTE *)v146;
        if ( v120 - (_BYTE *)v146 < v32 )
        {
          if ( *(_DWORD *)(v2 + 29784) == 1 )
            return -70;
          goto LABEL_52;
        }
        v60 = v1 - v6;
        v147 = 0;
        if ( (unsigned __int64)(v1 - v6) > 7 && (*(_DWORD *)v136 & 0xFFFFFFF0) == 0x184D2A50 )
        {
          v35 = *((unsigned int *)v136 + 1);
          if ( (unsigned int)v35 <= 0xFFFFFFF7 )
          {
            v36 = v35 + 8;
            if ( v60 >= v36 )
              goto LABEL_118;
            goto LABEL_52;
          }
          v36 = -14;
        }
        else
        {
          v138 = v120 - (_BYTE *)v146;
          v36 = sub_14000A3C0((__int64)v148, v136, v60, 0);
          v60 = v1 - v6;
          v34 = v138;
          if ( v36 <= 0xFFFFFFFFFFFFFF88uLL )
          {
            if ( v36 == 0 )
            {
              v61 = &v136[v149];
              v62 = v1 - v6 - v149;
              while ( v62 > 2 )
              {
                v63 = *(unsigned __int16 *)v61 + ((unsigned __int8)v61[2] << 16);
                v64 = (v63 >> 1) & 3;
                if ( v64 == 1 )
                {
                  v66 = 4;
                  v65 = 1;
                }
                else
                {
                  if ( v64 == 3 )
                  {
                    v36 = -20;
                    goto LABEL_117;
                  }
                  v65 = v63 >> 3;
                  v66 = v65 + 3;
                }
                if ( v62 < v66 )
                  break;
                v61 += v66;
                v62 = v62 - 3 - v65;
                if ( (v63 & 1) != 0 )
                {
                  if ( v150 != 0 )
                  {
                    v36 = -72;
                    if ( v62 <= 3 )
                      goto LABEL_117;
                    v61 += 4;
                  }
                  v36 = v61 - v136;
                  goto LABEL_117;
                }
              }
            }
            v36 = -72;
          }
        }
LABEL_117:
        if ( v60 >= v36 )
        {
LABEL_118:
          v67 = v36;
          v68 = *(_DWORD *)(v2 + 29680);
          v125 = v34;
          v69 = v33;
          if ( v68 != -1 )
          {
            if ( v68 != 1 )
            {
              v70 = *(_QWORD *)(v2 + 29656);
              if ( v70 != 0 )
              {
                v71 = *(void (__fastcall **)(__int64))(v70 + 27336);
                v72 = *(_QWORD *)(v70 + 27344);
                if ( *(_QWORD *)v70 != 0 )
                {
                  v132 = v67;
                  if ( v71 != nullptr )
                  {
                    v71(v72);
                    v69 = v33;
                    v67 = v132;
                    goto LABEL_124;
                  }
                  free(*(void **)v70);
                  v69 = v33;
                  v67 = v132;
LABEL_235:
                  v135 = v67;
                  v124 = v69;
                  free((void *)v70);
                  v67 = v135;
                  v69 = v124;
                }
                else
                {
                  if ( v71 == nullptr )
                    goto LABEL_235;
LABEL_124:
                  v133 = v67;
                  v122 = v69;
                  ((void (__fastcall *)(__int64, __int64))v71)(v72, v70);
                  v69 = v122;
                  v67 = v133;
                }
              }
              v73 = 0;
              v74 = nullptr;
              *(_DWORD *)(v2 + 29680) = 0;
              v123 = 0;
              *(_OWORD *)(v2 + 29656) = 0;
LABEL_126:
              v141 = v69;
              v75 = v136;
              v76 = v74;
              v134 = 0;
              v77 = *(_DWORD *)(v2 + 29576);
              v78 = v67;
              v79 = v69;
              v142 = v67;
              while ( 1 )
              {
                while ( 1 )
                {
                  v80 = v77;
                  v81 = v77 == 0 ? 5LL : 1LL;
                  if ( v78 < v81 )
                  {
                    v26 = (char *)v79;
                    if ( v78 != 0 )
                      return -72;
                    v12 = (char *)v79 - (char *)v141;
                    if ( (unsigned __int64)((char *)v79 - (char *)v141) <= 0xFFFFFFFFFFFFFF88uLL )
                    {
                      *(_QWORD *)(v2 + 29408) = 0;
                      *(_DWORD *)(v2 + 29684) = 0;
                      v5 = &v136[v142];
                      goto LABEL_160;
                    }
                    return v12;
                  }
                  if ( (*(_DWORD *)v75 & 0xFFFFFFF0) != 0x184D2A50 )
                    break;
                  if ( v78 <= 7 )
                    return -72;
                  v112 = *((unsigned int *)v75 + 1);
                  if ( (unsigned int)v112 > 0xFFFFFFF7 )
                    return -14;
                  v113 = v112 + 8;
                  if ( v78 < v113 )
                    return -72;
                  v75 += v113;
                  v78 -= v113;
                }
                if ( v123 != 0 )
                {
                  sub_14000B3B0(v2, v123);
                  v82 = *(__m128i **)(v2 + 29376);
                }
                else
                {
                  *(_QWORD *)(v2 + 29408) = v81;
                  *(_QWORD *)(v2 + 29456) = 0;
                  *(_DWORD *)(v2 + 29672) = 0;
                  *(_QWORD *)(v2 + 26684) = 0x400000001LL;
                  *(_QWORD *)(v2 + 8) = v2 + 6192;
                  *(_OWORD *)(v2 + 29376) = 0;
                  *(_OWORD *)(v2 + 29392) = 0;
                  v114 = _mm_load_si128((const __m128i *)&xmmword_142423EB0);
                  *(_QWORD *)(v2 + 16) = v2 + 4136;
                  *(_DWORD *)(v2 + 10296) = 201326604;
                  *(_DWORD *)(v2 + 26692) = 8;
                  *(_QWORD *)v2 = v2 + 32;
                  *(_QWORD *)(v2 + 24) = v2 + 10296;
                  *(__m128i *)(v2 + 29464) = v114;
                  if ( v76 != nullptr && v73 != 0 )
                  {
                    if ( v73 > 7 && *v76 == -332356553 )
                    {
                      *(_DWORD *)(v2 + 29672) = v76[1];
                      v115 = sub_14000B140((unsigned int *)(v2 + 32), (__int64)v76, v73);
                      if ( v115 > 0xFFFFFFFFFFFFFF88uLL )
                        return -30;
                      v116 = (char *)v76 + v115;
                      v80 = *(_DWORD *)(v2 + 29576);
                      *(_QWORD *)(v2 + 29472) = 0x100000001LL;
                      v117 = *(_QWORD *)(v2 + 29376);
                      *(_QWORD *)(v2 + 29400) = v117;
                      v118 = &v116[-(v117 - *(_QWORD *)(v2 + 29384))];
                      v82 = (__m128i *)((char *)v76 + v73);
                      *(_QWORD *)(v2 + 29384) = v116;
                      *(_QWORD *)(v2 + 29392) = v118;
                      *(_QWORD *)(v2 + 29376) = (char *)v76 + v73;
                    }
                    else
                    {
                      v82 = (__m128i *)((char *)v76 + v73);
                      *(_QWORD *)(v2 + 29392) = v76;
                      *(_QWORD *)(v2 + 29384) = v76;
                      *(_QWORD *)(v2 + 29376) = (char *)v76 + v73;
                    }
                  }
                  else
                  {
                    v82 = *(__m128i **)(v2 + 29376);
                  }
                }
                if ( v82 != v79 )
                {
                  *(__m128i *)(v2 + 29392) = _mm_unpacklo_epi64(
                                               (__m128i)(unsigned __int64)((char *)v79
                                                                         - ((char *)v82
                                                                          - *(_QWORD *)(v2 + 29384))),
                                               (__m128i)(unsigned __int64)v82);
                  *(__m128i *)(v2 + 29376) = _mm_unpacklo_epi64(
                                               (__m128i)(unsigned __int64)v79,
                                               (__m128i)(unsigned __int64)v79);
                }
                if ( v80 != 0 )
                {
                  if ( v78 <= 4 )
                    return -72;
                  v83 = v75;
                  v84 = 1;
                }
                else
                {
                  if ( v78 <= 8 )
                    return -72;
                  v83 = v75 + 4;
                  v84 = 5;
                }
                v85 = *v83;
                v86 = ((v85 >> 6 == 0) & (unsigned __int8)(v85 >> 5))
                    + ((v85 & 0x20) == 0)
                    + v84
                    + qword_1424230C0[v85 & 3]
                    + qword_1424230A0[v85 >> 6];
                if ( v86 > 0xFFFFFFFFFFFFFF88uLL )
                {
                  v12 = ((v85 >> 6 == 0) & (unsigned __int8)(v85 >> 5))
                      + ((v85 & 0x20) == 0)
                      + v84
                      + qword_1424230C0[v85 & 3]
                      + qword_1424230A0[v85 >> 6];
                  goto LABEL_210;
                }
                if ( v78 < v86 + 3 )
                  return -72;
                v87 = sub_14000A680(v2, v75, v86);
                if ( v87 > 0xFFFFFFFFFFFFFF88uLL )
                  break;
                v143 = v3;
                v78 -= v86;
                v145 = v73;
                v144 = v76;
                v88 = v79;
                v139 = &v79->m128i_i8[v125];
                v89 = &v75[v86];
                v90 = v2;
                do
                {
                  if ( v78 <= 2 )
                    return -72;
                  v91 = *(unsigned __int16 *)v89 + ((unsigned __int8)v89[2] << 16);
                  v92 = v91 >> 3;
                  v93 = (v91 >> 1) & 3;
                  if ( v93 == 1 )
                  {
                    v95 = v78 - 3;
                    if ( v95 == 0 )
                      return -72;
                    v99 = v92;
                    v96 = v89 + 3;
                    if ( v139 - (__int8 *)v88 < (unsigned __int64)v92 )
                      return -70;
                    if ( v88 != nullptr )
                    {
                      v94 = 1;
                      memset(v88, (unsigned __int8)v89[3], v92);
                    }
                    else
                    {
                      if ( v92 != 0 )
                        return -74;
                      v99 = 0;
                      v94 = 1;
                    }
                  }
                  else
                  {
                    if ( v93 == 3 )
                      return -20;
                    v94 = v92;
                    v95 = v78 - 3;
                    if ( v95 < v92 )
                      return -72;
                    v96 = v89 + 3;
                    v97 = v139 - (__int8 *)v88;
                    if ( v93 == 2 )
                    {
                      if ( v92 > 0x1FFFF )
                        return -72;
                      v98 = sub_140011710((__int64 *)v90, v88, v97, v89 + 3, v92);
                      v99 = v98;
                      if ( v98 > 0xFFFFFFFFFFFFFF88uLL )
                      {
                        v12 = v98;
                        goto LABEL_210;
                      }
                    }
                    else
                    {
                      if ( v97 < v92 )
                        return -70;
                      if ( v88 != nullptr )
                      {
                        v99 = v92;
                        memcpy(v88, v89 + 3, v92);
                      }
                      else
                      {
                        if ( v92 != 0 )
                          return -74;
                        v94 = 0;
                        v99 = 0;
                      }
                    }
                  }
                  v140 = v91 & 1;
                  if ( *(_DWORD *)(v90 + 29584) != 0 )
                    sub_140001A30(v90 + 29480, v88->m128i_i8, v99);
                  v88 = (__m128i *)((char *)v88 + v99);
                  v89 = &v96[v94];
                  v78 = v95 - v94;
                }
                while ( (v91 & 1) == 0 );
                v2 = v90;
                v75 = &v96[v94];
                v100 = v88;
                v3 = v143;
                v101 = *(_QWORD *)(v2 + 29416);
                v73 = v145;
                v76 = v144;
                if ( v101 != -1 && v101 != (char *)v100 - (char *)v79 )
                  return -20;
                if ( *(_DWORD *)(v2 + 29448) != 0 )
                {
                  if ( v78 <= 3 )
                    return -22;
                  if ( *(_DWORD *)(v2 + 29580) == 0 && *(_DWORD *)v75 != (unsigned int)sub_140001C60(v2 + 29480) )
                    return -22;
                  v75 += 4;
                  v78 -= 4LL;
                }
                v87 = (char *)v100 - (char *)v79;
                if ( (unsigned __int64)((char *)v100 - (char *)v79) > 0xFFFFFFFFFFFFFF88uLL )
                  break;
                v125 -= v87;
                v79 = v100;
                v77 = *(_DWORD *)(v2 + 29576);
                v134 = v140;
              }
              v12 = v87;
LABEL_210:
              if ( (_DWORD)v12 != -10 )
                return v12;
              v12 = -10;
              if ( v134 != 1 )
                return v12;
              return -72;
            }
            *(_DWORD *)(v2 + 29680) = 0;
          }
          v123 = *(_QWORD *)(v2 + 29664);
          if ( v123 != 0 )
          {
            v74 = *(_DWORD **)(v123 + 8);
            v73 = *(_QWORD *)(v123 + 16);
          }
          else
          {
            v73 = 0;
            v74 = nullptr;
          }
          goto LABEL_126;
        }
LABEL_52:
        v37 = *(_DWORD *)(v2 + 29680);
        if ( v37 != -1 )
        {
          if ( v37 != 1 )
          {
            v38 = *(_QWORD *)(v2 + 29656);
            if ( v38 != 0 )
            {
              v39 = *(void (**)(void))(v38 + 27336);
              v40 = *(_QWORD *)(v38 + 27344);
              if ( *(_QWORD *)v38 != 0 )
              {
                if ( v39 != nullptr )
                {
                  v137 = *(_QWORD *)(v38 + 27344);
                  v128 = *(void (**)(void))(v38 + 27336);
                  v39();
                  v39 = v128;
                  v40 = v137;
                  goto LABEL_58;
                }
                free(*(void **)v38);
LABEL_100:
                free((void *)v38);
              }
              else
              {
                if ( v39 == nullptr )
                  goto LABEL_100;
LABEL_58:
                ((void (__fastcall *)(__int64, __int64))v39)(v40, v38);
              }
            }
            *(_DWORD *)(v2 + 29680) = 0;
            v41 = 0;
            *(_OWORD *)(v2 + 29656) = 0;
            goto LABEL_62;
          }
          *(_DWORD *)(v2 + 29680) = 0;
        }
        v41 = *(_QWORD *)(v2 + 29664);
LABEL_62:
        sub_14000B3B0(v2, v41);
        if ( (*(_DWORD *)(v2 + 160920) & 0xFFFFFFF0) == 0x184D2A50 )
        {
          v42 = *(unsigned int *)(v2 + 160924);
          v43 = 7;
        }
        else
        {
          v54 = sub_14000A680(v2, v121, *(_QWORD *)(v2 + 29752));
          if ( v54 > 0xFFFFFFFFFFFFFF88uLL )
            return v54;
          v42 = 3;
          v43 = 2;
        }
        *(_DWORD *)(v2 + 29468) = v43;
        v44 = *(_QWORD *)(v2 + 29424);
        *(_QWORD *)(v2 + 29408) = v42;
        if ( v44 < 0x400 )
          v44 = 1024;
        *(_QWORD *)(v2 + 29424) = v44;
        if ( *(_QWORD *)(v2 + 29712) < v44 )
          return -16;
        v45 = *(unsigned int *)(v2 + 29432);
        if ( (unsigned int)v45 < 4 )
          v45 = 4;
        v46 = v45;
        if ( *(_DWORD *)(v2 + 29784) == 0 )
        {
          v47 = 0x20000;
          if ( v44 <= 0x20000 )
            v47 = v44;
          v12 = v44 + v47 + 64;
          if ( v12 > *(_QWORD *)(v2 + 29416) )
            v12 = *(_QWORD *)(v2 + 29416);
          v46 = v45 + v12;
        }
        v48 = *(_QWORD *)(v2 + 29696);
        v49 = *(_QWORD *)(v2 + 29728);
        v50 = v49 < v12 || v48 < v45;
        if ( v49 + v48 < 3 * v46 )
        {
          *(_QWORD *)(v2 + 160944) = 0;
          if ( !v50 )
            goto LABEL_81;
          v52 = *(_QWORD *)(v2 + 29640);
          if ( v52 == 0 )
          {
LABEL_91:
            v55 = *(void **)(v2 + 29688);
            v56 = *(_QWORD *)(v2 + 29616);
            if ( v55 != nullptr )
            {
              v57 = *(void (__fastcall **)(__int64))(v2 + 29608);
              v130 = v46;
              if ( v57 != nullptr )
                v57(v56);
              else
                free(v55);
              v56 = *(_QWORD *)(v2 + 29616);
              v46 = v130;
            }
            v58 = *(__int64 (__fastcall **)(__int64, size_t))(v2 + 29600);
            *(_QWORD *)(v2 + 29696) = 0;
            *(_QWORD *)(v2 + 29728) = 0;
            if ( v58 != nullptr )
              v53 = (char *)v58(v56, v46);
            else
              v53 = (char *)malloc(v46);
            *(_QWORD *)(v2 + 29688) = v53;
            if ( v53 == nullptr )
              return -64;
            goto LABEL_80;
          }
        }
        else
        {
          v51 = *(_QWORD *)(v2 + 160944) + 1LL;
          *(_QWORD *)(v2 + 160944) = v51;
          if ( !v50 && v51 <= 0x7F )
            goto LABEL_81;
          v52 = *(_QWORD *)(v2 + 29640);
          if ( v52 == 0 )
            goto LABEL_91;
        }
        if ( v52 - 160952 < v46 )
          return -64;
        v53 = *(char **)(v2 + 29688);
LABEL_80:
        *(_QWORD *)(v2 + 29696) = v45;
        *(_QWORD *)(v2 + 29720) = &v53[v45];
        *(_QWORD *)(v2 + 29728) = v12;
LABEL_81:
        *(_DWORD *)(v2 + 29684) = 2;
LABEL_29:
        v8 = *(_DWORD *)(v2 + 29468);
        v7 = *(_QWORD *)(v2 + 29408);
        v29 = v119 - (_QWORD)v5;
        v30 = v7;
        if ( (unsigned int)(v8 - 3) <= 1 )
        {
          v30 = 1;
          if ( v29 != 0 )
            v30 = v119 - (_QWORD)v5;
          if ( v30 > v7 )
            v30 = *(_QWORD *)(v2 + 29408);
          if ( *(_DWORD *)(v2 + 29464) != 0 )
            v30 = *(_QWORD *)(v2 + 29408);
        }
        if ( v30 == 0 )
        {
          *(_DWORD *)(v2 + 29684) = 0;
          v26 = (char *)v146;
          goto LABEL_160;
        }
        if ( v29 >= v30 )
        {
          v12 = sub_14000B510(v2, (unsigned __int64 *)&v146, (__int64)v120, (unsigned __int8 *)v5, v30);
          if ( v12 > 0xFFFFFFFFFFFFFF88uLL )
            return v12;
          v4 = *(unsigned int *)(v2 + 29684);
          v5 += v30;
          continue;
        }
        if ( (char *)v119 != v5 )
        {
          *(_DWORD *)(v2 + 29684) = 3;
LABEL_7:
          v9 = *(_QWORD *)(v2 + 29704);
          v10 = v7 - v9;
          if ( v8 == 7 )
            goto LABEL_12;
          if ( *(_QWORD *)(v2 + 29696) - v9 < v10 )
            return -20;
          v11 = v119 - (_QWORD)v5;
          if ( v119 - (__int64)v5 > v10 )
            v11 = v7 - v9;
          if ( v11 != 0 )
          {
            v129 = v7;
            memcpy((void *)(*(_QWORD *)(v2 + 29688) + v9), v5, v11);
            v9 = *(_QWORD *)(v2 + 29704);
            v7 = v129;
          }
          else
          {
LABEL_12:
            v11 = v119 - (_QWORD)v5;
            if ( v119 - (__int64)v5 > v10 )
              v11 = v7 - v9;
          }
          v5 += v11;
          *(_QWORD *)(v2 + 29704) = v11 + v9;
          if ( v11 < v10 )
            goto LABEL_159;
          *(_QWORD *)(v2 + 29704) = 0;
          v12 = sub_14000B510(v2, (unsigned __int64 *)&v146, (__int64)v120, *(unsigned __int8 **)(v2 + 29688), v7);
          if ( v12 > 0xFFFFFFFFFFFFFF88uLL )
            return v12;
          v4 = *(unsigned int *)(v2 + 29684);
          continue;
        }
LABEL_159:
        v26 = (char *)v146;
LABEL_160:
        v102 = _mm_load_si128((const __m128i *)&Block);
        v103 = (unsigned __int64)&v5[-qword_142450930];
        qword_142450940 = (__int64)&v5[-qword_142450930];
        qword_142450960 = v26 - (_BYTE *)Block;
        *(_QWORD *)(v2 + 29808) = v26 - (_BYTE *)Block;
        *(__m128i *)(v2 + 29792) = v102;
        if ( v136 != v5 || v3 != v26 )
        {
          *(_DWORD *)(v2 + 29780) = 0;
          goto LABEL_163;
        }
        v110 = *(_DWORD *)(v2 + 29780) + 1;
        *(_DWORD *)(v2 + 29780) = v110;
        if ( v110 <= 15 )
        {
LABEL_163:
          v12 = *(_QWORD *)(v2 + 29408);
          if ( v12 == 0 )
          {
            v104 = *(_DWORD *)(v2 + 29776);
            if ( *(_QWORD *)(v2 + 29744) == *(_QWORD *)(v2 + 29736) )
            {
              if ( v104 == 0 )
                return v12;
              if ( v103 < qword_142450938 )
              {
                qword_142450940 = v103 + 1;
                return v12;
              }
              *(_DWORD *)(v2 + 29684) = 2;
            }
            else if ( v104 == 0 )
            {
              *(_DWORD *)(v2 + 29776) = 1;
              qword_142450940 = v103 - 1;
            }
            return 1;
          }
          v105 = 0;
          v106 = (unsigned int)(*(_DWORD *)(v2 + 29468) - 2);
          if ( (unsigned int)v106 <= 5 )
          {
            v105 = 3;
            if ( dword_142423E80[v106] != 2 )
              v105 = 0;
          }
          return v105 + v12 - *(_QWORD *)(v2 + 29704);
        }
        else
        {
          if ( v120 != v26 )
          {
            if ( (char *)v119 == v5 )
              return -72;
            goto LABEL_163;
          }
          return -70;
        }
      case 2LL:
        goto LABEL_29;
      case 3LL:
        v7 = *(_QWORD *)(v2 + 29408);
        v8 = *(_DWORD *)(v2 + 29468);
        goto LABEL_7;
      case 4LL:
        v21 = *(_QWORD *)(v2 + 29736);
        v22 = (char *)v146;
        v23 = *(_QWORD *)(v2 + 29744) - v21;
        v24 = v120 - (_BYTE *)v146;
        v25 = v120 - (_BYTE *)v146;
        if ( v23 <= v120 - (_BYTE *)v146 )
          v25 = *(_QWORD *)(v2 + 29744) - v21;
        if ( v25 != 0 )
        {
          v131 = v25;
          v59 = (char *)memcpy(v146, (const void *)(*(_QWORD *)(v2 + 29720) + v21), v25);
          v21 = *(_QWORD *)(v2 + 29736);
          v25 = v131;
          v22 = v59;
        }
        v26 = &v22[v25];
        v27 = v25 + v21;
        v146 = v26;
        *(_QWORD *)(v2 + 29736) = v25 + v21;
        if ( v24 < v23 )
          goto LABEL_160;
        *(_DWORD *)(v2 + 29684) = 2;
        v28 = *(_QWORD *)(v2 + 29728);
        if ( v28 < *(_QWORD *)(v2 + 29416) && v28 < *(unsigned int *)(v2 + 29432) + v27 )
          *(_OWORD *)(v2 + 29736) = 0;
        goto LABEL_29;
      default:
        JUMPOUT(0x1400211A2LL);
    }
  }
}

