// sub_14001C4B2 @ 0x14001C4B2
#include <stdint.h>
#include <windows.h>

void __fastcall sub_14001C4B2(unsigned int a1)
{
  __int32 v1; // [rsp+38h] [rbp-8h]
  int i; // [rsp+3Ch] [rbp-4h]

  if ( dword_142450AF0 == 2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&unk_142450AA0 + a1);
  }
  else
  {
    if ( dword_142450AF0 == 0 )
    {
      v1 = _InterlockedExchange(&dword_142450AF0, 1);
      if ( v1 != 0 )
      {
        if ( v1 == 2 )
          dword_142450AF0 = 2;
      }
      else
      {
        for ( i = 0; i <= 1; ++i )
          InitializeCriticalSection((LPCRITICAL_SECTION)&unk_142450AA0 + i);
        sub_1400015DE(sub_14001C440);
        dword_142450AF0 = 2;
      }
    }
    while ( dword_142450AF0 == 1 )
      Sleep(1u);
    if ( dword_142450AF0 == 2 )
      EnterCriticalSection((LPCRITICAL_SECTION)&unk_142450AA0 + a1);
  }
}

