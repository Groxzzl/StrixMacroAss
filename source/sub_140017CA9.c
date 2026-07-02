// sub_140017CA9 @ 0x140017CA9
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140017CA9(char *a1, __int64 a2)
{
  int v2; // eax
  char *Str; // [rsp+30h] [rbp+10h]

  Str = a1;
  if ( a1 == nullptr )
    Str = "(null)";
  if ( *(int *)(a2 + 16) < 0 )
    v2 = strlen(Str);
  else
    v2 = sub_1400204F0(Str, *(int *)(a2 + 16));
  return sub_140017A4B(Str, v2, a2);
}

