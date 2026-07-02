// sub_14001E2CF @ 0x14001E2CF
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001E2CF(__int64 a1, double *a2)
{
  __int64 v3; // [rsp+18h] [rbp-8h]

  *(double *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}

