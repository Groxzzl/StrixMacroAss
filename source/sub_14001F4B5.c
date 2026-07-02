// sub_14001F4B5 @ 0x14001F4B5
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001F4B5(double *a1, _DWORD *a2)
{
  int v3; // eax
  _QWORD v4[2]; // [rsp+20h] [rbp-50h] BYREF
  _TBYTE v5; // [rsp+30h] [rbp-40h] BYREF
  _TBYTE v6; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+50h] [rbp-20h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+6Ch] [rbp-4h]

  *(double *)&v6 = *a1;
  v9 = 0;
  *(double *)&v5 = *(double *)&v6;
  sub_14001E2CF((__int64)&v7, (double *)&v5);
  *(double *)&v5 = *(double *)&v6;
  if ( (unsigned int)sub_14001D6D0((double *)&v5) != 0 )
    return sub_14001E68D(v9, "NaN", a2);
  v9 = v8 & 0x8000;
  if ( (v8 & 0x8000) != 0 )
  {
    v3 = a2[2];
    LOBYTE(v3) = v3 | 0x80;
    a2[2] = v3;
  }
  *(double *)&v5 = *(double *)&v6;
  if ( (unsigned int)sub_14001D5E0((double *)&v5) == 1280 )
    return sub_14001E68D(v9, "Inf", a2);
  LOWORD(v8) = v8 & 0x7FFF;
  if ( (_WORD)v8 != 0 )
  {
    LOWORD(v8) = v8 - 0x3FFF;
  }
  else if ( v7 != 0 )
  {
    LOWORD(v8) = -16382;
  }
  v4[0] = v7;
  v4[1] = v8;
  return sub_14001EFD8((__int64)v4, (__int64)a2);
}

