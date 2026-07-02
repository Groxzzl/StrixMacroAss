// sub_14001D5E0 @ 0x14001D5E0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001D5E0(double *a1)
{
  double v2; // [rsp+10h] [rbp-20h]
  __int16 v3; // [rsp+18h] [rbp-18h]

  v2 = *a1;
  if ( (v3 & 0x7FFF) == 0 )
  {
    if ( v2 == 0.0 )
      return 0x4000;
    if ( v2 >= 0.0 )
      return 17408;
  }
  else if ( (v3 & 0x7FFF) == 0x7FFF )
  {
    if ( (HIDWORD(v2) & 0x7FFFFFFF | LODWORD(v2)) != 0 )
      return 256;
    else
      return 1280;
  }
  return 1024;
}

