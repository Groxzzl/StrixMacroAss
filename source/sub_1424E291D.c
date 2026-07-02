// sub_1424E291D @ 0x1424E291D
#include <stdint.h>
#include <windows.h>

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1424E291D()
{
  double v0; // st0
  double v1; // st1
  double v2; // st3
  double v3; // st4
  double v4; // st5
  double v5; // st7
  char v6; // cf
  char v7; // zf
  __int16 v8; // dx
  __int64 v9; // rcx
  double v10; // st0
  double v11; // st0
  double v12; // st1
  double v13; // st7
  double v14; // st6
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st7
  char v20; // cf
  char v21; // pf
  double v22; // st3
  double v23; // st0
  __int64 result; // rax
  __int64 v25; // [rsp-27h] [rbp-47h] BYREF

  sub_1424E29E0();
  v10 = v0 - v4;
  if ( v7 )
    v10 = v4;
  if ( v6 | v7 )
    v10 = v1;
  if ( v6 )
    v10 = v3;
  if ( v7 )
    v10 = v1;
  v11 = v10 + v2;
  v12 = v11;
  if ( v6 | v7 )
    v11 = v5;
  v13 = v11;
  if ( v6 | v7 )
    v11 = v3;
  v14 = v11;
  if ( v6 )
    v11 = v13;
  _ST3 = v12;
  __asm { fst     st(7) }
  __asm { fst     st(7) }
  if ( v6 )
    _ST3 = v13;
  BYTE1(v9) = HIBYTE(v8);
  LOBYTE(v9) = v8 + 12;
  ((void (__usercall *)(__int64@<rcx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))sub_1424E291D)(
    v9,
    v13,
    v14,
    v4,
    v12,
    _ST3);
  sub_1424E2B73();
  ((void (__usercall *)(double@<st0>, double@<st1>))sub_1424E2A2C)(v17, v16);
  sub_1424E2C09();
  v22 = v11;
  if ( v7 )
    v11 = v12;
  v23 = v11 + v11 + v18;
  if ( v20 )
    v23 = v22;
  if ( v21 )
    v23 = v12;
  if ( v20 )
    v23 = v19;
  sub_1424E29E0();
  result = ((__int64 (__usercall *)@<rax>(double@<st0>, double@<st1>))sub_1424E2A2C)(v23 - v23, v18);
  do
    v25 = 126;
  while ( ((unsigned __int64)&v25 & result) != 0 );
  return result;
}

