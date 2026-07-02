// sub_1400172D1 @ 0x1400172D1
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400172D1(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // [rsp+20h] [rbp-10h]
  _QWORD *Block; // [rsp+28h] [rbp-8h]

  if ( a2 == 3 )
  {
    sub_140017232();
  }
  else if ( a2 <= 3 )
  {
    if ( a2 == 2 )
    {
      sub_1400173D0();
    }
    else if ( a2 != 0 )
    {
      if ( dword_142450A48 == 0 )
        InitializeCriticalSection(&CriticalSection);
      dword_142450A48 = 1;
    }
    else
    {
      sub_140017232();
      if ( dword_142450A48 == 1 )
      {
        for ( Block = (_QWORD *)qword_142450A50; Block != nullptr; Block = v3 )
        {
          v3 = (_QWORD *)Block[2];
          free(Block);
        }
        qword_142450A50 = 0;
        dword_142450A48 = 0;
        DeleteCriticalSection(&CriticalSection);
      }
    }
  }
  return 1;
}

