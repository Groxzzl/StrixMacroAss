// sub_1400189FE @ 0x1400189FE
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400189FE(int a1, _BYTE *a2, __int64 a3)
{
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  _BYTE *v6; // rax
  char v7; // r8
  int v8; // ecx
  char *v9; // rax
  char v11[4]; // [rsp+2Ch] [rbp-14h] BYREF
  char *v12; // [rsp+30h] [rbp-10h]
  int i; // [rsp+3Ch] [rbp-4h]
  __int64 savedregs; // [rsp+40h] [rbp+0h] BYREF

  v12 = v11;
  *(_DWORD *)(a3 + 16) = -1;
  if ( a1 != 0 )
  {
    v3 = v12++;
    *v3 = 45;
  }
  else if ( (*(_DWORD *)(a3 + 8) & 0x100) != 0 )
  {
    v4 = v12++;
    *v4 = 43;
  }
  else if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
  {
    v5 = v12++;
    *v5 = 32;
  }
  for ( i = 3; i > 0; --i )
  {
    v6 = a2++;
    v7 = *v6 & 0xDF;
    v8 = *(_DWORD *)(a3 + 8) & 0x20;
    v9 = v12++;
    *v9 = v8 | v7;
  }
  return sub_140017A4B(v11, (unsigned int)v12 - ((unsigned int)&savedregs - 20), a3);
}

