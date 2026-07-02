// sub_14001D933 @ 0x14001D933
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001D933(char *a1, _DWORD *a2)
{
  int v2; // eax
  char *Str; // [rsp+30h] [rbp+10h]

  Str = a1;
  if ( a1 == nullptr )
    Str = "(null)";
  if ( (int)a2[4] < 0 )
    v2 = strlen(Str);
  else
    v2 = sub_1400204F0(Str, (int)a2[4]);
  return sub_14001D834(Str, v2, a2);
}

