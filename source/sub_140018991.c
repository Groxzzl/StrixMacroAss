// sub_140018991 @ 0x140018991
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140018991(int a1, __int64 a2)
{
  __int64 result; // rax
  wchar_t v3; // [rsp+2Eh] [rbp-2h] BYREF

  if ( a1 == 46 )
    return sub_1400188F4(a2);
  if ( a1 != 44 )
    return sub_1400179C0(a1, a2);
  v3 = *(_WORD *)(a2 + 32);
  result = v3;
  if ( v3 != 0 )
    return sub_140017D2F(&v3, 1, a2);
  return result;
}

