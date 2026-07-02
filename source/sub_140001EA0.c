// sub_140001EA0 @ 0x140001EA0
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_140001EA0(void *a1, _DWORD *a2, int *a3, unsigned int *a4, size_t Size)
{
  int v8; // eax
  unsigned __int64 result; // rax
  __int64 v10; // rdi
  unsigned int v11; // edx
  int v12; // ebp
  int v13; // ecx
  size_t v14; // r12
  int v15; // r14d
  unsigned int v16; // eax
  int v17; // ebp
  signed int v18; // r10d
  _DWORD *v19; // r8
  __int64 v20; // rcx
  int v21; // r9d
  size_t v22; // rbx
  int v23; // r11d
  unsigned int v24; // r15d
  int v25; // r9d
  int v26; // r11d
  unsigned int v27; // edx
  signed int v28; // eax
  unsigned int v29; // ecx
  _DWORD *v30; // rax
  unsigned int v33; // eax
  char v34; // cl
  char v37; // r9
  char *v38; // r15
  unsigned int v39; // r15d
  _DWORD *v40; // r11
  size_t v41; // [rsp+38h] [rbp-60h]
  __int64 v42[10]; // [rsp+48h] [rbp-50h] BYREF
  char *v44; // [rsp+B8h] [rbp+20h]

  if ( Size > 7 )
  {
    v10 = (unsigned int)(*a2 + 1);
    memset(a1, 0, 2 * v10);
    v11 = *a4;
    result = -44;
    v12 = *a4 & 0xF;
    v13 = v12 + 5;
    if ( (unsigned int)(v12 + 5) <= 0xF )
    {
      v14 = (size_t)a4 + Size;
      *a3 = v13;
      v15 = 1 << v13;
      v16 = v11 >> 4;
      v17 = v12 + 6;
      v41 = (size_t)a4 + Size - 4;
      v18 = (1 << v13) + 1;
      v19 = a4;
      v20 = 0;
      v44 = (char *)a4;
      v21 = 4;
      v22 = (size_t)a4 + Size - 7;
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = v16 & (v15 - 1);
          v24 = 2 * v15 - v18 - 1;
          if ( v23 >= v24 )
          {
            v23 = v16 & (2 * v15 - 1);
            if ( v23 >= v15 )
              v23 -= v24;
            v25 = v17 + v21;
          }
          else
          {
            v25 = v21 + v17 - 1;
          }
          v26 = v23 - 1;
          v27 = v20 + 1;
          v28 = v18 - v26;
          v18 += v26;
          *((_WORD *)a1 + v20) = v26;
          if ( v26 >= 0 )
            v18 = v28;
          if ( v18 < v15 )
          {
            if ( v18 <= 1 )
              goto LABEL_37;
            _BitScanReverse(&v29, v18);
            v17 = v29 + 1;
            v15 = 1 << v29;
          }
          if ( v27 >= (unsigned int)v10 )
          {
LABEL_37:
            v38 = v44;
            goto LABEL_38;
          }
          v30 = (_DWORD *)((char *)v19 + (v25 >> 3));
          if ( v22 >= (unsigned __int64)v19 || v41 >= (unsigned __int64)v30 )
          {
            v21 = v25 & 7;
            v19 = v30;
          }
          else
          {
            v37 = v25 + 8 * ((_BYTE)v19 - v41);
            v19 = (_DWORD *)v41;
            v21 = v37 & 0x1F;
          }
          v16 = *v19 >> v21;
          if ( v26 == 0 )
            break;
          v20 = v27;
        }
        _R15D = ~v16 | 0x80000000;
        __asm { tzcnt   r15d, r15d }
        if ( _R15D > 0x17 )
        {
          while ( 1 )
          {
            v27 += 36;
            if ( v22 < (unsigned __int64)v19 )
            {
              v40 = (_DWORD *)v41;
              v33 = *(_DWORD *)(v14 - 4);
              v34 = v21 + 8 * ((_BYTE)v19 - v22);
              v21 = v34 & 0x1F;
            }
            else
            {
              v33 = *(_DWORD *)((char *)v19 + 3);
              v40 = (_DWORD *)((char *)v19 + 3);
              v34 = v21;
            }
            v16 = v33 >> v34;
            _R15D = ~v16 | 0x80000000;
            __asm { tzcnt   r15d, r15d }
            if ( _R15D <= 0x17 )
              break;
            v19 = v40;
          }
          v39 = _R15D >> 1;
        }
        else
        {
          v39 = _R15D >> 1;
          v40 = v19;
        }
        v25 = v21 + 2 * v39 + 2;
        v27 += 3 * v39 + ((v16 >> (2 * v39)) & 3);
        if ( v27 >= (unsigned int)v10 )
          break;
        v19 = (_DWORD *)((char *)v40 + (v25 >> 3));
        if ( v22 >= (unsigned __int64)v40 || v14 - 4 >= (unsigned __int64)v19 )
        {
          v21 = v25 & 7;
        }
        else
        {
          v19 = (_DWORD *)(v14 - 4);
          v21 = ((_BYTE)v25 + 8 * ((_BYTE)v40 - ((_BYTE)v14 - 4))) & 0x1F;
        }
        v16 = *v19 >> v21;
        v20 = v27;
      }
      v38 = v44;
      v19 = v40;
LABEL_38:
      result = -20;
      if ( v18 == 1 )
      {
        result = -48;
        if ( (unsigned int)v10 >= v27 )
        {
          result = -20;
          if ( v25 <= 32 )
          {
            *a2 = v27 - 1;
            return (char *)v19 + ((v25 + 7) >> 3) - v38;
          }
        }
      }
    }
  }
  else
  {
    v42[0] = 0;
    v8 = (unsigned int)memcpy(v42, a4, Size);
    result = sub_140001EA0((int)a1, (int)a2, (int)a3, v8, 8u);
    if ( result <= 0xFFFFFFFFFFFFFF88uLL && Size < result )
      return -20;
  }
  return result;
}

