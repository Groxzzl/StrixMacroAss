// sub_140018FFB @ 0x140018FFB
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140018FFB(double *a1, __int64 a2)
{
  int v2; // edx
  int v3; // eax
  _TBYTE v5; // [rsp+20h] [rbp-30h] BYREF
  _TBYTE v6; // [rsp+30h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+44h] [rbp-Ch] BYREF
  char *v9; // [rsp+48h] [rbp-8h]

  *(double *)&v6 = *a1;
  if ( *(int *)(a2 + 16) < 0 )
    *(_DWORD *)(a2 + 16) = 6;
  v2 = *(_DWORD *)(a2 + 16);
  *(double *)&v5 = *(double *)&v6;
  v9 = (char *)sub_1400188A2((double *)&v5, v2, (__int64)&v7, &v8);
  if ( v7 == -32768 )
  {
    sub_1400189FE(v8, v9, a2);
  }
  else
  {
    sub_140018AE9(v8, v9, v7, a2);
    while ( 1 )
    {
      v3 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v3 - 1;
      if ( v3 <= 0 )
        break;
      sub_1400179C0(0x20u, a2);
    }
  }
  return sub_14001A89F(v9);
}

