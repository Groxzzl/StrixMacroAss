// sub_140017232 @ 0x140017232
#include <stdint.h>
#include <windows.h>

void sub_140017232()
{
  LPVOID Value; // [rsp+20h] [rbp-10h]
  __int64 i; // [rsp+28h] [rbp-8h]

  if ( dword_142450A48 != 0 )
  {
    EnterCriticalSection(&CriticalSection);
    for ( i = qword_142450A50; i != 0; i = *(_QWORD *)(i + 16) )
    {
      Value = TlsGetValue(*(_DWORD *)i);
      if ( GetLastError() == 0 && Value != nullptr )
        (*(void (__fastcall **)(LPVOID))(i + 8))(Value);
    }
    LeaveCriticalSection(&CriticalSection);
  }
}

