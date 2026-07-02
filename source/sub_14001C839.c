// sub_14001C839 @ 0x14001C839
#include <stdint.h>
#include <windows.h>

int *__fastcall sub_14001C839(_DWORD *a1, int a2, int a3)
{
  unsigned int *v3; // rax
  int *v5; // [rsp+20h] [rbp-30h]
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]
  int v7; // [rsp+34h] [rbp-1Ch]
  unsigned __int64 v8; // [rsp+38h] [rbp-18h]
  unsigned int *v9; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+4Ch] [rbp-4h]
  int *v11; // [rsp+60h] [rbp+10h]

  v11 = a1;
  v7 = a1[5];
  v9 = a1 + 6;
  v10 = 0;
  v8 = a3;
  do
  {
    v6 = a2 * (unsigned __int64)*v9 + v8;
    v8 = HIDWORD(v6);
    v3 = v9++;
    *v3 = v6;
    ++v10;
  }
  while ( v10 < v7 );
  if ( v8 != 0 )
  {
    if ( v7 >= a1[3] )
    {
      v5 = sub_14001C66D(a1[2] + 1);
      if ( v5 == nullptr )
        return nullptr;
      memcpy(v5 + 4, v11 + 4, 4 * (v11[5] + 2LL));
      sub_14001C7AE(v11);
      v11 = v5;
    }
    v11[v7 + 6] = HIDWORD(v6);
    v11[5] = v7 + 1;
  }
  return v11;
}

