// sub_1400188A2 @ 0x1400188A2
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400188A2(double *a1, int a2, __int64 a3, int *a4)
{
  _TBYTE v5; // [rsp+30h] [rbp-20h] BYREF
  _TBYTE v6; // [rsp+40h] [rbp-10h]

  *(double *)&v6 = *a1;
  *(double *)&v5 = *(double *)&v6;
  return sub_140018723(3, (double *)&v5, a2, a3, a4);
}

