// sub_14001A89F @ 0x14001A89F
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001A89F(__int64 a1)
{
  *(_DWORD *)(a1 - 4 + 8) = *(_DWORD *)(a1 - 4);
  *(_DWORD *)(a1 - 4 + 12) = 1 << *(_DWORD *)(a1 - 4 + 8);
  return sub_14001C7AE(a1 - 4);
}

