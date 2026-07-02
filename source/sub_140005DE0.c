// sub_140005DE0 @ 0x140005DE0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140005DE0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r11
  unsigned int v11; // eax
  unsigned __int16 *v12; // r15
  unsigned int v13; // r9d
  unsigned int v14; // eax
  char *v15; // r14
  unsigned int v16; // r9d
  unsigned int v17; // ebp
  unsigned int v18; // r9d
  unsigned __int8 *v19; // r14
  unsigned int v20; // edi
  unsigned int v21; // r10d
  unsigned int v22; // esi
  unsigned int v23; // edx
  __int64 v24; // r14
  unsigned int v25; // r11d
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  int v31; // r8d
  __int64 v32; // r15
  unsigned int v33; // ebx
  unsigned __int16 *v34; // r14
  int v35; // ebx
  unsigned int v36; // r12d
  unsigned int v37; // r13d
  unsigned int v38; // r14d
  char *v39; // r14
  char v40; // bl
  char *v41; // rbx
  char v42; // al
  char *v43; // rax
  char v44; // r9
  char *v45; // r9
  char v46; // r10
  char *v47; // r10
  char v48; // r11
  _BYTE *v49; // r11
  _BYTE *v50; // rbx
  _BYTE *v51; // rax
  _BYTE *v52; // r9
  _BYTE *v53; // r10
  _BYTE *v54; // r11
  _BYTE *v55; // rbx
  _BYTE *v56; // rax
  _BYTE *v57; // r9
  _BYTE *v58; // r10
  _BYTE *v59; // r11
  __int64 v60; // rbx
  unsigned int v61; // r9d
  __int64 v62; // r12
  unsigned int v63; // r13d
  __int64 v64; // r13
  int v65; // r9d
  __int64 v66; // rdi
  __int64 *v67; // r8
  bool v68; // di
  char *v69; // r8
  char v70; // di
  char *v71; // rax
  char v72; // di
  char *v73; // r8
  char v74; // di
  char *v75; // rax
  char v76; // di
  unsigned int v77; // r8d
  char *v78; // r8
  char v79; // di
  unsigned __int8 *v80; // rax
  int v81; // ebx
  __int64 v82; // r8
  unsigned __int8 *v83; // rcx
  bool v84; // r8
  char *v85; // rcx
  char v86; // r8
  char *v87; // r8
  char v88; // r9
  char *v89; // rcx
  char v90; // r9
  _BYTE *v91; // r9
  unsigned int v92; // ecx
  char *v93; // rcx
  char v94; // r8
  int v95; // ebx
  unsigned __int8 *v96; // rdi
  __int64 v97; // r8
  unsigned __int8 *v98; // rcx
  bool v99; // r8
  char *v100; // rcx
  char v101; // r8
  char *v102; // r8
  char v103; // r10
  char *v104; // rcx
  char v105; // r10
  _BYTE *v106; // r10
  unsigned int v107; // ecx
  char *v108; // rcx
  char v109; // di
  unsigned __int8 *v110; // rdi
  int v111; // ebx
  __int64 v112; // r8
  unsigned __int8 *v113; // rcx
  bool v114; // r8
  char *v115; // rcx
  char v116; // r8
  char *v117; // r8
  char v118; // r11
  char *v119; // rcx
  char v120; // r11
  _BYTE *v121; // r11
  unsigned int v122; // ecx
  char *v123; // rcx
  char v124; // r8
  __int64 v125; // rbx
  unsigned __int8 *v126; // rbx
  __int64 v127; // r8
  __int64 v128; // r8
  __int64 v129; // r8
  __int64 v130; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v131; // [rsp+0h] [rbp-E8h]
  unsigned int v132; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v133; // [rsp+0h] [rbp-E8h]
  unsigned __int8 *v134; // [rsp+8h] [rbp-E0h]
  unsigned __int8 *v135; // [rsp+10h] [rbp-D8h]
  unsigned __int16 *v136; // [rsp+18h] [rbp-D0h]
  unsigned __int8 *v137; // [rsp+20h] [rbp-C8h]
  unsigned __int8 *v138; // [rsp+28h] [rbp-C0h]
  __int64 v139; // [rsp+30h] [rbp-B8h]
  unsigned int v140; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v141; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v142; // [rsp+30h] [rbp-B8h]
  unsigned __int16 *v143; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v144; // [rsp+38h] [rbp-B0h]
  unsigned __int8 *v145; // [rsp+40h] [rbp-A8h]
  unsigned __int16 *v146; // [rsp+48h] [rbp-A0h]
  unsigned __int8 *v147; // [rsp+50h] [rbp-98h]
  unsigned __int8 *v148; // [rsp+58h] [rbp-90h]
  unsigned __int8 *v149; // [rsp+60h] [rbp-88h]
  unsigned __int64 v150; // [rsp+68h] [rbp-80h]
  unsigned __int8 *v151; // [rsp+70h] [rbp-78h]
  int v152; // [rsp+7Ch] [rbp-6Ch]
  unsigned __int64 v153; // [rsp+80h] [rbp-68h]
  unsigned __int64 v154; // [rsp+88h] [rbp-60h]
  unsigned __int64 v155; // [rsp+90h] [rbp-58h]
  unsigned __int64 v156; // [rsp+98h] [rbp-50h]

  v5 = -20;
  if ( a4 <= 9 )
    return v5;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v9 = a4 - (v6 + v7) - v8;
  v5 = v9 - 6;
  if ( a4 < v9 - 6 )
    return -20;
  if ( *a3 == 0 )
    return -72;
  v11 = *((unsigned __int8 *)a3 + v6 + 5);
  v136 = a3 + 3;
  v60 = *((unsigned __int8 *)a3 + 6);
  switch ( *a3 )
  {
    case 0u:
    case 1u:
      goto LABEL_41;
    case 2u:
      goto LABEL_40;
    case 3u:
      goto LABEL_39;
    case 4u:
      goto LABEL_38;
    case 5u:
      goto LABEL_37;
    case 6u:
      goto LABEL_36;
    case 7u:
      v60 += (unsigned __int64)*((unsigned __int8 *)a3 + 12) << 48;
LABEL_36:
      v60 += (unsigned __int64)*((unsigned __int8 *)a3 + 11) << 40;
LABEL_37:
      v60 += (unsigned __int64)*((unsigned __int8 *)a3 + 10) << 32;
LABEL_38:
      v60 += (unsigned __int64)*((unsigned __int8 *)a3 + 9) << 24;
LABEL_39:
      v60 += (unsigned __int64)*((unsigned __int8 *)a3 + 8) << 16;
LABEL_40:
      v60 += (unsigned __int64)*((unsigned __int8 *)a3 + 7) << 8;
LABEL_41:
      if ( (_BYTE)v11 == 0 )
        return -20;
      _BitScanReverse(&v61, v11);
      v12 = a3 + 3;
      v14 = 8 * (9 - *a3) - v61;
      goto LABEL_9;
    default:
      if ( (_BYTE)v11 == 0 )
        return -1;
      v12 = (unsigned __int16 *)((char *)a3 + v6 - 2);
      _BitScanReverse(&v13, v11);
      v60 = *(_QWORD *)v12;
      v14 = 8 - v13;
LABEL_9:
      if ( a3[1] == 0 )
        return -72;
      v15 = (char *)v136 + v6;
      v135 = (unsigned __int8 *)v136 + v6;
      v16 = *((unsigned __int8 *)v136 + v6 + v7 - 1);
      v62 = *((unsigned __int8 *)v136 + v6);
      switch ( a3[1] )
      {
        case 1u:
          goto LABEL_51;
        case 2u:
          goto LABEL_50;
        case 3u:
          goto LABEL_49;
        case 4u:
          goto LABEL_48;
        case 5u:
          goto LABEL_47;
        case 6u:
          goto LABEL_46;
        case 7u:
          v62 += (unsigned __int64)v135[6] << 48;
LABEL_46:
          v62 += (unsigned __int64)v135[5] << 40;
LABEL_47:
          v62 += (unsigned __int64)v135[4] << 32;
LABEL_48:
          v62 += (unsigned __int64)v135[3] << 24;
LABEL_49:
          v62 += (unsigned __int64)v135[2] << 16;
LABEL_50:
          v62 += (unsigned __int64)v135[1] << 8;
LABEL_51:
          if ( (_BYTE)v16 == 0 )
            return -20;
          _BitScanReverse(&v63, v16);
          v137 = v135;
          v18 = 8 * (9 - a3[1]) - v63;
          break;
        default:
          if ( (_BYTE)v16 == 0 )
            return -1;
          _BitScanReverse(&v17, v16);
          v137 = (unsigned __int8 *)&v15[v7 - 8];
          v62 = *(_QWORD *)v137;
          v18 = 8 - v17;
          break;
      }
      if ( a3[2] == 0 )
        return -72;
      v19 = &v135[v7];
      v145 = &v135[v7];
      v20 = v135[v7 - 1 + v8];
      v64 = *v19;
      break;
  }
  switch ( a3[2] )
  {
    case 1u:
      goto LABEL_61;
    case 2u:
      goto LABEL_60;
    case 3u:
      goto LABEL_59;
    case 4u:
      goto LABEL_58;
    case 5u:
      goto LABEL_57;
    case 6u:
      goto LABEL_56;
    case 7u:
      v64 += (unsigned __int64)v145[6] << 48;
LABEL_56:
      v64 += (unsigned __int64)v145[5] << 40;
LABEL_57:
      v64 += (unsigned __int64)v145[4] << 32;
LABEL_58:
      v64 += (unsigned __int64)v145[3] << 24;
LABEL_59:
      v64 += (unsigned __int64)v145[2] << 16;
LABEL_60:
      v64 += (unsigned __int64)v145[1] << 8;
LABEL_61:
      if ( (_BYTE)v20 == 0 )
        return -20;
      _BitScanReverse(&v20, v20);
      v21 = 8 * (9 - (unsigned __int16)v8) - v20;
      v138 = v145;
LABEL_17:
      if ( v9 == 6 )
        return -72;
      v151 = &v145[v8];
      v22 = v145[v8 - 7 + v9];
      v24 = *v151;
      switch ( v9 )
      {
        case 7LL:
          goto LABEL_130;
        case 8LL:
          goto LABEL_129;
        case 9LL:
          goto LABEL_128;
        case 10LL:
          goto LABEL_127;
        case 11LL:
          goto LABEL_126;
        case 12LL:
          goto LABEL_125;
        case 13LL:
          v24 += (unsigned __int64)v151[6] << 48;
LABEL_125:
          v24 += (unsigned __int64)v151[5] << 40;
LABEL_126:
          v24 += (unsigned __int64)v151[4] << 32;
LABEL_127:
          v24 += (unsigned __int64)v151[3] << 24;
LABEL_128:
          v24 += (unsigned __int64)v151[2] << 16;
LABEL_129:
          v24 += (unsigned __int64)v151[1] << 8;
LABEL_130:
          if ( (_BYTE)v22 == 0 )
            return -20;
          _BitScanReverse(&v22, v22);
          v25 = 8 * (9 - v5) - v22;
          v134 = v151;
          break;
        default:
          if ( (_BYTE)v22 == 0 )
            return -1;
          if ( v5 > 0xFFFFFFFFFFFFFF88uLL )
            return v5;
          _BitScanReverse(&v23, (unsigned __int8)v22);
          v134 = &v151[v9 - 14];
          v24 = *(_QWORD *)v134;
          v25 = 8 - v23;
          break;
      }
      v146 = a3 + 7;
      v156 = a1 + a2;
      v147 = v135 + 8;
      v26 = a5 + 4;
      v150 = a1 + a2 - 3;
      v148 = v145 + 8;
      v27 = (unsigned __int64)(a2 + 3) >> 2;
      v153 = a1 + v27;
      v28 = v27 + a1 + v27;
      v29 = v28 + v27;
      v154 = v28;
      v155 = v29;
      v149 = v151 + 8;
      v152 = *(unsigned __int8 *)(a5 + 2);
      if ( v29 >= v150 )
      {
        v30 = v153;
        if ( v28 < v153 || v153 < a1 || v29 < v28 )
          return -20;
        goto LABEL_68;
      }
      v130 = v62;
      v143 = v12;
      v30 = v153;
      v31 = -*(unsigned __int8 *)(a5 + 2);
      v32 = v60;
      v139 = v24;
      do
      {
        v39 = (char *)(v26 + 2 * ((unsigned __int64)(v32 << v14) >> v31));
        a1 += 4LL;
        v40 = *v39;
        v30 += 4LL;
        v28 += 4LL;
        v29 += 4LL;
        LODWORD(v39) = (unsigned __int8)v39[1];
        *(_BYTE *)(a1 - 4) = v40;
        LODWORD(v39) = v14 + (_DWORD)v39;
        v41 = (char *)(v26 + 2 * ((unsigned __int64)(v130 << v18) >> v31));
        v42 = *v41;
        LODWORD(v41) = (unsigned __int8)v41[1];
        *(_BYTE *)(v30 - 4) = v42;
        v43 = (char *)(v26 + 2 * ((unsigned __int64)(v64 << v21) >> v31));
        LODWORD(v41) = v18 + (_DWORD)v41;
        v44 = *v43;
        LODWORD(v43) = (unsigned __int8)v43[1];
        *(_BYTE *)(v28 - 4) = v44;
        v45 = (char *)(v26 + 2 * ((unsigned __int64)(v139 << v25) >> v31));
        LODWORD(v43) = v21 + (_DWORD)v43;
        v46 = *v45;
        LODWORD(v45) = (unsigned __int8)v45[1];
        *(_BYTE *)(v29 - 4) = v46;
        v47 = (char *)(v26 + 2 * ((unsigned __int64)(v32 << (char)v39) >> v31));
        LODWORD(v45) = v25 + (_DWORD)v45;
        v48 = *v47;
        LODWORD(v47) = (unsigned __int8)v47[1];
        *(_BYTE *)(a1 - 3) = v48;
        v49 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v130 << (char)v41) >> v31));
        LODWORD(v47) = (_DWORD)v39 + (_DWORD)v47;
        LOBYTE(v39) = *v49;
        LODWORD(v49) = (_DWORD)v41 + (unsigned __int8)v49[1];
        v50 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v64 << (char)v43) >> v31));
        *(_BYTE *)(v30 - 3) = (_BYTE)v39;
        LOBYTE(v39) = *v50;
        LODWORD(v50) = (unsigned __int8)v50[1];
        *(_BYTE *)(v28 - 3) = (_BYTE)v39;
        LODWORD(v50) = (_DWORD)v43 + (_DWORD)v50;
        v51 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v139 << (char)v45) >> v31));
        LOBYTE(v39) = *v51;
        LODWORD(v51) = (_DWORD)v45 + (unsigned __int8)v51[1];
        v52 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v32 << (char)v47) >> v31));
        *(_BYTE *)(v29 - 3) = (_BYTE)v39;
        LOBYTE(v39) = *v52;
        LODWORD(v52) = (unsigned __int8)v52[1];
        *(_BYTE *)(a1 - 2) = (_BYTE)v39;
        LODWORD(v52) = (_DWORD)v47 + (_DWORD)v52;
        v53 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v130 << (char)v49) >> v31));
        LOBYTE(v39) = *v53;
        LODWORD(v53) = (_DWORD)v49 + (unsigned __int8)v53[1];
        v54 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v64 << (char)v50) >> v31));
        *(_BYTE *)(v30 - 2) = (_BYTE)v39;
        LOBYTE(v39) = *v54;
        LODWORD(v54) = (unsigned __int8)v54[1];
        *(_BYTE *)(v28 - 2) = (_BYTE)v39;
        LODWORD(v54) = (_DWORD)v50 + (_DWORD)v54;
        v55 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v139 << (char)v51) >> v31));
        LOBYTE(v39) = *v55;
        LODWORD(v55) = (_DWORD)v51 + (unsigned __int8)v55[1];
        v56 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v32 << (char)v52) >> v31));
        *(_BYTE *)(v29 - 2) = (_BYTE)v39;
        LOBYTE(v39) = *v56;
        LODWORD(v56) = (unsigned __int8)v56[1];
        *(_BYTE *)(a1 - 1) = (_BYTE)v39;
        v14 = (_DWORD)v52 + (_DWORD)v56;
        v57 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v130 << (char)v53) >> v31));
        LOBYTE(v39) = *v57;
        v18 = (_DWORD)v53 + (unsigned __int8)v57[1];
        v58 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v64 << (char)v54) >> v31));
        *(_BYTE *)(v30 - 1) = (_BYTE)v39;
        LOBYTE(v39) = *v58;
        LODWORD(v58) = (unsigned __int8)v58[1];
        *(_BYTE *)(v28 - 1) = (_BYTE)v39;
        v21 = (_DWORD)v54 + (_DWORD)v58;
        v59 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v139 << (char)v55) >> v31));
        LOBYTE(v39) = *v59;
        LODWORD(v59) = (unsigned __int8)v59[1];
        *(_BYTE *)(v29 - 1) = (_BYTE)v39;
        v25 = (_DWORD)v55 + (_DWORD)v59;
        if ( v143 >= v146 )
        {
          v33 = v14;
          v14 &= 7u;
          v34 = (unsigned __int16 *)((char *)v143 - (v33 >> 3));
          v35 = 0;
          v143 = v34;
          v32 = *(_QWORD *)v34;
        }
        else
        {
          v35 = 3;
        }
        if ( v137 < v147 )
        {
          v35 = 3;
        }
        else
        {
          v36 = v18;
          v18 &= 7u;
          v137 -= v36 >> 3;
          v130 = *(_QWORD *)v137;
        }
        if ( v138 < v148 )
        {
          v35 = 3;
        }
        else
        {
          v37 = v21;
          v21 &= 7u;
          v138 -= v37 >> 3;
          v64 = *(_QWORD *)v138;
        }
        if ( v134 < v149 )
        {
          v60 = v32;
          v24 = v139;
          v62 = v130;
          v12 = v143;
          goto LABEL_65;
        }
        v38 = v25;
        v25 &= 7u;
        v134 -= v38 >> 3;
        v24 = *(_QWORD *)v134;
        v139 = *(_QWORD *)v134;
      }
      while ( v29 < v150 && v35 == 0 );
      v60 = v32;
      v62 = v130;
      v12 = v143;
LABEL_65:
      if ( v153 < a1 || v154 < v30 || v155 < v28 )
        return -20;
      if ( v14 <= 0x40 )
      {
LABEL_68:
        v140 = v18;
        v131 = v30;
        v144 = v153 - 3;
        v65 = -v152;
        while ( 1 )
        {
          if ( v12 < v146 )
          {
            if ( v136 == v12 )
              goto LABEL_76;
            v66 = v14 >> 3;
            v67 = (__int64 *)((char *)v12 - v66);
            if ( (unsigned __int16 *)((char *)v12 - v66) < v136 )
            {
              v30 = v131;
              v125 = (unsigned int)((_DWORD)v12 - (_DWORD)v136);
              v18 = v140;
              v12 = (unsigned __int16 *)((char *)v12 - v125);
              v14 -= 8 * v125;
              v60 = *(_QWORD *)v12;
              break;
            }
            v12 = (unsigned __int16 *)((char *)v12 - v66);
            v68 = a1 < v144;
            v14 -= 8 * (v14 >> 3);
            v60 = *v67;
          }
          else
          {
            v77 = v14;
            v14 &= 7u;
            v12 = (unsigned __int16 *)((char *)v12 - (v77 >> 3));
            v60 = *(_QWORD *)v12;
            v68 = a1 < v144;
          }
          if ( v68 )
          {
            v69 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << v14) >> v65));
            a1 += 4LL;
            v70 = *v69;
            LODWORD(v69) = v14 + (unsigned __int8)v69[1];
            *(_BYTE *)(a1 - 4) = v70;
            v71 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v69) >> v65));
            v72 = *v71;
            LODWORD(v71) = (_DWORD)v69 + (unsigned __int8)v71[1];
            *(_BYTE *)(a1 - 3) = v72;
            v73 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v71) >> v65));
            v74 = *v73;
            LODWORD(v73) = (_DWORD)v71 + (unsigned __int8)v73[1];
            *(_BYTE *)(a1 - 2) = v74;
            v75 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v73) >> v65));
            v76 = *v75;
            v14 = (_DWORD)v73 + (unsigned __int8)v75[1];
            *(_BYTE *)(a1 - 1) = v76;
            if ( v14 <= 0x40 )
              continue;
          }
LABEL_76:
          v30 = v131;
          v18 = v140;
          break;
        }
      }
      if ( a1 < v153 )
      {
        v141 = v30;
        do
        {
          ++a1;
          v78 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << v14) >> -(char)v152));
          v79 = *v78;
          LODWORD(v78) = (unsigned __int8)v78[1];
          *(_BYTE *)(a1 - 1) = v79;
          v14 += (unsigned int)v78;
        }
        while ( v153 != a1 );
        v30 = v141;
      }
      if ( v18 <= 0x40 )
      {
        v132 = v14;
        v80 = v137;
        v81 = -v152;
        v142 = v154 - 3;
        while ( 1 )
        {
          if ( v80 < v147 )
          {
            if ( v135 == v80 )
              goto LABEL_90;
            v82 = v18 >> 3;
            v83 = &v80[-v82];
            if ( &v80[-v82] < v135 )
            {
              v126 = v80;
              v14 = v132;
              v127 = (unsigned int)((_DWORD)v126 - (_DWORD)v135);
              v18 -= 8 * v127;
              v137 = &v126[-v127];
              v62 = *(_QWORD *)&v126[-v127];
              break;
            }
            v80 -= v82;
            v84 = v30 < v142;
            v18 -= 8 * (v18 >> 3);
            v62 = *(_QWORD *)v83;
          }
          else
          {
            v92 = v18;
            v18 &= 7u;
            v80 -= v92 >> 3;
            v62 = *(_QWORD *)v80;
            v84 = v30 < v142;
          }
          if ( v84 )
          {
            v85 = (char *)(v26 + 2 * ((unsigned __int64)(v62 << v18) >> v81));
            v30 += 4LL;
            v86 = *v85;
            LODWORD(v85) = v18 + (unsigned __int8)v85[1];
            *(_BYTE *)(v30 - 4) = v86;
            v87 = (char *)(v26 + 2 * ((unsigned __int64)(v62 << (char)v85) >> v81));
            v88 = *v87;
            LODWORD(v87) = (_DWORD)v85 + (unsigned __int8)v87[1];
            *(_BYTE *)(v30 - 3) = v88;
            v89 = (char *)(v26 + 2 * ((unsigned __int64)(v62 << (char)v87) >> v81));
            v90 = *v89;
            LODWORD(v89) = (_DWORD)v87 + (unsigned __int8)v89[1];
            *(_BYTE *)(v30 - 2) = v90;
            v91 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v62 << (char)v89) >> v81));
            LOBYTE(v87) = *v91;
            v18 = (_DWORD)v89 + (unsigned __int8)v91[1];
            *(_BYTE *)(v30 - 1) = (_BYTE)v87;
            if ( v18 <= 0x40 )
              continue;
          }
LABEL_90:
          v137 = v80;
          v14 = v132;
          break;
        }
      }
      if ( v30 < v154 )
      {
        do
        {
          v93 = (char *)(v26 + 2 * ((unsigned __int64)(v62 << v18) >> -(char)v152));
          ++v30;
          v94 = *v93;
          LODWORD(v93) = (unsigned __int8)v93[1];
          *(_BYTE *)(v30 - 1) = v94;
          v18 += (unsigned int)v93;
        }
        while ( v154 != v30 );
      }
      if ( v21 <= 0x40 )
      {
        v95 = -v152;
        v96 = v138;
        v133 = v155 - 3;
        while ( 1 )
        {
          if ( v96 < v148 )
          {
            if ( v145 == v96 )
              goto LABEL_102;
            v97 = v21 >> 3;
            v98 = &v96[-v97];
            if ( &v96[-v97] < v145 )
            {
              v128 = (unsigned int)((_DWORD)v96 - (_DWORD)v145);
              v21 -= 8 * v128;
              v138 = &v96[-v128];
              v64 = *(_QWORD *)&v96[-v128];
              break;
            }
            v96 -= v97;
            v99 = v28 < v133;
            v21 -= 8 * (v21 >> 3);
            v64 = *(_QWORD *)v98;
          }
          else
          {
            v107 = v21;
            v21 &= 7u;
            v96 -= v107 >> 3;
            v64 = *(_QWORD *)v96;
            v99 = v28 < v133;
          }
          if ( v99 )
          {
            v100 = (char *)(v26 + 2 * ((unsigned __int64)(v64 << v21) >> v95));
            v28 += 4LL;
            v101 = *v100;
            LODWORD(v100) = v21 + (unsigned __int8)v100[1];
            *(_BYTE *)(v28 - 4) = v101;
            v102 = (char *)(v26 + 2 * ((unsigned __int64)(v64 << (char)v100) >> v95));
            v103 = *v102;
            LODWORD(v102) = (_DWORD)v100 + (unsigned __int8)v102[1];
            *(_BYTE *)(v28 - 3) = v103;
            v104 = (char *)(v26 + 2 * ((unsigned __int64)(v64 << (char)v102) >> v95));
            v105 = *v104;
            LODWORD(v104) = (_DWORD)v102 + (unsigned __int8)v104[1];
            *(_BYTE *)(v28 - 2) = v105;
            v106 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v64 << (char)v104) >> v95));
            LOBYTE(v102) = *v106;
            v21 = (_DWORD)v104 + (unsigned __int8)v106[1];
            *(_BYTE *)(v28 - 1) = (_BYTE)v102;
            if ( v21 <= 0x40 )
              continue;
          }
LABEL_102:
          v138 = v96;
          break;
        }
      }
      if ( v28 < v155 )
      {
        do
        {
          v108 = (char *)(v26 + 2 * ((unsigned __int64)(v64 << v21) >> -(char)v152));
          ++v28;
          v109 = *v108;
          LODWORD(v108) = (unsigned __int8)v108[1];
          *(_BYTE *)(v28 - 1) = v109;
          v21 += (unsigned int)v108;
        }
        while ( v155 != v28 );
      }
      if ( v25 > 0x40 )
        goto LABEL_115;
      v110 = v134;
      v111 = -v152;
      break;
    default:
      if ( (_BYTE)v20 == 0 )
        return -1;
      _BitScanReverse(&v20, v20);
      v138 = &v19[v8 - 8];
      v64 = *(_QWORD *)v138;
      v21 = 8 - v20;
      goto LABEL_17;
  }
  while ( v110 >= v149 )
  {
    v122 = v25;
    v25 &= 7u;
    v110 -= v122 >> 3;
    v24 = *(_QWORD *)v110;
    v114 = v29 < v150;
LABEL_110:
    if ( v114 )
    {
      v115 = (char *)(v26 + 2 * ((unsigned __int64)(v24 << v25) >> v111));
      v29 += 4LL;
      v116 = *v115;
      LODWORD(v115) = v25 + (unsigned __int8)v115[1];
      *(_BYTE *)(v29 - 4) = v116;
      v117 = (char *)(v26 + 2 * ((unsigned __int64)(v24 << (char)v115) >> v111));
      v118 = *v117;
      LODWORD(v117) = (_DWORD)v115 + (unsigned __int8)v117[1];
      *(_BYTE *)(v29 - 3) = v118;
      v119 = (char *)(v26 + 2 * ((unsigned __int64)(v24 << (char)v117) >> v111));
      v120 = *v119;
      LODWORD(v119) = (_DWORD)v117 + (unsigned __int8)v119[1];
      *(_BYTE *)(v29 - 2) = v120;
      v121 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v24 << (char)v119) >> v111));
      LOBYTE(v117) = *v121;
      v25 = (_DWORD)v119 + (unsigned __int8)v121[1];
      *(_BYTE *)(v29 - 1) = (_BYTE)v117;
      if ( v25 <= 0x40 )
        continue;
    }
LABEL_114:
    v134 = v110;
    goto LABEL_115;
  }
  if ( v151 == v110 )
    goto LABEL_114;
  v112 = v25 >> 3;
  v113 = &v110[-v112];
  if ( &v110[-v112] >= v151 )
  {
    v110 -= v112;
    v114 = v29 < v150;
    v25 -= 8 * (v25 >> 3);
    v24 = *(_QWORD *)v113;
    goto LABEL_110;
  }
  v129 = (unsigned int)((_DWORD)v110 - (_DWORD)v151);
  v25 -= 8 * v129;
  v134 = &v110[-v129];
  v24 = *(_QWORD *)&v110[-v129];
LABEL_115:
  if ( v29 < v156 )
  {
    do
    {
      v123 = (char *)(v26 + 2 * ((unsigned __int64)(v24 << v25) >> -(char)v152));
      ++v29;
      v124 = *v123;
      LODWORD(v123) = (unsigned __int8)v123[1];
      *(_BYTE *)(v29 - 1) = v124;
      v25 += (unsigned int)v123;
    }
    while ( v156 != v29 );
  }
  if ( v145 == v138 && v151 == v134 && v21 == 64 && v18 == 64 && v135 == v137 && v136 == v12 && v14 == 64 && v25 == 64 )
    return a2;
  return -20;
}

