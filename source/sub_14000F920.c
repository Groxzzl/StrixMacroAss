// sub_14000F920 @ 0x14000F920
#include <stdint.h>
#include <windows.h>

void __fastcall sub_14000F920(WCHAR *lpszLongPath, __int64 a2)
{
  WCHAR v3; // dx
  WCHAR *v4; // rbx
  WCHAR *v5; // rax
  WCHAR *v6; // rcx
  const wchar_t *v7; // rcx
  DWORD (__stdcall *v8)(LPCWSTR, LPWSTR, DWORD); // r12
  wchar_t *v9; // rbp
  DWORD ShortPathNameW; // edi
  __int64 v11; // rdx
  WCHAR *v12; // rax
  wchar_t v13; // ax
  wchar_t *v14; // rdx
  WCHAR v15; // dx
  WCHAR *v16; // rcx
  WCHAR *v17; // rax
  WCHAR *Block; // [rsp+28h] [rbp-30h]

  v3 = *lpszLongPath;
  v4 = lpszLongPath;
  if ( *lpszLongPath == 0 )
    goto LABEL_20;
  v5 = lpszLongPath;
  v6 = nullptr;
  do
  {
    if ( v3 == 92 )
      v6 = v5;
    v3 = v5[1];
    ++v5;
  }
  while ( v3 != 0 );
  if ( v6 == nullptr )
  {
LABEL_20:
    v8 = GetShortPathNameW;
    ShortPathNameW = GetShortPathNameW(v4, nullptr, 0);
    if ( ShortPathNameW == 0 )
      return;
    v9 = nullptr;
LABEL_22:
    Block = (WCHAR *)malloc(2LL * (ShortPathNameW + 1));
    if ( ShortPathNameW < v8(v4, Block, ShortPathNameW) )
      goto LABEL_31;
    *v4 = 0;
    if ( Block == nullptr )
      goto LABEL_31;
    v15 = *Block;
    v16 = v4;
    if ( *Block != 0 )
    {
      v17 = Block;
      while ( 1 )
      {
        ++v17;
        *v16++ = v15;
        v15 = *v17;
        if ( *v17 == 0 )
          break;
        if ( &Block[a2] == v17 )
          goto LABEL_31;
      }
    }
    *v16 = 0;
    free(Block);
    if ( v9 == nullptr )
      return;
    goto LABEL_9;
  }
  v7 = v6 + 1;
  *((_WORD *)v7 - 1) = 0;
  v8 = GetShortPathNameW;
  v9 = wcsdup(v7);
  ShortPathNameW = GetShortPathNameW(v4, nullptr, 0);
  if ( ShortPathNameW != 0 )
    goto LABEL_22;
  if ( v9 == nullptr )
    return;
LABEL_9:
  if ( *v4 != 0 )
  {
    v11 = a2;
    v12 = v4;
    do
    {
      ++v12;
      --v11;
    }
    while ( *v12 != 0 );
    if ( v11 == 0 )
      goto LABEL_31;
  }
  else
  {
    v12 = v4;
  }
  for ( *(_DWORD *)v12 = 92; *v4 != 0; --a2 )
    ++v4;
  v13 = *v9;
  if ( *v9 != 0 )
  {
    v14 = v9;
    while ( a2 != 0 )
    {
      ++v14;
      *v4++ = v13;
      --a2;
      v13 = *v14;
      if ( *v14 == 0 )
        goto LABEL_19;
    }
LABEL_31:
    abort();
  }
LABEL_19:
  *v4 = 0;
  free(v9);
}

