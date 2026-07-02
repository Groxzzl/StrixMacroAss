// sub_1400161B7 @ 0x1400161B7
#include <stdint.h>
#include <windows.h>

int sub_1400161B7()
{
  int result; // eax

  result = dword_142450980;
  if ( dword_142450980 == 0 )
  {
    dword_142450980 = 1;
    return sub_14001613F();
  }
  return result;
}

