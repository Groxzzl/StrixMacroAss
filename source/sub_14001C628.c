// sub_14001C628 @ 0x14001C628
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001C628(int *a1)
{
  __int64 result; // rax

  _EAX = *a1;
  __asm { tzcnt   eax, eax }
  *a1 = (unsigned int)*a1 >> result;
  return (unsigned int)result;
}

