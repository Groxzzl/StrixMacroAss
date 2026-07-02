// sub_140020400 @ 0x140020400
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140020400(__int64 a1, __int64 a2, char *a3, __int64 *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  int v8; // [rsp+58h] [rbp+28h]

  if ( a2 == 0 )
    return sub_14001F72B(0, a1, 0, a3, a4);
  v8 = a2 - 1;
  v5 = sub_14001F72B(0, a1, (int)a2 - 1, a3, a4);
  v6 = v8;
  if ( (int)v5 <= v8 )
    v6 = v5;
  *(_BYTE *)((int)v6 + a1) = 0;
  return v5;
}

