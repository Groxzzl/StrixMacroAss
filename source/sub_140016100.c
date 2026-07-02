// sub_140016100 @ 0x140016100
#include <stdint.h>
#include <windows.h>

__int64 sub_140016100()
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *(_QWORD *)off_140022010;
    if ( *(_QWORD *)off_140022010 == 0 )
      break;
    (*(void (**)(void))off_140022010)();
    off_140022010 = (_UNKNOWN *)((char *)off_140022010 + 8);
  }
  return result;
}

