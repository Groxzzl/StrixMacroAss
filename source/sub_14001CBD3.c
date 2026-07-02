// sub_14001CBD3 @ 0x14001CBD3
#include <stdint.h>
#include <windows.h>

int *__fastcall sub_14001CBD3(int *a1, int a2)
{
  int *v3; // [rsp+20h] [rbp-20h]
  _QWORD *v4; // [rsp+30h] [rbp-10h]
  _DWORD *v5; // [rsp+38h] [rbp-8h]
  int *v6; // [rsp+50h] [rbp+10h]
  int v8; // [rsp+58h] [rbp+18h]

  v6 = a1;
  if ( (a2 & 3) != 0 )
  {
    v6 = sub_14001C839(a1, dword_140022098[(a2 & 3) - 1], 0);
    if ( v6 == nullptr )
      return nullptr;
  }
  v8 = a2 >> 2;
  if ( v8 == 0 )
    return v6;
  v5 = (_DWORD *)qword_142451460;
  if ( qword_142451460 != 0 )
    goto LABEL_12;
  sub_14001C4B2(1u);
  v5 = (_DWORD *)qword_142451460;
  if ( qword_142451460 == 0 )
  {
    qword_142451460 = (__int64)sub_14001C967(625);
    v5 = (_DWORD *)qword_142451460;
    if ( qword_142451460 == 0 )
      return nullptr;
    *(_QWORD *)qword_142451460 = 0;
  }
  sub_14001C5E4(1u);
  while ( 1 )
  {
LABEL_12:
    if ( (v8 & 1) != 0 )
    {
      v3 = sub_14001C9AD(v6, v5);
      if ( v3 == nullptr )
        return nullptr;
      sub_14001C7AE(v6);
      v6 = v3;
    }
    v8 >>= 1;
    if ( v8 == 0 )
      break;
    v4 = *(_QWORD **)v5;
    if ( *(_QWORD *)v5 == 0 )
    {
      sub_14001C4B2(1u);
      v4 = *(_QWORD **)v5;
      if ( *(_QWORD *)v5 == 0 )
      {
        *(_QWORD *)v5 = sub_14001C9AD(v5, v5);
        v4 = *(_QWORD **)v5;
        if ( *(_QWORD *)v5 == 0 )
          return nullptr;
        *v4 = 0;
      }
      sub_14001C5E4(1u);
    }
    v5 = v4;
  }
  return v6;
}

