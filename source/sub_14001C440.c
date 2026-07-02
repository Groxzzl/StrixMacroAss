// sub_14001C440 @ 0x14001C440
#include <stdint.h>
#include <windows.h>

void sub_14001C440()
{
  int i; // [rsp+3Ch] [rbp-4h]

  if ( _InterlockedExchange(&dword_142450AF0, 3) == 2 )
  {
    for ( i = 0; i <= 1; ++i )
      DeleteCriticalSection((LPCRITICAL_SECTION)&unk_142450AA0 + i);
  }
}

