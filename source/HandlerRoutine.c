// HandlerRoutine @ 0x140011180
#include <stdint.h>
#include <windows.h>

__int64 __fastcall HandlerRoutine(DWORD CtrlType)
{
  if ( CtrlType <= 2 || CtrlType - 5 <= 1 )
    sub_140011030();
  return 0;
}

