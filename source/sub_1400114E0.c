// sub_1400114E0 @ 0x1400114E0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400114E0(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        size_t Size,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15)
{
  __int64 result; // rax
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v23; // rax
  _QWORD *v24; // r10
  __int64 v25; // r11
  __int64 v26; // [rsp+48h] [rbp-90h]
  int v27; // [rsp+5Ch] [rbp-7Ch] BYREF
  __int16 v28[60]; // [rsp+60h] [rbp-78h] BYREF
  int v31; // [rsp+F8h] [rbp+20h] BYREF

  v31 = a4;
  switch ( a3 )
  {
    case 2:
      v23 = sub_140001EA0(v28, &v31, &v27, a6, Size);
      if ( v23 > 0xFFFFFFFFFFFFFF88uLL || a5 < v27 )
      {
        return -20;
      }
      else
      {
        v26 = v23;
        if ( a15 != 0 )
        {
          sub_14000BB50((unsigned __int64 *)a1, v28, v31, a8, a9, v27, a14);
          v25 = a1;
          result = v26;
          v24 = a2;
        }
        else
        {
          sub_1400111A0((_QWORD *)a1, v28, v31, a8, a9, v27, a14);
          v24 = a2;
          result = v26;
          v25 = a1;
        }
        *v24 = v25;
      }
      break;
    case 3:
      result = -20;
      if ( a11 != 0 )
      {
        if ( a12 != 0 && a13 > 24 )
        {
          v20 = *a2;
          v21 = 2056;
          if ( a5 != 8 )
            v21 = 4104;
          for ( i = 0; i < v21; i += 64LL )
            _mm_prefetch((const char *)(v20 + i), 2);
        }
        return 0;
      }
      break;
    case 1:
      result = -72;
      if ( Size != 0 )
      {
        v18 = *(unsigned __int8 *)a6;
        result = -20;
        if ( a4 >= (unsigned int)v18 )
        {
          v19 = *(_DWORD *)(a9 + 4 * v18);
          *(_DWORD *)(a1 + 12) = *(_DWORD *)(a8 + 4 * v18);
          result = 1;
          *(_QWORD *)a1 = 0;
          *(_BYTE *)(a1 + 11) = 0;
          *(_WORD *)(a1 + 8) = 0;
          *(_BYTE *)(a1 + 10) = v19;
          *a2 = a1;
        }
      }
      break;
    default:
      *a2 = a10;
      return 0;
  }
  return result;
}

