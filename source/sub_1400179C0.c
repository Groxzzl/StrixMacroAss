// sub_1400179C0 @ 0x1400179C0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400179C0(wchar_t a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 8) & 0x4000) != 0 || *(_DWORD *)(a2 + 40) > *(_DWORD *)(a2 + 36) )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x2000) != 0 )
      fputwc(a1, *(FILE **)a2);
    else
      *(_WORD *)(*(_QWORD *)a2 + 2LL * *(int *)(a2 + 36)) = a1;
  }
  ++*(_DWORD *)(a2 + 36);
  return a2;
}

