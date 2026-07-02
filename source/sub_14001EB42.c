// sub_14001EB42 @ 0x14001EB42
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001EB42(int a1, char *a2, int a3, _DWORD *a4)
{
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  int v9; // [rsp+4Ch] [rbp-4h]
  int v10; // [rsp+70h] [rbp+20h]

  v9 = 1;
  v10 = a3 - 1;
  v7 = a3 - 1;
  while ( 1 )
  {
    v10 /= 10;
    if ( v10 == 0 )
      break;
    ++v9;
  }
  if ( a4[11] == -1 )
    a4[11] = 2;
  if ( v9 < a4[11] )
    v9 = a4[11];
  v4 = a4[3];
  v9 += 2;
  if ( v9 >= v4 )
    a4[3] = -1;
  else
    a4[3] -= v9;
  sub_14001E778(a1, a2, 1, (__int64)a4);
  a4[4] = a4[11];
  a4[2] |= 0x1C0u;
  sub_14001D7B0(a4[2] & 0x20 | 0x45, (__int64)a4);
  a4[3] += v9 - 1;
  v6[0] = v7;
  v6[1] = v8;
  return sub_14001DC2E(v6, (__int64)a4);
}

