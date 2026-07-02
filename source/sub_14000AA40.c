// sub_14000AA40 @ 0x14000AA40
#include <stdint.h>
#include <windows.h>

size_t __fastcall sub_14000AA40(__int64 a1, unsigned __int64 a2, size_t a3, unsigned __int8 *a4, size_t Size)
{
  __int64 v5; // r10
  __int64 v6; // rcx
  char *v7; // xmm0_8
  __m128i v9; // xmm1
  size_t v11; // r8
  size_t v12; // r9
  __m128i v13; // xmm1
  unsigned int v14; // ecx
  size_t v15; // rax
  char *v16; // rax
  size_t v17; // r9
  char *v18; // rax
  int v19; // ecx
  char *v20; // rax
  char *v21; // r9
  char *v23; // rax
  size_t v24; // r9
  char *v25; // rax
  char *v26; // r9
  unsigned int v27; // edx
  char v28; // cl
  int v29; // eax
  unsigned int v30; // edx
  int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  size_t v39; // [rsp+30h] [rbp-28h]
  _DWORD *v40; // [rsp+30h] [rbp-28h]
  size_t v41; // [rsp+30h] [rbp-28h]
  size_t v42; // [rsp+30h] [rbp-28h]
  char *v43; // [rsp+38h] [rbp-20h]
  __int64 v44; // [rsp+60h] [rbp+8h]
  __int64 v45; // [rsp+60h] [rbp+8h]
  __int64 v46; // [rsp+60h] [rbp+8h]
  __int64 v47; // [rsp+60h] [rbp+8h]
  __int64 v48; // [rsp+60h] [rbp+8h]
  __int64 v49; // [rsp+60h] [rbp+8h]
  __int64 v50; // [rsp+60h] [rbp+8h]
  __int64 v51; // [rsp+60h] [rbp+8h]
  __int64 v52; // [rsp+60h] [rbp+8h]
  char *v53; // [rsp+68h] [rbp+10h]
  unsigned __int8 *v54; // [rsp+78h] [rbp+20h]

  v5 = a1;
  v6 = *(unsigned int *)(a1 + 29468);
  v7 = (char *)a2;
  v9 = (__m128i)a2;
  v11 = Size;
  v12 = *(_QWORD *)(v5 + 29408);
  v13 = _mm_unpacklo_epi64(v9, v9);
  if ( (unsigned int)(v6 - 3) > 1 )
  {
    if ( Size != v12 )
      return -72;
    if ( a3 != 0 )
    {
      v20 = *(char **)(v5 + 29376);
      if ( v7 != v20 )
      {
        *(_QWORD *)(v5 + 29400) = v20;
        v21 = &v20[-*(_QWORD *)(v5 + 29384)];
        *(__m128i *)(v5 + 29376) = v13;
        *(_QWORD *)(v5 + 29392) = v7 - v21;
      }
    }
    switch ( v6 )
    {
      case 0LL:
        if ( *(_DWORD *)(v5 + 29576) != 0 )
        {
          v33 = 0;
          v34 = 1;
        }
        else
        {
          v33 = 4;
          v34 = 5;
          if ( (*(_DWORD *)a4 & 0xFFFFFFF0) == 0x184D2A50 )
          {
            v50 = v5;
            Size = v11;
            memcpy((void *)(v5 + 160920), a4, v11);
            *(_QWORD *)(v50 + 29408) = 8 - Size;
            *(_DWORD *)(v50 + 29468) = 6;
            return 0;
          }
        }
        if ( v11 < v34 )
        {
          *(_QWORD *)(v5 + 29568) = -72;
          return -72;
        }
        v17 = ((unsigned __int8)(a4[v33] >> 5) & (a4[v33] >> 6 == 0))
            + ((a4[v33] & 0x20) == 0)
            + v34
            + qword_1424230C0[a4[v33] & 3]
            + qword_1424230A0[a4[v33] >> 6];
        *(_QWORD *)(v5 + 29568) = v17;
        if ( v17 <= 0xFFFFFFFFFFFFFF88uLL )
        {
          v41 = v17;
          v47 = v5;
          Size = v11;
          memcpy((void *)(v5 + 160920), a4, v11);
          *(_QWORD *)(v47 + 29408) = v41 - Size;
          *(_DWORD *)(v47 + 29468) = 1;
          return 0;
        }
        return v17;
      case 1LL:
        v46 = v5;
        v40 = (_DWORD *)(v5 + 160920);
        memcpy((void *)(*(_QWORD *)(v5 + 29568) + v5 + 160920 - v11), a4, v11);
        v32 = sub_14000A680(v46, v40, *(_QWORD *)(v46 + 29568));
        v5 = v46;
        v17 = v32;
        if ( v32 > 0xFFFFFFFFFFFFFF88uLL )
          return v17;
        goto LABEL_54;
      case 2LL:
        v27 = *(unsigned __int16 *)a4 + (a4[2] << 16);
        v28 = v27;
        v29 = (v27 >> 1) & 3;
        v30 = v27 >> 3;
        v31 = v28 & 1;
        if ( v29 == 1 )
        {
          if ( *(_DWORD *)(v5 + 29432) == 0 )
            return -20;
          *(_QWORD *)(v5 + 29408) = 1;
          *(_DWORD *)(v5 + 29464) = 1;
          *(_QWORD *)(v5 + 29632) = v30;
        }
        else
        {
          if ( v29 == 3 || *(_DWORD *)(v5 + 29432) < v30 )
            return -20;
          *(_DWORD *)(v5 + 29464) = v29;
          *(_QWORD *)(v5 + 29408) = v30;
          *(_QWORD *)(v5 + 29632) = v30;
          if ( v30 == 0 )
          {
            if ( v31 != 0 )
            {
              if ( *(_DWORD *)(v5 + 29448) != 0 )
              {
                *(_QWORD *)(v5 + 29408) = 4;
                *(_DWORD *)(v5 + 29468) = 5;
              }
              else
              {
LABEL_44:
                *(_QWORD *)(v5 + 29408) = 0;
                *(_DWORD *)(v5 + 29468) = 0;
              }
            }
            else
            {
LABEL_54:
              *(_QWORD *)(v5 + 29408) = 3;
              *(_DWORD *)(v5 + 29468) = 2;
            }
            return 0;
          }
        }
        *(_DWORD *)(v5 + 29468) = v31 + 3;
        return 0;
      case 5LL:
        if ( *(_DWORD *)(v5 + 29584) != 0 )
        {
          v49 = v5;
          v54 = a4;
          v36 = sub_140001C60(v5 + 29480);
          v5 = v49;
          v17 = -22;
          if ( *(_DWORD *)v54 != v36 )
            return v17;
        }
        goto LABEL_44;
      case 6LL:
        v48 = v5;
        memcpy((void *)(v5 - v11 + 160928), a4, v11);
        v35 = *(unsigned int *)(v48 + 160924);
        *(_DWORD *)(v48 + 29468) = 7;
        *(_QWORD *)(v48 + 29408) = v35;
        return 0;
      case 7LL:
        goto LABEL_44;
      default:
        return -1;
    }
  }
  v14 = *(_DWORD *)(v5 + 29464);
  if ( v14 != 0 )
  {
    if ( Size != v12 )
      return -72;
    if ( a3 == 0 || (v23 = *(char **)(v5 + 29376), v7 == v23) )
    {
      if ( v14 != 2 )
      {
        if ( v14 > 2 )
          return -20;
        goto LABEL_33;
      }
      goto LABEL_65;
    }
  }
  else
  {
    v15 = 1;
    if ( Size != 0 )
      v15 = Size;
    if ( v15 > v12 )
      v15 = *(_QWORD *)(v5 + 29408);
    if ( Size != v15 )
      return -72;
    if ( a3 == 0 )
      goto LABEL_9;
    v23 = *(char **)(v5 + 29376);
    if ( v7 == v23 )
      goto LABEL_9;
  }
  *(_QWORD *)(v5 + 29400) = v23;
  v26 = (char *)(v7 - &v23[-*(_QWORD *)(v5 + 29384)]);
  *(__m128i *)(v5 + 29376) = v13;
  *(_QWORD *)(v5 + 29392) = v26;
  if ( v14 == 2 )
  {
LABEL_65:
    if ( v11 <= 0x1FFFF )
    {
      v51 = v5;
      v53 = v7;
      v37 = sub_140011710(v5, v11);
      v5 = v51;
      v7 = v53;
      v17 = v37;
      goto LABEL_36;
    }
    *(_QWORD *)(v5 + 29408) = 0;
    return -72;
  }
  if ( v14 > 2 )
    return -20;
  if ( v14 != 0 )
  {
LABEL_33:
    v24 = *(_QWORD *)(v5 + 29632);
    if ( a3 < v24 )
    {
      *(_QWORD *)(v5 + 29408) = 0;
      return -70;
    }
    if ( v7 == nullptr )
    {
      *(_QWORD *)(v5 + 29408) = 0;
      if ( v24 != 0 )
        return -74;
LABEL_72:
      v18 = nullptr;
      v17 = 0;
      goto LABEL_15;
    }
    v45 = v5;
    v39 = *(_QWORD *)(v5 + 29632);
    v25 = (char *)memset(v7, *a4, v39);
    v5 = v45;
    v17 = v39;
    v7 = v25;
LABEL_36:
    *(_QWORD *)(v5 + 29408) = 0;
    if ( v17 > 0xFFFFFFFFFFFFFF88uLL )
      return v17;
    goto LABEL_13;
  }
LABEL_9:
  if ( a3 < v11 )
    return -70;
  if ( v7 == nullptr )
  {
    if ( v11 != 0 )
      return -74;
    goto LABEL_72;
  }
  v44 = v5;
  Size = v11;
  v16 = (char *)memcpy(v7, a4, v11);
  v17 = Size;
  v7 = v16;
  if ( Size <= 0xFFFFFFFFFFFFFF88uLL )
  {
    v5 = v44;
    *(_QWORD *)(v44 + 29408) -= Size;
LABEL_13:
    if ( *(unsigned int *)(v5 + 29432) < v17 )
      return -20;
    v18 = &v7[v17];
LABEL_15:
    v19 = *(_DWORD *)(v5 + 29584);
    *(_QWORD *)(v5 + 29456) += v17;
    if ( v19 != 0 )
    {
      v43 = v18;
      v52 = v5;
      v42 = v17;
      sub_140001A30(v5 + 29480, v7, v17);
      v18 = v43;
      v5 = v52;
      v17 = v42;
    }
    *(_QWORD *)(v5 + 29376) = v18;
    if ( *(_QWORD *)(v5 + 29408) != 0 )
      return v17;
    if ( *(_DWORD *)(v5 + 29468) != 4 )
    {
      *(_DWORD *)(v5 + 29468) = 2;
      *(_QWORD *)(v5 + 29408) = 3;
      return v17;
    }
    v38 = *(_QWORD *)(v5 + 29416);
    if ( v38 == -1 || v38 == *(_QWORD *)(v5 + 29456) )
    {
      if ( *(_DWORD *)(v5 + 29448) != 0 )
      {
        *(_QWORD *)(v5 + 29408) = 4;
        *(_DWORD *)(v5 + 29468) = 5;
      }
      else
      {
        *(_DWORD *)(v5 + 29468) = 0;
      }
      return v17;
    }
    return -20;
  }
  return v17;
}

