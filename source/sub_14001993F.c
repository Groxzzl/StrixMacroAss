// sub_14001993F @ 0x14001993F
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001993F(double a1, __int64 a2)
{
  int v3; // eax
  _QWORD v4[2]; // [rsp+20h] [rbp-40h] BYREF
  _TBYTE v5; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp-20h] BYREF
  __int64 v7; // [rsp+48h] [rbp-18h]
  int v8; // [rsp+58h] [rbp-8h]
  int v9; // [rsp+5Ch] [rbp-4h]

  v9 = 0;
  *(double *)&v5 = a1;
  sub_1400186E8((__int64)&v6, (double *)&v5);
  if ( (unsigned int)sub_14001D670() != 0 )
    return sub_1400189FE(v9, "NaN", a2);
  v9 = v7 & 0x8000;
  if ( (v7 & 0x8000) != 0 )
  {
    v3 = *(_DWORD *)(a2 + 8);
    LOBYTE(v3) = v3 | 0x80;
    *(_DWORD *)(a2 + 8) = v3;
  }
  if ( (unsigned int)sub_14001D560() == 1280 )
    return sub_1400189FE(v9, "Inf", a2);
  LOWORD(v7) = v7 & 0x7FFF;
  if ( (_WORD)v7 != 0 && (__int16)v7 <= 15360 )
  {
    v8 = 15361 - (__int16)v7;
    v6 >>= 1 - (unsigned __int8)v7;
    LOWORD(v7) = 15361;
  }
  if ( (_WORD)v7 != 0 )
  {
    LOWORD(v7) = v7 - 16380;
  }
  else if ( v6 != 0 )
  {
    LOWORD(v7) = -1019;
  }
  v6 >>= 3;
  v4[0] = v6;
  v4[1] = v7;
  return sub_140019349((__int64)v4, a2);
}

