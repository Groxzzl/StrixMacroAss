// sub_14000149C @ 0x14000149C
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000149C(int a1, __int64 *a2)
{
  size_t Size; // [rsp+20h] [rbp-20h]
  __int64 v4; // [rsp+28h] [rbp-18h]
  _QWORD *v5; // [rsp+30h] [rbp-10h]
  int i; // [rsp+3Ch] [rbp-4h]

  v5 = malloc(8LL * (a1 + 1));
  if ( v5 == nullptr )
    return 1;
  v4 = *a2;
  for ( i = 0; i < a1; ++i )
  {
    Size = 2 * (wcslen(*(const wchar_t **)(8LL * i + v4)) + 1);
    v5[i] = malloc(Size);
    if ( v5[i] == 0 )
      return 1;
    memcpy((void *)v5[i], *(const void **)(8LL * i + v4), Size);
  }
  v5[i] = 0;
  *a2 = (__int64)v5;
  return 0;
}

