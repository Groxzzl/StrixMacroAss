// sub_140007790 @ 0x140007790
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140007790(_WORD *a1, __int64 a2, unsigned __int16 *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r11
  __int64 v10; // r10
  unsigned int v12; // edx
  unsigned __int16 *v13; // r15
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // r9d
  unsigned int v17; // r12d
  unsigned int v18; // r9d
  unsigned int v19; // r13d
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // ebp
  __int64 v23; // r11
  unsigned __int64 v24; // rcx
  _WORD *v25; // r10
  char *v26; // rcx
  __int64 v27; // r14
  int v28; // ebx
  _WORD *v29; // rdi
  __int64 v30; // r15
  __int64 v31; // rcx
  unsigned int v32; // esi
  _WORD *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // edx
  _WORD *v36; // r10
  __int64 v37; // rcx
  _WORD *v38; // r9
  unsigned int v39; // r13d
  __int64 v40; // rcx
  unsigned int v41; // ebp
  char *v42; // r8
  __int64 v43; // rcx
  unsigned int v44; // r12d
  _WORD *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // edi
  _WORD *v48; // r10
  __int64 v49; // rdx
  unsigned int v50; // esi
  _WORD *v51; // r9
  __int64 v52; // rcx
  char *v53; // r8
  __int64 v54; // rcx
  unsigned int v55; // r13d
  _WORD *v56; // r12
  __int64 v57; // rax
  unsigned int v58; // ebp
  _WORD *v59; // r10
  __int64 v60; // rax
  unsigned int v61; // edi
  _WORD *v62; // r9
  __int64 v63; // rax
  int v64; // esi
  char *v65; // r8
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  unsigned __int16 *v70; // rsi
  char *v71; // r10
  unsigned int v72; // ecx
  __int64 v73; // rcx
  unsigned __int8 *v74; // rsi
  unsigned int v75; // ecx
  __int64 v76; // rcx
  unsigned __int8 *v77; // rsi
  unsigned int v78; // ecx
  __int64 v79; // rcx
  unsigned __int8 *v80; // rsi
  unsigned int v81; // ecx
  __int64 v82; // rcx
  _WORD *v83; // r8
  int v84; // r9d
  __int64 v85; // rbx
  __int64 *v86; // rcx
  bool v87; // bl
  __int64 v88; // rcx
  unsigned int v89; // edx
  _WORD *v90; // rax
  __int64 v91; // rcx
  unsigned int v92; // ebx
  _WORD *v93; // rax
  __int64 v94; // rcx
  unsigned int v95; // edx
  _WORD *v96; // rbx
  __int64 v97; // rax
  unsigned int v98; // ecx
  __int64 v99; // rsi
  unsigned int v100; // r9d
  __int64 v101; // rdi
  char *v102; // kr10_8
  __int64 v103; // r14
  __int64 v104; // rbx
  __int64 *v105; // rcx
  bool v106; // bl
  __int64 v107; // rcx
  unsigned int v108; // ecx
  __int64 v109; // r9
  __int64 v110; // rcx
  _BYTE *v111; // rcx
  unsigned __int64 v112; // rsi
  unsigned __int8 *v113; // r9
  int v114; // eax
  __int64 v115; // rbx
  unsigned __int8 *v116; // rcx
  bool v117; // bl
  __int64 v118; // rcx
  unsigned int v119; // r12d
  _WORD *v120; // r8
  __int64 v121; // rcx
  unsigned int v122; // ebx
  _WORD *v123; // r8
  __int64 v124; // rcx
  unsigned int v125; // r12d
  _WORD *v126; // rbx
  __int64 v127; // rcx
  unsigned int v128; // ecx
  __int64 v129; // rax
  _BYTE *v130; // rax
  unsigned __int64 v131; // rbx
  unsigned __int64 v132; // rsi
  unsigned __int8 *v133; // rax
  int v134; // r8d
  __int64 v135; // rdi
  unsigned __int8 *v136; // rcx
  bool v137; // di
  __int64 v138; // rcx
  unsigned int v139; // r13d
  _WORD *v140; // r10
  __int64 v141; // rcx
  unsigned int v142; // edi
  _WORD *v143; // r10
  __int64 v144; // rcx
  unsigned int v145; // r13d
  _WORD *v146; // rdi
  __int64 v147; // rcx
  unsigned int v148; // ecx
  __int64 v149; // rax
  _BYTE *v150; // rax
  unsigned __int64 v151; // rbx
  unsigned __int8 *v152; // r10
  __int64 v153; // r9
  char *v154; // rax
  int v155; // r8d
  __int64 v156; // r14
  unsigned __int8 *v157; // rcx
  bool v158; // r14
  __int64 v159; // rcx
  unsigned int v160; // ebp
  char *v161; // rax
  __int64 v162; // rcx
  unsigned int v163; // r14d
  char *v164; // rax
  __int64 v165; // rcx
  unsigned int v166; // ebp
  char *v167; // r14
  __int64 v168; // rax
  unsigned int v169; // ecx
  char *v170; // rax
  __int64 v171; // rcx
  char *v172; // rax
  __int64 v173; // rcx
  unsigned __int8 *v174; // r10
  __int64 v175; // rsi
  char *v176; // r9
  unsigned __int8 *v177; // rcx
  bool v178; // r14
  __int64 v179; // rax
  unsigned int v180; // eax
  __int64 v181; // rcx
  __int64 v182; // r9
  __int64 v183; // rcx
  unsigned __int8 *v184; // r9
  __int64 v185; // rdi
  bool v186; // di
  __int64 v187; // rax
  unsigned int v188; // eax
  __int64 v189; // rcx
  __int64 v190; // rcx
  unsigned __int8 *v191; // rbx
  __int64 v192; // rcx
  unsigned __int8 *v193; // rax
  bool v194; // cl
  __int64 v195; // rax
  unsigned int v196; // eax
  __int64 v197; // rcx
  __int64 v198; // [rsp+0h] [rbp-F8h]
  __int64 v199; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v200; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v201; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v202; // [rsp+10h] [rbp-E8h]
  unsigned __int16 *v203; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v204; // [rsp+20h] [rbp-D8h]
  char *v205; // [rsp+28h] [rbp-D0h]
  _WORD *v206; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v207; // [rsp+30h] [rbp-C8h]
  unsigned __int16 *v208; // [rsp+38h] [rbp-C0h]
  unsigned __int8 *v209; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v210; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v211; // [rsp+50h] [rbp-A8h]
  unsigned __int16 *v212; // [rsp+58h] [rbp-A0h]
  unsigned __int8 *v213; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v214; // [rsp+68h] [rbp-90h]
  unsigned __int8 *v215; // [rsp+70h] [rbp-88h]
  unsigned __int8 *v216; // [rsp+78h] [rbp-80h]
  int v217; // [rsp+84h] [rbp-74h]
  unsigned __int64 v218; // [rsp+88h] [rbp-70h]
  _WORD *v219; // [rsp+90h] [rbp-68h]
  _WORD *v220; // [rsp+98h] [rbp-60h]
  unsigned __int64 v221; // [rsp+A0h] [rbp-58h]
  char *v222; // [rsp+A8h] [rbp-50h]

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
  v203 = a3 + 3;
  v99 = *((unsigned __int8 *)a3 + 6);
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
      v99 += (unsigned __int64)*((unsigned __int8 *)a3 + 12) << 48;
LABEL_43:
      v99 += (unsigned __int64)*((unsigned __int8 *)a3 + 11) << 40;
LABEL_44:
      v99 += (unsigned __int64)*((unsigned __int8 *)a3 + 10) << 32;
LABEL_45:
      v99 += (unsigned __int64)*((unsigned __int8 *)a3 + 9) << 24;
LABEL_46:
      v99 += (unsigned __int64)*((unsigned __int8 *)a3 + 8) << 16;
LABEL_47:
      v99 += (unsigned __int64)*((unsigned __int8 *)a3 + 7) << 8;
LABEL_48:
      if ( (_BYTE)v12 == 0 )
        return -20;
      _BitScanReverse(&v100, v12);
      v13 = a3 + 3;
      v15 = 8 * (9 - *a3) - v100;
      goto LABEL_9;
    default:
      if ( (_BYTE)v12 == 0 )
        return -1;
      v13 = (unsigned __int16 *)((char *)a3 + v7 - 2);
      _BitScanReverse(&v14, v12);
      v99 = *(_QWORD *)v13;
      v15 = 8 - v14;
LABEL_9:
      if ( a3[1] == 0 )
        return -72;
      v202 = (unsigned __int8 *)v203 + v7;
      v16 = *((unsigned __int8 *)v203 + v7 + v8 - 1);
      v102 = (char *)v203 + v7;
      v101 = *((unsigned __int8 *)v203 + v7);
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
          v101 += (unsigned __int64)v202[6] << 48;
LABEL_53:
          v101 += (unsigned __int64)v202[5] << 40;
LABEL_54:
          v101 += (unsigned __int64)v202[4] << 32;
LABEL_55:
          v101 += (unsigned __int64)v202[3] << 24;
LABEL_56:
          v101 += (unsigned __int64)v202[2] << 16;
LABEL_57:
          v101 += (unsigned __int64)v202[1] << 8;
LABEL_58:
          if ( (_BYTE)v16 == 0 )
            return -20;
          _BitScanReverse(&v16, v16);
          v204 = v202;
          v17 = 8 * (9 - a3[1]) - v16;
LABEL_13:
          if ( a3[2] == 0 )
            return -72;
          v210 = &v202[v8];
          v18 = v202[v8 - 1 + v9];
          v103 = v202[v8];
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
              v103 += (unsigned __int64)v210[6] << 48;
LABEL_63:
              v103 += (unsigned __int64)v210[5] << 40;
LABEL_64:
              v103 += (unsigned __int64)v210[4] << 32;
LABEL_65:
              v103 += (unsigned __int64)v210[3] << 24;
LABEL_66:
              v103 += (unsigned __int64)v210[2] << 16;
LABEL_67:
              v103 += (unsigned __int64)v210[1] << 8;
LABEL_68:
              if ( (_BYTE)v18 == 0 )
                return -20;
              _BitScanReverse(&v18, v18);
              v209 = &v202[v8];
              v19 = 8 * (9 - v9) - v18;
LABEL_17:
              if ( v10 == 6 )
                return -72;
              v214 = &v210[v9];
              v20 = v210[v9 - 7 + v10];
              v198 = v210[v9];
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
                  v198 += (unsigned __int64)v214[6] << 48;
LABEL_80:
                  v198 += (unsigned __int64)v214[5] << 40;
LABEL_81:
                  v198 += (unsigned __int64)v214[4] << 32;
LABEL_82:
                  v198 += (unsigned __int64)v214[3] << 24;
LABEL_83:
                  v198 += (unsigned __int64)v214[2] << 16;
LABEL_84:
                  v198 += (unsigned __int64)v214[1] << 8;
LABEL_85:
                  if ( (_BYTE)v20 == 0 )
                    return -20;
                  _BitScanReverse(&v20, v20);
                  v211 = &v210[v9];
                  v22 = 8 * (9 - v6) - v20;
                  break;
                default:
                  if ( (_BYTE)v20 == 0 )
                    return -1;
                  if ( v6 > 0xFFFFFFFFFFFFFF88uLL )
                    return v6;
                  v211 = &v210[v9 - 14 + v10];
                  _BitScanReverse(&v21, (unsigned __int8)v20);
                  v198 = *(_QWORD *)v211;
                  v22 = 8 - v21;
                  break;
              }
              v23 = a5 + 4;
              v222 = (char *)a1 + a2;
              v218 = (unsigned __int64)a1 + a2 - 7;
              v24 = (unsigned __int64)(a2 + 3) >> 2;
              v220 = (_WORD *)((char *)a1 + v24);
              v25 = (_WORD *)((char *)a1 + v24 + v24);
              v26 = (char *)v25 + v24;
              v219 = v25;
              v221 = (unsigned __int64)v26;
              v217 = *(unsigned __int8 *)(a5 + 2);
              v212 = a3 + 7;
              v213 = v202 + 8;
              v215 = v210 + 8;
              v216 = v214 + 8;
              if ( (unsigned __int64)v26 >= v218 )
              {
                v205 = v26;
                v83 = v220;
              }
              else
              {
                v205 = v26;
                v199 = v103;
                v27 = v101;
                v206 = v220;
                v28 = -v217;
                v208 = v13;
                v29 = v25;
                v30 = v99;
                do
                {
                  v31 = v23 + 4 * ((unsigned __int64)(v30 << v15) >> v28);
                  *a1 = *(_WORD *)v31;
                  v32 = v15 + *(unsigned __int8 *)(v31 + 2);
                  v33 = (_WORD *)((char *)a1 + *(unsigned __int8 *)(v31 + 3));
                  v34 = v23 + 4 * ((unsigned __int64)(v27 << v17) >> v28);
                  *v206 = *(_WORD *)v34;
                  v35 = v17 + *(unsigned __int8 *)(v34 + 2);
                  v36 = (_WORD *)((char *)v206 + *(unsigned __int8 *)(v34 + 3));
                  v37 = v23 + 4 * ((unsigned __int64)(v199 << v19) >> v28);
                  *v29 = *(_WORD *)v37;
                  v38 = (_WORD *)((char *)v29 + *(unsigned __int8 *)(v37 + 3));
                  v39 = *(unsigned __int8 *)(v37 + 2) + v19;
                  v40 = v23 + 4 * ((unsigned __int64)(v198 << v22) >> v28);
                  *(_WORD *)v205 = *(_WORD *)v40;
                  v41 = *(unsigned __int8 *)(v40 + 2) + v22;
                  v42 = &v205[*(unsigned __int8 *)(v40 + 3)];
                  v43 = v23 + 4 * ((unsigned __int64)(v30 << v32) >> v28);
                  *v33 = *(_WORD *)v43;
                  v44 = v32 + *(unsigned __int8 *)(v43 + 2);
                  v45 = (_WORD *)((char *)v33 + *(unsigned __int8 *)(v43 + 3));
                  v46 = v23 + 4 * ((unsigned __int64)(v27 << v35) >> v28);
                  *v36 = *(_WORD *)v46;
                  v47 = v35 + *(unsigned __int8 *)(v46 + 2);
                  v48 = (_WORD *)((char *)v36 + *(unsigned __int8 *)(v46 + 3));
                  v49 = v23 + 4 * ((unsigned __int64)(v199 << v39) >> v28);
                  *v38 = *(_WORD *)v49;
                  v50 = v39 + *(unsigned __int8 *)(v49 + 2);
                  v51 = (_WORD *)((char *)v38 + *(unsigned __int8 *)(v49 + 3));
                  v52 = v23 + 4 * ((unsigned __int64)(v198 << v41) >> v28);
                  *(_WORD *)v42 = *(_WORD *)v52;
                  LODWORD(v49) = v41 + *(unsigned __int8 *)(v52 + 2);
                  v53 = &v42[*(unsigned __int8 *)(v52 + 3)];
                  v54 = v23 + 4 * ((unsigned __int64)(v30 << v44) >> v28);
                  *v45 = *(_WORD *)v54;
                  v55 = v44 + *(unsigned __int8 *)(v54 + 2);
                  v56 = (_WORD *)((char *)v45 + *(unsigned __int8 *)(v54 + 3));
                  v57 = v23 + 4 * ((unsigned __int64)(v27 << v47) >> v28);
                  *v48 = *(_WORD *)v57;
                  v58 = v47 + *(unsigned __int8 *)(v57 + 2);
                  v59 = (_WORD *)((char *)v48 + *(unsigned __int8 *)(v57 + 3));
                  v60 = v23 + 4 * ((unsigned __int64)(v199 << v50) >> v28);
                  *v51 = *(_WORD *)v60;
                  v61 = v50 + *(unsigned __int8 *)(v60 + 2);
                  v62 = (_WORD *)((char *)v51 + *(unsigned __int8 *)(v60 + 3));
                  v63 = v23 + 4 * ((unsigned __int64)(v198 << v49) >> v28);
                  *(_WORD *)v53 = *(_WORD *)v63;
                  v64 = v49 + *(unsigned __int8 *)(v63 + 2);
                  v65 = &v53[*(unsigned __int8 *)(v63 + 3)];
                  v66 = v23 + 4 * ((unsigned __int64)(v30 << v55) >> v28);
                  *v56 = *(_WORD *)v66;
                  v15 = v55 + *(unsigned __int8 *)(v66 + 2);
                  a1 = (_WORD *)((char *)v56 + *(unsigned __int8 *)(v66 + 3));
                  v67 = v23 + 4 * ((unsigned __int64)(v27 << v58) >> v28);
                  *v59 = *(_WORD *)v67;
                  v17 = v58 + *(unsigned __int8 *)(v67 + 2);
                  v206 = (_WORD *)((char *)v59 + *(unsigned __int8 *)(v67 + 3));
                  v68 = v23 + 4 * ((unsigned __int64)(v199 << v61) >> v28);
                  *v62 = *(_WORD *)v68;
                  v19 = v61 + *(unsigned __int8 *)(v68 + 2);
                  v29 = (_WORD *)((char *)v62 + *(unsigned __int8 *)(v68 + 3));
                  v69 = v23 + 4 * ((unsigned __int64)(v198 << v64) >> v28);
                  *(_WORD *)v65 = *(_WORD *)v69;
                  v22 = v64 + *(unsigned __int8 *)(v69 + 2);
                  v70 = v208;
                  v71 = &v65[*(unsigned __int8 *)(v69 + 3)];
                  v205 = v71;
                  if ( v208 < v212 )
                    break;
                  v72 = v15;
                  v15 &= 7u;
                  v73 = v72 >> 3;
                  v208 = (unsigned __int16 *)((char *)v208 - v73);
                  v30 = *(_QWORD *)((char *)v70 - v73);
                  v74 = v204;
                  if ( v204 < v213 )
                    break;
                  v75 = v17;
                  v17 &= 7u;
                  v76 = v75 >> 3;
                  v204 -= v76;
                  v27 = *(_QWORD *)&v74[-v76];
                  v77 = v209;
                  if ( v209 < v215 )
                    break;
                  v78 = v19;
                  v19 &= 7u;
                  v79 = v78 >> 3;
                  v209 -= v79;
                  v199 = *(_QWORD *)&v77[-v79];
                  v80 = v211;
                  if ( v211 < v216 )
                    break;
                  v81 = v22;
                  v22 &= 7u;
                  v82 = v81 >> 3;
                  v211 -= v82;
                  v198 = *(_QWORD *)&v80[-v82];
                }
                while ( (unsigned __int64)v71 < v218 );
                v25 = v29;
                v99 = v30;
                v101 = v27;
                v83 = v206;
                v103 = v199;
                v13 = v208;
              }
              if ( v220 < a1 || v219 < v83 || v221 < (unsigned __int64)v25 )
                return -20;
              v200 = (unsigned __int64)(v220 - 1);
              if ( v15 > 0x40 )
                goto LABEL_89;
              v207 = (unsigned __int64)v220 - 7;
              v84 = -v217;
              break;
            default:
              if ( (_BYTE)v18 == 0 )
                return -1;
              _BitScanReverse(&v18, v18);
              v209 = &v202[v8 - 8 + v9];
              v103 = *(_QWORD *)v209;
              v19 = 8 - v18;
              goto LABEL_17;
          }
          break;
        default:
          if ( (_BYTE)v16 == 0 )
            return -1;
          _BitScanReverse(&v16, v16);
          v204 = (unsigned __int8 *)&v102[v8 - 8];
          v101 = *(_QWORD *)v204;
          v17 = 8 - v16;
          goto LABEL_13;
      }
      break;
  }
  while ( v13 >= v212 )
  {
    v98 = v15;
    v15 &= 7u;
    v13 = (unsigned __int16 *)((char *)v13 - (v98 >> 3));
    v99 = *(_QWORD *)v13;
    v87 = (unsigned __int64)a1 < v207;
LABEL_37:
    if ( !v87 )
      goto LABEL_88;
    v88 = v23 + 4 * ((unsigned __int64)(v99 << v15) >> v84);
    *a1 = *(_WORD *)v88;
    v89 = *(unsigned __int8 *)(v88 + 2) + v15;
    v90 = (_WORD *)((char *)a1 + *(unsigned __int8 *)(v88 + 3));
    v91 = v23 + 4 * ((unsigned __int64)(v99 << v89) >> v84);
    *v90 = *(_WORD *)v91;
    v92 = v89 + *(unsigned __int8 *)(v91 + 2);
    v93 = (_WORD *)((char *)v90 + *(unsigned __int8 *)(v91 + 3));
    v94 = v23 + 4 * ((unsigned __int64)(v99 << v92) >> v84);
    *v93 = *(_WORD *)v94;
    v95 = v92 + *(unsigned __int8 *)(v94 + 2);
    v96 = (_WORD *)((char *)v93 + *(unsigned __int8 *)(v94 + 3));
    v97 = v23 + 4 * ((unsigned __int64)(v99 << v95) >> v84);
    *v96 = *(_WORD *)v97;
    v15 = *(unsigned __int8 *)(v97 + 2) + v95;
    a1 = (_WORD *)((char *)v96 + *(unsigned __int8 *)(v97 + 3));
    if ( v15 > 0x40 )
      goto LABEL_89;
  }
  if ( v203 != v13 )
  {
    v85 = v15 >> 3;
    v86 = (__int64 *)((char *)v13 - v85);
    if ( (unsigned __int16 *)((char *)v13 - v85) >= v203 )
    {
      v13 = (unsigned __int16 *)((char *)v13 - v85);
      v87 = (unsigned __int64)a1 < v207;
      v15 -= 8 * (v15 >> 3);
      v99 = *v86;
      goto LABEL_37;
    }
    v109 = (unsigned int)((_DWORD)v13 - (_DWORD)v203);
    v13 = (unsigned __int16 *)((char *)v13 - v109);
    v15 -= 8 * v109;
    v99 = *(_QWORD *)v13;
LABEL_88:
    if ( v15 > 0x40 )
      goto LABEL_89;
  }
  while ( 2 )
  {
    if ( v13 >= v212 )
    {
      v108 = v15;
      v15 &= 7u;
      v13 = (unsigned __int16 *)((char *)v13 - (v108 >> 3));
      v99 = *(_QWORD *)v13;
      v106 = v200 >= (unsigned __int64)a1;
      goto LABEL_74;
    }
    if ( v203 == v13 )
      goto LABEL_89;
    v104 = v15 >> 3;
    v105 = (__int64 *)((char *)v13 - v104);
    if ( (unsigned __int16 *)((char *)v13 - v104) >= v203 )
    {
      v13 = (unsigned __int16 *)((char *)v13 - v104);
      v106 = v200 >= (unsigned __int64)a1;
      v15 -= 8 * (v15 >> 3);
      v99 = *v105;
LABEL_74:
      if ( !v106 )
        goto LABEL_89;
      v107 = v23 + 4 * ((unsigned __int64)(v99 << v15) >> -(char)v217);
      *a1 = *(_WORD *)v107;
      v15 += *(unsigned __int8 *)(v107 + 2);
      a1 = (_WORD *)((char *)a1 + *(unsigned __int8 *)(v107 + 3));
      if ( v15 > 0x40 )
        goto LABEL_89;
      continue;
    }
    break;
  }
  v182 = (unsigned int)((_DWORD)v13 - (_DWORD)v203);
  v13 = (unsigned __int16 *)((char *)v13 - v182);
  v15 -= 8 * v182;
  v99 = *(_QWORD *)v13;
LABEL_89:
  while ( v200 >= (unsigned __int64)a1 )
  {
    v110 = v23 + 4 * ((unsigned __int64)(v99 << v15) >> -(char)v217);
    *a1 = *(_WORD *)v110;
    v15 += *(unsigned __int8 *)(v110 + 2);
    a1 = (_WORD *)((char *)a1 + *(unsigned __int8 *)(v110 + 3));
  }
  if ( a1 < v220 )
  {
    v111 = (_BYTE *)(v23 + 4 * ((unsigned __int64)(v99 << v15) >> -(char)v217));
    *(_BYTE *)a1 = *v111;
    if ( v111[3] == 1 )
    {
      v15 += (unsigned __int8)v111[2];
    }
    else if ( v15 <= 0x3F )
    {
      v15 += (unsigned __int8)v111[2];
      if ( v15 > 0x40 )
        v15 = 64;
    }
  }
  v112 = (unsigned __int64)(v219 - 1);
  if ( v17 <= 0x40 )
  {
    v113 = v204;
    v201 = (unsigned __int64)v219 - 7;
    v114 = -v217;
    while ( 1 )
    {
      if ( v113 < v213 )
      {
        if ( v202 == v113 )
        {
          v204 = v113;
          goto LABEL_180;
        }
        v115 = v17 >> 3;
        v116 = &v113[-v115];
        if ( &v113[-v115] < v202 )
        {
          v190 = (unsigned int)((_DWORD)v113 - (_DWORD)v202);
          v17 -= 8 * v190;
          v204 = &v113[-v190];
          v101 = *(_QWORD *)&v113[-v190];
LABEL_179:
          if ( v17 > 0x40 )
            break;
LABEL_180:
          v191 = v204;
          while ( 1 )
          {
            if ( v191 < v213 )
            {
              if ( v202 == v191 )
                goto LABEL_188;
              v192 = v17 >> 3;
              v193 = &v191[-v192];
              if ( &v191[-v192] < v202 )
              {
                v197 = (unsigned int)((_DWORD)v191 - (_DWORD)v202);
                v17 -= 8 * v197;
                v204 = &v191[-v197];
                v101 = *(_QWORD *)&v191[-v197];
                goto LABEL_106;
              }
              v191 -= v192;
              v194 = v112 >= (unsigned __int64)v83;
              v17 -= 8 * (v17 >> 3);
              v101 = *(_QWORD *)v193;
            }
            else
            {
              v196 = v17;
              v17 &= 7u;
              v191 -= v196 >> 3;
              v101 = *(_QWORD *)v191;
              v194 = v112 >= (unsigned __int64)v83;
            }
            if ( v194 )
            {
              v195 = v23 + 4 * ((unsigned __int64)(v101 << v17) >> -(char)v217);
              *v83 = *(_WORD *)v195;
              v17 += *(unsigned __int8 *)(v195 + 2);
              v83 = (_WORD *)((char *)v83 + *(unsigned __int8 *)(v195 + 3));
              if ( v17 <= 0x40 )
                continue;
            }
LABEL_188:
            v204 = v191;
            goto LABEL_106;
          }
        }
        v113 -= v115;
        v117 = (unsigned __int64)v83 < v201;
        v17 -= 8 * (v17 >> 3);
        v101 = *(_QWORD *)v116;
      }
      else
      {
        v128 = v17;
        v17 &= 7u;
        v113 -= v128 >> 3;
        v101 = *(_QWORD *)v113;
        v117 = (unsigned __int64)v83 < v201;
      }
      if ( !v117 )
      {
        v204 = v113;
        goto LABEL_179;
      }
      v118 = v23 + 4 * ((unsigned __int64)(v101 << v17) >> v114);
      *v83 = *(_WORD *)v118;
      v119 = *(unsigned __int8 *)(v118 + 2) + v17;
      v120 = (_WORD *)((char *)v83 + *(unsigned __int8 *)(v118 + 3));
      v121 = v23 + 4 * ((unsigned __int64)(v101 << v119) >> v114);
      *v120 = *(_WORD *)v121;
      v122 = v119 + *(unsigned __int8 *)(v121 + 2);
      v123 = (_WORD *)((char *)v120 + *(unsigned __int8 *)(v121 + 3));
      v124 = v23 + 4 * ((unsigned __int64)(v101 << v122) >> v114);
      *v123 = *(_WORD *)v124;
      v125 = v122 + *(unsigned __int8 *)(v124 + 2);
      v126 = (_WORD *)((char *)v123 + *(unsigned __int8 *)(v124 + 3));
      v127 = v23 + 4 * ((unsigned __int64)(v101 << v125) >> v114);
      *v126 = *(_WORD *)v127;
      v17 = *(unsigned __int8 *)(v127 + 2) + v125;
      v83 = (_WORD *)((char *)v126 + *(unsigned __int8 *)(v127 + 3));
      if ( v17 > 0x40 )
      {
        v204 = v113;
        break;
      }
    }
  }
LABEL_106:
  while ( v112 >= (unsigned __int64)v83 )
  {
    v129 = v23 + 4 * ((unsigned __int64)(v101 << v17) >> -(char)v217);
    *v83 = *(_WORD *)v129;
    v17 += *(unsigned __int8 *)(v129 + 2);
    v83 = (_WORD *)((char *)v83 + *(unsigned __int8 *)(v129 + 3));
  }
  if ( v83 < v219 )
  {
    v130 = (_BYTE *)(v23 + 4 * ((unsigned __int64)(v101 << v17) >> -(char)v217));
    *(_BYTE *)v83 = *v130;
    if ( v130[3] == 1 )
    {
      v17 += (unsigned __int8)v130[2];
    }
    else if ( v17 <= 0x3F )
    {
      v17 += (unsigned __int8)v130[2];
      if ( v17 > 0x40 )
        v17 = 64;
    }
  }
  v131 = v221 - 2;
  if ( v19 <= 0x40 )
  {
    v132 = v221 - 7;
    v133 = v209;
    v134 = -v217;
    while ( 1 )
    {
      if ( v133 < v215 )
      {
        if ( v210 == v133 )
        {
          v209 = v133;
          goto LABEL_168;
        }
        v135 = v19 >> 3;
        v136 = &v133[-v135];
        if ( &v133[-v135] < v210 )
        {
          v183 = (unsigned int)((_DWORD)v133 - (_DWORD)v210);
          v19 -= 8 * v183;
          v209 = &v133[-v183];
          v103 = *(_QWORD *)&v133[-v183];
LABEL_167:
          if ( v19 > 0x40 )
            break;
LABEL_168:
          v184 = v209;
          while ( 1 )
          {
            if ( v184 < v215 )
            {
              if ( v210 == v184 )
                goto LABEL_176;
              v185 = v19 >> 3;
              if ( &v184[-v185] < v210 )
              {
                v189 = (unsigned int)((_DWORD)v184 - (_DWORD)v210);
                v19 -= 8 * v189;
                v209 = &v184[-v189];
                v103 = *(_QWORD *)&v184[-v189];
                goto LABEL_123;
              }
              v103 = *(_QWORD *)&v184[-v185];
              v184 -= v185;
              v186 = v131 >= (unsigned __int64)v25;
              v19 -= 8 * (v19 >> 3);
            }
            else
            {
              v188 = v19;
              v19 &= 7u;
              v184 -= v188 >> 3;
              v103 = *(_QWORD *)v184;
              v186 = v131 >= (unsigned __int64)v25;
            }
            if ( v186 )
            {
              v187 = v23 + 4 * ((unsigned __int64)(v103 << v19) >> -(char)v217);
              *v25 = *(_WORD *)v187;
              v19 += *(unsigned __int8 *)(v187 + 2);
              v25 = (_WORD *)((char *)v25 + *(unsigned __int8 *)(v187 + 3));
              if ( v19 <= 0x40 )
                continue;
            }
LABEL_176:
            v209 = v184;
            goto LABEL_123;
          }
        }
        v133 -= v135;
        v137 = (unsigned __int64)v25 < v132;
        v19 -= 8 * (v19 >> 3);
        v103 = *(_QWORD *)v136;
      }
      else
      {
        v148 = v19;
        v19 &= 7u;
        v133 -= v148 >> 3;
        v103 = *(_QWORD *)v133;
        v137 = (unsigned __int64)v25 < v132;
      }
      if ( !v137 )
      {
        v209 = v133;
        goto LABEL_167;
      }
      v138 = v23 + 4 * ((unsigned __int64)(v103 << v19) >> v134);
      *v25 = *(_WORD *)v138;
      v139 = *(unsigned __int8 *)(v138 + 2) + v19;
      v140 = (_WORD *)((char *)v25 + *(unsigned __int8 *)(v138 + 3));
      v141 = v23 + 4 * ((unsigned __int64)(v103 << v139) >> v134);
      *v140 = *(_WORD *)v141;
      v142 = v139 + *(unsigned __int8 *)(v141 + 2);
      v143 = (_WORD *)((char *)v140 + *(unsigned __int8 *)(v141 + 3));
      v144 = v23 + 4 * ((unsigned __int64)(v103 << v142) >> v134);
      *v143 = *(_WORD *)v144;
      v145 = v142 + *(unsigned __int8 *)(v144 + 2);
      v146 = (_WORD *)((char *)v143 + *(unsigned __int8 *)(v144 + 3));
      v147 = v23 + 4 * ((unsigned __int64)(v103 << v145) >> v134);
      *v146 = *(_WORD *)v147;
      v19 = *(unsigned __int8 *)(v147 + 2) + v145;
      v25 = (_WORD *)((char *)v146 + *(unsigned __int8 *)(v147 + 3));
      if ( v19 > 0x40 )
      {
        v209 = v133;
        break;
      }
    }
  }
LABEL_123:
  while ( v131 >= (unsigned __int64)v25 )
  {
    v149 = v23 + 4 * ((unsigned __int64)(v103 << v19) >> -(char)v217);
    *v25 = *(_WORD *)v149;
    v19 += *(unsigned __int8 *)(v149 + 2);
    v25 = (_WORD *)((char *)v25 + *(unsigned __int8 *)(v149 + 3));
  }
  if ( (unsigned __int64)v25 < v221 )
  {
    v150 = (_BYTE *)(v23 + 4 * ((unsigned __int64)(v103 << v19) >> -(char)v217));
    *(_BYTE *)v25 = *v150;
    if ( v150[3] == 1 )
    {
      v19 += (unsigned __int8)v150[2];
    }
    else if ( v19 <= 0x3F )
    {
      v19 += (unsigned __int8)v150[2];
      if ( v19 > 0x40 )
        v19 = 64;
    }
  }
  v151 = (unsigned __int64)(v222 - 2);
  if ( v22 <= 0x40 )
  {
    v152 = v211;
    v153 = v198;
    v154 = v205;
    v155 = -v217;
    while ( 1 )
    {
      if ( v152 < v216 )
      {
        if ( v214 == v152 )
        {
          v211 = v152;
          v198 = v153;
          v205 = v154;
          goto LABEL_155;
        }
        v156 = v22 >> 3;
        v157 = &v152[-v156];
        if ( &v152[-v156] < v214 )
        {
          v205 = v154;
          v173 = (unsigned int)((_DWORD)v152 - (_DWORD)v214);
          v22 -= 8 * v173;
          v211 = &v152[-v173];
          v198 = *(_QWORD *)&v152[-v173];
LABEL_154:
          if ( v22 > 0x40 )
            break;
LABEL_155:
          v174 = v211;
          v175 = v198;
          v176 = v205;
          while ( 1 )
          {
            if ( v174 < v216 )
            {
              if ( v214 == v174 )
                goto LABEL_163;
              v177 = &v174[-(v22 >> 3)];
              if ( v177 < v214 )
              {
                v205 = v176;
                v181 = (unsigned int)((_DWORD)v174 - (_DWORD)v214);
                v22 -= 8 * v181;
                v211 = &v174[-v181];
                v198 = *(_QWORD *)&v174[-v181];
                goto LABEL_140;
              }
              v175 = *(_QWORD *)v177;
              v174 -= v22 >> 3;
              v178 = v151 >= (unsigned __int64)v176;
              v22 -= 8 * (v22 >> 3);
            }
            else
            {
              v180 = v22;
              v22 &= 7u;
              v174 -= v180 >> 3;
              v175 = *(_QWORD *)v174;
              v178 = v151 >= (unsigned __int64)v176;
            }
            if ( v178 )
            {
              v179 = v23 + 4 * ((unsigned __int64)(v175 << v22) >> -(char)v217);
              *(_WORD *)v176 = *(_WORD *)v179;
              v22 += *(unsigned __int8 *)(v179 + 2);
              v176 += *(unsigned __int8 *)(v179 + 3);
              if ( v22 <= 0x40 )
                continue;
            }
LABEL_163:
            v211 = v174;
            v198 = v175;
            v205 = v176;
            goto LABEL_140;
          }
        }
        v152 -= v156;
        v158 = (unsigned __int64)v154 < v218;
        v22 -= 8 * (v22 >> 3);
        v153 = *(_QWORD *)v157;
      }
      else
      {
        v169 = v22;
        v22 &= 7u;
        v152 -= v169 >> 3;
        v153 = *(_QWORD *)v152;
        v158 = (unsigned __int64)v154 < v218;
      }
      if ( !v158 )
      {
        v211 = v152;
        v198 = v153;
        v205 = v154;
        goto LABEL_154;
      }
      v159 = v23 + 4 * ((unsigned __int64)(v153 << v22) >> v155);
      *(_WORD *)v154 = *(_WORD *)v159;
      v160 = *(unsigned __int8 *)(v159 + 2) + v22;
      v161 = &v154[*(unsigned __int8 *)(v159 + 3)];
      v162 = v23 + 4 * ((unsigned __int64)(v153 << v160) >> v155);
      *(_WORD *)v161 = *(_WORD *)v162;
      v163 = v160 + *(unsigned __int8 *)(v162 + 2);
      v164 = &v161[*(unsigned __int8 *)(v162 + 3)];
      v165 = v23 + 4 * ((unsigned __int64)(v153 << v163) >> v155);
      *(_WORD *)v164 = *(_WORD *)v165;
      v166 = v163 + *(unsigned __int8 *)(v165 + 2);
      v167 = &v164[*(unsigned __int8 *)(v165 + 3)];
      v168 = v23 + 4 * ((unsigned __int64)(v153 << v166) >> v155);
      *(_WORD *)v167 = *(_WORD *)v168;
      v22 = *(unsigned __int8 *)(v168 + 2) + v166;
      v154 = &v167[*(unsigned __int8 *)(v168 + 3)];
      if ( v22 > 0x40 )
      {
        v211 = v152;
        v198 = v153;
        v205 = v154;
        break;
      }
    }
  }
LABEL_140:
  v170 = v205;
  if ( v151 >= (unsigned __int64)v205 )
  {
    do
    {
      v171 = v23 + 4 * ((unsigned __int64)(v198 << v22) >> -(char)v217);
      *(_WORD *)v170 = *(_WORD *)v171;
      v22 += *(unsigned __int8 *)(v171 + 2);
      v170 += *(unsigned __int8 *)(v171 + 3);
    }
    while ( v151 >= (unsigned __int64)v170 );
    v205 = v170;
  }
  if ( v205 < v222 )
  {
    v172 = (char *)(v23 + 4 * ((unsigned __int64)(v198 << v22) >> -(char)v217));
    *v205 = *v172;
    if ( v172[3] == 1 )
    {
      v22 += (unsigned __int8)v172[2];
    }
    else if ( v22 <= 0x3F )
    {
      v22 += (unsigned __int8)v172[2];
      if ( v22 > 0x40 )
        v22 = 64;
    }
  }
  if ( v210 == v209 && v214 == v211 && v19 == 64 && v202 == v204 && v17 == 64 && v15 == 64 && v203 == v13 && v22 == 64 )
    return a2;
  return -20;
}

