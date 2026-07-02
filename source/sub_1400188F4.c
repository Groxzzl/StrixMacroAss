// sub_1400188F4 @ 0x1400188F4
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400188F4(__int64 a1)
{
  struct lconv *v1; // rax
  __int64 v3; // [rsp+20h] [rbp-10h] BYREF
  __int16 v4; // [rsp+2Ah] [rbp-6h] BYREF
  int v5; // [rsp+2Ch] [rbp-4h]

  if ( *(_DWORD *)(a1 + 20) == -3 )
  {
    v3 = 0;
    v1 = localeconv();
    v5 = sub_14002070E(&v4, v1->decimal_point, 16, &v3);
    if ( v5 > 0 )
      *(_WORD *)(a1 + 24) = v4;
    *(_DWORD *)(a1 + 20) = v5;
  }
  if ( *(_WORD *)(a1 + 24) != 0 )
    return sub_1400179C0(*(_WORD *)(a1 + 24), a1);
  else
    return sub_1400179C0(0x2Eu, a1);
}

