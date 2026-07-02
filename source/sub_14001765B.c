// sub_14001765B @ 0x14001765B
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001765B(__int64 a1)
{
  unsigned int v2; // [rsp+34h] [rbp-Ch]
  __int64 v3; // [rsp+38h] [rbp-8h]

  if ( !sub_1400173E0(0x140000000LL) )
    return 0;
  v2 = 0;
  v3 = *(unsigned __int16 *)(MEMORY[0x14000003C] + 0x140000014LL) + MEMORY[0x14000003C] + 0x140000000LL + 24;
  while ( v2 < *(unsigned __int16 *)(MEMORY[0x14000003C] + 0x140000006LL) )
  {
    if ( (*(_DWORD *)(v3 + 36) & 0x20000000) != 0 )
    {
      if ( a1 == 0 )
        return v3;
      --a1;
    }
    ++v2;
    v3 += 40;
  }
  return 0;
}

