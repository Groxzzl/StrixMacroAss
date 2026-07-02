// sub_140020960 @ 0x140020960
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140020960(__int64 (**a1)(void), unsigned __int64 a2)
{
  unsigned int v3; // [rsp+24h] [rbp-Ch]

  while ( (unsigned __int64)a1 < a2 )
  {
    if ( *a1 != nullptr )
    {
      v3 = (*a1)();
      if ( v3 != 0 )
        return v3;
    }
    ++a1;
  }
  return 0;
}

