// sub_14001ED5A @ 0x14001ED5A
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001ED5A(double *a1, _DWORD *a2)
{
  int v2; // edx
  _TBYTE v4; // [rsp+20h] [rbp-30h] BYREF
  _TBYTE v5; // [rsp+30h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-10h] BYREF
  int v7; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int *v8; // [rsp+48h] [rbp-8h]

  *(double *)&v5 = *a1;
  if ( (int)a2[4] < 0 )
    a2[4] = 6;
  v2 = a2[4] + 1;
  *(double *)&v4 = *(double *)&v5;
  v8 = sub_14001E437((double *)&v4, v2, &v6, &v7);
  if ( v6 == -32768 )
    sub_14001E68D(v7, v8, a2);
  else
    sub_14001EB42(v7, (char *)v8, v6, a2);
  return sub_14001A89F((__int64)v8);
}

