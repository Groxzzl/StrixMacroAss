// sub_140002FB0 @ 0x140002FB0
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_140002FB0(_BYTE *a1, int *a2, unsigned __int64 a3, int *a4)
{
  int *v4; // rbx
  unsigned __int64 result; // rax
  unsigned int v7; // eax
  int v8; // edi
  int v9; // edx
  char *v10; // r12
  int *v11; // rcx
  unsigned int v12; // eax
  int v13; // r8d
  signed int v14; // r11d
  int v15; // edi
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  int v18; // r10d
  unsigned __int64 v19; // rbx
  int v20; // edx
  int v21; // r10d
  int v22; // edx
  unsigned int v23; // r14d
  signed int v24; // eax
  unsigned int v25; // r8d
  int *v26; // rax
  unsigned int v27; // r14d
  char v32; // r10
  char v33; // r10
  unsigned int v34; // edx
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int8 *v37; // rbx
  unsigned __int64 v38; // r10
  unsigned int v39; // ecx
  unsigned __int8 *v40; // r11
  unsigned __int64 v41; // rdx
  unsigned int v42; // r9d
  unsigned int v43; // edx
  int *v44; // r15
  unsigned int v45; // edx
  unsigned __int8 *v46; // rcx
  unsigned __int64 v47; // rsi
  unsigned int v48; // r9d
  unsigned __int8 *v49; // r13
  __int64 v50; // r8
  unsigned int v51; // r9d
  int v52; // edx
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  unsigned __int8 *v55; // r11
  unsigned int v56; // esi
  unsigned int v57; // r9d
  unsigned __int16 *v58; // rdi
  unsigned __int64 v59; // r8
  _BYTE *v60; // rdx
  unsigned int v61; // edx
  __int64 v62; // rsi
  unsigned __int8 *v63; // rbp
  bool v64; // r12
  unsigned __int16 *v65; // r12
  int v66; // eax
  char v67; // bp
  int v68; // ecx
  unsigned __int64 v69; // r9
  __int64 v70; // rax
  unsigned __int16 *v71; // r12
  int v72; // r8d
  char v73; // bp
  __int64 v74; // r9
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  unsigned __int16 *v77; // r12
  char v78; // bp
  __int64 v79; // rcx
  unsigned __int64 v80; // rax
  __int64 v81; // r9
  unsigned __int16 *v82; // r12
  unsigned __int64 v83; // r8
  __int64 v84; // rcx
  unsigned int v85; // ecx
  unsigned __int8 *v86; // r12
  __int64 v87; // rcx
  unsigned int v88; // r9d
  __int64 v89; // r8
  int v90; // eax
  unsigned __int64 v91; // rcx
  unsigned __int8 *v92; // rbp
  unsigned int v93; // edx
  unsigned int v94; // eax
  unsigned __int16 *v95; // rsi
  unsigned __int64 v96; // r8
  unsigned int v97; // edx
  _BYTE *v98; // r9
  __int64 v99; // r13
  unsigned __int8 *v100; // rbp
  bool v101; // r13
  unsigned __int16 *v102; // r13
  __int64 v103; // r14
  char v104; // bp
  __int64 v105; // r13
  int v106; // eax
  __int64 v107; // rcx
  unsigned __int16 *v108; // r13
  __int64 v109; // r14
  char v110; // bp
  __int64 v111; // r13
  int v112; // eax
  __int64 v113; // r8
  unsigned __int16 *v114; // r13
  __int64 v115; // r14
  char v116; // bp
  __int64 v117; // r13
  int v118; // eax
  unsigned __int16 *v119; // r13
  __int64 v120; // r14
  char v121; // bp
  __int64 v122; // r13
  unsigned int v123; // edx
  __int64 v124; // r10
  unsigned __int64 v125; // r13
  unsigned __int16 *v126; // rcx
  __int64 v127; // rbp
  char v128; // r10
  __int64 v129; // rcx
  unsigned int v130; // eax
  unsigned int v131; // ecx
  unsigned int v132; // r14d
  unsigned __int8 *v133; // r10
  int v134; // r11d
  unsigned __int64 v135; // r14
  __int64 v136; // rcx
  unsigned __int16 *v137; // rax
  __int64 v138; // rdx
  char v139; // r15
  __int64 v140; // rbp
  unsigned int v141; // edx
  _BYTE *v142; // rax
  __int64 v143; // r10
  unsigned __int64 v144; // r14
  unsigned __int16 *v145; // rcx
  int v146; // r10d
  char v147; // bp
  __int64 v148; // rax
  unsigned int v149; // ecx
  int v150; // r12d
  unsigned __int8 *v151; // rbp
  unsigned __int64 v152; // r12
  unsigned __int64 v153; // rsi
  unsigned __int16 *v154; // r9
  unsigned __int64 v155; // rsi
  int v156; // r10d
  char v157; // r11
  __int64 v158; // r8
  unsigned int v159; // ecx
  unsigned __int8 *v160; // r11
  char v161; // cl
  unsigned int v162; // edx
  unsigned int v163; // edx
  unsigned __int8 *v164; // r11
  unsigned int v165; // edx
  unsigned int v166; // esi
  unsigned __int8 *v167; // rcx
  unsigned int v168; // [rsp+3Ch] [rbp-25Ch]
  int v169; // [rsp+40h] [rbp-258h] BYREF
  int v170; // [rsp+44h] [rbp-254h] BYREF
  int v171[2]; // [rsp+48h] [rbp-250h] BYREF
  _WORD v172[292]; // [rsp+50h] [rbp-248h] BYREF
  int *v174; // [rsp+2A8h] [rbp+10h]

  v4 = a2;
  v170 = 255;
  if ( a3 <= 7 )
  {
    *(_QWORD *)v171 = 0;
    if ( (a3 & 4) != 0 )
    {
      v171[0] = *a2;
      *(int *)((char *)&v171[-1] + (unsigned int)a3) = *(int *)((char *)a2 + (unsigned int)a3 - 4);
    }
    else if ( (_DWORD)a3 != 0 )
    {
      LOBYTE(v171[0]) = *(_BYTE *)a2;
      if ( (a3 & 2) != 0 )
        *(_WORD *)((char *)&v170 + (unsigned int)a3 + 2) = *(_WORD *)((char *)a2 + (unsigned int)a3 - 2);
    }
    result = sub_140001EA0(v172, &v170, &v169, (unsigned int *)v171, 8u);
    if ( result > 0xFFFFFFFFFFFFFF88uLL )
      return result;
    if ( a3 >= result )
    {
      v34 = v169;
      v35 = result;
      goto LABEL_46;
    }
    return -20;
  }
  memset(v172, 0, 0x200u);
  v7 = *a2;
  v8 = *a2 & 0xF;
  v9 = v8 + 5;
  if ( (unsigned int)(v8 + 5) <= 0xF )
  {
    v10 = (char *)v4 + a3;
    v11 = v4;
    v12 = v7 >> 4;
    v13 = 1 << v9;
    v169 = v8 + 5;
    v14 = (1 << v9) + 1;
    v15 = v8 + 6;
    v174 = v4;
    v16 = 0;
    v17 = (unsigned __int64)(v10 - 7);
    v18 = 4;
    v168 = v9;
    v19 = (unsigned __int64)(v10 - 4);
    while ( 1 )
    {
      v27 = 2 * v13 - v14 - 1;
      if ( (v12 & (v13 - 1)) < v27 )
      {
        v20 = v12 & (v13 - 1);
        v21 = v18 + v15 - 1;
      }
      else
      {
        v20 = v12 & (2 * v13 - 1);
        if ( v13 <= v20 )
          v20 -= v27;
        v21 = v15 + v18;
      }
      v22 = v20 - 1;
      v23 = v16 + 1;
      v24 = v14 - v22;
      v14 += v22;
      v172[v16] = v22;
      if ( v22 >= 0 )
        v14 = v24;
      if ( v13 > v14 )
      {
        if ( v14 <= 1 )
          goto LABEL_43;
        _BitScanReverse(&v25, v14);
        v15 = v25 + 1;
        v13 = 1 << v25;
      }
      if ( (_DWORD)v16 == 255 )
      {
LABEL_43:
        v34 = v168;
        v4 = v174;
        if ( v14 == 1 )
          goto LABEL_44;
        return -20;
      }
      v26 = (int *)((char *)v11 + (v21 >> 3));
      if ( v17 >= (unsigned __int64)v11 || v19 >= (unsigned __int64)v26 )
      {
        v18 = v21 & 7;
        v11 = v26;
      }
      else
      {
        v33 = v21 + 8 * ((_BYTE)v11 - v19);
        v11 = (int *)(v10 - 4);
        v18 = v33 & 0x1F;
      }
      v12 = (unsigned int)*v11 >> v18;
      if ( v22 == 0 )
        break;
LABEL_23:
      v16 = v23;
    }
    _EDX = ~v12 | 0x80000000;
    __asm { tzcnt   edx, edx }
    if ( _EDX > 0x17 )
    {
      while ( 1 )
      {
        v23 += 36;
        if ( v17 < (unsigned __int64)v11 )
        {
          v44 = (int *)(v10 - 4);
          v32 = v18 + 8 * ((_BYTE)v11 - v17);
          v12 = *((_DWORD *)v10 - 1) >> v32;
          v18 = v32 & 0x1F;
        }
        else
        {
          v44 = (int *)((char *)v11 + 3);
          v12 = *(unsigned int *)((char *)v11 + 3) >> v18;
        }
        _EDX = ~v12 | 0x80000000;
        __asm { tzcnt   edx, edx }
        if ( _EDX <= 0x17 )
          break;
        v11 = v44;
      }
      v43 = _EDX >> 1;
    }
    else
    {
      v43 = _EDX >> 1;
      v44 = v11;
    }
    v21 = v18 + 2 * v43 + 2;
    v23 += 3 * v43 + ((v12 >> (2 * v43)) & 3);
    if ( v23 <= 0xFF )
    {
      v11 = (int *)((char *)v44 + (v21 >> 3));
      if ( v17 >= (unsigned __int64)v44 || v10 - 4 >= (char *)v11 )
      {
        v18 = v21 & 7;
      }
      else
      {
        v11 = (int *)(v10 - 4);
        v18 = ((_BYTE)v21 + 8 * ((_BYTE)v44 - ((_BYTE)v10 - 4))) & 0x1F;
      }
      v12 = (unsigned int)*v11 >> v18;
      goto LABEL_23;
    }
    v34 = v168;
    v4 = v174;
    if ( v14 != 1 )
      return -20;
    if ( v23 != 256 )
      return -48;
    v11 = v44;
LABEL_44:
    if ( v21 > 32 )
      return -20;
    v170 = v23 - 1;
    v35 = (char *)v11 + ((v21 + 7) >> 3) - (char *)v4;
    if ( v35 > 0xFFFFFFFFFFFFFF88uLL )
      return (char *)v11 + ((v21 + 7) >> 3) - (char *)v4;
LABEL_46:
    if ( v34 <= 6 )
    {
      v36 = (1 << v34) + 1;
      if ( 4 * (v36 + (((1LL << v34) + 2 * (unsigned __int64)(unsigned int)(v170 + 1) + 11) >> 2)) <= 0x164 )
      {
        result = sub_140001740(a4, (__int64)v172, v170, v34, (__int64)&a4[v36], 356 - 4 * v36);
        if ( result > 0xFFFFFFFFFFFFFF88uLL )
          return result;
        v37 = (unsigned __int8 *)v4 + v35;
        result = a3 - v35;
        v38 = (unsigned __int64)(a1 + 252);
        if ( *((_WORD *)a4 + 1) != 0 )
        {
          if ( result == 0 )
            return -72;
          v45 = v37[result - 1];
          v47 = *v37;
          switch ( result )
          {
            case 1uLL:
              goto LABEL_123;
            case 2uLL:
              goto LABEL_122;
            case 3uLL:
              goto LABEL_121;
            case 4uLL:
              goto LABEL_120;
            case 5uLL:
              goto LABEL_119;
            case 6uLL:
              goto LABEL_118;
            case 7uLL:
              v47 += (unsigned __int64)v37[6] << 48;
LABEL_118:
              v47 += (unsigned __int64)v37[5] << 40;
LABEL_119:
              v47 += (unsigned __int64)v37[4] << 32;
LABEL_120:
              v47 += (unsigned __int64)v37[3] << 24;
LABEL_121:
              v47 += (unsigned __int64)v37[2] << 16;
LABEL_122:
              v47 += (unsigned __int64)v37[1] << 8;
LABEL_123:
              if ( (_BYTE)v45 == 0 )
                return -20;
              _BitScanReverse(&v45, v45);
              v46 = v37;
              v48 = 8 * (9 - result) - v45;
              goto LABEL_63;
            default:
              if ( (_BYTE)v45 == 0 )
                return -1;
              if ( result > 0xFFFFFFFFFFFFFF88uLL )
                return result;
              v46 = &v37[result - 8];
              _BitScanReverse(&v45, v45);
              v47 = *(_QWORD *)v46;
              v48 = 8 - v45;
LABEL_63:
              v49 = v37 + 8;
              v50 = *(unsigned __int16 *)a4;
              v51 = v50 + v48;
              v52 = *(unsigned __int16 *)a4;
              v53 = dword_1424230E0[v50];
              v54 = v53 & (v47 >> -(char)v51);
              if ( v51 > 0x40 )
              {
                v57 = v52 + v51;
                v55 = v46;
                v58 = (unsigned __int16 *)(a4 + 1);
                v59 = (v47 >> -(char)v57) & v53;
                v60 = a1;
                goto LABEL_148;
              }
              if ( v46 >= v49 )
              {
                v166 = v51;
                v51 &= 7u;
                v167 = &v46[-(v166 >> 3)];
                v47 = *(_QWORD *)v167;
                v55 = v167;
              }
              else
              {
                v55 = v37;
                if ( v37 != v46 )
                {
                  v56 = v51 >> 3;
                  v55 = &v46[-(v51 >> 3)];
                  if ( v55 < v37 )
                  {
                    v56 = (_DWORD)v46 - (_DWORD)v37;
                    v55 = &v46[-((_DWORD)v46 - (_DWORD)v37)];
                  }
                  v51 -= 8 * v56;
                  v47 = *(_QWORD *)v55;
                }
              }
              v57 = v52 + v51;
              v58 = (unsigned __int16 *)(a4 + 1);
              v59 = (v47 >> -(char)v57) & v53;
              if ( v57 > 0x40 )
                goto LABEL_184;
              if ( v55 >= v49 )
              {
                v165 = v57;
                v57 &= 7u;
                v55 -= v165 >> 3;
                v47 = *(_QWORD *)v55;
              }
              else
              {
                v60 = a1;
                if ( v37 == v55 )
                  goto LABEL_148;
                v61 = v57 >> 3;
                v62 = v57 >> 3;
                if ( &v55[-v62] >= v37 )
                {
                  v55 -= v62;
                }
                else
                {
                  v61 = (_DWORD)v55 - (_DWORD)v37;
                  v55 -= (unsigned int)((_DWORD)v55 - (_DWORD)v37);
                }
                v47 = *(_QWORD *)v55;
                v57 -= 8 * v61;
                if ( v57 > 0x40 )
                {
LABEL_184:
                  v60 = a1;
                  goto LABEL_148;
                }
              }
              v60 = a1;
              do
              {
                if ( v55 < v49 )
                {
                  if ( v37 == v55 )
                    break;
                  v63 = &v55[-(v57 >> 3)];
                  if ( v63 < v37 )
                  {
                    v143 = (unsigned int)((_DWORD)v55 - (_DWORD)v37);
                    v55 -= v143;
                    v57 -= 8 * v143;
                    v47 = *(_QWORD *)v55;
                    break;
                  }
                  v47 = *(_QWORD *)v63;
                  v55 -= v57 >> 3;
                  v64 = (unsigned __int64)v60 < v38;
                  v57 -= 8 * (v57 >> 3);
                }
                else
                {
                  v85 = v57;
                  v57 &= 7u;
                  v55 -= v85 >> 3;
                  v47 = *(_QWORD *)v55;
                  v64 = (unsigned __int64)v60 < v38;
                }
                if ( !v64 )
                  break;
                v65 = &v58[2 * v54];
                v60 += 4;
                v66 = *((unsigned __int8 *)v65 + 3);
                v67 = *((_BYTE *)v65 + 2);
                v68 = v66 + v57;
                v69 = v47 << v57 >> -(char)v66;
                v70 = *v65;
                v71 = &v58[2 * v59];
                *(v60 - 4) = v67;
                v72 = *((unsigned __int8 *)v71 + 3);
                v73 = *((_BYTE *)v71 + 2);
                v74 = v70 + v69;
                LODWORD(v70) = v68 + v72;
                v75 = v47 << v68 >> -(char)v72;
                v76 = *v71;
                v77 = &v58[2 * v74];
                *(v60 - 3) = v73;
                LODWORD(v74) = *((unsigned __int8 *)v77 + 3);
                v78 = *((_BYTE *)v77 + 2);
                v79 = v76 + v75;
                LODWORD(v76) = v70 + v74;
                v80 = v47 << v70 >> -(char)v74;
                v81 = *v77;
                v82 = &v58[2 * v79];
                *(v60 - 2) = v78;
                LODWORD(v79) = *((unsigned __int8 *)v82 + 3);
                v54 = v81 + v80;
                v57 = v76 + v79;
                v83 = v47 << v76 >> -(char)v79;
                v84 = *v82;
                *(v60 - 1) = *((_BYTE *)v82 + 2);
                v59 = v84 + v83;
              }
              while ( v57 <= 0x40 );
LABEL_148:
              v144 = (unsigned __int64)(a1 + 253);
              break;
          }
          while ( 1 )
          {
LABEL_149:
            if ( v144 < (unsigned __int64)v60 )
              return -70;
            while ( 1 )
            {
              v145 = &v58[2 * v54];
              v146 = *((unsigned __int8 *)v145 + 3);
              v147 = *((_BYTE *)v145 + 2);
              v148 = *v145;
              v149 = v146 + v57;
              *v60 = v147;
              if ( v146 + v57 > 0x40 )
              {
                v142 = v60 + 2;
                v60[1] = v58[2 * v59 + 1];
                return v142 - a1;
              }
              if ( v55 >= v49 )
              {
                v149 &= 7u;
                v160 = &v55[-((v146 + v57) >> 3)];
                v152 = *(_QWORD *)v160;
                v151 = v160;
              }
              else if ( v37 == v55 )
              {
                v151 = v37;
                v152 = v47;
              }
              else
              {
                v150 = v149 >> 3;
                v151 = &v55[-(v149 >> 3)];
                if ( v151 < v37 )
                {
                  v150 = (_DWORD)v55 - (_DWORD)v37;
                  v151 = &v55[-((_DWORD)v55 - (_DWORD)v37)];
                }
                v149 -= 8 * v150;
                v152 = *(_QWORD *)v151;
              }
              if ( v144 < (unsigned __int64)(v60 + 1) )
                return -70;
              v153 = v47 << v57;
              v154 = &v58[2 * v59];
              v155 = v153 >> -(char)v146;
              v156 = *((unsigned __int8 *)v154 + 3);
              v157 = *((_BYTE *)v154 + 2);
              v54 = v155 + v148;
              v158 = *v154;
              v57 = v156 + v149;
              v60[1] = v157;
              if ( v156 + v149 > 0x40 )
              {
                v161 = v58[2 * v54 + 1];
                v142 = v60 + 3;
                v60[2] = v161;
                return v142 - a1;
              }
              v60 += 2;
              v59 = (v152 << v149 >> -(char)v156) + v158;
              if ( v151 >= v49 )
                break;
              if ( v37 == v151 )
              {
                v55 = v37;
                v47 = v152;
                goto LABEL_149;
              }
              v159 = v57 >> 3;
              v55 = &v151[-(v57 >> 3)];
              if ( v55 < v37 )
              {
                v159 = (_DWORD)v151 - (_DWORD)v37;
                v55 = &v151[-((_DWORD)v151 - (_DWORD)v37)];
              }
              v47 = *(_QWORD *)v55;
              v57 -= 8 * v159;
              if ( v144 < (unsigned __int64)v60 )
                return -70;
            }
            v57 &= 7u;
            v55 = &v151[-((v156 + v149) >> 3)];
            v47 = *(_QWORD *)v55;
          }
        }
        if ( result == 0 )
          return -72;
        v39 = v37[result - 1];
        v41 = *v37;
        switch ( result )
        {
          case 1uLL:
            goto LABEL_90;
          case 2uLL:
            goto LABEL_89;
          case 3uLL:
            goto LABEL_88;
          case 4uLL:
            goto LABEL_87;
          case 5uLL:
            goto LABEL_86;
          case 6uLL:
            goto LABEL_85;
          case 7uLL:
            v41 += (unsigned __int64)v37[6] << 48;
LABEL_85:
            v41 += (unsigned __int64)v37[5] << 40;
LABEL_86:
            v41 += (unsigned __int64)v37[4] << 32;
LABEL_87:
            v41 += (unsigned __int64)v37[3] << 24;
LABEL_88:
            v41 += (unsigned __int64)v37[2] << 16;
LABEL_89:
            v41 += (unsigned __int64)v37[1] << 8;
LABEL_90:
            if ( (_BYTE)v39 == 0 )
              return -20;
            _BitScanReverse(&v39, v39);
            v40 = v37;
            v42 = 8 * (9 - result) - v39;
            break;
          default:
            if ( (_BYTE)v39 == 0 )
              return -1;
            if ( result > 0xFFFFFFFFFFFFFF88uLL )
              return result;
            v40 = &v37[result - 8];
            _BitScanReverse(&v39, v39);
            v41 = *(_QWORD *)v40;
            v42 = 8 - v39;
            break;
        }
        v86 = v37 + 8;
        v87 = *(unsigned __int16 *)a4;
        v88 = v87 + v42;
        v89 = dword_1424230E0[v87];
        v90 = *(unsigned __int16 *)a4;
        v91 = v89 & (v41 >> -(char)v88);
        if ( v88 > 0x40 )
        {
          v94 = v88 + v90;
          v95 = (unsigned __int16 *)(a4 + 1);
          v96 = (v41 >> -(char)v94) & v89;
          v98 = a1;
          goto LABEL_126;
        }
        if ( v40 >= v86 )
        {
          v163 = v88;
          v88 &= 7u;
          v164 = &v40[-(v163 >> 3)];
          v41 = *(_QWORD *)v164;
          v92 = v164;
        }
        else
        {
          v92 = v37;
          if ( v37 != v40 )
          {
            v93 = v88 >> 3;
            v92 = &v40[-(v88 >> 3)];
            if ( v92 < v37 )
            {
              v93 = (_DWORD)v40 - (_DWORD)v37;
              v92 = &v40[-((_DWORD)v40 - (_DWORD)v37)];
            }
            v88 -= 8 * v93;
            v41 = *(_QWORD *)v92;
          }
        }
        v94 = v88 + v90;
        v95 = (unsigned __int16 *)(a4 + 1);
        v96 = (v41 >> -(char)v94) & v89;
        if ( v94 > 0x40 )
        {
          v98 = a1;
          v40 = v92;
          goto LABEL_126;
        }
        if ( v92 >= v86 )
        {
          v162 = v94;
          v94 &= 7u;
          v40 = &v92[-(v162 >> 3)];
          v41 = *(_QWORD *)v40;
        }
        else
        {
          if ( v37 == v92 )
          {
            v98 = a1;
            v40 = v37;
            goto LABEL_126;
          }
          v97 = v94 >> 3;
          v40 = &v92[-(v94 >> 3)];
          if ( v40 < v37 )
          {
            v97 = (_DWORD)v92 - (_DWORD)v37;
            v40 = &v92[-((_DWORD)v92 - (_DWORD)v37)];
          }
          v94 -= 8 * v97;
          v41 = *(_QWORD *)v40;
          if ( v94 > 0x40 )
          {
            v98 = a1;
            goto LABEL_126;
          }
        }
        v98 = a1;
        while ( 2 )
        {
          if ( v40 >= v86 )
          {
            v123 = v94;
            v94 &= 7u;
            v40 -= v123 >> 3;
            v41 = *(_QWORD *)v40;
            v101 = (unsigned __int64)v98 < v38;
            goto LABEL_108;
          }
          if ( v37 != v40 )
          {
            v99 = v94 >> 3;
            v100 = &v40[-v99];
            if ( &v40[-v99] >= v37 )
            {
              v40 -= v99;
              v101 = (unsigned __int64)v98 < v38;
              v94 -= 8 * (v94 >> 3);
              v41 = *(_QWORD *)v100;
LABEL_108:
              if ( !v101 )
                break;
              v102 = &v95[2 * v91];
              v98 += 4;
              v103 = *((unsigned __int8 *)v102 + 3);
              v104 = *((_BYTE *)v102 + 2);
              v105 = *v102;
              v106 = v103 + v94;
              *(v98 - 4) = v104;
              v107 = v105 + (dword_1424230E0[v103] & (unsigned int)(v41 >> -(char)v106));
              v108 = &v95[2 * v96];
              v109 = *((unsigned __int8 *)v108 + 3);
              v110 = *((_BYTE *)v108 + 2);
              v111 = *v108;
              v112 = v109 + v106;
              *(v98 - 3) = v110;
              v113 = v111 + (dword_1424230E0[v109] & (unsigned int)(v41 >> -(char)v112));
              v114 = &v95[2 * v107];
              v115 = *((unsigned __int8 *)v114 + 3);
              v116 = *((_BYTE *)v114 + 2);
              v117 = *v114;
              v118 = v115 + v112;
              *(v98 - 2) = v116;
              v91 = v117 + (dword_1424230E0[v115] & (unsigned int)(v41 >> -(char)v118));
              v119 = &v95[2 * v113];
              v120 = *((unsigned __int8 *)v119 + 3);
              v121 = *((_BYTE *)v119 + 2);
              v122 = *v119;
              v94 = v120 + v118;
              *(v98 - 1) = v121;
              v96 = v122 + (dword_1424230E0[v120] & (unsigned int)(v41 >> -(char)v94));
              if ( v94 > 0x40 )
                break;
              continue;
            }
            v124 = (unsigned int)((_DWORD)v40 - (_DWORD)v37);
            v40 -= v124;
            v94 -= 8 * v124;
            v41 = *(_QWORD *)v40;
          }
          break;
        }
LABEL_126:
        v125 = (unsigned __int64)(a1 + 253);
LABEL_127:
        while ( v125 >= (unsigned __int64)v98 )
        {
          while ( 1 )
          {
            v126 = &v95[2 * v91];
            v127 = *v126;
            v128 = *((_BYTE *)v126 + 2);
            v129 = *((unsigned __int8 *)v126 + 3);
            *v98 = v128;
            v130 = v129 + v94;
            v131 = dword_1424230E0[v129];
            if ( v130 > 0x40 )
            {
              v142 = v98 + 2;
              v98[1] = v95[2 * v96 + 1];
              return v142 - a1;
            }
            if ( v40 >= v86 )
            {
              v133 = &v40[-(v130 >> 3)];
              v135 = *(_QWORD *)v133;
              v134 = v130 & 7;
            }
            else if ( v37 == v40 )
            {
              v133 = v37;
              v134 = v130;
              v135 = v41;
            }
            else
            {
              v132 = v130 >> 3;
              v133 = &v40[-(v130 >> 3)];
              if ( v133 < v37 )
              {
                v132 = (_DWORD)v40 - (_DWORD)v37;
                v133 = &v40[-((_DWORD)v40 - (_DWORD)v37)];
              }
              v134 = v130 - 8 * v132;
              v135 = *(_QWORD *)v133;
            }
            if ( v125 < (unsigned __int64)(v98 + 1) )
              return -70;
            v136 = (unsigned int)(v41 >> -(char)v130) & v131;
            v137 = &v95[2 * v96];
            v138 = *((unsigned __int8 *)v137 + 3);
            v139 = *((_BYTE *)v137 + 2);
            v91 = v127 + v136;
            v140 = *v137;
            v94 = v138 + v134;
            v98[1] = v139;
            if ( (unsigned int)(v138 + v134) > 0x40 )
            {
              v142 = v98 + 3;
              v98[2] = v95[2 * v91 + 1];
              return v142 - a1;
            }
            v98 += 2;
            v96 = v140 + ((unsigned int)(v135 >> -(char)v94) & dword_1424230E0[v138]);
            if ( v133 >= v86 )
            {
              v94 &= 7u;
              v40 = &v133[-((unsigned int)(v138 + v134) >> 3)];
              v41 = *(_QWORD *)v40;
              goto LABEL_127;
            }
            if ( v37 == v133 )
              break;
            v141 = v94 >> 3;
            v40 = &v133[-(v94 >> 3)];
            if ( v40 < v37 )
            {
              v141 = (_DWORD)v133 - (_DWORD)v37;
              v40 = &v133[-((_DWORD)v133 - (_DWORD)v37)];
            }
            v94 -= 8 * v141;
            v41 = *(_QWORD *)v40;
            if ( v125 < (unsigned __int64)v98 )
              return -70;
          }
          v40 = v37;
          v41 = v135;
        }
        return -70;
      }
    }
  }
  return -44;
}

