// sub_14001C3B1 @ 0x14001C3B1
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001C3B1(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-18h]
  unsigned int v5; // [rsp+34h] [rbp-Ch]
  int *v6; // [rsp+38h] [rbp-8h]

  v5 = 0;
  v6 = (int *)(a1 + 24);
  v4 = 4LL * *(int *)(a1 + 20) + a1 + 24;
  v5 = 0;
  while ( (unsigned __int64)v6 < v4 && *v6 == 0 )
  {
    v5 += 32;
    ++v6;
  }
  if ( (unsigned __int64)v6 < v4 )
  {
    v3 = *v6;
    v1 = sub_14001C220(&v3);
    v5 += v1;
  }
  return v5;
}

