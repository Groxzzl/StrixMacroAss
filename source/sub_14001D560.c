// sub_14001D560 @ 0x14001D560
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001D560(double a1)
{
  int v2; // [rsp+8h] [rbp-8h]
  int v3; // [rsp+Ch] [rbp-4h]

  v2 = HIDWORD(a1) & 0xFFFFF | LODWORD(a1);
  v3 = HIDWORD(a1) & 0x7FF00000;
  if ( (v2 | HIDWORD(a1) & 0x7FF00000) == 0 )
    return 0x4000;
  if ( v3 == 0 )
    return 17408;
  if ( v3 != 2146435072 )
    return 1024;
  if ( v2 != 0 )
    return 256;
  return 1280;
}

