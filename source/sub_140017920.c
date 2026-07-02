// sub_140017920 @ 0x140017920
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140017920(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  signed int v5; // ebx
  __int64 v6; // rax
  int v8; // [rsp+58h] [rbp+28h]

  if ( a2 == 0 )
    return 0xFFFFFFFFLL;
  v8 = a2 - 1;
  v5 = sub_140019A9C(0, a1, (int)a2 - 1, a3, a4);
  if ( v5 >= v8 )
    v6 = 2LL * v8;
  else
    v6 = 2LL * v5;
  *(_WORD *)(a1 + v6) = 0;
  if ( v5 >= v8 )
    return (unsigned int)-1;
  return (unsigned int)v5;
}

