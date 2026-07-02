// sub_140017A4B @ 0x140017A4B
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140017A4B(char *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // eax
  size_t v5; // rax
  __int64 v6; // [rsp+38h] [rbp-38h] BYREF
  wchar_t v7[12]; // [rsp+40h] [rbp-30h] BYREF
  wchar_t *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+6Ch] [rbp-4h]
  char *Str; // [rsp+80h] [rbp+10h]
  int v12; // [rsp+88h] [rbp+18h]

  Str = a1;
  v12 = a2;
  if ( *(int *)(a3 + 16) >= 0 && a2 > *(_DWORD *)(a3 + 16) )
    v12 = *(_DWORD *)(a3 + 16);
  if ( (*(_DWORD *)(a3 + 8) & 0x2000) != 0 && (*(_DWORD *)(a3 + 8) & 0x4000) != 0 )
  {
    if ( v12 >= *(_DWORD *)(a3 + 12) )
    {
      v10 = fwprintf(*(FILE *const *)a3, asc_14242420A, (unsigned int)v12, a1);
    }
    else if ( (*(_DWORD *)(a3 + 8) & 0x400) != 0 )
    {
      v10 = fwprintf(*(FILE *const *)a3, L"%-*.*S", *(unsigned int *)(a3 + 12), (unsigned int)v12, a1);
    }
    else
    {
      v10 = fwprintf(*(FILE *const *)a3, L"%*.*S", *(unsigned int *)(a3 + 12), (unsigned int)v12, a1);
    }
    if ( v10 > 0 )
      *(_DWORD *)(a3 + 36) += v10;
    *(_DWORD *)(a3 + 12) = -1;
    return a3;
  }
  else
  {
    if ( v12 >= *(_DWORD *)(a3 + 12) )
      *(_DWORD *)(a3 + 12) = -1;
    else
      *(_DWORD *)(a3 + 12) -= v12;
    if ( *(int *)(a3 + 12) > 0 && (*(_DWORD *)(a3 + 8) & 0x400) == 0 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(a3 + 12);
        *(_DWORD *)(a3 + 12) = v4 - 1;
        if ( v4 == 0 )
          break;
        sub_1400179C0(0x20u, a3);
      }
    }
    while ( v12 > 0 )
    {
      v6 = 0;
      --v12;
      v8 = v7;
      v5 = strlen(Str);
      v9 = sub_14002070E(v7, Str, v5, &v6);
      if ( v9 == 0 )
        break;
      if ( v9 < 0 )
      {
        v9 = 1;
        v7[0] = *Str;
      }
      Str += v9;
      sub_1400179C0(v7[0], a3);
    }
    while ( 1 )
    {
      result = *(unsigned int *)(a3 + 12);
      *(_DWORD *)(a3 + 12) = result - 1;
      if ( (int)result <= 0 )
        break;
      sub_1400179C0(0x20u, a3);
    }
  }
  return result;
}

