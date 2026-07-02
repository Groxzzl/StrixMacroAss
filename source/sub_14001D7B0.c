// sub_14001D7B0 @ 0x14001D7B0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001D7B0(char a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 8) & 0x4000) != 0 || *(_DWORD *)(a2 + 40) > *(_DWORD *)(a2 + 36) )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x2000) != 0 )
      fputc(a1, *(FILE **)a2);
    else
      *(_BYTE *)(*(_QWORD *)a2 + *(int *)(a2 + 36)) = a1;
  }
  ++*(_DWORD *)(a2 + 36);
  return a2;
}

