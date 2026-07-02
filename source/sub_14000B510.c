// sub_14000B510 @ 0x14000B510
#include <stdint.h>
#include <windows.h>

size_t __fastcall sub_14000B510(__int64 a1, unsigned __int64 *a2, __int64 a3, unsigned __int8 *a4, size_t Size)
{
  int v7; // edx
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  size_t result; // rax
  size_t v11; // r8
  size_t v12; // rax
  unsigned __int64 *v13; // [rsp+48h] [rbp+10h]

  v7 = *(_DWORD *)(a1 + 29468);
  if ( *(_DWORD *)(a1 + 29784) != 0 )
  {
    v13 = a2;
    v11 = a3 - *a2;
    if ( v7 == 7 )
      v11 = 0;
    result = sub_14000AA40(a1, *a2, v11, a4, Size);
    if ( result <= 0xFFFFFFFFFFFFFF88uLL )
    {
      *v13 += result;
      *(_DWORD *)(a1 + 29684) = 2;
      return 0;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 29736);
    v9 = v8 + *(_QWORD *)(a1 + 29720);
    if ( v7 != 7 )
    {
      result = sub_14000AA40(a1, v9, *(_QWORD *)(a1 + 29728) - v8, a4, Size);
      if ( result > 0xFFFFFFFFFFFFFF88uLL )
        return result;
      if ( result == 0 )
      {
        *(_DWORD *)(a1 + 29684) = 2;
        return 0;
      }
LABEL_12:
      v12 = *(_QWORD *)(a1 + 29736) + result;
      *(_DWORD *)(a1 + 29684) = 4;
      *(_QWORD *)(a1 + 29744) = v12;
      return 0;
    }
    result = sub_14000AA40(a1, v9, 0, a4, Size);
    if ( result <= 0xFFFFFFFFFFFFFF88uLL )
      goto LABEL_12;
  }
  return result;
}

