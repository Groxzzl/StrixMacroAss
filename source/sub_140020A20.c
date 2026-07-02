// sub_140020A20 @ 0x140020A20
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140020A20(__int64 a1)
{
  return _InterlockedExchange64(&qword_142451490, a1);
}

