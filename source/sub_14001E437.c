// sub_14001E437 @ 0x14001E437
#include <stdint.h>
#include <windows.h>

unsigned int *__fastcall sub_14001E437(double *a1, int a2, _DWORD *a3, int *a4)
{
  _TBYTE v5; // [rsp+30h] [rbp-20h] BYREF
  _TBYTE v6; // [rsp+40h] [rbp-10h]

  *(double *)&v6 = *a1;
  *(double *)&v5 = *(double *)&v6;
  return sub_14001E30A(2, (double *)&v5, a2, a3, a4);
}

