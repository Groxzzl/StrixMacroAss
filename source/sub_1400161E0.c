// sub_1400161E0 @ 0x1400161E0
#include <stdint.h>
#include <windows.h>

__int64 sub_1400161E0()
{
  struct _STARTUPINFOW StartupInfo; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v2; // [rsp+88h] [rbp-18h]
  BOOL v3; // [rsp+90h] [rbp-10h]
  int wShowWindow; // [rsp+94h] [rbp-Ch]
  _WORD *v5; // [rsp+98h] [rbp-8h]

  v2 = 0x140000000uLL;
  v5 = *(_WORD **)sub_1400209C0();
  if ( v5 != nullptr )
  {
    v3 = false;
    while ( *v5 > 0x20u || *v5 != 0 && v3 )
    {
      if ( *v5 == 34 )
        v3 = !v3;
      ++v5;
    }
    while ( *v5 != 0 && *v5 <= 0x20u )
      ++v5;
  }
  else
  {
    v5 = &unk_142423F00;
  }
  GetStartupInfoW(&StartupInfo);
  if ( (StartupInfo.dwFlags & 1) != 0 )
    wShowWindow = StartupInfo.wShowWindow;
  else
    wShowWindow = 10;
  return sub_140014A80();
}

