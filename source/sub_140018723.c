// sub_140018723 @ 0x140018723
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140018723(int a1, double *a2, int a3, __int64 a4, int *a5)
{
  int v5; // eax
  int v6; // edx
  _TBYTE v8; // [rsp+40h] [rbp-40h] BYREF
  _TBYTE v9; // [rsp+50h] [rbp-30h]
  _BYTE v10[8]; // [rsp+60h] [rbp-20h] BYREF
  __int16 v11; // [rsp+68h] [rbp-18h]
  _BYTE v12[8]; // [rsp+70h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp-8h] BYREF
  int v14; // [rsp+7Ch] [rbp-4h]

  *(double *)&v9 = *a2;
  v14 = 0;
  *(double *)&v8 = *(double *)&v9;
  sub_1400186E8((__int64)v10, (double *)&v8);
  *(double *)&v8 = *(double *)&v9;
  v13 = sub_14001D5E0(&v8);
  if ( (v13 & 0x100) != 0 )
  {
    if ( (v13 & 0x400) != 0 )
      v5 = 3;
    else
      v5 = 4;
    v13 = v5;
  }
  else if ( (v13 & 0x400) != 0 )
  {
    if ( (v13 & 0x4000) != 0 )
    {
      v13 = 2;
      v14 = -16445;
    }
    else
    {
      v13 = 1;
      v14 = (v11 & 0x7FFF) - 16446;
    }
  }
  else
  {
    v13 = 0;
  }
  if ( v13 == 4 )
    v6 = 0;
  else
    v6 = v11 & 0x8000;
  *a5 = v6;
  return sub_14001ACAA(
           (unsigned int)&unk_140022070,
           v14,
           (unsigned int)v10,
           (unsigned int)&v13,
           a1,
           a3,
           a4,
           (__int64)v12);
}

