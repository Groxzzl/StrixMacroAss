// sub_14001E4DB @ 0x14001E4DB
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001E4DB(__int64 a1)
{
  struct lconv *v1; // rax
  void *v2; // rsp
  char *v3; // rax
  __int64 result; // rax
  _BYTE v5[4]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v7; // [rsp+2Ch] [rbp-34h] BYREF
  __int16 v8; // [rsp+36h] [rbp-2Ah] BYREF
  char *v9; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-14h]
  char *v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+5Ch] [rbp-4h]

  if ( *(_DWORD *)(a1 + 20) == -3 )
  {
    v7 = 0;
    v1 = localeconv();
    v11 = sub_14002070E(&v8, v1->decimal_point, 16, &v7);
    if ( v11 > 0 )
      *(_WORD *)(a1 + 24) = v8;
    *(_DWORD *)(a1 + 20) = v11;
  }
  if ( *(_WORD *)(a1 + 24) == 0 )
    return sub_14001D7B0(46, a1);
  v13 = *(_DWORD *)(a1 + 20);
  v10 = v13 - 1LL;
  v2 = alloca(sub_140017890());
  v9 = v5;
  v6 = 0;
  v13 = sub_140020CA0(v5, *(unsigned __int16 *)(a1 + 24), &v6);
  if ( v13 <= 0 )
    return sub_14001D7B0(46, a1);
  v12 = v9;
  while ( 1 )
  {
    result = (unsigned int)v13--;
    if ( (int)result <= 0 )
      break;
    v3 = v12++;
    sub_14001D7B0(*v3, a1);
  }
  return result;
}

