// sub_1400170D0 @ 0x1400170D0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400170D0(int a1, __int64 a2)
{
  _QWORD *v3; // [rsp+28h] [rbp-8h]

  if ( dword_142450A48 == 0 )
    return 0;
  v3 = calloc(1u, 0x18u);
  if ( v3 == nullptr )
    return 0xFFFFFFFFLL;
  *(_DWORD *)v3 = a1;
  v3[1] = a2;
  EnterCriticalSection(&CriticalSection);
  v3[2] = qword_142450A50;
  qword_142450A50 = (__int64)v3;
  LeaveCriticalSection(&CriticalSection);
  return 0;
}

