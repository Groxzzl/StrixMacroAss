// sub_140003E60 @ 0x140003E60
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140003E60(
        _BYTE *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        unsigned __int64 a6,
        int *a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r10
  unsigned int *v9; // r11
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int8 *v13; // r9
  unsigned int v14; // r9d
  unsigned int v15; // esi
  __int64 v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // edx
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // [rsp+28h] [rbp-20h]
  _BYTE *v28; // [rsp+50h] [rbp+8h]

  v7 = -72;
  v8 = a2;
  v9 = a4;
  if ( a6 != 0 )
  {
    v10 = *a5;
    if ( v10 <= 0x7F )
    {
      if ( a6 >= v10 + 1 )
      {
        v27 = *a5;
        v28 = a1;
        v20 = sub_140002FB0(a1, (int *)(a5 + 1), v10, a7);
        v7 = v20;
        if ( v20 <= 0xFFFFFFFFFFFFFF88uLL )
        {
          v8 = a2;
          a1 = v28;
          v12 = v27;
          v9 = a4;
          *(_DWORD *)(a2 + 48) = 0;
          *(_OWORD *)a2 = 0;
          *(_OWORD *)(a2 + 16) = 0;
          *(_OWORD *)(a2 + 32) = 0;
          if ( v20 == 0 )
            return -20;
LABEL_7:
          v14 = 0;
          v15 = 0;
          v16 = 0;
          while ( 1 )
          {
            v17 = &a1[v16];
            v18 = (unsigned __int8)*v17;
            if ( (unsigned __int8)v18 > 0xBu )
              break;
            ++*(_DWORD *)(v8 + 4 * v18);
            v15 += 1 << *v17 >> 1;
            v16 = ++v14;
            if ( v14 >= v7 )
            {
              if ( v15 != 0 )
              {
                _BitScanReverse(&v21, v15);
                v22 = v21 + 1;
                if ( v22 <= 0xC )
                {
                  *v9 = v22;
                  v23 = (1 << v22) - v15;
                  _BitScanReverse((unsigned int *)&v24, v23);
                  if ( v23 == 1 << v24 )
                  {
                    v25 = (unsigned int)(v24 + 1);
                    a1[v7] = v25;
                    ++*(_DWORD *)(v8 + 4 * v25);
                    v26 = *(_DWORD *)(v8 + 4);
                    if ( v26 > 1 && (v26 & 1) == 0 )
                    {
                      *a3 = v7 + 1;
                      return v12 + 1;
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
    else if ( a6 >= (v10 >> 1) - 62 )
    {
      v7 = v10 - 127;
      v11 = 0;
      v12 = (v10 >> 1) - 63;
      do
      {
        v13 = &a5[((unsigned int)v11 >> 1) + 1];
        a1[v11] = *v13 >> 4;
        a1[v11 + 1] = *v13 & 0xF;
        v11 += 2LL;
      }
      while ( v11 < v7 );
      *(_DWORD *)(a2 + 48) = 0;
      *(_OWORD *)a2 = 0;
      *(_OWORD *)(a2 + 16) = 0;
      *(_OWORD *)(a2 + 32) = 0;
      goto LABEL_7;
    }
  }
  return v7;
}

