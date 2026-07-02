// sub_140020CA0 @ 0x140020CA0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140020CA0(CHAR *a1, WCHAR a2)
{
  int v2; // ebx
  UINT v3; // eax
  char v5; // [rsp+23h] [rbp-Dh] BYREF
  CHAR *v6; // [rsp+28h] [rbp-8h]

  if ( a1 != nullptr )
    v6 = a1;
  else
    v6 = &v5;
  v2 = __mb_cur_max_func();
  v3 = __lc_codepage_func();
  return (int)sub_140020BE0(v6, a2, v3, v2);
}

