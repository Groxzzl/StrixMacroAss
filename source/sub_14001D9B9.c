// sub_14001D9B9 @ 0x14001D9B9
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001D9B9(unsigned __int16 *a1, int a2, _DWORD *a3)
{
  int v3; // eax
  char *v4; // rax
  int v5; // eax
  int v6; // eax
  unsigned __int16 *v7; // rax
  __int64 result; // rax
  char v9[8]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-20h] BYREF
  char *v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+4Ch] [rbp-4h]

  v12 = sub_140020CA0(v10, 0, v9);
  if ( (int)a3[4] >= 0 && a2 > a3[4] )
    a2 = a3[4];
  if ( a2 >= a3[3] )
    a3[3] = -1;
  else
    a3[3] -= a2;
  if ( (int)a3[3] > 0 && (a3[2] & 0x400) == 0 )
  {
    while ( 1 )
    {
      v3 = a3[3];
      a3[3] = v3 - 1;
      if ( v3 == 0 )
        break;
      sub_14001D7B0(32, (__int64)a3);
    }
  }
  while ( 1 )
  {
    v6 = a2--;
    if ( v6 <= 0 )
      break;
    v7 = a1++;
    v12 = sub_140020CA0(v10, *v7, v9);
    if ( v12 <= 0 )
      break;
    v11 = v10;
    while ( 1 )
    {
      v5 = v12--;
      if ( v5 <= 0 )
        break;
      v4 = v11++;
      sub_14001D7B0(*v4, (__int64)a3);
    }
  }
  while ( 1 )
  {
    result = (unsigned int)a3[3];
    a3[3] = result - 1;
    if ( (int)result <= 0 )
      break;
    sub_14001D7B0(32, (__int64)a3);
  }
  return result;
}

