// sub_14001E620 @ 0x14001E620
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001E620(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // [rsp+2Eh] [rbp-2h] BYREF

  if ( a1 == 46 )
    return sub_14001E4DB(a2);
  if ( a1 != 44 )
    return sub_14001D7B0(a1, a2);
  v3 = *(_WORD *)(a2 + 32);
  result = v3;
  if ( v3 != 0 )
    return sub_14001D9B9(&v3, 1, (_DWORD *)a2);
  return result;
}

