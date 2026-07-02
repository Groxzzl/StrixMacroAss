// sub_1424E2A2C @ 0x1424E2A2C
#include <stdint.h>
#include <windows.h>

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1424E2A2C()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // [rsp-12h] [rbp-1Ch] BYREF
  _BYTE v8[10]; // [rsp-Ah] [rbp-14h] BYREF
  _BYTE v9[10]; // [rsp+0h] [rbp-Ah] BYREF
  __int64 savedregs; // [rsp+Ah] [rbp+0h] BYREF

  v3 = sub_1424E29EE();
  do
  {
    v1 -= 16;
LABEL_3:
    v1 -= 31279;
    do
    {
      if ( (v3 & (unsigned __int64)v8) != 0 )
        goto LABEL_3;
      do
      {
        v5 = (__int64)&savedregs;
        v7 = -33;
LABEL_6:
        ;
      }
      while ( v3 != 0 || (v0 & (unsigned __int64)&v7) != 0 );
    }
    while ( ((unsigned __int64)&savedregs & v4) != 0 );
  }
  while ( ((unsigned __int64)&savedregs & (unsigned __int64)v9) != 0 );
  v1 += 122;
  do
  {
    if ( ((unsigned __int64)v9 & v5) != 0 )
      goto LABEL_6;
    v4 -= 29228;
    v5 += 41;
    v3 = 0x1428E2CE7LL;
    do
    {
      v0 += 35;
      v1 += 66;
      LOWORD(v3) = v1;
      v2 -= 19;
      if ( (v4 & v5) != 0 )
        goto LABEL_6;
      *(_QWORD *)&v8[2] = 115;
      if ( (v0 & v1) != 0 )
        goto LABEL_6;
      v5 = 0x1428E41EELL;
    }
    while ( v3 != 0 );
    BYTE1(v5) = -114;
    v4 = 0x1428E3707LL;
  }
  while ( (v2 & 0x1428E3707LL) != 0 );
  ((void (__fastcall *)(char *, __int64))sub_1424E291D)((char *)&v7 + 2, v5);
  return sub_1424E29EE();
}

