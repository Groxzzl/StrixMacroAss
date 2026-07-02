// sub_14001C255 @ 0x14001C255
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001C255(__int64 a1, int a2)
{
  int *v2; // rax
  int *v3; // rax
  _DWORD *v4; // rax
  int *v5; // rdx
  int *v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // [rsp+0h] [rbp-20h]
  int v9; // [rsp+Ch] [rbp-14h]
  int *v10; // [rsp+10h] [rbp-10h]
  __int64 v11; // [rsp+18h] [rbp-8h]
  int *v12; // [rsp+18h] [rbp-8h]
  _DWORD *v13; // [rsp+18h] [rbp-8h]
  char v14; // [rsp+38h] [rbp+18h]

  v10 = (int *)(a1 + 24);
  v11 = a1 + 24;
  if ( a2 >> 5 < *(_DWORD *)(a1 + 20) )
  {
    v8 = 4LL * *(int *)(a1 + 20) + v11;
    v12 = (int *)(4LL * (a2 >> 5) + v11);
    v14 = a2 & 0x1F;
    if ( (a2 & 0x1F) != 0 )
    {
      v2 = v12;
      v13 = v12 + 1;
      v9 = (unsigned int)*v2 >> v14;
      while ( (unsigned __int64)v13 < v8 )
      {
        v3 = v10++;
        *v3 = v9 | (*v13 << (32 - v14));
        v4 = v13++;
        v9 = *v4 >> v14;
      }
      *v10 = v9;
      if ( *v10 != 0 )
        ++v10;
    }
    else
    {
      while ( (unsigned __int64)v12 < v8 )
      {
        v5 = v12++;
        v6 = v10++;
        *v6 = *v5;
      }
    }
  }
  *(_DWORD *)(a1 + 20) = ((__int64)v10 - a1 - 24) >> 2;
  result = *(unsigned int *)(a1 + 20);
  if ( (_DWORD)result == 0 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    return a1;
  }
  return result;
}

