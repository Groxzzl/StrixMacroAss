// sub_1400016D0 @ 0x1400016D0
#include <stdint.h>
#include <windows.h>

int sub_1400016D0()
{
  int result; // eax

  result = (int)qword_140022000;
  if ( qword_140022000 != nullptr )
    result = qword_140022000(&unk_142425000);
  if ( qword_142428020 != 0 )
    return FreeLibrary((HMODULE)qword_142428020);
  return result;
}

