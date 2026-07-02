// sub_140016982 @ 0x140016982
#include <stdint.h>
#include <windows.h>

_DWORD *__fastcall sub_140016982(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _DWORD *result; // rax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // [rsp+34h] [rbp-4Ch] BYREF
  signed __int64 v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  unsigned int v10; // [rsp+54h] [rbp-2Ch]
  const void **v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  _DWORD *i; // [rsp+68h] [rbp-18h]
  unsigned int *j; // [rsp+70h] [rbp-10h]
  _DWORD *v15; // [rsp+78h] [rbp-8h]

  v12 = a2 - (_QWORD)a1;
  result = a1;
  v15 = a1;
  if ( (__int64)(a2 - (_QWORD)a1) > 7 )
  {
    if ( v12 > 11 && *v15 == 0 && v15[1] == 0 && v15[2] == 0 )
      v15 += 3;
    if ( *v15 != 0 || v15[1] != 0 )
    {
      for ( i = v15; ; i += 2 )
      {
        result = i;
        if ( (unsigned __int64)i >= a2 )
          break;
        v12 = (unsigned int)i[1] + a3;
        v6 = *(_DWORD *)v12 + *i;
        sub_14001693B((void *)v12, &v6, 4u);
      }
    }
    else
    {
      if ( v15[2] != 1 )
        sub_140016520("  Unknown pseudo relocation protocol version %d.\n", v15[2]);
      for ( j = v15 + 3; ; j += 3 )
      {
        result = j;
        if ( (unsigned __int64)j >= a2 )
          break;
        v12 = j[1] + a3;
        v11 = (const void **)(*j + a3);
        v11 = (const void **)*v11;
        v4 = (unsigned __int8)j[2];
        if ( v4 == 64 )
        {
          v7 = *(_QWORD *)v12;
        }
        else
        {
          if ( v4 > 0x40 )
            goto LABEL_30;
          if ( v4 == 32 )
          {
            v7 = *(unsigned int *)v12;
            if ( (int)v7 < 0 )
              v7 |= 0xFFFFFFFF00000000uLL;
          }
          else
          {
            if ( v4 > 0x20 )
              goto LABEL_30;
            if ( v4 == 8 )
            {
              v7 = *(unsigned __int8 *)v12;
              if ( (v7 & 0x80) != 0 )
                v7 |= 0xFFFFFFFFFFFFFF00uLL;
            }
            else
            {
              if ( v4 != 16 )
              {
LABEL_30:
                v7 = 0;
                sub_140016520("  Unknown pseudo relocation bit size %d.\n", (unsigned __int8)j[2]);
              }
              v7 = *(unsigned __int16 *)v12;
              if ( (v7 & 0x8000) != 0 )
                v7 |= 0xFFFFFFFFFFFF0000uLL;
            }
          }
        }
        v7 -= a3 + *j;
        v7 += (signed __int64)v11;
        v10 = (unsigned __int8)j[2];
        if ( v10 <= 0x3F )
        {
          v9 = (1LL << v10) - 1;
          v8 = -1LL << ((unsigned __int8)v10 - 1);
          if ( v9 < v7 || v8 > v7 )
            sub_140016520(
              "%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n",
              v10,
              (const void *)v12,
              v11,
              (const void *)v7);
        }
        v5 = (unsigned __int8)j[2];
        if ( v5 == 64 )
        {
          sub_14001693B((void *)v12, &v7, 8u);
        }
        else if ( v5 <= 0x40 )
        {
          if ( v5 == 32 )
          {
            sub_14001693B((void *)v12, &v7, 4u);
          }
          else if ( v5 <= 0x20 )
          {
            if ( v5 == 8 )
            {
              sub_14001693B((void *)v12, &v7, 1u);
            }
            else if ( v5 == 16 )
            {
              sub_14001693B((void *)v12, &v7, 2u);
            }
          }
        }
      }
    }
  }
  return result;
}

