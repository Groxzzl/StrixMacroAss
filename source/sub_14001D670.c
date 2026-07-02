// sub_14001D670 @ 0x14001D670
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001D670(double a1)
{
  return (unsigned int)((int)(2146435072
                            - (((LODWORD(a1) | (unsigned int)-LODWORD(a1)) >> 31) | HIDWORD(a1) & 0x7FFFFFFF)) >> 31);
}

