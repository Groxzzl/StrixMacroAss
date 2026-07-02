// sub_140020794 @ 0x140020794
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_140020794(WCHAR *a1, const CHAR **a2, unsigned __int64 a3, __int64 a4)
{
  WCHAR v5[3]; // [rsp+3Eh] [rbp-22h] BYREF
  UINT CodePage; // [rsp+44h] [rbp-1Ch]
  int v7[2]; // [rsp+48h] [rbp-18h]
  unsigned __int64 v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+5Ch] [rbp-4h]

  v9 = 0;
  v8 = 0;
  if ( a4 != 0 )
    *(_QWORD *)v7 = a4;
  else
    *(_QWORD *)v7 = &unk_142451484;
  CodePage = __lc_codepage_func();
  *(_DWORD *)&v5[1] = __mb_cur_max_func();
  if ( a2 == nullptr || *a2 == nullptr )
    return 0;
  if ( a1 != nullptr )
  {
    while ( v8 < a3 )
    {
      v9 = sub_140020540(a1, *a2, a3 - v8, *(_DWORD **)v7, CodePage, *(unsigned int *)&v5[1]);
      if ( v9 <= 0 )
        break;
      ++a1;
      *a2 += v9;
      v8 += v9;
    }
    if ( v8 < a3 && v9 == 0 )
      *a2 = nullptr;
  }
  else
  {
    v5[0] = 0;
    while ( 1 )
    {
      v9 = sub_140020540(v5, &(*a2)[v8], *(unsigned int *)&v5[1], *(_DWORD **)v7, CodePage, *(unsigned int *)&v5[1]);
      if ( v9 <= 0 )
        break;
      v8 += v9;
    }
  }
  return v8;
}

