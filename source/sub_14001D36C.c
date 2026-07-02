// sub_14001D36C @ 0x14001D36C
#include <stdint.h>
#include <windows.h>

_DWORD *__fastcall sub_14001D36C(double a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rax
  int v5; // edx
  int v6; // ebx
  unsigned int v7; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+24h] [rbp-2Ch] BYREF
  double v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+34h] [rbp-1Ch]
  unsigned int *v11; // [rsp+38h] [rbp-18h]
  _DWORD *v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+48h] [rbp-8h]
  int v14; // [rsp+4Ch] [rbp-4h]

  v9 = a1;
  v12 = sub_14001C66D(1);
  if ( v12 == nullptr )
    return nullptr;
  v11 = v12 + 6;
  v7 = HIDWORD(v9) & 0xFFFFF;
  v9 = fabs(v9);
  v10 = HIDWORD(v9) >> 20;
  if ( HIDWORD(v9) >> 20 != 0 )
    v7 |= 0x100000u;
  v8 = LODWORD(v9);
  if ( LODWORD(v9) != 0 )
  {
    v13 = sub_14001C628((int *)&v8);
    if ( v13 != 0 )
    {
      *v11 = v8 | (v7 << (32 - v13));
      v7 >>= v13;
    }
    else
    {
      *v11 = v8;
    }
    v4 = v11 + 1;
    v11[1] = v7;
    if ( *v4 != 0 )
      v5 = 2;
    else
      v5 = 1;
    v12[5] = v5;
    v14 = v12[5];
  }
  else
  {
    v13 = sub_14001C628((int *)&v7);
    *v11 = v7;
    v12[5] = 1;
    v14 = v12[5];
    v13 += 32;
  }
  if ( v10 != 0 )
  {
    *a2 = v13 + v10 - 1075;
    *a3 = 53 - v13;
  }
  else
  {
    *a2 = v13 - 1074;
    v6 = 32 * v14;
    *a3 = v6 - sub_14001C65D(v11[v14 - 1]);
  }
  return v12;
}

