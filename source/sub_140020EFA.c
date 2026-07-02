// sub_140020EFA @ 0x140020EFA
#include <stdint.h>
#include <windows.h>

void __fastcall sub_140020EFA(unsigned __int64 a1)
{
  int v1; // eax
  FILE *v2; // rax

  if ( a1 < (unsigned __int64)sub_140020A80(0) || (unsigned __int64)sub_140020A80(19) < a1 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  }
  else
  {
    v1 = *(_DWORD *)(a1 + 24);
    BYTE1(v1) &= ~0x80u;
    *(_DWORD *)(a1 + 24) = v1;
    v2 = sub_140020A80(0);
    unlock(-1431655765 * (unsigned int)((__int64)(a1 - (_QWORD)v2) >> 4) + 16);
  }
}

