// sub_140020E70 @ 0x140020E70
#include <stdint.h>
#include <windows.h>

void __fastcall sub_140020E70(unsigned __int64 a1)
{
  FILE *v1; // rax
  int v2; // eax

  if ( a1 < (unsigned __int64)sub_140020A80(0) || (unsigned __int64)sub_140020A80(19) < a1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  }
  else
  {
    v1 = sub_140020A80(0);
    lock(-1431655765 * (unsigned int)((__int64)(a1 - (_QWORD)v1) >> 4) + 16);
    v2 = *(_DWORD *)(a1 + 24);
    BYTE1(v2) |= 0x80u;
    *(_DWORD *)(a1 + 24) = v2;
  }
}

