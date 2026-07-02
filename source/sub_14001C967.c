// sub_14001C967 @ 0x14001C967
#include <stdint.h>
#include <windows.h>

_DWORD *__fastcall sub_14001C967(int a1)
{
  _DWORD *v2; // [rsp+28h] [rbp-8h]

  v2 = sub_14001C66D(1);
  if ( v2 == nullptr )
    return nullptr;
  v2[6] = a1;
  v2[5] = 1;
  return v2;
}

