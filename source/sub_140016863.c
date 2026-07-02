// sub_140016863 @ 0x140016863
#include <stdint.h>
#include <windows.h>

__int64 sub_140016863()
{
  __int64 result; // rax
  DWORD flOldProtect; // [rsp+28h] [rbp-8h] BYREF
  int i; // [rsp+2Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    result = (unsigned int)dword_1424509E8;
    if ( i >= dword_1424509E8 )
      break;
    if ( *(_DWORD *)(qword_1424509E0 + 40LL * i) != 0 )
      VirtualProtect(
        *(LPVOID *)(qword_1424509E0 + 40LL * i + 8),
        *(_QWORD *)(qword_1424509E0 + 40LL * i + 16),
        *(_DWORD *)(qword_1424509E0 + 40LL * i),
        &flOldProtect);
  }
  return result;
}

