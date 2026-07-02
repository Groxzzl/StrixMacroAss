// sub_14001AB70 @ 0x14001AB70
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001AB70(unsigned int a1)
{
  unsigned int v1; // eax

  _BitScanReverse(&v1, a1);
  return v1 ^ 0x1F;
}

