// sub_14001C66D @ 0x14001C66D
#include <stdint.h>
#include <windows.h>

_DWORD *__fastcall sub_14001C66D(int a1)
{
  unsigned int v2; // [rsp+20h] [rbp-10h]
  _DWORD *v3; // [rsp+28h] [rbp-8h]

  sub_14001C4B2(0);
  if ( a1 <= 9 && (v3 = (_DWORD *)qword_142450B00[a1]) != nullptr )
  {
    qword_142450B00[a1] = *(_QWORD *)v3;
  }
  else
  {
    v2 = (unsigned __int64)(4LL * ((1 << a1) - 1) + 39) >> 3;
    if ( a1 > 9 || ((off_140022090 - &unk_142450B60) >> 3) + (unsigned __int64)v2 > 0x120 )
    {
      v3 = malloc(8LL * v2);
      if ( v3 == nullptr )
        return nullptr;
    }
    else
    {
      v3 = off_140022090;
      off_140022090 = (_UNKNOWN *)((char *)off_140022090 + 8 * v2);
    }
    v3[2] = a1;
    v3[3] = 1 << a1;
  }
  sub_14001C5E4(0);
  v3[5] = 0;
  v3[4] = v3[5];
  return v3;
}

