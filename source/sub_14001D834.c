// sub_14001D834 @ 0x14001D834
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001D834(char *a1, int a2, _DWORD *a3)
{
  int v3; // eax
  char *v4; // rax
  int v5; // eax
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+18h]

  v8 = a2;
  if ( (int)a3[4] >= 0 && a2 > a3[4] )
    v8 = a3[4];
  if ( v8 >= a3[3] )
    a3[3] = -1;
  else
    a3[3] -= v8;
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
    v5 = v8--;
    if ( v5 == 0 )
      break;
    v4 = a1++;
    sub_14001D7B0(*v4, (__int64)a3);
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

