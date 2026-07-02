// sub_1400186E8 @ 0x1400186E8
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400186E8(__int64 a1, double *a2)
{
  __int64 v3; // [rsp+18h] [rbp-8h]

  *(double *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}

