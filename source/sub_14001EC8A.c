// sub_14001EC8A @ 0x14001EC8A
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001EC8A(double *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  _TBYTE v5; // [rsp+20h] [rbp-30h] BYREF
  _TBYTE v6; // [rsp+30h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int *v9; // [rsp+48h] [rbp-8h]

  *(double *)&v6 = *a1;
  if ( (int)a2[4] < 0 )
    a2[4] = 6;
  v2 = a2[4];
  *(double *)&v5 = *(double *)&v6;
  v9 = sub_14001E489((double *)&v5, v2, &v7, &v8);
  if ( v7 == -32768 )
  {
    sub_14001E68D(v8, v9, a2);
  }
  else
  {
    sub_14001E778(v8, (char *)v9, v7, (__int64)a2);
    while ( 1 )
    {
      v3 = a2[3];
      a2[3] = v3 - 1;
      if ( v3 <= 0 )
        break;
      sub_14001D7B0(32, (__int64)a2);
    }
  }
  return sub_14001A89F((__int64)v9);
}

