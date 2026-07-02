// sub_140017FB7 @ 0x140017FB7
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140017FB7(int a1, int a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // edx
  __int64 result; // rax
  signed int v6; // [rsp+18h] [rbp+18h]

  v3 = *(_DWORD *)(a3 + 16);
  if ( v3 < 0 )
    v3 = 0;
  v6 = v3 + (a2 - 1 + 64LL) / (unsigned __int64)a2 + a1;
  if ( (*(_DWORD *)(a3 + 8) & 0x1000) != 0 && *(_WORD *)(a3 + 32) != 0 )
    v6 += v6 / 3;
  v4 = *(_DWORD *)(a3 + 12);
  result = (unsigned int)v6;
  if ( (int)v4 >= v6 )
    return v4;
  return result;
}

