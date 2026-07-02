// sub_1400177AC @ 0x1400177AC
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400177AC(int a1)
{
  unsigned int v2; // [rsp+34h] [rbp-1Ch]
  __int64 v3; // [rsp+48h] [rbp-8h]

  if ( !sub_1400173E0(0x140000000LL) )
    return 0;
  v2 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000090LL);
  if ( v2 == 0 )
    return 0;
  if ( sub_14001745C(0x140000000LL, v2) == 0 )
    return 0;
  v3 = v2 + 0x140000000LL;
  if ( v3 == 0 )
    return 0;
  while ( *(_DWORD *)(v3 + 4) != 0 || *(_DWORD *)(v3 + 12) != 0 )
  {
    if ( a1 <= 0 )
      return *(unsigned int *)(v3 + 12) + 0x140000000LL;
    --a1;
    v3 += 20;
  }
  return 0;
}

