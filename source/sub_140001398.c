// sub_140001398 @ 0x140001398
#include <stdint.h>
#include <windows.h>

_BOOL8 sub_140001398()
{
  int v1; // eax

  unk_1424509B4 = 1;
  unk_1424509B8 = 1;
  unk_1424509BC = 1;
  if ( MEMORY[0x140000000] != 23117 )
    return false;
  if ( *(_DWORD *)(MEMORY[0x14000003C] + 0x140000000LL) != 17744 )
    return false;
  v1 = *(unsigned __int16 *)(MEMORY[0x14000003C] + 0x140000018LL);
  if ( v1 == 267 )
  {
    return *(_DWORD *)(MEMORY[0x14000003C] + 0x140000074LL) > 0xEu
        && *(_DWORD *)(MEMORY[0x14000003C] + 0x1400000E8LL) != 0;
  }
  else if ( v1 == 523 )
  {
    return *(_DWORD *)(MEMORY[0x14000003C] + 0x140000084LL) > 0xEu
        && *(_DWORD *)(MEMORY[0x14000003C] + 0x1400000F8LL) != 0;
  }
  else
  {
    return false;
  }
}

