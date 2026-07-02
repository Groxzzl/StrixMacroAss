// sub_140018047 @ 0x140018047
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140018047(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rsp
  int v4; // eax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  int v8; // eax
  char *v9; // rax
  char *v10; // rax
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  __int64 result; // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-30h] BYREF
  char *v18; // [rsp+38h] [rbp-18h]
  int v19; // [rsp+40h] [rbp-10h]
  int v20; // [rsp+44h] [rbp-Ch]
  char *v21; // [rsp+48h] [rbp-8h]

  v2 = a1[1];
  v17[0] = *a1;
  v17[1] = v2;
  v19 = sub_140017FB7(1, 3, a2);
  v3 = alloca(sub_140017890());
  v18 = (char *)v17;
  v21 = (char *)v17;
  if ( (*(_DWORD *)(a2 + 8) & 0x80) != 0 )
  {
    if ( v17[0] >= 0LL )
    {
      v4 = *(_DWORD *)(a2 + 8);
      LOBYTE(v4) = v4 & 0x7F;
      *(_DWORD *)(a2 + 8) = v4;
    }
    else
    {
      v17[0] = -v17[0];
    }
  }
  while ( v17[0] != 0 )
  {
    if ( v21 != v18 && (*(_DWORD *)(a2 + 8) & 0x1000) != 0 && *(_WORD *)(a2 + 32) != 0 && (v21 - v18) % 4 == 3 )
    {
      v5 = v21++;
      *v5 = 44;
    }
    v6 = v21++;
    *v6 = v17[0] % 0xAuLL + 48;
    v17[0] /= 0xAuLL;
  }
  if ( *(int *)(a2 + 16) > 0 )
  {
    v20 = *(_DWORD *)(a2 + 16) - ((_DWORD)v21 - (_DWORD)v18);
    if ( v20 > 0 )
    {
      while ( 1 )
      {
        v8 = v20--;
        if ( v8 <= 0 )
          break;
        v7 = v21++;
        *v7 = 48;
      }
    }
  }
  if ( v21 == v18 && *(_DWORD *)(a2 + 16) != 0 )
  {
    v9 = v21++;
    *v9 = 48;
  }
  if ( *(int *)(a2 + 12) > 0 )
  {
    *(_DWORD *)(a2 + 12) -= (_DWORD)v21 - (_DWORD)v18;
    if ( *(int *)(a2 + 12) > 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x1C0) != 0 )
        --*(_DWORD *)(a2 + 12);
      if ( *(int *)(a2 + 16) < 0 && (*(_DWORD *)(a2 + 8) & 0x600) == 0x200 )
      {
        while ( 1 )
        {
          v11 = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 12) = v11 - 1;
          if ( v11 <= 0 )
            break;
          v10 = v21++;
          *v10 = 48;
        }
      }
      else if ( (*(_DWORD *)(a2 + 8) & 0x400) == 0 )
      {
        while ( 1 )
        {
          v12 = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 12) = v12 - 1;
          if ( v12 <= 0 )
            break;
          sub_1400179C0(0x20u, a2);
        }
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x80) != 0 )
  {
    v13 = v21++;
    *v13 = 45;
  }
  else if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
  {
    v14 = v21++;
    *v14 = 43;
  }
  else if ( (*(_DWORD *)(a2 + 8) & 0x40) != 0 )
  {
    v15 = v21++;
    *v15 = 32;
  }
  while ( v18 < v21 )
    sub_1400179C0(*--v21, a2);
  while ( 1 )
  {
    result = *(unsigned int *)(a2 + 12);
    *(_DWORD *)(a2 + 12) = result - 1;
    if ( (int)result <= 0 )
      break;
    sub_1400179C0(0x20u, a2);
  }
  return result;
}

