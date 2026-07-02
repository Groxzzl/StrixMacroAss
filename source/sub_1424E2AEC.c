// sub_1424E2AEC @ 0x1424E2AEC
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1424E2AEC()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rsi
  double v4; // st7
  __int64 v5; // rax
  char v6; // cf
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx

  v5 = sub_1424E291D();
  if ( v6 )
    _ST2 = v4;
  __asm { fst     st(6) }
  v7 = v1 + 2163;
  v8 = v0 + 18;
  do
  {
    v8 -= 19;
    v7 -= 29883;
  }
  while ( (v5 & v2) != 0 );
  sub_1424E2C09();
  while ( (v9 & v2) != 0 )
    ;
  sub_1424E29E0();
  return sub_1424E2C09();
}

