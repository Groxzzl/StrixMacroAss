// sub_140002D80 @ 0x140002D80
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140002D80(
        _BYTE *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r10
  _BYTE *v8; // r11
  size_t v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int8 *v12; // rcx
  unsigned int v13; // r9d
  unsigned int v14; // esi
  __int64 v15; // rax
  _BYTE *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  char v23; // cl
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // [rsp+28h] [rbp-190h]
  int v27[98]; // [rsp+30h] [rbp-188h] BYREF

  v6 = -72;
  v7 = a2;
  v8 = a1;
  if ( a6 != 0 )
  {
    v9 = *a5;
    if ( v9 <= 0x7F )
    {
      if ( a6 >= v9 + 1 )
      {
        v26 = *a5;
        v19 = sub_140002220(a1, (unsigned int *)(a5 + 1), v9, v27);
        v6 = v19;
        if ( v19 <= 0xFFFFFFFFFFFFFF88uLL )
        {
          v7 = a2;
          v8 = a1;
          v11 = v26;
          *(_DWORD *)(a2 + 48) = 0;
          *(_OWORD *)a2 = 0;
          *(_OWORD *)(a2 + 16) = 0;
          *(_OWORD *)(a2 + 32) = 0;
          if ( v19 == 0 )
            return -20;
LABEL_7:
          v13 = 0;
          v14 = 0;
          v15 = 0;
          while ( 1 )
          {
            v16 = &v8[v15];
            v17 = (unsigned __int8)*v16;
            if ( (unsigned __int8)v17 > 0xBu )
              break;
            ++*(_DWORD *)(v7 + 4 * v17);
            v14 += 1 << *v16 >> 1;
            v15 = ++v13;
            if ( v13 >= v6 )
            {
              if ( v14 != 0 )
              {
                _BitScanReverse(&v20, v14);
                v21 = v20 + 1;
                if ( v21 <= 0xC )
                {
                  *a4 = v21;
                  v22 = (1 << v21) - v14;
                  _BitScanReverse(&v21, v22);
                  if ( v22 == 1 << v23 )
                  {
                    v24 = v21 + 1;
                    v8[v6] = v24;
                    ++*(_DWORD *)(v7 + 4 * v24);
                    v25 = *(_DWORD *)(v7 + 4);
                    if ( v25 > 1 && (v25 & 1) == 0 )
                    {
                      *a3 = v6 + 1;
                      return v11 + 1;
                    }
                  }
                }
              }
              return -20;
            }
          }
          return -20;
        }
      }
    }
    else if ( a6 >= (v9 >> 1) - 62 )
    {
      v6 = v9 - 127;
      v10 = 0;
      v11 = (v9 >> 1) - 63;
      do
      {
        v12 = &a5[((unsigned int)v10 >> 1) + 1];
        v8[v10] = *v12 >> 4;
        v8[v10 + 1] = *v12 & 0xF;
        v10 += 2LL;
      }
      while ( v10 < v6 );
      *(_DWORD *)(a2 + 48) = 0;
      *(_OWORD *)a2 = 0;
      *(_OWORD *)(a2 + 16) = 0;
      *(_OWORD *)(a2 + 32) = 0;
      goto LABEL_7;
    }
  }
  return v6;
}

