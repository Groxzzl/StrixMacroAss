// sub_140004DA0 @ 0x140004DA0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140004DA0(_BYTE *a1, __int64 a2, unsigned __int16 *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r9d
  unsigned int v14; // eax
  char *v15; // r14
  unsigned int v16; // r9d
  unsigned int v17; // r14d
  unsigned __int8 *v18; // rdi
  unsigned int v19; // r9d
  unsigned int v20; // r15d
  unsigned __int8 *v21; // rsi
  unsigned __int8 v22; // r9
  unsigned int v23; // ecx
  __int64 v24; // r13
  unsigned int v25; // edx
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  _BYTE *v28; // rbx
  _BYTE *v29; // rdi
  _BYTE *v30; // rsi
  int v31; // r8d
  unsigned int v32; // ecx
  int v33; // ecx
  unsigned int v34; // r11d
  unsigned int v35; // r11d
  unsigned int v36; // r11d
  unsigned __int8 *v37; // r13
  _BYTE *v38; // r11
  int v39; // r12d
  int v40; // r12d
  _BYTE *v41; // rcx
  _BYTE *v42; // rax
  _BYTE *v43; // r13
  char *v44; // rcx
  char v45; // dl
  int v46; // r12d
  _BYTE *v47; // rdx
  _BYTE *v48; // r11
  _BYTE *v49; // rax
  _BYTE *v50; // r13
  _BYTE *v51; // r12
  _BYTE *v52; // rdx
  _BYTE *v53; // r11
  _BYTE *v54; // rax
  _BYTE *v55; // r13
  _BYTE *v56; // r12
  _BYTE *v57; // rdx
  __int64 v58; // r11
  unsigned int v59; // r9d
  __int64 v60; // rbp
  __int64 v61; // r12
  unsigned __int16 *v62; // rdx
  int v63; // esi
  __int64 v64; // r8
  __int64 *v65; // rcx
  bool v66; // r8
  char *v67; // r8
  char v68; // cl
  char *v69; // rax
  char v70; // cl
  char *v71; // r8
  char v72; // cl
  char *v73; // rax
  char v74; // cl
  unsigned int v75; // ecx
  char *v76; // rcx
  char v77; // r8
  unsigned __int8 *v78; // r11
  int v79; // r10d
  __int64 v80; // r8
  unsigned __int8 *v81; // rcx
  bool v82; // r8
  char *v83; // r8
  char v84; // cl
  char *v85; // r14
  char v86; // cl
  char *v87; // r8
  char v88; // cl
  char *v89; // r14
  char v90; // cl
  unsigned int v91; // ecx
  char *v92; // rcx
  char v93; // r8
  unsigned __int8 *v94; // r11
  unsigned __int64 v95; // rsi
  int v96; // r10d
  __int64 v97; // r8
  unsigned __int8 *v98; // rcx
  bool v99; // r8
  char *v100; // r8
  char v101; // cl
  char *v102; // r15
  char v103; // cl
  char *v104; // r8
  char v105; // cl
  char *v106; // r15
  char v107; // cl
  unsigned int v108; // ecx
  char *v109; // rcx
  char v110; // r8
  unsigned __int8 *v111; // r11
  int v112; // r10d
  __int64 v113; // r12
  bool v114; // r12
  _BYTE *v115; // rcx
  unsigned int v116; // r8d
  _BYTE *v117; // rdx
  _BYTE *v118; // rcx
  int v119; // r8d
  _BYTE *v120; // rdx
  unsigned int v121; // ecx
  char *v122; // rcx
  char v123; // r8
  unsigned int v124; // ecx
  unsigned __int16 *v125; // r11
  __int64 v126; // r8
  __int64 v127; // r8
  __int64 v128; // r8
  __int64 v129; // r8
  __int64 v130; // [rsp+8h] [rbp-F0h]
  _BYTE *v131; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v132; // [rsp+8h] [rbp-F0h]
  __int64 v133; // [rsp+10h] [rbp-E8h]
  unsigned int v134; // [rsp+10h] [rbp-E8h]
  unsigned __int16 *v135; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v136; // [rsp+20h] [rbp-D8h]
  __int64 v137; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v138; // [rsp+28h] [rbp-D0h]
  unsigned __int16 *v139; // [rsp+30h] [rbp-C8h]
  unsigned __int8 *v140; // [rsp+38h] [rbp-C0h]
  unsigned __int8 *v141; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v142; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v143; // [rsp+50h] [rbp-A8h]
  unsigned __int16 *v144; // [rsp+58h] [rbp-A0h]
  unsigned __int8 *v145; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v146; // [rsp+68h] [rbp-90h]
  unsigned __int8 *v147; // [rsp+70h] [rbp-88h]
  unsigned __int64 v148; // [rsp+78h] [rbp-80h]
  unsigned __int8 *v149; // [rsp+80h] [rbp-78h]
  int v150; // [rsp+8Ch] [rbp-6Ch]
  _BYTE *v151; // [rsp+90h] [rbp-68h]
  _BYTE *v152; // [rsp+98h] [rbp-60h]
  _BYTE *v153; // [rsp+A0h] [rbp-58h]
  _BYTE *v154; // [rsp+A8h] [rbp-50h]

  v6 = -20;
  if ( a4 <= 9 )
    return v6;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a4 - (v7 + v8) - v9;
  v6 = v10 - 6;
  if ( a4 < v10 - 6 )
    return -20;
  if ( *a3 == 0 )
    return -72;
  v12 = *((unsigned __int8 *)a3 + v7 + 5);
  v139 = a3 + 3;
  v58 = *((unsigned __int8 *)a3 + 6);
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
      v58 += (unsigned __int64)*((unsigned __int8 *)a3 + 12) << 48;
LABEL_36:
      v58 += (unsigned __int64)*((unsigned __int8 *)a3 + 11) << 40;
LABEL_37:
      v58 += (unsigned __int64)*((unsigned __int8 *)a3 + 10) << 32;
LABEL_38:
      v58 += (unsigned __int64)*((unsigned __int8 *)a3 + 9) << 24;
LABEL_39:
      v58 += (unsigned __int64)*((unsigned __int8 *)a3 + 8) << 16;
LABEL_40:
      v58 += (unsigned __int64)*((unsigned __int8 *)a3 + 7) << 8;
LABEL_41:
      if ( (_BYTE)v12 == 0 )
        return -20;
      _BitScanReverse(&v59, v12);
      v135 = a3 + 3;
      v14 = 8 * (9 - *a3) - v59;
      goto LABEL_9;
    default:
      if ( (_BYTE)v12 == 0 )
        return -1;
      _BitScanReverse(&v13, v12);
      v135 = (unsigned __int16 *)((char *)a3 + v7 - 2);
      v58 = *(_QWORD *)v135;
      v14 = 8 - v13;
LABEL_9:
      if ( a3[1] == 0 )
        return -72;
      v15 = (char *)v139 + v7;
      v136 = (unsigned __int8 *)v139 + v7;
      v16 = *((unsigned __int8 *)v139 + v7 + v8 - 1);
      v60 = *((unsigned __int8 *)v139 + v7);
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
          v60 += (unsigned __int64)v136[6] << 48;
LABEL_46:
          v60 += (unsigned __int64)v136[5] << 40;
LABEL_47:
          v60 += (unsigned __int64)v136[4] << 32;
LABEL_48:
          v60 += (unsigned __int64)v136[3] << 24;
LABEL_49:
          v60 += (unsigned __int64)v136[2] << 16;
LABEL_50:
          v60 += (unsigned __int64)v136[1] << 8;
LABEL_51:
          if ( (_BYTE)v16 == 0 )
            return -20;
          _BitScanReverse(&v16, v16);
          v140 = v136;
          v17 = 8 * (9 - a3[1]) - v16;
          break;
        default:
          if ( (_BYTE)v16 == 0 )
            return -1;
          _BitScanReverse(&v16, v16);
          v140 = (unsigned __int8 *)&v15[v8 - 8];
          v60 = *(_QWORD *)v140;
          v17 = 8 - v16;
          break;
      }
      if ( a3[2] == 0 )
        return -72;
      v18 = &v136[v8];
      v143 = v18;
      v19 = v18[v9 - 1];
      v61 = *v18;
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
      v61 += (unsigned __int64)v18[6] << 48;
LABEL_56:
      v61 += (unsigned __int64)v18[5] << 40;
LABEL_57:
      v61 += (unsigned __int64)v18[4] << 32;
LABEL_58:
      v61 += (unsigned __int64)v18[3] << 24;
LABEL_59:
      v61 += (unsigned __int64)v18[2] << 16;
LABEL_60:
      v61 += (unsigned __int64)v18[1] << 8;
LABEL_61:
      if ( (_BYTE)v19 == 0 )
        return -20;
      _BitScanReverse(&v19, v19);
      v141 = v18;
      v20 = 8 * (9 - v9) - v19;
LABEL_17:
      if ( v10 == 6 )
        return -72;
      v21 = &v18[v9];
      v149 = &v18[v9];
      v22 = v18[v9 - 7 + v10];
      v24 = *v21;
      switch ( v10 )
      {
        case 7LL:
          goto LABEL_128;
        case 8LL:
          goto LABEL_127;
        case 9LL:
          goto LABEL_126;
        case 10LL:
          goto LABEL_125;
        case 11LL:
          goto LABEL_124;
        case 12LL:
          goto LABEL_123;
        case 13LL:
          v24 += (unsigned __int64)v149[6] << 48;
LABEL_123:
          v24 += (unsigned __int64)v149[5] << 40;
LABEL_124:
          v24 += (unsigned __int64)v149[4] << 32;
LABEL_125:
          v24 += (unsigned __int64)v149[3] << 24;
LABEL_126:
          v24 += (unsigned __int64)v149[2] << 16;
LABEL_127:
          v24 += (unsigned __int64)v149[1] << 8;
LABEL_128:
          if ( v22 == 0 )
            return -20;
          _BitScanReverse(&v124, v22);
          v142 = &v18[v9];
          v25 = 8 * (9 - v6) - v124;
          break;
        default:
          if ( v22 == 0 )
            return -1;
          if ( v6 > 0xFFFFFFFFFFFFFF88uLL )
            return v6;
          v142 = &v21[v10 - 14];
          _BitScanReverse(&v23, v22);
          v24 = *(_QWORD *)v142;
          v25 = 8 - v23;
          break;
      }
      v154 = &a1[a2];
      v150 = *(unsigned __int8 *)(a5 + 2);
      v144 = a3 + 7;
      v26 = a5 + 4;
      v148 = (unsigned __int64)&a1[a2 - 3];
      v145 = v136 + 8;
      v27 = (unsigned __int64)(a2 + 3) >> 2;
      v146 = v18 + 8;
      v151 = &a1[v27];
      v152 = &a1[v27 + v27];
      v153 = &v152[v27];
      v147 = v149 + 8;
      if ( (unsigned __int64)&v152[v27] >= v148 )
      {
        v30 = &a1[v27];
        v29 = &a1[v27 + v27];
        if ( v152 < v151 || v151 < a1 )
          return -20;
        v28 = &v152[v27];
        if ( v153 < v152 )
          return -20;
        goto LABEL_68;
      }
      v28 = &v152[v27];
      v130 = v24;
      v137 = v58;
      v29 = &a1[v27 + v27];
      v133 = v61;
      v30 = &a1[v27];
      v31 = -v150;
      do
      {
        v38 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v137 << v14) >> v31));
        v39 = (unsigned __int8)v38[1];
        *a1 = *v38;
        v40 = v14 + v39;
        v41 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v60 << v17) >> v31));
        LODWORD(v38) = v17 + (unsigned __int8)v41[1];
        *v30 = *v41;
        v42 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v133 << v20) >> v31));
        LOBYTE(v41) = *v42;
        LODWORD(v42) = (unsigned __int8)v42[1];
        *v29 = (_BYTE)v41;
        LODWORD(v42) = v20 + (_DWORD)v42;
        v43 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v130 << v25) >> v31));
        LOBYTE(v41) = *v43;
        LODWORD(v43) = (unsigned __int8)v43[1];
        *v28 = (_BYTE)v41;
        LODWORD(v43) = v25 + (_DWORD)v43;
        v44 = (char *)(v26 + 2 * ((unsigned __int64)(v137 << v40) >> v31));
        v45 = *v44;
        LODWORD(v44) = (unsigned __int8)v44[1];
        a1[1] = v45;
        v46 = (_DWORD)v44 + v40;
        v47 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v38) >> v31));
        LOBYTE(v44) = *v47;
        LODWORD(v47) = (unsigned __int8)v47[1];
        v30[1] = (_BYTE)v44;
        LODWORD(v47) = (_DWORD)v38 + (_DWORD)v47;
        v48 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v133 << (char)v42) >> v31));
        LOBYTE(v44) = *v48;
        LODWORD(v48) = (_DWORD)v42 + (unsigned __int8)v48[1];
        v29[1] = (_BYTE)v44;
        v49 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v130 << (char)v43) >> v31));
        LOBYTE(v44) = *v49;
        LODWORD(v49) = (unsigned __int8)v49[1];
        v28[1] = (_BYTE)v44;
        LODWORD(v49) = (_DWORD)v43 + (_DWORD)v49;
        v50 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v137 << v46) >> v31));
        LOBYTE(v44) = *v50;
        LODWORD(v50) = (unsigned __int8)v50[1];
        a1[2] = (_BYTE)v44;
        LODWORD(v50) = v46 + (_DWORD)v50;
        v51 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v47) >> v31));
        LOBYTE(v44) = *v51;
        LODWORD(v51) = (unsigned __int8)v51[1];
        v30[2] = (_BYTE)v44;
        LODWORD(v51) = (_DWORD)v47 + (_DWORD)v51;
        v52 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v133 << (char)v48) >> v31));
        LOBYTE(v44) = *v52;
        LODWORD(v52) = (_DWORD)v48 + (unsigned __int8)v52[1];
        v29[2] = (_BYTE)v44;
        a1 += 4;
        v30 += 4;
        v29 += 4;
        v28 += 4;
        v53 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v130 << (char)v49) >> v31));
        LOBYTE(v44) = *v53;
        LODWORD(v53) = (unsigned __int8)v53[1];
        *(v28 - 2) = (_BYTE)v44;
        LODWORD(v53) = (_DWORD)v49 + (_DWORD)v53;
        v54 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v137 << (char)v50) >> v31));
        LOBYTE(v44) = *v54;
        LODWORD(v54) = (unsigned __int8)v54[1];
        *(a1 - 1) = (_BYTE)v44;
        v14 = (_DWORD)v50 + (_DWORD)v54;
        v55 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v51) >> v31));
        v17 = (_DWORD)v51 + (unsigned __int8)v55[1];
        *(v30 - 1) = *v55;
        v56 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v133 << (char)v52) >> v31));
        v20 = (_DWORD)v52 + (unsigned __int8)v56[1];
        *(v29 - 1) = *v56;
        v57 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v130 << (char)v53) >> v31));
        LOBYTE(v44) = *v57;
        LODWORD(v57) = (unsigned __int8)v57[1];
        *(v28 - 1) = (_BYTE)v44;
        v25 = (_DWORD)v53 + (_DWORD)v57;
        if ( v135 >= v144 )
        {
          v32 = v14;
          v14 &= 7u;
          v135 = (unsigned __int16 *)((char *)v135 - (v32 >> 3));
          v137 = *(_QWORD *)v135;
          v33 = 0;
        }
        else
        {
          v33 = 3;
        }
        if ( v140 < v145 )
        {
          v33 = 3;
        }
        else
        {
          v34 = v17;
          v17 &= 7u;
          v140 -= v34 >> 3;
          v60 = *(_QWORD *)v140;
        }
        if ( v141 < v146 )
        {
          v33 = 3;
        }
        else
        {
          v35 = v20;
          v20 &= 7u;
          v141 -= v35 >> 3;
          v133 = *(_QWORD *)v141;
        }
        if ( v142 < v147 )
        {
          v24 = v130;
          v58 = v137;
          v61 = v133;
          goto LABEL_65;
        }
        v36 = v25;
        v25 &= 7u;
        v37 = &v142[-(v36 >> 3)];
        v142 = v37;
        v130 = *(_QWORD *)v37;
      }
      while ( (unsigned __int64)v28 < v148 && v33 == 0 );
      v24 = *(_QWORD *)v37;
      v61 = v133;
      v58 = v137;
LABEL_65:
      if ( v151 < a1 || v152 < v30 || v153 < v29 )
        return -20;
      if ( v14 <= 0x40 )
      {
LABEL_68:
        v131 = v30;
        v134 = v25;
        v62 = v135;
        v138 = (unsigned __int64)(v151 - 3);
        v63 = -v150;
        while ( 1 )
        {
          if ( v62 < v144 )
          {
            if ( v139 == v62 )
              goto LABEL_76;
            v64 = v14 >> 3;
            v65 = (__int64 *)((char *)v62 - v64);
            if ( (unsigned __int16 *)((char *)v62 - v64) < v139 )
            {
              v125 = v62;
              v30 = v131;
              v25 = v134;
              v126 = (unsigned int)((_DWORD)v125 - (_DWORD)v139);
              v14 -= 8 * v126;
              v135 = (unsigned __int16 *)((char *)v125 - v126);
              v58 = *(_QWORD *)((char *)v125 - v126);
              break;
            }
            v62 = (unsigned __int16 *)((char *)v62 - v64);
            v66 = (unsigned __int64)a1 < v138;
            v14 -= 8 * (v14 >> 3);
            v58 = *v65;
          }
          else
          {
            v75 = v14;
            v14 &= 7u;
            v62 = (unsigned __int16 *)((char *)v62 - (v75 >> 3));
            v58 = *(_QWORD *)v62;
            v66 = (unsigned __int64)a1 < v138;
          }
          if ( v66 )
          {
            a1 += 4;
            v67 = (char *)(v26 + 2 * ((unsigned __int64)(v58 << v14) >> v63));
            v68 = *v67;
            LODWORD(v67) = v14 + (unsigned __int8)v67[1];
            *(a1 - 4) = v68;
            v69 = (char *)(v26 + 2 * ((unsigned __int64)(v58 << (char)v67) >> v63));
            v70 = *v69;
            LODWORD(v69) = (_DWORD)v67 + (unsigned __int8)v69[1];
            *(a1 - 3) = v70;
            v71 = (char *)(v26 + 2 * ((unsigned __int64)(v58 << (char)v69) >> v63));
            v72 = *v71;
            LODWORD(v71) = (_DWORD)v69 + (unsigned __int8)v71[1];
            *(a1 - 2) = v72;
            v73 = (char *)(v26 + 2 * ((unsigned __int64)(v58 << (char)v71) >> v63));
            v74 = *v73;
            v14 = (_DWORD)v71 + (unsigned __int8)v73[1];
            *(a1 - 1) = v74;
            if ( v14 <= 0x40 )
              continue;
          }
LABEL_76:
          v135 = v62;
          v30 = v131;
          v25 = v134;
          break;
        }
      }
      if ( a1 < v151 )
      {
        do
        {
          ++a1;
          v76 = (char *)(v26 + 2 * ((unsigned __int64)(v58 << v14) >> -(char)v150));
          v77 = *v76;
          LODWORD(v76) = (unsigned __int8)v76[1];
          *(a1 - 1) = v77;
          v14 += (unsigned int)v76;
        }
        while ( v151 != a1 );
      }
      if ( v17 <= 0x40 )
      {
        v78 = v140;
        v79 = -v150;
        v132 = (unsigned __int64)(v152 - 3);
        while ( 1 )
        {
          if ( v78 < v145 )
          {
            if ( v136 == v78 )
              goto LABEL_88;
            v80 = v17 >> 3;
            v81 = &v78[-v80];
            if ( &v78[-v80] < v136 )
            {
              v127 = (unsigned int)((_DWORD)v78 - (_DWORD)v136);
              v17 -= 8 * v127;
              v140 = &v78[-v127];
              v60 = *(_QWORD *)&v78[-v127];
              break;
            }
            v78 -= v80;
            v82 = (unsigned __int64)v30 < v132;
            v17 -= 8 * (v17 >> 3);
            v60 = *(_QWORD *)v81;
          }
          else
          {
            v91 = v17;
            v17 &= 7u;
            v78 -= v91 >> 3;
            v60 = *(_QWORD *)v78;
            v82 = (unsigned __int64)v30 < v132;
          }
          if ( v82 )
          {
            v30 += 4;
            v83 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << v17) >> v79));
            v84 = *v83;
            LODWORD(v83) = v17 + (unsigned __int8)v83[1];
            *(v30 - 4) = v84;
            v85 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v83) >> v79));
            v86 = *v85;
            LODWORD(v85) = (_DWORD)v83 + (unsigned __int8)v85[1];
            *(v30 - 3) = v86;
            v87 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v85) >> v79));
            v88 = *v87;
            LODWORD(v87) = (_DWORD)v85 + (unsigned __int8)v87[1];
            *(v30 - 2) = v88;
            v89 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << (char)v87) >> v79));
            v90 = *v89;
            v17 = (_DWORD)v87 + (unsigned __int8)v89[1];
            *(v30 - 1) = v90;
            if ( v17 <= 0x40 )
              continue;
          }
LABEL_88:
          v140 = v78;
          break;
        }
      }
      if ( v30 < v152 )
      {
        do
        {
          ++v30;
          v92 = (char *)(v26 + 2 * ((unsigned __int64)(v60 << v17) >> -(char)v150));
          v93 = *v92;
          LODWORD(v92) = (unsigned __int8)v92[1];
          *(v30 - 1) = v93;
          v17 += (unsigned int)v92;
        }
        while ( v152 != v30 );
      }
      if ( v20 <= 0x40 )
      {
        v94 = v141;
        v95 = (unsigned __int64)(v153 - 3);
        v96 = -v150;
        while ( 1 )
        {
          if ( v94 < v146 )
          {
            if ( v143 == v94 )
              goto LABEL_100;
            v97 = v20 >> 3;
            v98 = &v94[-v97];
            if ( &v94[-v97] < v143 )
            {
              v128 = (unsigned int)((_DWORD)v94 - (_DWORD)v143);
              v20 -= 8 * v128;
              v141 = &v94[-v128];
              v61 = *(_QWORD *)&v94[-v128];
              break;
            }
            v94 -= v97;
            v99 = (unsigned __int64)v29 < v95;
            v20 -= 8 * (v20 >> 3);
            v61 = *(_QWORD *)v98;
          }
          else
          {
            v108 = v20;
            v20 &= 7u;
            v94 -= v108 >> 3;
            v61 = *(_QWORD *)v94;
            v99 = (unsigned __int64)v29 < v95;
          }
          if ( v99 )
          {
            v29 += 4;
            v100 = (char *)(v26 + 2 * ((unsigned __int64)(v61 << v20) >> v96));
            v101 = *v100;
            LODWORD(v100) = v20 + (unsigned __int8)v100[1];
            *(v29 - 4) = v101;
            v102 = (char *)(v26 + 2 * ((unsigned __int64)(v61 << (char)v100) >> v96));
            v103 = *v102;
            LODWORD(v102) = (_DWORD)v100 + (unsigned __int8)v102[1];
            *(v29 - 3) = v103;
            v104 = (char *)(v26 + 2 * ((unsigned __int64)(v61 << (char)v102) >> v96));
            v105 = *v104;
            LODWORD(v104) = (_DWORD)v102 + (unsigned __int8)v104[1];
            *(v29 - 2) = v105;
            v106 = (char *)(v26 + 2 * ((unsigned __int64)(v61 << (char)v104) >> v96));
            v107 = *v106;
            v20 = (_DWORD)v104 + (unsigned __int8)v106[1];
            *(v29 - 1) = v107;
            if ( v20 <= 0x40 )
              continue;
          }
LABEL_100:
          v141 = v94;
          break;
        }
      }
      if ( v29 < v153 )
      {
        do
        {
          ++v29;
          v109 = (char *)(v26 + 2 * ((unsigned __int64)(v61 << v20) >> -(char)v150));
          v110 = *v109;
          LODWORD(v109) = (unsigned __int8)v109[1];
          *(v29 - 1) = v110;
          v20 += (unsigned int)v109;
        }
        while ( v153 != v29 );
      }
      if ( v25 > 0x40 )
        goto LABEL_113;
      v111 = v142;
      v112 = -v150;
      break;
    default:
      if ( (_BYTE)v19 == 0 )
        return -1;
      _BitScanReverse(&v19, v19);
      v141 = &v18[v9 - 8];
      v61 = *(_QWORD *)v141;
      v20 = 8 - v19;
      goto LABEL_17;
  }
  while ( v111 >= v147 )
  {
    v121 = v25;
    v25 &= 7u;
    v111 -= v121 >> 3;
    v24 = *(_QWORD *)v111;
    v114 = (unsigned __int64)v28 < v148;
LABEL_108:
    if ( v114 )
    {
      v28 += 4;
      v115 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v24 << v25) >> v112));
      v116 = v25 + (unsigned __int8)v115[1];
      *(v28 - 4) = *v115;
      v117 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v24 << v116) >> v112));
      LOBYTE(v115) = *v117;
      LODWORD(v117) = v116 + (unsigned __int8)v117[1];
      *(v28 - 3) = (_BYTE)v115;
      v118 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v24 << (char)v117) >> v112));
      v119 = (_DWORD)v117 + (unsigned __int8)v118[1];
      *(v28 - 2) = *v118;
      v120 = (_BYTE *)(v26 + 2 * ((unsigned __int64)(v24 << v119) >> v112));
      LOBYTE(v118) = *v120;
      v25 = v119 + (unsigned __int8)v120[1];
      *(v28 - 1) = (_BYTE)v118;
      if ( v25 <= 0x40 )
        continue;
    }
LABEL_112:
    v142 = v111;
    goto LABEL_113;
  }
  if ( v149 == v111 )
    goto LABEL_112;
  v113 = v25 >> 3;
  if ( &v111[-v113] >= v149 )
  {
    v24 = *(_QWORD *)&v111[-v113];
    v111 -= v113;
    v114 = (unsigned __int64)v28 < v148;
    v25 -= 8 * (v25 >> 3);
    goto LABEL_108;
  }
  v129 = (unsigned int)((_DWORD)v111 - (_DWORD)v149);
  v25 -= 8 * v129;
  v142 = &v111[-v129];
  v24 = *(_QWORD *)&v111[-v129];
LABEL_113:
  if ( v28 < v154 )
  {
    do
    {
      ++v28;
      v122 = (char *)(v26 + 2 * ((unsigned __int64)(v24 << v25) >> -(char)v150));
      v123 = *v122;
      LODWORD(v122) = (unsigned __int8)v122[1];
      *(v28 - 1) = v123;
      v25 += (unsigned int)v122;
    }
    while ( v154 != v28 );
  }
  if ( v143 == v141 && v149 == v142 && v20 == 64 && v17 == 64 && v136 == v140 && v139 == v135 && v14 == 64 && v25 == 64 )
    return a2;
  return -20;
}

