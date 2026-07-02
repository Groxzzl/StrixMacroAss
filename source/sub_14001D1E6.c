// sub_14001D1E6 @ 0x14001D1E6
#include <stdint.h>
#include <windows.h>

double __fastcall sub_14001D1E6(__int64 a1, _DWORD *a2)
{
  __int64 v3; // [rsp+20h] [rbp-30h]
  int v4; // [rsp+2Ch] [rbp-24h]
  int v5; // [rsp+2Ch] [rbp-24h]
  unsigned __int64 v6; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+3Ch] [rbp-14h]
  unsigned int v8; // [rsp+44h] [rbp-Ch]
  unsigned int *v9; // [rsp+48h] [rbp-8h]

  v6 = a1 + 24;
  v9 = (unsigned int *)(4LL * *(int *)(a1 + 20) + a1 + 24 - 4);
  HIDWORD(v7) = *v9;
  v4 = sub_14001C65D(*v9);
  *a2 = 32 - v4;
  if ( v4 > 10 )
  {
    if ( v6 >= (unsigned __int64)v9 )
      LODWORD(v7) = 0;
    else
      LODWORD(v7) = *--v9;
    v5 = v4 - 11;
    if ( v5 != 0 )
    {
      HIDWORD(v3) = (HIDWORD(v7) << v5) | ((unsigned int)v7 >> (32 - v5)) | 0x3FF00000;
      if ( v6 >= (unsigned __int64)v9 )
        HIDWORD(v7) = 0;
      else
        HIDWORD(v7) = *(v9 - 1);
      LODWORD(v3) = ((_DWORD)v7 << v5) | (HIDWORD(v7) >> (32 - v5));
    }
    else
    {
      v3 = v7 | 0x3FF0000000000000LL;
    }
  }
  else
  {
    HIDWORD(v3) = (HIDWORD(v7) >> (11 - v4)) | 0x3FF00000;
    if ( v6 >= (unsigned __int64)v9 )
      v8 = 0;
    else
      v8 = *(v9 - 1);
    LODWORD(v3) = (HIDWORD(v7) << (v4 + 21)) | (v8 >> (11 - v4));
  }
  return *(double *)&v3;
}

