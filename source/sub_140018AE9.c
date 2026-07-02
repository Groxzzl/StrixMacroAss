// sub_140018AE9 @ 0x140018AE9
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140018AE9(int a1, char *a2, int a3, __int64 a4)
{
  int v4; // eax
  int v5; // eax
  char *v6; // rax
  wchar_t v7; // ax
  char *v8; // rax
  wchar_t v9; // ax
  __int64 result; // rax
  int i; // [rsp+2Ch] [rbp-4h]
  int v14; // [rsp+50h] [rbp+20h]

  v14 = a3;
  if ( a3 <= 0 )
  {
    if ( *(int *)(a4 + 12) > 0 )
      --*(_DWORD *)(a4 + 12);
  }
  else if ( a3 > *(_DWORD *)(a4 + 12) )
  {
    *(_DWORD *)(a4 + 12) = -1;
  }
  else
  {
    *(_DWORD *)(a4 + 12) -= a3;
  }
  if ( *(int *)(a4 + 12) < 0 || *(_DWORD *)(a4 + 12) <= *(_DWORD *)(a4 + 16) )
    *(_DWORD *)(a4 + 12) = -1;
  else
    *(_DWORD *)(a4 + 12) -= *(_DWORD *)(a4 + 16);
  if ( *(int *)(a4 + 12) > 0 && (*(int *)(a4 + 16) > 0 || (*(_DWORD *)(a4 + 8) & 0x800) != 0) )
    --*(_DWORD *)(a4 + 12);
  if ( a3 > 0 && (*(_DWORD *)(a4 + 8) & 0x1000) != 0 && *(_WORD *)(a4 + 32) != 0 )
  {
    for ( i = (a3 + 2) / 3 - 1; i > 0 && *(int *)(a4 + 12) > 0; --i )
      --*(_DWORD *)(a4 + 12);
  }
  if ( *(int *)(a4 + 12) > 0 && (a1 != 0 || (*(_DWORD *)(a4 + 8) & 0x1C0) != 0) )
    --*(_DWORD *)(a4 + 12);
  if ( *(int *)(a4 + 12) > 0 && (*(_DWORD *)(a4 + 8) & 0x600) == 0 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a4 + 12);
      *(_DWORD *)(a4 + 12) = v4 - 1;
      if ( v4 <= 0 )
        break;
      sub_1400179C0(0x20u, a4);
    }
  }
  if ( a1 != 0 )
  {
    sub_1400179C0(0x2Du, a4);
  }
  else if ( (*(_DWORD *)(a4 + 8) & 0x100) != 0 )
  {
    sub_1400179C0(0x2Bu, a4);
  }
  else if ( (*(_DWORD *)(a4 + 8) & 0x40) != 0 )
  {
    sub_1400179C0(0x20u, a4);
  }
  if ( *(int *)(a4 + 12) > 0 && (*(_DWORD *)(a4 + 8) & 0x600) == 0x200 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(a4 + 12);
      *(_DWORD *)(a4 + 12) = v5 - 1;
      if ( v5 <= 0 )
        break;
      sub_1400179C0(0x30u, a4);
    }
  }
  if ( v14 <= 0 )
  {
    sub_1400179C0(0x30u, a4);
  }
  else
  {
    do
    {
      if ( *a2 != 0 )
      {
        v6 = a2++;
        v7 = *v6;
      }
      else
      {
        v7 = 48;
      }
      sub_1400179C0(v7, a4);
      if ( --v14 != 0 && (*(_DWORD *)(a4 + 8) & 0x1000) != 0 && *(_WORD *)(a4 + 32) != 0 && v14 % 3 == 0 )
        sub_140017D2F((wchar_t *)(a4 + 32), 1, a4);
    }
    while ( v14 > 0 );
  }
  if ( *(int *)(a4 + 16) > 0 || (*(_DWORD *)(a4 + 8) & 0x800) != 0 )
    sub_1400188F4(a4);
  if ( v14 < 0 )
  {
    *(_DWORD *)(a4 + 16) += v14;
    do
    {
      sub_1400179C0(0x30u, a4);
      ++v14;
    }
    while ( v14 < 0 );
  }
  while ( 1 )
  {
    result = *(unsigned int *)(a4 + 16);
    *(_DWORD *)(a4 + 16) = result - 1;
    if ( (int)result <= 0 )
      break;
    if ( *a2 != 0 )
    {
      v8 = a2++;
      v9 = *v8;
    }
    else
    {
      v9 = 48;
    }
    sub_1400179C0(v9, a4);
  }
  return result;
}

