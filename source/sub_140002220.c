// sub_140002220 @ 0x140002220
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140002220(_BYTE *a1, unsigned int *a2, size_t Size, int *a4)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int8 *v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned __int8 *v15; // rdi
  unsigned __int64 v16; // rsi
  int v17; // eax
  unsigned int v19; // eax
  unsigned __int8 *v20; // rsi
  unsigned int v21; // edx
  unsigned __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // r8
  unsigned __int8 *v25; // r13
  unsigned int v26; // eax
  __int64 v27; // r10
  int v28; // edx
  unsigned __int64 v29; // r8
  unsigned __int8 *v30; // rbp
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned __int16 *v33; // rbx
  unsigned __int64 v34; // r10
  unsigned int v35; // eax
  _BYTE *v36; // rax
  unsigned __int8 *v37; // rbp
  bool v38; // r12
  unsigned __int16 *v39; // r8
  int v40; // ecx
  int v41; // ebp
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int16 *v45; // rdx
  int v46; // r10d
  char v47; // r15
  unsigned __int16 *v48; // r8
  __int64 v49; // rdx
  char v50; // r12
  __int64 v51; // rdx
  int v52; // r10d
  unsigned __int64 v53; // r12
  __int64 v54; // rcx
  unsigned __int16 *v55; // r15
  int v56; // ebp
  __int64 v57; // rcx
  unsigned int v58; // ecx
  unsigned __int64 v59; // kr00_8
  unsigned int v60; // edx
  __int64 v61; // rdx
  unsigned __int8 *v62; // r12
  unsigned int v63; // eax
  int v64; // r13d
  __int64 v65; // rdx
  unsigned __int64 v66; // r10
  unsigned __int8 *v67; // r8
  unsigned int v68; // ecx
  unsigned int v69; // eax
  unsigned __int16 *v70; // rbx
  unsigned __int64 v71; // rdx
  unsigned int v72; // ecx
  _BYTE *v73; // r8
  unsigned __int8 *v74; // r11
  bool v75; // r13
  unsigned __int16 *v76; // r15
  __int64 v77; // r11
  char v78; // r13
  int v79; // eax
  __int64 v80; // rcx
  unsigned __int16 *v81; // r15
  __int64 v82; // r10
  __int64 v83; // r11
  __int64 v84; // r10
  char v85; // r13
  int v86; // eax
  __int64 v87; // rcx
  unsigned __int16 *v88; // r15
  __int64 v89; // rdx
  __int64 v90; // r11
  __int64 v91; // rdx
  char v92; // r13
  int v93; // eax
  __int64 v94; // rcx
  unsigned __int16 *v95; // r15
  __int64 v96; // r10
  __int64 v97; // r11
  __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned int v100; // ecx
  unsigned int v101; // edx
  __int64 v102; // r11
  unsigned __int64 v103; // r15
  unsigned __int64 v104; // r11
  unsigned __int8 *v105; // r10
  unsigned __int16 *v106; // rcx
  __int64 v107; // r11
  char v108; // di
  __int64 v109; // r14
  unsigned int v110; // ecx
  unsigned int v111; // r11d
  unsigned int v112; // eax
  unsigned __int8 *v113; // r13
  unsigned __int64 v114; // rdi
  int v115; // r10d
  unsigned __int16 *v116; // rax
  __int64 v117; // rdx
  unsigned __int64 v118; // rsi
  char v119; // cl
  __int64 v120; // r11
  __int64 v121; // rsi
  unsigned int v122; // edx
  unsigned int v123; // ecx
  unsigned int v124; // ecx
  __int64 v125; // r14
  _BYTE *v126; // rbp
  __int64 v127; // r11
  unsigned __int64 v128; // r15
  unsigned __int8 *v129; // rcx
  unsigned __int16 *v130; // r11
  int v131; // ebp
  char v132; // si
  unsigned __int16 v133; // r8
  unsigned int v134; // r11d
  int v135; // r14d
  unsigned __int8 *v136; // r12
  unsigned __int64 v137; // rsi
  unsigned __int16 *v138; // rdx
  int v139; // edi
  char v140; // cl
  __int64 v141; // rbp
  unsigned int v142; // r11d
  unsigned __int8 *v143; // rcx
  unsigned int v144; // ecx
  unsigned int v145; // ecx
  unsigned __int8 *v146; // rdi
  unsigned int v147; // eax
  unsigned int v148; // ecx
  unsigned __int8 *v149; // rsi
  unsigned __int64 v150; // [rsp+38h] [rbp-260h]
  unsigned __int64 v151; // [rsp+38h] [rbp-260h]
  int v152; // [rsp+48h] [rbp-250h] BYREF
  int v153; // [rsp+4Ch] [rbp-24Ch] BYREF
  int v154[146]; // [rsp+50h] [rbp-248h] BYREF
  _BYTE *v155; // [rsp+2A0h] [rbp+8h]
  _BYTE *v156; // [rsp+2A0h] [rbp+8h]

  v153 = 255;
  v8 = sub_140001EA0(v154, &v153, &v152, a2, Size);
  if ( v8 > 0xFFFFFFFFFFFFFF88uLL )
    return v8;
  if ( (unsigned int)v152 > 6 )
    return -44;
  v9 = (1 << v152) + 1;
  if ( 4 * (v9 + (((1LL << v152) + 2 * (unsigned __int64)(unsigned int)(v153 + 1) + 11) >> 2)) > 0x164 )
    return -44;
  v10 = sub_140001740(a4, (__int64)v154, v153, v152, (__int64)&a4[v9], 356 - 4 * v9);
  if ( v10 > 0xFFFFFFFFFFFFFF88uLL )
    return v10;
  v11 = Size - v8;
  v12 = (unsigned __int8 *)a2 + v8;
  v8 = v11;
  if ( *((_WORD *)a4 + 1) != 0 )
  {
    if ( v11 != 0 )
    {
      v19 = v12[v11 - 1];
      v22 = *v12;
      switch ( v11 )
      {
        case 1uLL:
          goto LABEL_77;
        case 2uLL:
          goto LABEL_76;
        case 3uLL:
          goto LABEL_75;
        case 4uLL:
          goto LABEL_74;
        case 5uLL:
          goto LABEL_73;
        case 6uLL:
          goto LABEL_72;
        case 7uLL:
          v22 += (unsigned __int64)v12[6] << 48;
LABEL_72:
          v22 += (unsigned __int64)v12[5] << 40;
LABEL_73:
          v22 += (unsigned __int64)v12[4] << 32;
LABEL_74:
          v22 += (unsigned __int64)v12[3] << 24;
LABEL_75:
          v22 += (unsigned __int64)v12[2] << 16;
LABEL_76:
          v22 += (unsigned __int64)v12[1] << 8;
LABEL_77:
          if ( (_BYTE)v19 == 0 )
            return -20;
          _BitScanReverse(&v101, v19);
          v20 = v12;
          v23 = 8 * (9 - v8) - v101;
          goto LABEL_18;
        default:
          if ( (_BYTE)v19 == 0 )
            return -1;
          if ( v11 > 0xFFFFFFFFFFFFFF88uLL )
            return v8;
          v20 = &v12[v11 - 8];
          _BitScanReverse(&v21, v19);
          v22 = *(_QWORD *)v20;
          v23 = 8 - v21;
LABEL_18:
          v24 = *(unsigned __int16 *)a4;
          v25 = v12 + 8;
          v26 = v24 + v23;
          v27 = dword_1424230E0[v24];
          v28 = *(unsigned __int16 *)a4;
          v29 = v27 & (v22 >> -(char)v26);
          if ( v26 > 0x40 )
          {
            v32 = v26 + v28;
            v33 = (unsigned __int16 *)(a4 + 1);
            v34 = (v22 >> -(char)v32) & v27;
            v36 = a1;
            goto LABEL_103;
          }
          if ( v20 >= v25 )
          {
            v148 = v26;
            v26 &= 7u;
            v149 = &v20[-(v148 >> 3)];
            v22 = *(_QWORD *)v149;
            v30 = v149;
          }
          else
          {
            v30 = v12;
            if ( v12 != v20 )
            {
              v31 = v26 >> 3;
              v30 = &v20[-(v26 >> 3)];
              if ( v30 < v12 )
              {
                v31 = (_DWORD)v20 - (_DWORD)v12;
                v30 = &v20[-((_DWORD)v20 - (_DWORD)v12)];
              }
              v22 = *(_QWORD *)v30;
              v26 -= 8 * v31;
            }
          }
          v32 = v26 + v28;
          v33 = (unsigned __int16 *)(a4 + 1);
          v34 = (v22 >> -(char)v32) & v27;
          if ( v32 > 0x40 )
          {
            v20 = v30;
            v36 = a1;
            goto LABEL_103;
          }
          if ( v30 >= v25 )
          {
            v147 = v32;
            v32 &= 7u;
            v20 = &v30[-(v147 >> 3)];
            v22 = *(_QWORD *)v20;
          }
          else
          {
            if ( v12 == v30 )
            {
              v20 = v12;
              v36 = a1;
              goto LABEL_103;
            }
            v35 = v32 >> 3;
            v20 = &v30[-(v32 >> 3)];
            if ( v20 < v12 )
            {
              v35 = (_DWORD)v30 - (_DWORD)v12;
              v20 = &v30[-((_DWORD)v30 - (_DWORD)v12)];
            }
            v22 = *(_QWORD *)v20;
            v32 -= 8 * v35;
            if ( v32 > 0x40 )
            {
              v36 = a1;
              goto LABEL_103;
            }
          }
          v150 = (unsigned __int64)(a1 + 252);
          v36 = a1;
          do
          {
            if ( v20 < v25 )
            {
              if ( v12 == v20 )
                break;
              v37 = &v20[-(v32 >> 3)];
              if ( v37 < v12 )
              {
                v127 = (unsigned int)((_DWORD)v20 - (_DWORD)v12);
                v20 -= v127;
                v32 -= 8 * v127;
                v22 = *(_QWORD *)v20;
                break;
              }
              v22 = *(_QWORD *)v37;
              v20 -= v32 >> 3;
              v38 = (unsigned __int64)v36 < v150;
              v32 -= 8 * (v32 >> 3);
            }
            else
            {
              v58 = v32;
              v32 &= 7u;
              v20 -= v58 >> 3;
              v22 = *(_QWORD *)v20;
              v38 = (unsigned __int64)v36 < v150;
            }
            if ( !v38 )
              break;
            v39 = &v33[2 * v29];
            v36 += 4;
            v40 = *((unsigned __int8 *)v39 + 3);
            v41 = v40 + v32;
            v42 = v22 << v32 >> -(char)v40;
            v43 = *v39;
            *(v36 - 4) = *((_BYTE *)v39 + 2);
            v44 = v42 + v43;
            v45 = &v33[2 * v34];
            v46 = *((unsigned __int8 *)v45 + 3);
            v47 = *((_BYTE *)v45 + 2);
            v48 = &v33[2 * v44];
            v49 = *v45;
            v50 = v41 + v46;
            *(v36 - 3) = v47;
            v51 = (v22 << v41 >> -(char)v46) + v49;
            LODWORD(v43) = *((unsigned __int8 *)v48 + 3);
            v52 = v41 + v46 + v43;
            v53 = v22 << v50 >> -(char)v43;
            v54 = *v48;
            *(v36 - 2) = *((_BYTE *)v48 + 2);
            v55 = &v33[2 * v51];
            v56 = *((unsigned __int8 *)v55 + 3);
            v29 = v53 + v54;
            v32 = v52 + v56;
            v57 = *v55;
            *(v36 - 1) = *((_BYTE *)v55 + 2);
            v34 = v57 + (v22 << v52 >> -(char)v56);
          }
          while ( v32 <= 0x40 );
LABEL_103:
          v128 = (unsigned __int64)(a1 + 253);
          if ( a1 + 253 < v36 )
            return -70;
          v156 = a1;
          v129 = v20;
          break;
      }
      while ( 1 )
      {
        v130 = &v33[2 * v29];
        v131 = *((unsigned __int8 *)v130 + 3);
        v132 = *((_BYTE *)v130 + 2);
        v133 = *v130;
        v134 = v131 + v32;
        *v36 = v132;
        if ( v131 + v32 > 0x40 )
        {
          v125 = (__int64)v156;
          v126 = v36 + 2;
          v36[1] = v33[2 * v34 + 1];
          return (__int64)&v126[-v125];
        }
        if ( v129 >= v25 )
        {
          v134 &= 7u;
          v143 = &v129[-((v131 + v32) >> 3)];
          v137 = *(_QWORD *)v143;
          v136 = v143;
        }
        else if ( v12 == v129 )
        {
          v136 = v12;
          v137 = v22;
        }
        else
        {
          v135 = v134 >> 3;
          v136 = &v129[-(v134 >> 3)];
          if ( v136 < v12 )
          {
            v135 = (_DWORD)v129 - (_DWORD)v12;
            v136 = &v129[-((_DWORD)v129 - (_DWORD)v12)];
          }
          v137 = *(_QWORD *)v136;
          v134 -= 8 * v135;
        }
        if ( v128 < (unsigned __int64)(v36 + 1) )
          return -70;
        v29 = (v22 << v32 >> -(char)v131) + v133;
        v138 = &v33[2 * v34];
        v139 = *((unsigned __int8 *)v138 + 3);
        v140 = *((_BYTE *)v138 + 2);
        v141 = *v138;
        v32 = v139 + v134;
        v36[1] = v140;
        if ( v139 + v134 > 0x40 )
          break;
        v36 += 2;
        v34 = v141 + (v137 << v134 >> -(char)v139);
        if ( v136 >= v25 )
        {
          v32 &= 7u;
          v129 = &v136[-((v139 + v134) >> 3)];
          v22 = *(_QWORD *)v129;
        }
        else if ( v12 == v136 )
        {
          v129 = v12;
          v22 = v137;
        }
        else
        {
          v142 = v32 >> 3;
          v129 = &v136[-(v32 >> 3)];
          if ( v129 < v12 )
          {
            v142 = (_DWORD)v136 - (_DWORD)v12;
            v129 = &v136[-((_DWORD)v136 - (_DWORD)v12)];
          }
          v22 = *(_QWORD *)v129;
          v32 -= 8 * v142;
        }
        if ( v128 < (unsigned __int64)v36 )
          return -70;
      }
      v125 = (__int64)v156;
      v126 = v36 + 3;
      v36[2] = v33[2 * v29 + 1];
      return (__int64)&v126[-v125];
    }
    return -72;
  }
  if ( v11 == 0 )
    return -72;
  v13 = v12[v11 - 1];
  v59 = v11;
  v16 = *v12;
  switch ( v8 )
  {
    case 0uLL:
    case 1uLL:
      goto LABEL_46;
    case 2uLL:
      goto LABEL_45;
    case 3uLL:
      goto LABEL_44;
    case 4uLL:
      goto LABEL_43;
    case 5uLL:
      goto LABEL_42;
    case 6uLL:
      goto LABEL_41;
    case 7uLL:
      v16 += (unsigned __int64)v12[6] << 48;
LABEL_41:
      v16 += (unsigned __int64)v12[5] << 40;
LABEL_42:
      v16 += (unsigned __int64)v12[4] << 32;
LABEL_43:
      v16 += (unsigned __int64)v12[3] << 24;
LABEL_44:
      v16 += (unsigned __int64)v12[2] << 16;
LABEL_45:
      v16 += (unsigned __int64)v12[1] << 8;
LABEL_46:
      if ( (_BYTE)v13 == 0 )
        return -20;
      _BitScanReverse(&v60, v13);
      v15 = v12;
      v17 = 8 * (9 - v8) - v60;
      break;
    default:
      if ( (_BYTE)v13 == 0 )
        return -1;
      if ( v59 > 0xFFFFFFFFFFFFFF88uLL )
        return v8;
      _BitScanReverse(&v14, v13);
      v15 = &v12[v59 - 8];
      v16 = *(_QWORD *)v15;
      v17 = 8 - v14;
      break;
  }
  v61 = *(unsigned __int16 *)a4;
  v62 = v12 + 8;
  v63 = v61 + v17;
  v64 = *(unsigned __int16 *)a4;
  v65 = dword_1424230E0[v61];
  v66 = v65 & (v16 >> -(char)v63);
  if ( v63 > 0x40 )
  {
    v69 = v64 + v63;
    v70 = (unsigned __int16 *)(a4 + 1);
    v73 = a1;
    v71 = (v16 >> -(char)v69) & v65;
  }
  else
  {
    if ( v15 >= v62 )
    {
      v145 = v63;
      v63 &= 7u;
      v146 = &v15[-(v145 >> 3)];
      v16 = *(_QWORD *)v146;
      v67 = v146;
    }
    else
    {
      v67 = v12;
      if ( v12 != v15 )
      {
        v68 = v63 >> 3;
        v67 = &v15[-(v63 >> 3)];
        if ( v67 < v12 )
        {
          v68 = (_DWORD)v15 - (_DWORD)v12;
          v67 = &v15[-((_DWORD)v15 - (_DWORD)v12)];
        }
        v16 = *(_QWORD *)v67;
        v63 -= 8 * v68;
      }
    }
    v69 = v64 + v63;
    v70 = (unsigned __int16 *)(a4 + 1);
    v71 = (v16 >> -(char)v69) & v65;
    if ( v69 > 0x40 )
    {
      v15 = v67;
      v73 = a1;
    }
    else
    {
      if ( v67 >= v62 )
      {
        v144 = v69;
        v69 &= 7u;
        v15 = &v67[-(v144 >> 3)];
        v16 = *(_QWORD *)v15;
LABEL_60:
        v151 = (unsigned __int64)(a1 + 252);
        v73 = a1;
        while ( 1 )
        {
          if ( v15 < v62 )
          {
            if ( v12 == v15 )
              goto LABEL_80;
            v74 = &v15[-(v69 >> 3)];
            if ( v74 < v12 )
            {
              v102 = (unsigned int)((_DWORD)v15 - (_DWORD)v12);
              v15 -= v102;
              v69 -= 8 * v102;
              v16 = *(_QWORD *)v15;
              goto LABEL_80;
            }
            v16 = *(_QWORD *)v74;
            v15 -= v69 >> 3;
            v75 = (unsigned __int64)v73 < v151;
            v69 -= 8 * (v69 >> 3);
          }
          else
          {
            v100 = v69;
            v69 &= 7u;
            v15 -= v100 >> 3;
            v16 = *(_QWORD *)v15;
            v75 = (unsigned __int64)v73 < v151;
          }
          if ( v75 )
          {
            v76 = &v70[2 * v66];
            v73 += 4;
            v77 = *((unsigned __int8 *)v76 + 3);
            v78 = *((_BYTE *)v76 + 2);
            v79 = v77 + v69;
            v80 = *v76;
            v81 = &v70[2 * v71];
            *(v73 - 4) = v78;
            v82 = dword_1424230E0[v77] & (unsigned int)(v16 >> -(char)v79);
            v83 = *((unsigned __int8 *)v81 + 3);
            v84 = v80 + v82;
            v85 = *((_BYTE *)v81 + 2);
            v86 = v83 + v79;
            v87 = *v81;
            v88 = &v70[2 * v84];
            *(v73 - 3) = v85;
            v89 = dword_1424230E0[v83] & (unsigned int)(v16 >> -(char)v86);
            v90 = *((unsigned __int8 *)v88 + 3);
            v91 = v87 + v89;
            v92 = *((_BYTE *)v88 + 2);
            v93 = v90 + v86;
            v94 = *v88;
            v95 = &v70[2 * v91];
            *(v73 - 2) = v92;
            v96 = dword_1424230E0[v90] & (unsigned int)(v16 >> -(char)v93);
            v97 = *((unsigned __int8 *)v95 + 3);
            v66 = v94 + v96;
            v69 = v97 + v93;
            v98 = *v95;
            v99 = dword_1424230E0[v97] & (unsigned int)(v16 >> -(char)v69);
            *(v73 - 1) = *((_BYTE *)v95 + 2);
            v71 = v98 + v99;
            if ( v69 <= 0x40 )
              continue;
          }
          goto LABEL_80;
        }
      }
      if ( v12 == v67 )
      {
        v15 = v12;
        v73 = a1;
      }
      else
      {
        v72 = v69 >> 3;
        v15 = &v67[-(v69 >> 3)];
        if ( v15 < v12 )
        {
          v72 = (_DWORD)v67 - (_DWORD)v12;
          v15 = &v67[-((_DWORD)v67 - (_DWORD)v12)];
        }
        v16 = *(_QWORD *)v15;
        v69 -= 8 * v72;
        if ( v69 <= 0x40 )
          goto LABEL_60;
        v73 = a1;
      }
    }
  }
LABEL_80:
  v103 = (unsigned __int64)(a1 + 253);
  if ( a1 + 253 >= v73 )
  {
    v155 = a1;
    v104 = v66;
    v105 = v15;
    while ( 1 )
    {
      v106 = &v70[2 * v104];
      v107 = *((unsigned __int8 *)v106 + 3);
      v108 = *((_BYTE *)v106 + 2);
      v109 = *v106;
      v110 = v107 + v69;
      *v73 = v108;
      v111 = dword_1424230E0[v107];
      if ( v110 > 0x40 )
      {
        v125 = (__int64)v155;
        v126 = v73 + 2;
        v73[1] = v70[2 * v71 + 1];
        return (__int64)&v126[-v125];
      }
      if ( v105 >= v62 )
      {
        v113 = &v105[-(v110 >> 3)];
        v114 = *(_QWORD *)v113;
        v115 = v110 & 7;
      }
      else if ( v12 == v105 )
      {
        v113 = v12;
        v115 = v110;
        v114 = v16;
      }
      else
      {
        v112 = v110 >> 3;
        v113 = &v105[-(v110 >> 3)];
        if ( v113 < v12 )
        {
          v112 = (_DWORD)v105 - (_DWORD)v12;
          v113 = &v105[-((_DWORD)v105 - (_DWORD)v12)];
        }
        v114 = *(_QWORD *)v113;
        v115 = v110 - 8 * v112;
      }
      if ( v103 < (unsigned __int64)(v73 + 1) )
        return -70;
      v116 = &v70[2 * v71];
      v117 = *((unsigned __int8 *)v116 + 3);
      v118 = v16 >> -(char)v110;
      v119 = *((_BYTE *)v116 + 2);
      v120 = (unsigned int)v118 & v111;
      v121 = *v116;
      v69 = v117 + v115;
      v73[1] = v119;
      v122 = dword_1424230E0[v117];
      v104 = v109 + v120;
      if ( v69 > 0x40 )
        break;
      v73 += 2;
      v71 = v121 + ((unsigned int)(v114 >> -(char)v69) & v122);
      if ( v113 >= v62 )
      {
        v124 = v69;
        v69 &= 7u;
        v105 = &v113[-(v124 >> 3)];
        v16 = *(_QWORD *)v105;
      }
      else if ( v12 == v113 )
      {
        v105 = v12;
        v16 = v114;
      }
      else
      {
        v123 = v69 >> 3;
        v105 = &v113[-(v69 >> 3)];
        if ( v105 < v12 )
        {
          v123 = (_DWORD)v113 - (_DWORD)v12;
          v105 = &v113[-((_DWORD)v113 - (_DWORD)v12)];
        }
        v16 = *(_QWORD *)v105;
        v69 -= 8 * v123;
      }
      if ( v103 < (unsigned __int64)v73 )
        return -70;
    }
    v125 = (__int64)v155;
    v126 = v73 + 3;
    v73[2] = v70[2 * v104 + 1];
    return (__int64)&v126[-v125];
  }
  return -70;
}

