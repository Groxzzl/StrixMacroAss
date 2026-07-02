// sub_140020CFF @ 0x140020CFF
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140020CFF(CHAR *a1, WCHAR **a2, unsigned __int64 a3)
{
  CHAR v4[5]; // [rsp+2Fh] [rbp-21h] BYREF
  int v5; // [rsp+34h] [rbp-1Ch]
  UINT v6; // [rsp+38h] [rbp-18h]
  int v7; // [rsp+3Ch] [rbp-14h]
  WCHAR *v8; // [rsp+40h] [rbp-10h]
  unsigned __int64 v9; // [rsp+48h] [rbp-8h]

  v7 = 0;
  v9 = 0;
  v6 = __lc_codepage_func();
  v5 = __mb_cur_max_func();
  v8 = *a2;
  if ( a2 == nullptr || *a2 == nullptr )
    return 0;
  if ( a1 != nullptr )
  {
    while ( v9 < a3 )
    {
      v7 = sub_140020BE0(a1, *v8, v6, v5);
      if ( v7 <= 0 )
        return -1;
      v9 += v7;
      a1 += v7;
      if ( *(a1 - 1) == 0 )
      {
        *a2 = nullptr;
        return v9 - 1;
      }
      ++v8;
    }
    *a2 = v8;
    return v9;
  }
  else
  {
    while ( 1 )
    {
      v7 = sub_140020BE0(v4, *v8, v6, v5);
      if ( v7 <= 0 )
        return -1;
      v9 += v7;
      if ( v4[v7 - 1] == 0 )
        break;
      ++v8;
    }
    return v9 - 1;
  }
}

