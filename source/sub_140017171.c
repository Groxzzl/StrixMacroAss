// sub_140017171 @ 0x140017171
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140017171(int a1)
{
  _QWORD *Block; // [rsp+20h] [rbp-10h]
  _QWORD *v3; // [rsp+28h] [rbp-8h]

  if ( dword_142450A48 == 0 )
    return 0;
  EnterCriticalSection(&CriticalSection);
  v3 = nullptr;
  for ( Block = (_QWORD *)qword_142450A50; Block != nullptr; Block = (_QWORD *)Block[2] )
  {
    if ( a1 == *(_DWORD *)Block )
    {
      if ( v3 != nullptr )
        v3[2] = Block[2];
      else
        qword_142450A50 = Block[2];
      free(Block);
      break;
    }
    v3 = Block;
  }
  LeaveCriticalSection(&CriticalSection);
  return 0;
}

