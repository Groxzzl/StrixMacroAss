// sub_1400208E9 @ 0x1400208E9
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400208E9(const CHAR *a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  UINT CodePage; // r8d
  _DWORD *v5; // rax
  int v7[4]; // [rsp+3Eh] [rbp-2h] BYREF

  LOWORD(v7[0]) = 0;
  v3 = __mb_cur_max_func();
  CodePage = __lc_codepage_func();
  if ( a3 != nullptr )
    v5 = a3;
  else
    v5 = &unk_142451488;
  return (int)sub_140020540((WCHAR *)v7, a1, a2, v5, CodePage, v3);
}

