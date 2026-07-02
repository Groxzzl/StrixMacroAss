// sub_14001EE05 @ 0x14001EE05
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001EE05(double *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  _TBYTE v5; // [rsp+20h] [rbp-30h] BYREF
  _TBYTE v6; // [rsp+30h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+44h] [rbp-Ch] BYREF
  char *Str; // [rsp+48h] [rbp-8h]

  *(double *)&v6 = *a1;
  if ( (int)a2[4] >= 0 )
  {
    if ( a2[4] == 0 )
      a2[4] = 1;
  }
  else
  {
    a2[4] = 6;
  }
  v2 = a2[4];
  *(double *)&v5 = *(double *)&v6;
  Str = (char *)sub_14001E437((double *)&v5, v2, &v7, &v8);
  if ( v7 == -32768 )
  {
    sub_14001E68D(v8, Str, a2);
  }
  else if ( v7 < -3 || a2[4] < v7 )
  {
    if ( (a2[2] & 0x800) != 0 )
      --a2[4];
    else
      a2[4] = strlen(Str) - 1;
    sub_14001EB42(v8, Str, v7, a2);
  }
  else
  {
    if ( (a2[2] & 0x800) != 0 )
    {
      a2[4] -= v7;
    }
    else
    {
      a2[4] = strlen(Str) - v7;
      if ( (int)a2[4] < 0 && (int)a2[3] > 0 )
        a2[3] += a2[4];
    }
    sub_14001E778(v8, Str, v7, (__int64)a2);
    while ( 1 )
    {
      v3 = a2[3];
      a2[3] = v3 - 1;
      if ( v3 <= 0 )
        break;
      sub_14001D7B0(32, (__int64)a2);
    }
  }
  return sub_14001A89F((__int64)Str);
}

