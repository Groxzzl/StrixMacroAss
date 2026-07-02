// sub_140017D2F @ 0x140017D2F
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140017D2F(wchar_t *a1, signed int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // eax
  wchar_t *v5; // rax
  int v6; // eax
  int v7; // [rsp+3Ch] [rbp-4h]
  int v8; // [rsp+3Ch] [rbp-4h]
  wchar_t *v9; // [rsp+50h] [rbp+10h]
  unsigned int v10; // [rsp+58h] [rbp+18h]

  v9 = a1;
  v10 = a2;
  if ( *(int *)(a3 + 16) >= 0 && a2 > *(_DWORD *)(a3 + 16) )
    v10 = *(_DWORD *)(a3 + 16);
  if ( (*(_DWORD *)(a3 + 8) & 0x2000) != 0 && (*(_DWORD *)(a3 + 8) & 0x4000) != 0 )
  {
    if ( (signed int)v10 >= *(_DWORD *)(a3 + 12) )
    {
      v7 = fwprintf(*(FILE *const *)a3, asc_142424236, v10, a1);
    }
    else if ( (*(_DWORD *)(a3 + 8) & 0x400) != 0 )
    {
      v7 = fwprintf(*(FILE *const *)a3, L"%-*.*s", *(unsigned int *)(a3 + 12), v10, a1);
    }
    else
    {
      v7 = fwprintf(*(FILE *const *)a3, L"%*.*s", *(unsigned int *)(a3 + 12), v10, a1);
    }
    if ( v7 > 0 )
      *(_DWORD *)(a3 + 36) += v7;
    *(_DWORD *)(a3 + 12) = -1;
    return a3;
  }
  else
  {
    if ( (signed int)v10 >= *(_DWORD *)(a3 + 12) )
      *(_DWORD *)(a3 + 12) = -1;
    else
      *(_DWORD *)(a3 + 12) -= v10;
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
    v8 = v10;
    while ( 1 )
    {
      v6 = v8--;
      if ( v6 <= 0 || *v9 == 0 )
        break;
      v5 = v9++;
      sub_1400179C0(*v5, a3);
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

