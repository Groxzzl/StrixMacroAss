// sub_140008D80 @ 0x140008D80
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140008D80(_WORD *a1, __int64 a2, unsigned __int16 *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r10
  unsigned int v12; // edx
  unsigned __int16 *v13; // r15
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // r9d
  unsigned int v17; // edi
  unsigned __int8 *v18; // r14
  unsigned int v19; // r9d
  unsigned __int8 *v20; // r13
  unsigned int v21; // ebp
  unsigned __int8 *v22; // rsi
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  __int64 v25; // r14
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  _WORD *v28; // r9
  char *v29; // r10
  char *v30; // r9
  _WORD *v31; // rsi
  __int64 v32; // r14
  unsigned int v33; // r11d
  int v34; // r10d
  _WORD *v35; // r13
  char *v36; // r12
  __int64 v37; // r15
  __int64 v38; // r8
  unsigned int v39; // ebx
  _WORD *v40; // rax
  __int64 v41; // r8
  _WORD *v42; // r9
  unsigned int v43; // edx
  __int64 v44; // r8
  unsigned int v45; // ebp
  _WORD *v46; // rsi
  __int64 v47; // r8
  unsigned int v48; // r11d
  char *v49; // r8
  __int64 v50; // r12
  unsigned int v51; // edi
  _WORD *v52; // rax
  __int64 v53; // rbx
  _WORD *v54; // r9
  __int64 v55; // rdx
  _WORD *v56; // rsi
  __int64 v57; // rbp
  char *v58; // r8
  __int64 v59; // r11
  unsigned int v60; // r13d
  _WORD *v61; // rdi
  __int64 v62; // rax
  _WORD *v63; // r9
  __int64 v64; // rax
  __int64 v65; // r11
  __int64 v66; // rax
  _WORD *v67; // r11
  __int64 v68; // rsi
  char *v69; // r8
  __int64 v70; // rax
  __int64 v71; // r9
  __int64 v72; // rsi
  __int64 v73; // r9
  unsigned __int16 *v74; // rbx
  unsigned int v75; // r8d
  __int64 v76; // r8
  unsigned __int8 *v77; // rbx
  unsigned int v78; // r8d
  __int64 v79; // r8
  unsigned __int8 *v80; // rbx
  unsigned int v81; // r8d
  __int64 v82; // r8
  unsigned __int8 *v83; // rbx
  unsigned int v84; // r8d
  __int64 v85; // r8
  int v86; // r10d
  __int64 v87; // r9
  __int64 *v88; // r8
  bool v89; // r9
  __int64 v90; // r9
  unsigned int v91; // r8d
  _WORD *v92; // rax
  __int64 v93; // r9
  unsigned int v94; // edx
  _WORD *v95; // rax
  __int64 v96; // r8
  _WORD *v97; // r8
  __int64 v98; // rax
  unsigned int v99; // r8d
  __int64 v100; // r11
  unsigned int v101; // r9d
  __int64 v102; // rbx
  char *v103; // kr10_8
  __int64 v104; // r12
  __int64 v105; // r9
  __int64 *v106; // r8
  bool v107; // r9
  __int64 v108; // r8
  unsigned int v109; // r8d
  unsigned int v110; // r10d
  __int64 v111; // r11
  __int64 v112; // r8
  _BYTE *v113; // r10
  unsigned __int64 v114; // r8
  _WORD *v115; // r9
  unsigned __int8 *v116; // rdx
  int v117; // eax
  __int64 v118; // r11
  unsigned __int8 *v119; // r10
  bool v120; // r11
  __int64 v121; // r10
  unsigned int v122; // r11d
  _WORD *v123; // r9
  __int64 v124; // rdi
  _WORD *v125; // r9
  __int64 v126; // rdi
  int v127; // r11d
  _WORD *v128; // r10
  __int64 v129; // r9
  unsigned int v130; // r10d
  _WORD *v131; // rax
  __int64 v132; // r9
  _BYTE *v133; // rax
  unsigned __int64 v134; // rbx
  unsigned __int64 v135; // r9
  int v136; // r8d
  __int64 v137; // r11
  unsigned __int8 *v138; // r10
  bool v139; // r11
  __int64 v140; // r10
  unsigned int v141; // r11d
  _WORD *v142; // rsi
  __int64 v143; // rbp
  _WORD *v144; // rsi
  __int64 v145; // rbp
  int v146; // r11d
  _WORD *v147; // r10
  __int64 v148; // rsi
  unsigned int v149; // r10d
  __int64 v150; // r8
  __int64 v151; // r11
  bool v152; // r11
  __int64 v153; // rax
  unsigned int v154; // eax
  __int64 v155; // r8
  __int64 v156; // rax
  _BYTE *v157; // rax
  unsigned int v158; // r9d
  unsigned __int64 v159; // rbx
  unsigned __int8 *v160; // r10
  char *v161; // rax
  int v162; // r8d
  __int64 v163; // r12
  unsigned __int8 *v164; // rsi
  bool v165; // r12
  int v166; // r9d
  __int64 v167; // r12
  int v168; // esi
  char *v169; // rax
  __int64 v170; // r12
  int v171; // r9d
  char *v172; // rax
  __int64 v173; // rsi
  char *v174; // rsi
  __int64 v175; // rax
  unsigned int v176; // esi
  char *v177; // rax
  unsigned int v178; // r9d
  __int64 v179; // r8
  char *v180; // rax
  unsigned int v181; // esi
  int v182; // eax
  __int64 v183; // r11
  __int64 v184; // r8
  unsigned __int8 *v185; // r11
  unsigned int v186; // eax
  char *v187; // r9
  __int64 v188; // r12
  unsigned __int8 *v189; // r8
  bool v190; // r12
  __int64 v191; // r8
  unsigned int v192; // r8d
  __int64 v193; // r8
  unsigned __int8 *v194; // rbx
  __int64 v195; // r10
  __int64 v196; // r10
  unsigned __int8 *v197; // rax
  bool v198; // r10
  __int64 v199; // rax
  unsigned int v200; // eax
  unsigned __int8 *v201; // rbx
  __int64 v202; // r10
  __int64 v203; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v204; // [rsp+0h] [rbp-F8h]
  unsigned int v205; // [rsp+0h] [rbp-F8h]
  __int64 v206; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v207; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v208; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v209; // [rsp+10h] [rbp-E8h]
  unsigned __int16 *v210; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v211; // [rsp+20h] [rbp-D8h]
  unsigned __int16 *v212; // [rsp+28h] [rbp-D0h]
  unsigned __int8 *v213; // [rsp+30h] [rbp-C8h]
  unsigned __int8 *v214; // [rsp+38h] [rbp-C0h]
  unsigned __int8 *v215; // [rsp+40h] [rbp-B8h]
  unsigned __int16 *v216; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v217; // [rsp+50h] [rbp-A8h]
  unsigned __int8 *v218; // [rsp+58h] [rbp-A0h]
  unsigned __int8 *v219; // [rsp+60h] [rbp-98h]
  _BYTE *v220; // [rsp+68h] [rbp-90h]
  unsigned __int8 *v221; // [rsp+70h] [rbp-88h]
  unsigned __int64 v222; // [rsp+78h] [rbp-80h]
  char *v223; // [rsp+80h] [rbp-78h]
  unsigned int v224; // [rsp+88h] [rbp-70h]
  int v225; // [rsp+8Ch] [rbp-6Ch]
  _WORD *v226; // [rsp+90h] [rbp-68h]
  _BYTE *v227; // [rsp+98h] [rbp-60h]
  unsigned __int64 v228; // [rsp+A0h] [rbp-58h]
  char *v229; // [rsp+A8h] [rbp-50h]

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
  v210 = a3 + 3;
  v100 = *((unsigned __int8 *)a3 + 6);
  switch ( *a3 )
  {
    case 0u:
    case 1u:
      goto LABEL_48;
    case 2u:
      goto LABEL_47;
    case 3u:
      goto LABEL_46;
    case 4u:
      goto LABEL_45;
    case 5u:
      goto LABEL_44;
    case 6u:
      goto LABEL_43;
    case 7u:
      v100 += (unsigned __int64)*((unsigned __int8 *)a3 + 12) << 48;
LABEL_43:
      v100 += (unsigned __int64)*((unsigned __int8 *)a3 + 11) << 40;
LABEL_44:
      v100 += (unsigned __int64)*((unsigned __int8 *)a3 + 10) << 32;
LABEL_45:
      v100 += (unsigned __int64)*((unsigned __int8 *)a3 + 9) << 24;
LABEL_46:
      v100 += (unsigned __int64)*((unsigned __int8 *)a3 + 8) << 16;
LABEL_47:
      v100 += (unsigned __int64)*((unsigned __int8 *)a3 + 7) << 8;
LABEL_48:
      if ( (_BYTE)v12 == 0 )
        return -20;
      _BitScanReverse(&v101, v12);
      v13 = a3 + 3;
      v15 = 8 * (9 - *a3) - v101;
      goto LABEL_9;
    default:
      if ( (_BYTE)v12 == 0 )
        return -1;
      v13 = (unsigned __int16 *)((char *)a3 + v7 - 2);
      _BitScanReverse(&v14, v12);
      v100 = *(_QWORD *)v13;
      v15 = 8 - v14;
LABEL_9:
      if ( a3[1] == 0 )
        return -72;
      v209 = (unsigned __int8 *)v210 + v7;
      v16 = *((unsigned __int8 *)v210 + v7 + v8 - 1);
      v103 = (char *)v210 + v7;
      v102 = *((unsigned __int8 *)v210 + v7);
      switch ( a3[1] )
      {
        case 1u:
          goto LABEL_58;
        case 2u:
          goto LABEL_57;
        case 3u:
          goto LABEL_56;
        case 4u:
          goto LABEL_55;
        case 5u:
          goto LABEL_54;
        case 6u:
          goto LABEL_53;
        case 7u:
          v102 += (unsigned __int64)v209[6] << 48;
LABEL_53:
          v102 += (unsigned __int64)v209[5] << 40;
LABEL_54:
          v102 += (unsigned __int64)v209[4] << 32;
LABEL_55:
          v102 += (unsigned __int64)v209[3] << 24;
LABEL_56:
          v102 += (unsigned __int64)v209[2] << 16;
LABEL_57:
          v102 += (unsigned __int64)v209[1] << 8;
LABEL_58:
          if ( (_BYTE)v16 == 0 )
            return -20;
          _BitScanReverse(&v16, v16);
          v211 = v209;
          v17 = 8 * (9 - a3[1]) - v16;
LABEL_13:
          if ( a3[2] == 0 )
            return -72;
          v18 = &v209[v8];
          v213 = &v209[v8];
          v19 = v209[v8 - 1 + v9];
          v104 = v209[v8];
          switch ( a3[2] )
          {
            case 1u:
              goto LABEL_68;
            case 2u:
              goto LABEL_67;
            case 3u:
              goto LABEL_66;
            case 4u:
              goto LABEL_65;
            case 5u:
              goto LABEL_64;
            case 6u:
              goto LABEL_63;
            case 7u:
              v104 += (unsigned __int64)v213[6] << 48;
LABEL_63:
              v104 += (unsigned __int64)v213[5] << 40;
LABEL_64:
              v104 += (unsigned __int64)v213[4] << 32;
LABEL_65:
              v104 += (unsigned __int64)v213[3] << 24;
LABEL_66:
              v104 += (unsigned __int64)v213[2] << 16;
LABEL_67:
              v104 += (unsigned __int64)v213[1] << 8;
LABEL_68:
              if ( (_BYTE)v19 == 0 )
                return -20;
              _BitScanReverse(&v19, v19);
              v20 = v213;
              v21 = 8 * (9 - v9) - v19;
LABEL_17:
              if ( v10 == 6 )
                return -72;
              v22 = &v213[v9];
              v218 = v22;
              v23 = v22[v10 - 7];
              v25 = *v22;
              switch ( v10 )
              {
                case 7LL:
                  goto LABEL_85;
                case 8LL:
                  goto LABEL_84;
                case 9LL:
                  goto LABEL_83;
                case 10LL:
                  goto LABEL_82;
                case 11LL:
                  goto LABEL_81;
                case 12LL:
                  goto LABEL_80;
                case 13LL:
                  v25 += (unsigned __int64)v22[6] << 48;
LABEL_80:
                  v25 += (unsigned __int64)v22[5] << 40;
LABEL_81:
                  v25 += (unsigned __int64)v22[4] << 32;
LABEL_82:
                  v25 += (unsigned __int64)v22[3] << 24;
LABEL_83:
                  v25 += (unsigned __int64)v22[2] << 16;
LABEL_84:
                  v25 += (unsigned __int64)v22[1] << 8;
LABEL_85:
                  if ( (_BYTE)v23 == 0 )
                    return -20;
                  _BitScanReverse(&v110, v23);
                  v215 = v22;
                  v224 = 8 * (9 - v6) - v110;
                  break;
                default:
                  if ( (_BYTE)v23 == 0 )
                    return -1;
                  if ( v6 > 0xFFFFFFFFFFFFFF88uLL )
                    return v6;
                  _BitScanReverse(&v24, (unsigned __int8)v23);
                  v215 = &v22[v10 - 14];
                  v25 = *(_QWORD *)v215;
                  v224 = 8 - v24;
                  break;
              }
              v26 = (unsigned __int64)(a2 + 3) >> 2;
              v229 = (char *)a1 + a2;
              v27 = a5 + 4;
              v222 = (unsigned __int64)a1 + a2 - 7;
              v227 = (char *)a1 + v26;
              v28 = (_WORD *)((char *)a1 + v26 + v26);
              v29 = (char *)v28 + v26;
              v226 = v28;
              v228 = (unsigned __int64)v29;
              v225 = *(unsigned __int8 *)(a5 + 2);
              v216 = a3 + 7;
              v217 = v209 + 8;
              v219 = v213 + 8;
              v221 = v22 + 8;
              if ( (unsigned __int64)v29 >= v222 )
              {
                v223 = v29;
                v31 = v28;
                v220 = v227;
              }
              else
              {
                v30 = v29;
                v206 = v25;
                v31 = v226;
                v32 = v100;
                v214 = v20;
                v33 = v224;
                v203 = v104;
                v34 = -v225;
                v35 = v227;
                v212 = v13;
                v36 = v30;
                v37 = v102;
                do
                {
                  v38 = v27 + 4 * ((unsigned __int64)(v32 << v15) >> v34);
                  *a1 = *(_WORD *)v38;
                  v39 = v15 + *(unsigned __int8 *)(v38 + 2);
                  v40 = (_WORD *)((char *)a1 + *(unsigned __int8 *)(v38 + 3));
                  v41 = v27 + 4 * ((unsigned __int64)(v37 << v17) >> v34);
                  *v35 = *(_WORD *)v41;
                  v42 = (_WORD *)((char *)v35 + *(unsigned __int8 *)(v41 + 3));
                  v43 = v17 + *(unsigned __int8 *)(v41 + 2);
                  v44 = v27 + 4 * ((unsigned __int64)(v203 << v21) >> v34);
                  *v31 = *(_WORD *)v44;
                  v45 = *(unsigned __int8 *)(v44 + 2) + v21;
                  v46 = (_WORD *)((char *)v31 + *(unsigned __int8 *)(v44 + 3));
                  v47 = v27 + 4 * ((unsigned __int64)(v206 << v33) >> v34);
                  *(_WORD *)v36 = *(_WORD *)v47;
                  v48 = *(unsigned __int8 *)(v47 + 2) + v33;
                  v49 = &v36[*(unsigned __int8 *)(v47 + 3)];
                  v50 = v27 + 4 * ((unsigned __int64)(v32 << v39) >> v34);
                  *v40 = *(_WORD *)v50;
                  v51 = v39 + *(unsigned __int8 *)(v50 + 2);
                  v52 = (_WORD *)((char *)v40 + *(unsigned __int8 *)(v50 + 3));
                  v53 = v27 + 4 * ((unsigned __int64)(v37 << v43) >> v34);
                  *v42 = *(_WORD *)v53;
                  LODWORD(v50) = v43 + *(unsigned __int8 *)(v53 + 2);
                  v54 = (_WORD *)((char *)v42 + *(unsigned __int8 *)(v53 + 3));
                  v55 = v27 + 4 * ((unsigned __int64)(v203 << v45) >> v34);
                  *v46 = *(_WORD *)v55;
                  LODWORD(v53) = v45 + *(unsigned __int8 *)(v55 + 2);
                  v56 = (_WORD *)((char *)v46 + *(unsigned __int8 *)(v55 + 3));
                  v57 = v27 + 4 * ((unsigned __int64)(v206 << v48) >> v34);
                  *(_WORD *)v49 = *(_WORD *)v57;
                  LODWORD(v55) = v48 + *(unsigned __int8 *)(v57 + 2);
                  v58 = &v49[*(unsigned __int8 *)(v57 + 3)];
                  v59 = v27 + 4 * ((unsigned __int64)(v32 << v51) >> v34);
                  *v52 = *(_WORD *)v59;
                  v60 = v51 + *(unsigned __int8 *)(v59 + 2);
                  v61 = (_WORD *)((char *)v52 + *(unsigned __int8 *)(v59 + 3));
                  v62 = v27 + 4 * ((unsigned __int64)(v37 << v50) >> v34);
                  *v54 = *(_WORD *)v62;
                  LODWORD(v57) = v50 + *(unsigned __int8 *)(v62 + 2);
                  v63 = (_WORD *)((char *)v54 + *(unsigned __int8 *)(v62 + 3));
                  v64 = v27 + 4 * ((unsigned __int64)(v203 << v53) >> v34);
                  *v56 = *(_WORD *)v64;
                  LODWORD(v50) = *(unsigned __int8 *)(v64 + 2);
                  v65 = *(unsigned __int8 *)(v64 + 3);
                  v66 = v27 + 4 * ((unsigned __int64)(v206 << v55) >> v34);
                  LODWORD(v50) = v53 + v50;
                  v67 = (_WORD *)((char *)v56 + v65);
                  v68 = v27 + 4 * ((unsigned __int64)(v37 << v57) >> v34);
                  *(_WORD *)v58 = *(_WORD *)v66;
                  LODWORD(v53) = v55 + *(unsigned __int8 *)(v66 + 2);
                  v69 = &v58[*(unsigned __int8 *)(v66 + 3)];
                  v70 = v27 + 4 * ((unsigned __int64)(v32 << v60) >> v34);
                  *v61 = *(_WORD *)v70;
                  v15 = v60 + *(unsigned __int8 *)(v70 + 2);
                  a1 = (_WORD *)((char *)v61 + *(unsigned __int8 *)(v70 + 3));
                  *v63 = *(_WORD *)v68;
                  v17 = v57 + *(unsigned __int8 *)(v68 + 2);
                  v35 = (_WORD *)((char *)v63 + *(unsigned __int8 *)(v68 + 3));
                  v71 = v27 + 4 * ((unsigned __int64)(v203 << v50) >> v34);
                  *v67 = *(_WORD *)v71;
                  LODWORD(v57) = *(unsigned __int8 *)(v71 + 2);
                  v72 = *(unsigned __int8 *)(v71 + 3);
                  v73 = v27 + 4 * ((unsigned __int64)(v206 << v53) >> v34);
                  v21 = v50 + v57;
                  v31 = (_WORD *)((char *)v67 + v72);
                  *(_WORD *)v69 = *(_WORD *)v73;
                  v33 = v53 + *(unsigned __int8 *)(v73 + 2);
                  v74 = v212;
                  v36 = &v69[*(unsigned __int8 *)(v73 + 3)];
                  if ( v212 < v216 )
                    break;
                  v75 = v15;
                  v15 &= 7u;
                  v76 = v75 >> 3;
                  v212 = (unsigned __int16 *)((char *)v212 - v76);
                  v32 = *(_QWORD *)((char *)v74 - v76);
                  v77 = v211;
                  if ( v211 < v217 )
                    break;
                  v78 = v17;
                  v17 &= 7u;
                  v79 = v78 >> 3;
                  v211 -= v79;
                  v37 = *(_QWORD *)&v77[-v79];
                  v80 = v214;
                  if ( v214 < v219 )
                    break;
                  v81 = v21;
                  v21 &= 7u;
                  v82 = v81 >> 3;
                  v214 -= v82;
                  v203 = *(_QWORD *)&v80[-v82];
                  v83 = v215;
                  if ( v215 < v221 )
                    break;
                  v84 = v33;
                  v33 &= 7u;
                  v85 = v84 >> 3;
                  v215 -= v85;
                  v206 = *(_QWORD *)&v83[-v85];
                }
                while ( (unsigned __int64)v36 < v222 );
                v220 = v35;
                v102 = v37;
                v20 = v214;
                v224 = v33;
                v13 = v212;
                v100 = v32;
                v223 = v36;
                v25 = v206;
                v104 = v203;
              }
              if ( v227 < (_BYTE *)a1 || v226 < (_WORD *)v220 || v228 < (unsigned __int64)v31 )
                return -20;
              v204 = (unsigned __int64)(v227 - 2);
              if ( v15 > 0x40 )
                goto LABEL_89;
              v207 = (unsigned __int64)(v227 - 7);
              v86 = -v225;
              break;
            default:
              if ( (_BYTE)v19 == 0 )
                return -1;
              v20 = &v18[v9 - 8];
              _BitScanReverse(&v19, v19);
              v104 = *(_QWORD *)v20;
              v21 = 8 - v19;
              goto LABEL_17;
          }
          break;
        default:
          if ( (_BYTE)v16 == 0 )
            return -1;
          _BitScanReverse(&v16, v16);
          v211 = (unsigned __int8 *)&v103[v8 - 8];
          v102 = *(_QWORD *)v211;
          v17 = 8 - v16;
          goto LABEL_13;
      }
      break;
  }
  while ( v13 >= v216 )
  {
    v99 = v15;
    v15 &= 7u;
    v13 = (unsigned __int16 *)((char *)v13 - (v99 >> 3));
    v100 = *(_QWORD *)v13;
    v89 = (unsigned __int64)a1 < v207;
LABEL_37:
    if ( !v89 )
      goto LABEL_88;
    v90 = v27 + 4 * ((unsigned __int64)(v100 << v15) >> v86);
    *a1 = *(_WORD *)v90;
    v91 = v15 + *(unsigned __int8 *)(v90 + 2);
    v92 = (_WORD *)((char *)a1 + *(unsigned __int8 *)(v90 + 3));
    v93 = v27 + 4 * ((unsigned __int64)(v100 << v91) >> v86);
    *v92 = *(_WORD *)v93;
    v94 = v91 + *(unsigned __int8 *)(v93 + 2);
    v95 = (_WORD *)((char *)v92 + *(unsigned __int8 *)(v93 + 3));
    v96 = v27 + 4 * ((unsigned __int64)(v100 << v94) >> v86);
    *v95 = *(_WORD *)v96;
    LODWORD(v93) = v94 + *(unsigned __int8 *)(v96 + 2);
    v97 = (_WORD *)((char *)v95 + *(unsigned __int8 *)(v96 + 3));
    v98 = v27 + 4 * ((unsigned __int64)(v100 << v93) >> v86);
    *v97 = *(_WORD *)v98;
    v15 = v93 + *(unsigned __int8 *)(v98 + 2);
    a1 = (_WORD *)((char *)v97 + *(unsigned __int8 *)(v98 + 3));
    if ( v15 > 0x40 )
      goto LABEL_89;
  }
  if ( v210 != v13 )
  {
    v87 = v15 >> 3;
    v88 = (__int64 *)((char *)v13 - v87);
    if ( (unsigned __int16 *)((char *)v13 - v87) >= v210 )
    {
      v13 = (unsigned __int16 *)((char *)v13 - v87);
      v89 = (unsigned __int64)a1 < v207;
      v15 -= 8 * (v15 >> 3);
      v100 = *v88;
      goto LABEL_37;
    }
    v111 = (unsigned int)((_DWORD)v13 - (_DWORD)v210);
    v13 = (unsigned __int16 *)((char *)v13 - v111);
    v15 -= 8 * v111;
    v100 = *(_QWORD *)v13;
LABEL_88:
    if ( v15 > 0x40 )
      goto LABEL_89;
  }
  while ( 2 )
  {
    if ( v13 >= v216 )
    {
      v109 = v15;
      v15 &= 7u;
      v13 = (unsigned __int16 *)((char *)v13 - (v109 >> 3));
      v100 = *(_QWORD *)v13;
      v107 = v204 >= (unsigned __int64)a1;
      goto LABEL_74;
    }
    if ( v210 == v13 )
      goto LABEL_89;
    v105 = v15 >> 3;
    v106 = (__int64 *)((char *)v13 - v105);
    if ( (unsigned __int16 *)((char *)v13 - v105) >= v210 )
    {
      v13 = (unsigned __int16 *)((char *)v13 - v105);
      v107 = v204 >= (unsigned __int64)a1;
      v15 -= 8 * (v15 >> 3);
      v100 = *v106;
LABEL_74:
      if ( !v107 )
        goto LABEL_89;
      v108 = v27 + 4 * ((unsigned __int64)(v100 << v15) >> -(char)v225);
      *a1 = *(_WORD *)v108;
      v15 += *(unsigned __int8 *)(v108 + 2);
      a1 = (_WORD *)((char *)a1 + *(unsigned __int8 *)(v108 + 3));
      if ( v15 > 0x40 )
        goto LABEL_89;
      continue;
    }
    break;
  }
  v183 = (unsigned int)((_DWORD)v13 - (_DWORD)v210);
  v13 = (unsigned __int16 *)((char *)v13 - v183);
  v15 -= 8 * v183;
  v100 = *(_QWORD *)v13;
LABEL_89:
  if ( v204 >= (unsigned __int64)a1 )
  {
    do
    {
      v112 = v27 + 4 * ((unsigned __int64)(v100 << v15) >> -(char)v225);
      *a1 = *(_WORD *)v112;
      v15 += *(unsigned __int8 *)(v112 + 2);
      a1 = (_WORD *)((char *)a1 + *(unsigned __int8 *)(v112 + 3));
    }
    while ( v227 - 2 >= (_BYTE *)a1 );
  }
  if ( a1 < (_WORD *)v227 )
  {
    v113 = (_BYTE *)(v27 + 4 * ((unsigned __int64)(v100 << v15) >> -(char)v225));
    *(_BYTE *)a1 = *v113;
    if ( v113[3] == 1 )
    {
      v15 += (unsigned __int8)v113[2];
    }
    else if ( v15 <= 0x3F )
    {
      v15 += (unsigned __int8)v113[2];
      if ( v15 > 0x40 )
        v15 = 64;
    }
  }
  v114 = (unsigned __int64)(v226 - 1);
  if ( v17 <= 0x40 )
  {
    v205 = v15;
    v115 = v220;
    v208 = (unsigned __int64)v226 - 7;
    v116 = v211;
    v117 = -v225;
    while ( 1 )
    {
      if ( v116 < v217 )
      {
        if ( v209 == v116 )
        {
          v211 = v116;
          v15 = v205;
          v220 = v115;
          goto LABEL_181;
        }
        v118 = v17 >> 3;
        v119 = &v116[-v118];
        if ( &v116[-v118] < v209 )
        {
          v194 = v116;
          v220 = v115;
          v15 = v205;
          v195 = (unsigned int)((_DWORD)v194 - (_DWORD)v209);
          v17 -= 8 * v195;
          v211 = &v194[-v195];
          v102 = *(_QWORD *)&v194[-v195];
LABEL_180:
          if ( v17 > 0x40 )
            break;
LABEL_181:
          v115 = v220;
          v205 = v15;
          v116 = v211;
          while ( 1 )
          {
            if ( v116 < v217 )
            {
              if ( v209 == v116 )
                goto LABEL_105;
              v196 = v17 >> 3;
              v197 = &v116[-v196];
              if ( &v116[-v196] < v209 )
              {
                v201 = v116;
                v220 = v115;
                v15 = v205;
                v202 = (unsigned int)((_DWORD)v201 - (_DWORD)v209);
                v17 -= 8 * v202;
                v211 = &v201[-v202];
                v102 = *(_QWORD *)&v201[-v202];
                goto LABEL_106;
              }
              v116 -= v196;
              v198 = v114 >= (unsigned __int64)v115;
              v17 -= 8 * (v17 >> 3);
              v102 = *(_QWORD *)v197;
            }
            else
            {
              v200 = v17;
              v17 &= 7u;
              v116 -= v200 >> 3;
              v102 = *(_QWORD *)v116;
              v198 = v114 >= (unsigned __int64)v115;
            }
            if ( v198 )
            {
              v199 = v27 + 4 * ((unsigned __int64)(v102 << v17) >> -(char)v225);
              *v115 = *(_WORD *)v199;
              v17 += *(unsigned __int8 *)(v199 + 2);
              v115 = (_WORD *)((char *)v115 + *(unsigned __int8 *)(v199 + 3));
              if ( v17 <= 0x40 )
                continue;
            }
            goto LABEL_105;
          }
        }
        v116 -= v118;
        v120 = (unsigned __int64)v115 < v208;
        v17 -= 8 * (v17 >> 3);
        v102 = *(_QWORD *)v119;
      }
      else
      {
        v130 = v17;
        v17 &= 7u;
        v116 -= v130 >> 3;
        v102 = *(_QWORD *)v116;
        v120 = (unsigned __int64)v115 < v208;
      }
      if ( !v120 )
      {
        v211 = v116;
        v15 = v205;
        v220 = v115;
        goto LABEL_180;
      }
      v121 = v27 + 4 * ((unsigned __int64)(v102 << v17) >> v117);
      *v115 = *(_WORD *)v121;
      v122 = v17 + *(unsigned __int8 *)(v121 + 2);
      v123 = (_WORD *)((char *)v115 + *(unsigned __int8 *)(v121 + 3));
      v124 = v27 + 4 * ((unsigned __int64)(v102 << v122) >> v117);
      *v123 = *(_WORD *)v124;
      LODWORD(v121) = v122 + *(unsigned __int8 *)(v124 + 2);
      v125 = (_WORD *)((char *)v123 + *(unsigned __int8 *)(v124 + 3));
      v126 = v27 + 4 * ((unsigned __int64)(v102 << v121) >> v117);
      *v125 = *(_WORD *)v126;
      v127 = v121 + *(unsigned __int8 *)(v126 + 2);
      v128 = (_WORD *)((char *)v125 + *(unsigned __int8 *)(v126 + 3));
      v129 = v27 + 4 * ((unsigned __int64)(v102 << v127) >> v117);
      *v128 = *(_WORD *)v129;
      v17 = v127 + *(unsigned __int8 *)(v129 + 2);
      v115 = (_WORD *)((char *)v128 + *(unsigned __int8 *)(v129 + 3));
      if ( v17 > 0x40 )
      {
LABEL_105:
        v220 = v115;
        v211 = v116;
        v15 = v205;
        break;
      }
    }
  }
LABEL_106:
  v131 = v220;
  if ( v114 >= (unsigned __int64)v220 )
  {
    do
    {
      v132 = v27 + 4 * ((unsigned __int64)(v102 << v17) >> -(char)v225);
      *v131 = *(_WORD *)v132;
      v17 += *(unsigned __int8 *)(v132 + 2);
      v131 = (_WORD *)((char *)v131 + *(unsigned __int8 *)(v132 + 3));
    }
    while ( v114 >= (unsigned __int64)v131 );
    v220 = v131;
  }
  if ( v220 < (_BYTE *)v226 )
  {
    v133 = (_BYTE *)(v27 + 4 * ((unsigned __int64)(v102 << v17) >> -(char)v225));
    *v220 = *v133;
    if ( v133[3] == 1 )
    {
      v17 += (unsigned __int8)v133[2];
    }
    else if ( v17 <= 0x3F )
    {
      v17 += (unsigned __int8)v133[2];
      if ( v17 > 0x40 )
        v17 = 64;
    }
  }
  v134 = v228 - 2;
  if ( v21 <= 0x40 )
  {
    v135 = v228 - 7;
    v136 = -v225;
    do
    {
      if ( v20 < v219 )
      {
        if ( v213 == v20 )
          goto LABEL_131;
        v137 = v21 >> 3;
        v138 = &v20[-v137];
        if ( &v20[-v137] < v213 )
        {
          v150 = (unsigned int)((_DWORD)v20 - (_DWORD)v213);
          v20 -= v150;
          v21 -= 8 * v150;
          v104 = *(_QWORD *)v20;
LABEL_124:
          if ( v21 > 0x40 )
            break;
          while ( 1 )
          {
LABEL_131:
            if ( v20 < v219 )
            {
              if ( v213 == v20 )
                goto LABEL_134;
              v151 = v21 >> 3;
              if ( &v20[-v151] < v213 )
              {
                v155 = (unsigned int)((_DWORD)v20 - (_DWORD)v213);
                v20 -= v155;
                v21 -= 8 * v155;
                v104 = *(_QWORD *)v20;
                goto LABEL_134;
              }
              v104 = *(_QWORD *)&v20[-v151];
              v20 -= v151;
              v152 = v134 >= (unsigned __int64)v31;
              v21 -= 8 * (v21 >> 3);
            }
            else
            {
              v154 = v21;
              v21 &= 7u;
              v20 -= v154 >> 3;
              v104 = *(_QWORD *)v20;
              v152 = v134 >= (unsigned __int64)v31;
            }
            if ( v152 )
            {
              v153 = v27 + 4 * ((unsigned __int64)(v104 << v21) >> -(char)v225);
              *v31 = *(_WORD *)v153;
              v21 += *(unsigned __int8 *)(v153 + 2);
              v31 = (_WORD *)((char *)v31 + *(unsigned __int8 *)(v153 + 3));
              if ( v21 <= 0x40 )
                continue;
            }
            goto LABEL_134;
          }
        }
        v20 -= v137;
        v139 = (unsigned __int64)v31 < v135;
        v21 -= 8 * (v21 >> 3);
        v104 = *(_QWORD *)v138;
      }
      else
      {
        v149 = v21;
        v21 &= 7u;
        v20 -= v149 >> 3;
        v104 = *(_QWORD *)v20;
        v139 = (unsigned __int64)v31 < v135;
      }
      if ( !v139 )
        goto LABEL_124;
      v140 = v27 + 4 * ((unsigned __int64)(v104 << v21) >> v136);
      *v31 = *(_WORD *)v140;
      v141 = v21 + *(unsigned __int8 *)(v140 + 2);
      v142 = (_WORD *)((char *)v31 + *(unsigned __int8 *)(v140 + 3));
      v143 = v27 + 4 * ((unsigned __int64)(v104 << v141) >> v136);
      *v142 = *(_WORD *)v143;
      LODWORD(v140) = v141 + *(unsigned __int8 *)(v143 + 2);
      v144 = (_WORD *)((char *)v142 + *(unsigned __int8 *)(v143 + 3));
      v145 = v27 + 4 * ((unsigned __int64)(v104 << v140) >> v136);
      *v144 = *(_WORD *)v145;
      v146 = v140 + *(unsigned __int8 *)(v145 + 2);
      v147 = (_WORD *)((char *)v144 + *(unsigned __int8 *)(v145 + 3));
      v148 = v27 + 4 * ((unsigned __int64)(v104 << v146) >> v136);
      *v147 = *(_WORD *)v148;
      v21 = v146 + *(unsigned __int8 *)(v148 + 2);
      v31 = (_WORD *)((char *)v147 + *(unsigned __int8 *)(v148 + 3));
    }
    while ( v21 <= 0x40 );
  }
LABEL_134:
  while ( v134 >= (unsigned __int64)v31 )
  {
    v156 = v27 + 4 * ((unsigned __int64)(v104 << v21) >> -(char)v225);
    *v31 = *(_WORD *)v156;
    v21 += *(unsigned __int8 *)(v156 + 2);
    v31 = (_WORD *)((char *)v31 + *(unsigned __int8 *)(v156 + 3));
  }
  if ( (unsigned __int64)v31 < v228 )
  {
    v157 = (_BYTE *)(v27 + 4 * ((unsigned __int64)(v104 << v21) >> -(char)v225));
    *(_BYTE *)v31 = *v157;
    if ( v157[3] == 1 )
    {
      v21 += (unsigned __int8)v157[2];
    }
    else if ( v21 <= 0x3F )
    {
      v21 += (unsigned __int8)v157[2];
      if ( v21 > 0x40 )
        v21 = 64;
    }
  }
  v158 = v224;
  v159 = (unsigned __int64)(v229 - 2);
  if ( v224 <= 0x40 )
  {
    v160 = v215;
    v161 = v223;
    v162 = -v225;
    while ( 1 )
    {
      if ( v160 < v221 )
      {
        if ( v218 == v160 )
        {
          v215 = v160;
          v224 = v158;
          v223 = v161;
          goto LABEL_169;
        }
        v163 = v158 >> 3;
        v164 = &v160[-v163];
        if ( &v160[-v163] < v218 )
        {
          v223 = v161;
          v184 = (unsigned int)((_DWORD)v160 - (_DWORD)v218);
          v215 = &v160[-v184];
          v25 = *(_QWORD *)&v160[-v184];
          v224 = v158 - 8 * v184;
LABEL_168:
          if ( v224 > 0x40 )
            break;
LABEL_169:
          v185 = v215;
          v186 = v224;
          v187 = v223;
          while ( 1 )
          {
            if ( v185 < v221 )
            {
              if ( v218 == v185 )
                goto LABEL_177;
              v188 = v186 >> 3;
              v189 = &v185[-v188];
              if ( &v185[-v188] < v218 )
              {
                v223 = v187;
                v193 = (unsigned int)((_DWORD)v185 - (_DWORD)v218);
                v215 = &v185[-v193];
                v25 = *(_QWORD *)&v185[-v193];
                v224 = v186 - 8 * v193;
                goto LABEL_151;
              }
              v185 -= v188;
              v190 = v159 >= (unsigned __int64)v187;
              v186 -= 8 * (v186 >> 3);
              v25 = *(_QWORD *)v189;
            }
            else
            {
              v192 = v186;
              v186 &= 7u;
              v185 -= v192 >> 3;
              v25 = *(_QWORD *)v185;
              v190 = v159 >= (unsigned __int64)v187;
            }
            if ( v190 )
            {
              v191 = v27 + 4 * ((unsigned __int64)(v25 << v186) >> -(char)v225);
              *(_WORD *)v187 = *(_WORD *)v191;
              v186 += *(unsigned __int8 *)(v191 + 2);
              v187 += *(unsigned __int8 *)(v191 + 3);
              if ( v186 <= 0x40 )
                continue;
            }
LABEL_177:
            v215 = v185;
            v224 = v186;
            v223 = v187;
            goto LABEL_151;
          }
        }
        v160 -= v163;
        v165 = (unsigned __int64)v161 < v222;
        v166 = v158 - 8 * (v158 >> 3);
        v25 = *(_QWORD *)v164;
      }
      else
      {
        v176 = v158;
        v166 = v158 & 7;
        v160 -= v176 >> 3;
        v25 = *(_QWORD *)v160;
        v165 = (unsigned __int64)v161 < v222;
      }
      if ( !v165 )
      {
        v215 = v160;
        v224 = v166;
        v223 = v161;
        goto LABEL_168;
      }
      v167 = v27 + 4 * ((unsigned __int64)(v25 << v166) >> v162);
      *(_WORD *)v161 = *(_WORD *)v167;
      v168 = v166 + *(unsigned __int8 *)(v167 + 2);
      v169 = &v161[*(unsigned __int8 *)(v167 + 3)];
      v170 = v27 + 4 * ((unsigned __int64)(v25 << v168) >> v162);
      *(_WORD *)v169 = *(_WORD *)v170;
      v171 = v168 + *(unsigned __int8 *)(v170 + 2);
      v172 = &v169[*(unsigned __int8 *)(v170 + 3)];
      v173 = v27 + 4 * ((unsigned __int64)(v25 << v171) >> v162);
      *(_WORD *)v172 = *(_WORD *)v173;
      LODWORD(v170) = v171 + *(unsigned __int8 *)(v173 + 2);
      v174 = &v172[*(unsigned __int8 *)(v173 + 3)];
      v175 = v27 + 4 * ((unsigned __int64)(v25 << v170) >> v162);
      *(_WORD *)v174 = *(_WORD *)v175;
      v158 = v170 + *(unsigned __int8 *)(v175 + 2);
      v161 = &v174[*(unsigned __int8 *)(v175 + 3)];
      if ( v158 > 0x40 )
      {
        v215 = v160;
        v224 = v158;
        v223 = v161;
        break;
      }
    }
  }
LABEL_151:
  v177 = v223;
  if ( v159 >= (unsigned __int64)v223 )
  {
    v178 = v224;
    do
    {
      v179 = v27 + 4 * ((unsigned __int64)(v25 << v178) >> -(char)v225);
      *(_WORD *)v177 = *(_WORD *)v179;
      v178 += *(unsigned __int8 *)(v179 + 2);
      v177 += *(unsigned __int8 *)(v179 + 3);
    }
    while ( v159 >= (unsigned __int64)v177 );
    v224 = v178;
    v223 = v177;
  }
  if ( v223 < v229 )
  {
    v180 = (char *)(v27 + 4 * ((unsigned __int64)(v25 << v224) >> -(char)v225));
    *v223 = *v180;
    if ( v180[3] == 1 )
    {
      v224 += (unsigned __int8)v180[2];
    }
    else if ( v224 <= 0x3F )
    {
      v181 = (unsigned __int8)v180[2] + v224;
      v182 = 64;
      if ( v181 <= 0x40 )
        v182 = v181;
      v224 = v182;
    }
  }
  if ( v213 == v20 && v218 == v215 && v21 == 64 && v209 == v211 && v17 == 64 && v15 == 64 && v210 == v13 && v224 == 64 )
    return a2;
  return -20;
}

