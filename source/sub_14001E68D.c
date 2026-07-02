// sub_14001E68D @ 0x14001E68D
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001E68D(int a1, _BYTE *a2, _DWORD *a3)
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
  a3[4] = -1;
  if ( a1 != 0 )
  {
    v3 = v12++;
    *v3 = 45;
  }
  else if ( (a3[2] & 0x100) != 0 )
  {
    v4 = v12++;
    *v4 = 43;
  }
  else if ( (a3[2] & 0x40) != 0 )
  {
    v5 = v12++;
    *v5 = 32;
  }
  for ( i = 3; i > 0; --i )
  {
    v6 = a2++;
    v7 = *v6 & 0xDF;
    v8 = a3[2] & 0x20;
    v9 = v12++;
    *v9 = v8 | v7;
  }
  return sub_14001D834(v11, (unsigned int)v12 - ((unsigned int)&savedregs - 20), a3);
}

