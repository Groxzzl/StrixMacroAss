// sub_14001ACAA @ 0x14001ACAA
#include <stdint.h>
#include <windows.h>

unsigned int *__fastcall sub_14001ACAA(
        int *a1,
        int a2,
        _DWORD *a3,
        int *a4,
        int a5,
        int a6,
        _DWORD *a7,
        unsigned int **a8)
{
  int v8; // eax
  unsigned __int64 v10; // xmm0_8
  unsigned int *v11; // rax
  unsigned int *v12; // rax
  unsigned int *v13; // rax
  unsigned int *v14; // rax
  int v15; // eax
  char v16; // al
  unsigned int *v17; // rax
  unsigned int *v18; // rax
  unsigned int *v19; // rax
  int v20; // eax
  int v21; // eax
  unsigned int *v22; // rax
  unsigned int *v23; // rax
  unsigned int *v24; // rax
  unsigned int *v25; // rax
  unsigned int *v26; // rax
  unsigned int *v27; // rax
  unsigned int *v28; // rax
  double v29; // [rsp+20h] [rbp-60h]
  double v30; // [rsp+20h] [rbp-60h]
  double v31; // [rsp+20h] [rbp-60h]
  double v32; // [rsp+28h] [rbp-58h]
  double v33; // [rsp+28h] [rbp-58h]
  double v34; // [rsp+28h] [rbp-58h]
  double v35; // [rsp+28h] [rbp-58h]
  double v36; // [rsp+28h] [rbp-58h]
  int i; // [rsp+30h] [rbp-50h] BYREF
  int v38; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v39; // [rsp+38h] [rbp-48h]
  __int64 v40; // [rsp+40h] [rbp-40h]
  __int64 v41; // [rsp+48h] [rbp-38h]
  int v42; // [rsp+54h] [rbp-2Ch]
  int v43; // [rsp+58h] [rbp-28h]
  int v44; // [rsp+5Ch] [rbp-24h]
  double v45; // [rsp+60h] [rbp-20h]
  unsigned int *v46; // [rsp+68h] [rbp-18h]
  int v47; // [rsp+74h] [rbp-Ch]
  int v48; // [rsp+78h] [rbp-8h]
  int v49; // [rsp+7Ch] [rbp-4h]
  unsigned int *v50; // [rsp+80h] [rbp+0h]
  double v51; // [rsp+88h] [rbp+8h]
  __int64 v52; // [rsp+90h] [rbp+10h]
  __int64 v53; // [rsp+98h] [rbp+18h]
  __int64 v54; // [rsp+A0h] [rbp+20h]
  __int64 v55; // [rsp+A8h] [rbp+28h]
  int v56; // [rsp+B4h] [rbp+34h]
  int v57; // [rsp+B8h] [rbp+38h]
  int v58; // [rsp+BCh] [rbp+3Ch]
  int v59; // [rsp+C0h] [rbp+40h]
  int v60; // [rsp+C4h] [rbp+44h]
  int v61; // [rsp+C8h] [rbp+48h]
  int v62; // [rsp+CCh] [rbp+4Ch]
  int v63; // [rsp+D0h] [rbp+50h]
  int v64; // [rsp+D4h] [rbp+54h]
  int v65; // [rsp+D8h] [rbp+58h]
  int v66; // [rsp+DCh] [rbp+5Ch]
  int v67; // [rsp+E0h] [rbp+60h]
  int v68; // [rsp+E4h] [rbp+64h]
  int v69; // [rsp+E8h] [rbp+68h]
  int v70; // [rsp+ECh] [rbp+6Ch]
  int v71; // [rsp+F0h] [rbp+70h]
  int v72; // [rsp+F4h] [rbp+74h]
  int v73; // [rsp+F8h] [rbp+78h]
  int v74; // [rsp+FCh] [rbp+7Ch]

  v68 = 0;
  *a4 &= 0xFFFFFFCF;
  v49 = *a4;
  v8 = v49 & 7;
  if ( v8 == 4 )
  {
    *a7 = -32768;
    return sub_14001A832("NaN", a8, 3);
  }
  if ( (v49 & 7u) > 4 )
    return nullptr;
  if ( v8 == 3 )
  {
    *a7 = -32768;
    return sub_14001A832("Infinity", a8, 8);
  }
  if ( (v49 & 7) == 0 )
    goto LABEL_12;
  v48 = *a1;
  v55 = sub_14001AB80(a3, v48, &v38);
  v47 = a2;
  i = sub_14001C3B1(v55);
  if ( i != 0 )
  {
    sub_14001C255(v55, (unsigned int)i);
    a2 += i;
    v38 -= i;
  }
  if ( *(_DWORD *)(v55 + 20) == 0 )
  {
    sub_14001C7AE(v55);
LABEL_12:
    *a7 = 1;
    return sub_14001A832("0", a8, 1);
  }
  v10 = sub_14001D1E6(v55, &i).m128_u64[0];
  LODWORD(v32) = v10;
  i = v38 + a2 - 1;
  HIDWORD(v32) = HIDWORD(v10) & 0xFFFFF | 0x3FF00000;
  v51 = 0.301029995663981 * (double)i + (v32 - 1.5) * 0.289529654602168 + 0.1760912590558;
  v67 = i;
  if ( i < 0 )
    v67 = -v67;
  v67 -= 1077;
  if ( v67 > 0 )
    v51 = 7.0e-17 * (double)v67 + v51;
  v65 = (int)v51;
  if ( v51 < 0.0 && (double)v65 != v51 )
    --v65;
  v64 = 1;
  HIDWORD(v32) += (v38 + a2 - 1) << 20;
  if ( (unsigned int)v65 <= 0x16 )
  {
    if ( dbl_142424360[v65] > v32 )
      --v65;
    v64 = 0;
  }
  v67 = v38 - i - 1;
  if ( v67 < 0 )
  {
    v74 = -v67;
    v59 = 0;
  }
  else
  {
    v74 = 0;
    v59 = v67;
  }
  if ( v65 < 0 )
  {
    v74 -= v65;
    v73 = -v65;
    v58 = 0;
  }
  else
  {
    v73 = 0;
    v58 = v65;
    v59 += v65;
  }
  if ( (unsigned int)a5 >= 0xA )
    a5 = 0;
  v56 = 1;
  if ( a5 <= 5 )
  {
    if ( i > 1017 || i < -1022 )
      v56 = 0;
  }
  else
  {
    a5 -= 4;
    v56 = 0;
  }
  v63 = 1;
  v69 = -1;
  v70 = -1;
  if ( a5 != 5 )
  {
    if ( a5 > 5 )
      goto LABEL_52;
    if ( a5 == 4 )
    {
LABEL_46:
      if ( a6 <= 0 )
        a6 = 1;
      i = a6;
      v69 = a6;
      v70 = a6;
      goto LABEL_52;
    }
    if ( a5 != 3 )
    {
      if ( a5 <= 1 )
      {
        if ( a5 >= 0 )
        {
          i = (int)(0.30103 * (double)v48) + 3;
          a6 = 0;
        }
        goto LABEL_52;
      }
      v63 = 0;
      goto LABEL_46;
    }
    v63 = 0;
  }
  i = a6 + v65 + 1;
  v70 = i;
  v69 = a6 + v65;
  if ( i <= 0 )
    i = 1;
LABEL_52:
  v46 = sub_14001A7E0(i);
  v50 = v46;
  if ( a5 > 1 )
  {
    v60 = a1[3] - 1;
    if ( v60 != 0 )
    {
      if ( v60 < 0 )
        v60 = 2;
      if ( (v49 & 8) != 0 )
        v60 = 3 - v60;
    }
  }
  else
  {
    v60 = 0;
  }
  if ( (unsigned int)v70 <= 0xE && v56 != 0 && v60 == 0 && v65 == 0 )
  {
    i = 0;
    v45 = v32;
    v44 = 0;
    v43 = v70;
    v71 = 2;
    v51 = 1.0;
    v66 = 0;
    if ( v64 != 0 && v32 < 1.0 && v70 > 0 )
    {
      if ( v69 <= 0 )
      {
LABEL_89:
        v50 = v46;
        v32 = v45;
        v65 = v44;
        v70 = v43;
        goto LABEL_90;
      }
      v70 = v69;
      --v65;
      v32 = 10.0 * v32;
      ++v71;
    }
    v29 = (double)v71 * v32 + 7.0;
    HIDWORD(v29) -= 54525952;
    if ( v70 != 0 )
    {
      if ( v63 != 0 )
      {
        v30 = 0.5 * v51 / dbl_142424360[v70 - 1] - v29;
        i = 0;
        while ( 1 )
        {
          v42 = (int)(v32 / v51);
          v34 = v32 - (double)v42 * v51;
          v11 = v50;
          v50 = (unsigned int *)((char *)v50 + 1);
          *(_BYTE *)v11 = v42 + 48;
          if ( v30 > v34 )
            break;
          if ( v30 > v51 - v34 )
            goto LABEL_106;
          if ( v70 <= ++i )
            goto LABEL_89;
          v30 = 10.0 * v30;
          v32 = 10.0 * v34;
        }
        if ( v34 != 0.0 )
          v68 = 16;
        goto LABEL_248;
      }
      v31 = dbl_142424360[v70 - 1] * v29;
      i = 1;
      while ( 1 )
      {
        v42 = (int)(v32 / v51);
        if ( v42 != 0 )
          v32 = v32 - (double)v42 * v51;
        v12 = v50;
        v50 = (unsigned int *)((char *)v50 + 1);
        *(_BYTE *)v12 = v42 + 48;
        if ( v70 == i )
          break;
        ++i;
        v32 = 10.0 * v32;
      }
      v51 = 0.5 * v51;
      if ( v32 > v31 + v51 )
      {
LABEL_106:
        v68 = 32;
        while ( 1 )
        {
          v50 = (unsigned int *)((char *)v50 - 1);
          if ( *(_BYTE *)v50 != 57 )
            break;
          if ( v50 == v46 )
          {
            ++v65;
            *(_BYTE *)v50 = 48;
            break;
          }
        }
        v14 = v50;
        v50 = (unsigned int *)((char *)v50 + 1);
        ++*(_BYTE *)v14;
        goto LABEL_248;
      }
      if ( v51 - v31 > v32 )
      {
        if ( v32 != 0.0 )
          v68 = 16;
        goto LABEL_248;
      }
    }
    else
    {
      v53 = 0;
      v52 = 0;
      v33 = v32 - 5.0;
      if ( v33 > v29 )
        goto LABEL_164;
      if ( -v29 > v33 )
        goto LABEL_163;
    }
    goto LABEL_89;
  }
LABEL_90:
  if ( a2 >= 0 && v65 <= a1[5] )
  {
    v51 = dbl_142424360[v65];
    if ( a6 >= 0 || v70 > 0 )
    {
      i = 1;
      while ( 1 )
      {
        v42 = (int)(v32 / v51);
        v35 = v32 - (double)v42 * v51;
        v13 = v50;
        v50 = (unsigned int *)((char *)v50 + 1);
        *(_BYTE *)v13 = v42 + 48;
        if ( v35 == 0.0 )
          goto LABEL_248;
        if ( v70 == i )
        {
          if ( v60 != 0 )
          {
            if ( v60 == 1 )
              goto LABEL_106;
            v68 = 16;
            goto LABEL_248;
          }
          v36 = v35 + v35;
          if ( v36 <= v51 && (v36 != v51 || (v42 & 1) == 0) )
          {
            v68 = 16;
            goto LABEL_248;
          }
          goto LABEL_106;
        }
        ++i;
        v32 = 10.0 * v35;
      }
    }
    v53 = 0;
    v52 = 0;
    if ( v70 >= 0 && 5.0 * v51 < v32 )
      goto LABEL_164;
LABEL_163:
    v65 = ~a6;
    v68 = 16;
    goto LABEL_239;
  }
  v62 = v74;
  v61 = v73;
  v54 = 0;
  v53 = 0;
  if ( v63 != 0 )
  {
    i = v48 - v38 + 1;
    if ( a2 - (v48 - v38) >= a1[1] || a5 == 3 || a5 == 5 )
    {
      if ( a5 > 1 )
      {
LABEL_123:
        v67 = v70 - 1;
        if ( v61 < v70 - 1 )
        {
          v67 -= v61;
          v58 += v67;
          v73 += v67;
          v61 = 0;
        }
        else
        {
          v61 -= v67;
        }
        i = v70;
        if ( v70 < 0 )
        {
          v62 -= i;
          i = 0;
        }
      }
    }
    else
    {
      i = a2 - a1[1] + 1;
      if ( a5 > 1 && v70 > 0 && v70 < i )
        goto LABEL_123;
    }
    v74 += i;
    v59 += i;
    v53 = sub_14001C967(1);
  }
  if ( v62 > 0 && v59 > 0 )
  {
    v15 = v62;
    if ( v59 <= v62 )
      v15 = v59;
    i = v15;
    v74 -= v15;
    v62 -= v15;
    v59 -= v15;
  }
  if ( v73 > 0 )
  {
    if ( v63 != 0 )
    {
      if ( v61 > 0 )
      {
        v53 = sub_14001CBD3(v53, (unsigned int)v61);
        v41 = sub_14001C9AD(v53, v55);
        sub_14001C7AE(v55);
        v55 = v41;
      }
      v67 = v73 - v61;
      if ( v73 != v61 )
        v55 = sub_14001CBD3(v55, (unsigned int)v67);
    }
    else
    {
      v55 = sub_14001CBD3(v55, (unsigned int)v73);
    }
  }
  v52 = sub_14001C967(1);
  if ( v58 > 0 )
    v52 = sub_14001CBD3(v52, (unsigned int)v58);
  v57 = 0;
  if ( a5 <= 1 && v38 == 1 && v47 > a1[1] + 1 )
  {
    ++v74;
    ++v59;
    v57 = 1;
  }
  if ( v58 != 0 )
    v16 = sub_14001AB70(*(_DWORD *)(v52 + 4 * (*(_DWORD *)(v52 + 20) - 1 + 4LL) + 8));
  else
    v16 = 31;
  i = (v16 - (_BYTE)v59 - 4) & 0x1F;
  v62 += i;
  v74 += i;
  if ( v74 > 0 )
    v55 = sub_14001CD90(v55, (unsigned int)v74);
  v59 += i;
  if ( v59 > 0 )
    v52 = sub_14001CD90(v52, (unsigned int)v59);
  if ( v64 != 0 && (int)sub_14001CF1D(v55, v52) < 0 )
  {
    --v65;
    v55 = sub_14001C839(v55, 10, 0);
    if ( v63 != 0 )
      v53 = sub_14001C839(v53, 10, 0);
    v70 = v69;
  }
  if ( v70 > 0 || a5 <= 2 )
  {
    if ( v63 != 0 )
    {
      if ( v62 > 0 )
        v53 = sub_14001CD90(v53, (unsigned int)v62);
      v54 = v53;
      if ( v57 != 0 )
      {
        v53 = sub_14001C66D(*(unsigned int *)(v53 + 8));
        memcpy((void *)(v53 + 16), (const void *)(v54 + 16), 4 * (*(int *)(v54 + 20) + 2LL));
        v53 = sub_14001CD90(v53, 1);
      }
      for ( i = 1; ; ++i )
      {
        v72 = sub_14001A8EE(v55, v52) + 48;
        v67 = sub_14001CF1D(v55, v54);
        v40 = sub_14001CFED(v52, v53);
        if ( *(_DWORD *)(v40 + 16) != 0 )
          v66 = 1;
        else
          v66 = sub_14001CF1D(v55, v40);
        sub_14001C7AE(v40);
        if ( v66 == 0 && a5 == 0 && (*a3 & 1) == 0 && v60 == 0 )
        {
          if ( v72 == 57 )
            goto LABEL_213;
          if ( v67 > 0 )
          {
            ++v72;
            v68 = 32;
          }
          else if ( *(int *)(v55 + 20) > 1 || *(_DWORD *)(v55 + 24) != 0 )
          {
            v68 = 16;
          }
          v18 = v50;
          v50 = (unsigned int *)((char *)v50 + 1);
          *(_BYTE *)v18 = v72;
          goto LABEL_239;
        }
        if ( v67 < 0 || v67 == 0 && a5 == 0 && (*a3 & 1) == 0 )
          break;
        if ( v66 > 0 && v60 != 2 )
        {
          if ( v72 == 57 )
            goto LABEL_213;
          v68 = 32;
          v24 = v50;
          v50 = (unsigned int *)((char *)v50 + 1);
          *(_BYTE *)v24 = v72 + 1;
          goto LABEL_239;
        }
        v25 = v50;
        v50 = (unsigned int *)((char *)v50 + 1);
        *(_BYTE *)v25 = v72;
        if ( v70 == i )
          goto LABEL_223;
        v55 = sub_14001C839(v55, 10, 0);
        if ( v54 == v53 )
        {
          v53 = sub_14001C839(v53, 10, 0);
          v54 = v53;
        }
        else
        {
          v54 = sub_14001C839(v54, 10, 0);
          v53 = sub_14001C839(v53, 10, 0);
        }
      }
      if ( v60 == 0 || *(int *)(v55 + 20) <= 1 && *(_DWORD *)(v55 + 24) == 0 )
      {
        if ( v66 > 0 )
        {
          v55 = sub_14001CD90(v55, 1);
          v66 = sub_14001CF1D(v55, v52);
          if ( v66 > 0 || v66 == 0 && (v72 & 1) != 0 )
          {
            v21 = v72++;
            if ( v21 == 57 )
              goto LABEL_213;
          }
          v68 = 32;
        }
        if ( *(int *)(v55 + 20) > 1 || *(_DWORD *)(v55 + 24) != 0 )
          v68 = 16;
        goto LABEL_209;
      }
      if ( v60 == 2 )
      {
        v68 = 16;
LABEL_209:
        v22 = v50;
        v50 = (unsigned int *)((char *)v50 + 1);
        *(_BYTE *)v22 = v72;
        goto LABEL_239;
      }
      while ( (int)sub_14001CF1D(v52, v53) > 0 )
      {
        v19 = v50;
        v50 = (unsigned int *)((char *)v50 + 1);
        *(_BYTE *)v19 = v72;
        v39 = sub_14001C839(v53, 10, 0);
        if ( v54 == v53 )
          v54 = v39;
        v53 = v39;
        v55 = sub_14001C839(v55, 10, 0);
        v72 = sub_14001A8EE(v55, v52) + 48;
      }
      v20 = v72++;
      if ( v20 != 57 )
      {
        v68 = 32;
        goto LABEL_209;
      }
LABEL_213:
      v23 = v50;
      v50 = (unsigned int *)((char *)v50 + 1);
      *(_BYTE *)v23 = 57;
      v68 = 32;
      goto LABEL_231;
    }
    for ( i = 1; ; ++i )
    {
      v72 = sub_14001A8EE(v55, v52) + 48;
      v26 = v50;
      v50 = (unsigned int *)((char *)v50 + 1);
      *(_BYTE *)v26 = v72;
      if ( v70 <= i )
        break;
      v55 = sub_14001C839(v55, 10, 0);
    }
LABEL_223:
    if ( v60 != 0 )
    {
      if ( v60 == 2 || *(int *)(v55 + 20) <= 1 && *(_DWORD *)(v55 + 24) == 0 )
        goto LABEL_236;
    }
    else
    {
      v55 = sub_14001CD90(v55, 1);
      v67 = sub_14001CF1D(v55, v52);
      if ( v67 <= 0 && (v67 != 0 || (v72 & 1) == 0) )
      {
LABEL_236:
        if ( *(int *)(v55 + 20) > 1 || *(_DWORD *)(v55 + 24) != 0 )
          v68 = 16;
        goto LABEL_239;
      }
    }
LABEL_231:
    v68 = 32;
    while ( 1 )
    {
      v50 = (unsigned int *)((char *)v50 - 1);
      if ( *(_BYTE *)v50 != 57 )
        break;
      if ( v50 == v46 )
      {
        ++v65;
        v27 = v50;
        v50 = (unsigned int *)((char *)v50 + 1);
        *(_BYTE *)v27 = 49;
        goto LABEL_239;
      }
    }
    v28 = v50;
    v50 = (unsigned int *)((char *)v50 + 1);
    ++*(_BYTE *)v28;
    goto LABEL_239;
  }
  if ( v70 < 0 )
    goto LABEL_163;
  v52 = sub_14001C839(v52, 5, 0);
  if ( (int)sub_14001CF1D(v55, v52) <= 0 )
    goto LABEL_163;
LABEL_164:
  v68 = 32;
  v17 = v50;
  v50 = (unsigned int *)((char *)v50 + 1);
  *(_BYTE *)v17 = 49;
  ++v65;
LABEL_239:
  sub_14001C7AE(v52);
  if ( v53 != 0 )
  {
    if ( v54 != 0 && v54 != v53 )
      sub_14001C7AE(v54);
    sub_14001C7AE(v53);
  }
LABEL_248:
  while ( v46 < v50 && *((_BYTE *)v50 - 1) == 48 )
    v50 = (unsigned int *)((char *)v50 - 1);
  sub_14001C7AE(v55);
  *(_BYTE *)v50 = 0;
  *a7 = v65 + 1;
  if ( a8 != nullptr )
    *a8 = v50;
  *a4 |= v68;
  return v46;
}

