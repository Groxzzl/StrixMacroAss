// sub_1400174F5 @ 0x1400174F5
#include <stdint.h>
#include <windows.h>

char *__fastcall sub_1400174F5(const char *a1)
{
  __int64 v2; // [rsp+20h] [rbp-20h]
  unsigned int v3; // [rsp+34h] [rbp-Ch]
  char *Str1; // [rsp+38h] [rbp-8h]

  if ( strlen(a1) > 8 )
    return nullptr;
  if ( !sub_1400173E0(0x140000000LL) )
    return nullptr;
  v2 = MEMORY[0x14000003C] + 0x140000000LL;
  v3 = 0;
  Str1 = (char *)(*(unsigned __int16 *)(MEMORY[0x14000003C] + 0x140000014LL) + v2 + 24);
  while ( v3 < *(unsigned __int16 *)(v2 + 6) )
  {
    if ( strncmp(Str1, a1, 8u) == 0 )
      return Str1;
    ++v3;
    Str1 += 40;
  }
  return nullptr;
}

