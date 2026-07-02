// sub_14000FE00 @ 0x14000FE00
#include <stdint.h>
#include <windows.h>

// positive sp value has been detected, the output may be wrong!
__int64 sub_14000FE00()
{
  WCHAR *v0; // rdx
  WCHAR *v1; // rcx
  WCHAR v2; // ax
  WCHAR *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rsi
  WCHAR *v6; // rdi
  wchar_t *v7; // rdx
  size_t v9; // rax
  size_t v10; // rax
  const wchar_t *v11; // rbp
  char v12; // al
  size_t v13; // rax
  WCHAR v14; // dx
  WCHAR *v15; // rax
  WCHAR *v16; // rcx
  __int16 *v17; // rcx
  __int64 v18; // rdx
  __int16 *v19; // rax
  __int16 i; // r8
  __int64 v21; // rdx
  WCHAR *m; // rax
  WCHAR v23; // r8
  WCHAR *v24; // rcx
  __int64 v25; // rdx
  WCHAR v26; // r8
  WCHAR *v27; // rcx
  wchar_t *v28; // rax
  wchar_t *v29; // rbp
  wint_t v30; // ax
  wchar_t *v31; // rax
  __int64 v32; // rcx
  WCHAR *j; // rdx
  wchar_t v34; // r8
  __int64 v35; // rdx
  __int16 v36; // r8
  const char *v37; // rcx
  wchar_t *v38; // rcx
  __int64 v39; // rdx
  wchar_t v40; // r8
  __int64 v41; // rdx
  __int16 v42; // r8
  const wchar_t *v43; // rcx
  __int64 v44; // rdx
  __int16 v45; // r8
  const wchar_t *v46; // rcx
  wchar_t *v47; // rax
  __int64 v48; // rcx
  DWORD CurrentProcessId; // eax
  __int64 v50; // rdx
  WCHAR *v51; // r9
  char v52; // al
  WCHAR *v53; // r12
  _BYTE *v54; // rbx
  char *v55; // rdi
  WCHAR *v56; // rsi
  __int64 v57; // rbp
  WCHAR *k; // rax
  __int64 v59; // rdx
  __int16 v60; // r8
  const char *v61; // rcx
  __int64 v62; // rdx
  __int16 v63; // r8
  const char *v64; // rcx
  wchar_t *v65; // rcx
  __int64 v66; // rdx
  wchar_t v67; // r8
  __int64 v68; // rdx
  WCHAR v69; // r8
  WCHAR *v70; // rcx
  __int64 v71; // rdx
  WCHAR v72; // r8
  WCHAR *v73; // rcx
  int v74; // ebp
  DWORD v75; // eax
  unsigned int v76; // edx
  unsigned int v77; // ecx
  unsigned int v78; // ebp
  unsigned int v79; // r10d
  unsigned int v80; // ecx
  unsigned int v81; // r9d
  unsigned int v82; // eax
  unsigned int v83; // r8d
  __m128i v84; // xmm0
  __m128i inserted; // xmm1
  __m128i v86; // xmm2
  int v87; // edx
  int v88; // eax
  __int64 v89; // rdx
  __int16 v90; // r8
  __m128i *v91; // rcx
  char v92[2]; // [rsp+32h] [rbp-1626h] BYREF
  wchar_t v93; // [rsp+34h] [rbp-1624h] BYREF
  __int64 v94; // [rsp+38h] [rbp-1620h] BYREF
  struct _FILETIME v95; // [rsp+40h] [rbp-1618h] BYREF
  LARGE_INTEGER v96; // [rsp+48h] [rbp-1610h] BYREF
  __m128i v97; // [rsp+50h] [rbp-1608h] BYREF
  int v98; // [rsp+60h] [rbp-15F8h]
  wchar_t v99; // [rsp+64h] [rbp-15F4h]
  __int16 v100; // [rsp+66h] [rbp-15F2h]
  _BYTE v101[128]; // [rsp+70h] [rbp-15E8h] BYREF
  WCHAR v102[128]; // [rsp+F0h] [rbp-1568h] BYREF
  WCHAR v103[264]; // [rsp+1F0h] [rbp-1468h] BYREF
  WCHAR v104[264]; // [rsp+400h] [rbp-1258h] BYREF
  wchar_t v105[1024]; // [rsp+610h] [rbp-1048h] BYREF
  WCHAR v106[1044]; // [rsp+E10h] [rbp-848h] BYREF
  WCHAR *PerformanceCount; // [rsp+1660h] [rbp+8h]
  __int64 v108; // [rsp+1670h] [rbp+18h]

  sub_140017890();
  *v1 = 0;
  v2 = *v0;
  v3 = v1;
  v5 = v4;
  if ( *v0 == 0 )
  {
LABEL_10:
    *v3 = 0;
    return 1;
  }
  v6 = v0 + 1;
  v7 = nullptr;
  while ( 1 )
  {
    if ( v2 == 123 )
    {
      v7 = v105;
      v105[0] = 0;
      goto LABEL_4;
    }
    if ( v2 == 125 )
      break;
    if ( v7 != nullptr )
    {
      *v7++ = v2;
LABEL_4:
      v2 = *v6++;
      if ( v2 == 0 )
        goto LABEL_10;
    }
    else
    {
      if ( v5 == 0 )
        return 0;
      *v3 = v2;
      --v5;
      *++v3 = 0;
      v2 = *v6++;
      if ( v2 == 0 )
        goto LABEL_10;
    }
  }
  *v7 = 0;
  if ( wcsicmp(v105, aT_0) == 0 )
  {
    GetTempPathW(v5, v3);
    if ( *v3 == 0 )
      goto LABEL_41;
    goto LABEL_36;
  }
  if ( wcsicmp(v105, L"PROGRAM") == 0 )
  {
    v17 = **(__int16 ***)off_140022120();
    if ( v17 == nullptr )
      goto LABEL_183;
    v18 = v5;
    v19 = (__int16 *)v3;
    if ( *v3 == 0 )
      goto LABEL_58;
    do
    {
      ++v19;
      --v18;
    }
    while ( *v19 != 0 );
    for ( i = *v17; *v17 != 0; i = *v17 )
    {
      if ( v18 == 0 )
        goto LABEL_183;
      *v19++ = i;
      ++v17;
      --v18;
LABEL_58:
      ;
    }
    goto LABEL_59;
  }
  if ( wcsicmp(v105, L"PROGRAM_BASE") == 0 )
  {
    v9 = wcslen(v3);
    if ( (unsigned __int8)((__int64 (__fastcall *)(WCHAR *, const char *, size_t))sub_14000FE00)(v3, "{", v5 - v9) == 0 )
      return 0;
    v10 = wcslen(v3);
    if ( v10 <= 3 )
      goto LABEL_60;
    v11 = &v3[v10 - 4];
    if ( wcsicmp(v11, asc_1424232D2) != 0 )
      goto LABEL_60;
    *v11 = 0;
    if ( *v3 == 0 )
      goto LABEL_34;
    goto LABEL_32;
  }
  if ( wcsicmp(v105, L"PROGRAM_DIR") == 0 )
  {
    v13 = wcslen(v3);
    if ( (unsigned __int8)((__int64 (__fastcall *)(WCHAR *, const char *, size_t))sub_14000FE00)(v3, "{", v5 - v13) == 0 )
      return 0;
    v14 = *v3;
    if ( *v3 == 0 )
      goto LABEL_34;
    v15 = v3;
    v16 = nullptr;
    do
    {
      if ( v14 == 92 )
        v16 = v15;
      v14 = v15[1];
      ++v15;
    }
    while ( v14 != 0 );
    if ( v16 != nullptr )
    {
      *v16 = 0;
      if ( *v3 != 0 )
      {
        v12 = 0;
        goto LABEL_33;
      }
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  if ( wcsicmp(v105, L"PID") == 0 )
  {
    v28 = sub_14000F790("NUITKA_ONEFILE_PARENT");
    v29 = v28;
    if ( v28 != nullptr )
    {
      v30 = *v28;
      if ( v30 == 0 )
        goto LABEL_183;
      do
      {
        if ( iswctype(v30, 4u) == 0 )
          goto LABEL_183;
        v30 = v29[1];
        ++v29;
      }
      while ( v30 != 0 );
      v31 = sub_14000F790("NUITKA_ONEFILE_PARENT");
      if ( v31 == nullptr )
        goto LABEL_183;
      v32 = v5;
      for ( j = v3; *j != 0; --v32 )
        ++j;
      v34 = *v31;
      if ( *v31 != 0 )
      {
        while ( v32 != 0 )
        {
          ++v31;
          *j++ = v34;
          --v32;
          v34 = *v31;
          if ( *v31 == 0 )
            goto LABEL_89;
        }
LABEL_183:
        sub_14002119C();
      }
LABEL_89:
      *j = 0;
      if ( *v3 == 0 )
        goto LABEL_34;
      v12 = 0;
      goto LABEL_33;
    }
    CurrentProcessId = GetCurrentProcessId();
    sub_1400203B0(v101, 128, "%ld", CurrentProcessId);
    if ( *v3 == 0 )
    {
      v52 = v101[0];
      v50 = v5;
      v51 = v3;
      if ( v101[0] == 0 )
      {
        v7 = nullptr;
        goto LABEL_4;
      }
      goto LABEL_130;
    }
    v50 = v5;
    v51 = v3;
    do
    {
      ++v51;
      --v50;
    }
    while ( *v51 != 0 );
    v52 = v101[0];
    if ( v101[0] != 0 )
    {
LABEL_130:
      PerformanceCount = v3;
      v53 = v6;
      v54 = &v101[v50];
      v55 = v101;
      v108 = v5;
      v56 = v51;
      do
      {
        v92[0] = v52;
        v57 = v54 - v55;
        v92[1] = 0;
        if ( mbstowcs(&v93, v92, 2u) != 1 )
          goto LABEL_183;
        for ( k = v56; *k != 0; --v57 )
          ++k;
        if ( v57 == 0 )
          goto LABEL_183;
        ++v55;
        *k = v93;
        ++v56;
        k[1] = 0;
        v52 = *v55;
      }
      while ( *v55 != 0 );
      v3 = PerformanceCount;
      v5 = v108;
      v6 = v53;
      if ( *PerformanceCount == 0 )
        goto LABEL_34;
      v12 = 0;
LABEL_33:
      ++v3;
      --v5;
      if ( *v3 == 0 )
        goto LABEL_34;
      goto LABEL_37;
    }
LABEL_32:
    v12 = 0;
    goto LABEL_33;
  }
  if ( wcsicmp(v105, asc_142423316) == 0 )
  {
    if ( SHGetFolderPathW(nullptr, 40, nullptr, 0, v103) != 0 )
      return 0;
    v21 = v5;
    for ( m = v3; *m != 0; --v21 )
      ++m;
    v23 = v103[0];
    if ( v103[0] != 0 )
    {
      v24 = v103;
      while ( v21 != 0 )
      {
        ++v24;
        *m++ = v23;
        --v21;
        v23 = *v24;
        if ( *v24 == 0 )
          goto LABEL_69;
      }
      goto LABEL_183;
    }
    goto LABEL_69;
  }
  if ( wcsicmp(v105, L"CACHE_DIR") != 0 )
  {
    if ( wcsicmp(v105, L"COMPANY") == 0 )
    {
      v41 = v5;
      v19 = (__int16 *)v3;
      if ( *v3 != 0 )
      {
        do
        {
          ++v19;
          --v41;
        }
        while ( *v19 != 0 );
      }
      v42 = 83;
      v43 = L"Strix Teams";
      while ( v41 != 0 )
      {
        ++v43;
        *v19++ = v42;
        --v41;
        v42 = *v43;
        if ( *v43 == 0 )
          goto LABEL_59;
      }
      goto LABEL_183;
    }
    if ( wcsicmp(v105, L"PRODUCT") == 0 )
    {
      v44 = v5;
      v19 = (__int16 *)v3;
      if ( *v3 != 0 )
      {
        do
        {
          ++v19;
          --v44;
        }
        while ( *v19 != 0 );
      }
      v45 = 82;
      v46 = L"Runtime Broker";
      while ( v44 != 0 )
      {
        ++v46;
        *v19++ = v45;
        --v44;
        v45 = *v46;
        if ( *v46 == 0 )
          goto LABEL_59;
      }
      goto LABEL_183;
    }
    if ( wcsicmp(v105, L"VERSION") == 0 )
    {
      v35 = v5;
      v19 = (__int16 *)v3;
      if ( *v3 != 0 )
      {
        do
        {
          ++v19;
          --v35;
        }
        while ( *v19 != 0 );
      }
      v36 = 49;
      v37 = "1";
      while ( v35 != 0 )
      {
        v37 += 2;
        *v19++ = v36;
        --v35;
        v36 = *(_WORD *)v37;
        if ( *(_WORD *)v37 == 0 )
          goto LABEL_59;
      }
      goto LABEL_183;
    }
    if ( wcsicmp(v105, L"FILE_VERSION") == 0 )
    {
      v59 = v5;
      v19 = (__int16 *)v3;
      if ( *v3 != 0 )
      {
        do
        {
          ++v19;
          --v59;
        }
        while ( *v19 != 0 );
      }
      v60 = 49;
      v61 = "1";
      while ( v59 != 0 )
      {
        v61 += 2;
        *v19++ = v60;
        --v59;
        v60 = *(_WORD *)v61;
        if ( *(_WORD *)v61 == 0 )
          goto LABEL_59;
      }
      goto LABEL_183;
    }
    if ( wcsicmp(v105, L"PRODUCT_VERSION") == 0 )
    {
      v62 = v5;
      v19 = (__int16 *)v3;
      if ( *v3 != 0 )
      {
        do
        {
          ++v19;
          --v62;
        }
        while ( *v19 != 0 );
      }
      v63 = 49;
      v64 = "1";
      while ( v62 != 0 )
      {
        v64 += 2;
        *v19++ = v63;
        --v62;
        v63 = *(_WORD *)v64;
        if ( *(_WORD *)v64 == 0 )
          goto LABEL_59;
      }
      goto LABEL_183;
    }
    if ( wcsicmp(v105, L"RANDOM") != 0 )
    {
      if ( wcsicmp(v105, aT) != 0 )
      {
        if ( wcsicmp(v105, aT_1) != 0 )
          return 0;
        if ( sub_14000F790("NUITKA_ONEFILE_START") != nullptr )
        {
          v38 = sub_14000F790("NUITKA_ONEFILE_START");
          if ( v38 == nullptr )
            goto LABEL_183;
          v39 = v5;
          v19 = (__int16 *)v3;
          if ( *v3 != 0 )
          {
            do
            {
              ++v19;
              --v39;
            }
            while ( *v19 != 0 );
          }
          v40 = *v38;
          if ( *v38 != 0 )
          {
            while ( v39 != 0 )
            {
              ++v38;
              *v19++ = v40;
              --v39;
              v40 = *v38;
              if ( *v38 == 0 )
                goto LABEL_59;
            }
            goto LABEL_183;
          }
        }
        else
        {
          v95 = 0;
          GetSystemTimeAsFileTime(&v95);
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1400178D0)(v106, 2048, "%", v95);
          sub_14000F850("NUITKA_ONEFILE_START", v106);
          v71 = v5;
          v19 = (__int16 *)v3;
          if ( *v3 != 0 )
          {
            do
            {
              ++v19;
              --v71;
            }
            while ( *v19 != 0 );
          }
          v72 = v106[0];
          if ( v106[0] != 0 )
          {
            v73 = v106;
            while ( v71 != 0 )
            {
              ++v73;
              *v19++ = v72;
              --v71;
              v72 = *v73;
              if ( *v73 == 0 )
                goto LABEL_59;
            }
            goto LABEL_183;
          }
        }
        goto LABEL_59;
      }
      if ( sub_14000F790("NUITKA_ONEFILE_TIME_US") != nullptr )
      {
        v47 = sub_14000F790("NUITKA_ONEFILE_TIME_US");
        if ( v47 == nullptr )
          goto LABEL_183;
        v48 = v5;
        for ( j = v3; *j != 0; --v48 )
          ++j;
        while ( *v47 != 0 )
        {
          if ( v48 == 0 )
            goto LABEL_183;
          *j++ = *v47++;
          --v48;
        }
        goto LABEL_89;
      }
      v94 = 0;
      GetSystemTimeAsFileTime((LPFILETIME)&v94);
      ((void (__fastcall *)(WCHAR *, __int64, const char *, _QWORD))sub_1400178D0)(
        v102,
        256,
        "%",
        (unsigned int)(v94 / 10 % 1000000));
      sub_14000F850("NUITKA_ONEFILE_TIME_US", v102);
      v68 = v5;
      v19 = (__int16 *)v3;
      if ( *v3 != 0 )
      {
        do
        {
          ++v19;
          --v68;
        }
        while ( *v19 != 0 );
      }
      v69 = v102[0];
      if ( v102[0] != 0 )
      {
        v70 = v102;
        while ( v68 != 0 )
        {
          ++v70;
          *v19++ = v69;
          --v68;
          v69 = *v70;
          if ( *v70 == 0 )
            goto LABEL_59;
        }
        goto LABEL_183;
      }
    }
    else if ( sub_14000F790("NUITKA_ONEFILE_RANDOM") != nullptr )
    {
      v65 = sub_14000F790("NUITKA_ONEFILE_RANDOM");
      if ( v65 == nullptr )
        goto LABEL_183;
      v66 = v5;
      v19 = (__int16 *)v3;
      if ( *v3 != 0 )
      {
        do
        {
          ++v19;
          --v66;
        }
        while ( *v19 != 0 );
      }
      v67 = *v65;
      if ( *v65 != 0 )
      {
        while ( v66 != 0 )
        {
          ++v65;
          *v19++ = v67;
          --v66;
          v67 = *v65;
          if ( *v65 == 0 )
            goto LABEL_59;
        }
        goto LABEL_183;
      }
    }
    else
    {
      QueryPerformanceCounter(&v96);
      v74 = (unsigned int)&v96 ^ ((unsigned __int64)&v96 >> 32) ^ v96.LowPart ^ v96.HighPart;
      v75 = v74 ^ GetCurrentProcessId();
      if ( v75 == 0 )
        v75 = 1;
      v76 = (32 * ((v75 << 13) ^ v75 ^ (((v75 << 13) ^ v75) >> 17))) ^ (v75 << 13) ^ v75 ^ (((v75 << 13) ^ v75) >> 17);
      v77 = ((v76 ^ (v76 << 13)) >> 17) ^ v76 ^ (v76 << 13) ^ (32 * (((v76 ^ (v76 << 13)) >> 17) ^ v76 ^ (v76 << 13)));
      v78 = (32 * (((v77 ^ (v77 << 13)) >> 17) ^ v77 ^ (v77 << 13))) ^ ((v77 ^ (v77 << 13)) >> 17) ^ v77 ^ (v77 << 13);
      v79 = v78 ^ (v78 << 13) ^ ((v78 ^ (v78 << 13)) >> 17) ^ (32 * (v78 ^ (v78 << 13) ^ ((v78 ^ (v78 << 13)) >> 17)));
      v80 = (32 * (((v79 ^ (v79 << 13)) >> 17) ^ v79 ^ (v79 << 13))) ^ ((v79 ^ (v79 << 13)) >> 17) ^ v79 ^ (v79 << 13);
      v81 = (32 * (((v80 ^ (v80 << 13)) >> 17) ^ v80 ^ (v80 << 13))) ^ ((v80 ^ (v80 << 13)) >> 17) ^ v80 ^ (v80 << 13);
      v82 = (32 * (((v81 ^ (v81 << 13)) >> 17) ^ v81 ^ (v81 << 13))) ^ ((v81 ^ (v81 << 13)) >> 17) ^ v81 ^ (v81 << 13);
      v83 = ((v82 ^ (v82 << 13)) >> 17) ^ v82 ^ (v82 << 13);
      LOBYTE(v83) = (32 * v83) ^ v83;
      v84 = _mm_unpacklo_epi32(
              _mm_insert_epi16(
                _mm_cvtsi32_si128(aAbcdefghijklmn[(unsigned __int8)v76 >> 2]),
                aAbcdefghijklmn[((unsigned __int8)(((v76 ^ (v76 << 13)) >> 17)
                                                 ^ v76
                                                 ^ (32 * (((v76 ^ (v76 << 13)) >> 17) ^ v76))) >> 4)
                              | (16 * (_BYTE)v76) & 0x30],
                1),
              _mm_insert_epi16(
                _mm_cvtsi32_si128(aAbcdefghijklmn[((unsigned __int8)v78 >> 6)
                                                | (4
                                                 * ((unsigned __int8)(((v76 ^ (v76 << 13)) >> 17) ^ v76)
                                                  ^ (unsigned __int8)(32 * (((v76 ^ (v76 << 13)) >> 17) ^ v76))))
                                                & 0x3C]),
                aAbcdefghijklmn[v78 & 0x3F],
                1));
      inserted = _mm_insert_epi16(
                   _mm_cvtsi32_si128(aAbcdefghijklmn[(unsigned __int8)v79 >> 2]),
                   aAbcdefghijklmn[((unsigned __int8)((32 * (((v79 ^ (v79 << 13)) >> 17) ^ v79))
                                                    ^ ((v79 ^ (v79 << 13)) >> 17)
                                                    ^ v79) >> 4)
                                 | (16 * (_BYTE)v79) & 0x30],
                   1);
      v86 = _mm_insert_epi16(
              _mm_cvtsi32_si128(aAbcdefghijklmn[((unsigned __int8)((32 * (((v80 ^ (v80 << 13)) >> 17) ^ v80))
                                                                 ^ ((v80 ^ (v80 << 13)) >> 17)
                                                                 ^ v80) >> 6)
                                              | (4 * (_BYTE)v80) & 0x3C]),
              aAbcdefghijklmn[v81 & 0x3F],
              1);
      v100 = 0;
      v87 = aAbcdefghijklmn[(unsigned __int8)((32 * (((v81 ^ (v81 << 13)) >> 17) ^ v81))
                                            ^ ((v81 ^ (v81 << 13)) >> 17)
                                            ^ v81) >> 2];
      v88 = aAbcdefghijklmn[((unsigned __int8)v83 >> 4)
                          | (16
                           * ((unsigned __int8)(32 * (((v81 ^ (v81 << 13)) >> 17) ^ v81))
                            ^ (unsigned __int8)(((v81 ^ (v81 << 13)) >> 17) ^ v81)))
                          & 0x30];
      v97 = _mm_unpacklo_epi64(v84, _mm_unpacklo_epi32(inserted, v86));
      v98 = v87 | (v88 << 16);
      v99 = aAbcdefghijklmn[(4 * (_BYTE)v83) & 0x3C];
      sub_14000F850("NUITKA_ONEFILE_RANDOM", (const WCHAR *)&v97);
      v89 = v5;
      v19 = (__int16 *)v3;
      if ( *v3 != 0 )
      {
        do
        {
          ++v19;
          --v89;
        }
        while ( *v19 != 0 );
      }
      v90 = v97.m128i_i16[0];
      if ( v97.m128i_i16[0] != 0 )
      {
        v91 = &v97;
        while ( v89 != 0 )
        {
          v91 = (__m128i *)((char *)v91 + 2);
          *v19++ = v90;
          --v89;
          v90 = v91->m128i_i16[0];
          if ( v91->m128i_i16[0] == 0 )
            goto LABEL_59;
        }
        goto LABEL_183;
      }
    }
LABEL_59:
    *v19 = 0;
LABEL_60:
    if ( *v3 != 0 )
    {
      v12 = 0;
      goto LABEL_33;
    }
LABEL_34:
    v7 = nullptr;
    goto LABEL_4;
  }
  if ( SHGetFolderPathW(nullptr, 28, nullptr, 0, v104) == 0 )
  {
    v25 = v5;
    for ( m = v3; *m != 0; --v25 )
      ++m;
    v26 = v104[0];
    if ( v104[0] != 0 )
    {
      v27 = v104;
      while ( v25 != 0 )
      {
        ++v27;
        *m++ = v26;
        --v25;
        v26 = *v27;
        if ( *v27 == 0 )
          goto LABEL_69;
      }
      goto LABEL_183;
    }
LABEL_69:
    *m = 0;
    if ( *v3 == 0 )
      goto LABEL_41;
LABEL_36:
    v12 = 1;
    do
    {
LABEL_37:
      ++v3;
      --v5;
    }
    while ( *v3 != 0 );
    if ( v12 != 0 )
    {
LABEL_41:
      while ( *(v3 - 1) == 92 )
      {
        --v3;
        ++v5;
        *v3 = 0;
      }
      v7 = nullptr;
      goto LABEL_4;
    }
    goto LABEL_34;
  }
  return 0;
}

