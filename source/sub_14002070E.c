// sub_14002070E @ 0x14002070E
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14002070E(__int64 a1, const CHAR *a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  UINT CodePage; // r8d
  _DWORD *v6; // rax
  __int16 v8; // [rsp+36h] [rbp-Ah] BYREF
  int v9[2]; // [rsp+38h] [rbp-8h]

  v8 = 0;
  if ( a1 != 0 )
    *(_QWORD *)v9 = a1;
  else
    *(_QWORD *)v9 = &v8;
  v4 = __mb_cur_max_func();
  CodePage = __lc_codepage_func();
  if ( a4 != nullptr )
    v6 = a4;
  else
    v6 = &unk_142451480;
  return (int)sub_140020540(*(WCHAR **)v9, a2, a3, v6, CodePage, v4);
}

