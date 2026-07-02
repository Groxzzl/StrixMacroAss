// sub_14001C7AE @ 0x14001C7AE
#include <stdint.h>
#include <windows.h>

void __fastcall sub_14001C7AE(int *a1)
{
  if ( a1 != nullptr )
  {
    if ( a1[2] <= 9 )
    {
      sub_14001C4B2(0);
      *(_QWORD *)a1 = qword_142450B00[a1[2]];
      qword_142450B00[a1[2]] = a1;
      sub_14001C5E4(0);
    }
    else
    {
      free(a1);
    }
  }
}

