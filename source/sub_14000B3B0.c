// sub_14000B3B0 @ 0x14000B3B0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000B3B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // cf
  __m128i si128; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx

  result = a1;
  if ( a2 != 0 )
    *(_DWORD *)(a1 + 29676) = *(_QWORD *)(a1 + 29400) != *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16);
  v3 = *(_DWORD *)(a1 + 29576) == 0;
  *(_QWORD *)(a1 + 29456) = 0;
  *(_OWORD *)(a1 + 29376) = 0;
  *(_OWORD *)(a1 + 29392) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_142423170);
  *(_DWORD *)(a1 + 10296) = 201326604;
  *(_QWORD *)(a1 + 29408) = v3 ? 5LL : 1LL;
  *(_QWORD *)(a1 + 26684) = 0x400000001LL;
  *(_QWORD *)a1 = a1 + 32;
  *(_QWORD *)(a1 + 8) = a1 + 6192;
  *(_QWORD *)(a1 + 16) = a1 + 4136;
  *(_DWORD *)(a1 + 29672) = 0;
  *(_DWORD *)(a1 + 26692) = 8;
  *(_QWORD *)(a1 + 24) = a1 + 10296;
  *(__m128i *)(a1 + 29464) = si128;
  if ( a2 != 0 )
  {
    *(_DWORD *)(a1 + 29672) = *(_DWORD *)(a2 + 27316);
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(result + 29384) = v5;
    *(_QWORD *)(result + 29392) = v5;
    v6 = *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16);
    *(_QWORD *)(result + 29400) = v6;
    *(_QWORD *)(result + 29376) = v6;
    if ( *(_DWORD *)(a2 + 27320) != 0 )
    {
      *(_QWORD *)(result + 29472) = 0x100000001LL;
      *(_QWORD *)result = a2 + 24;
      *(_QWORD *)(result + 8) = a2 + 6184;
      *(_QWORD *)(result + 16) = a2 + 4128;
      *(_QWORD *)(result + 24) = a2 + 10288;
      *(_DWORD *)(result + 26684) = *(_DWORD *)(a2 + 26676);
      *(_DWORD *)(result + 26688) = *(_DWORD *)(a2 + 26680);
      *(_DWORD *)(result + 26692) = *(_DWORD *)(a2 + 26684);
    }
  }
  return result;
}

