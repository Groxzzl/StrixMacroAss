// sub_14001D6D0 @ 0x14001D6D0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001D6D0(double *a1)
{
  double v2; // [rsp+0h] [rbp-30h]
  __int16 v3; // [rsp+18h] [rbp-18h]

  v2 = *a1;
  return (unsigned int)((int)(65534
                            - (((unsigned int)(HIDWORD(v2) & 0x7FFFFFFF
                                             | LODWORD(v2)
                                             | -(HIDWORD(v2) & 0x7FFFFFFF | LODWORD(v2))) >> 31)
                             | (unsigned __int16)(2 * v3))) >> 16);
}

