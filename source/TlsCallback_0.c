// TlsCallback_0 @ 0x1400162E0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall TlsCallback_0(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  void (**i)(void); // [rsp+28h] [rbp-8h]

  result = dword_140022050[0];
  if ( dword_140022050[0] != 2 )
  {
    result = (__int64)dword_140022050;
    dword_140022050[0] = 2;
  }
  if ( a2 == 2 )
  {
    for ( i = (void (**)(void))&unk_1424248F0; ; ++i )
    {
      result = (__int64)&unk_1424248F0;
      if ( i == (void (**)(void))&unk_1424248F0 )
        break;
      if ( *i != nullptr )
        (*i)();
    }
  }
  else if ( a2 == 1 )
  {
    return sub_1400172D1(a1, 1, a3);
  }
  return result;
}

