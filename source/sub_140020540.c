// sub_140020540 @ 0x140020540
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140020540(
        WCHAR *lpWideCharStr,
        const CHAR *a2,
        unsigned __int64 a3,
        _DWORD *a4,
        UINT CodePage,
        unsigned int a6)
{
  CHAR MultiByteStr[4]; // [rsp+3Ch] [rbp-4h] BYREF

  if ( a2 == nullptr )
    return 0;
  if ( a3 == 0 )
    return 4294967294LL;
  *(_DWORD *)MultiByteStr = *a4;
  *a4 = 0;
  if ( *a2 == 0 )
  {
    *lpWideCharStr = 0;
    return 0;
  }
  if ( a6 <= 1 )
    goto LABEL_18;
  if ( MultiByteStr[0] == 0 )
  {
    if ( IsDBCSLeadByteEx(CodePage, *a2) )
    {
      if ( a3 <= 1 )
      {
        *(_BYTE *)a4 = *a2;
        return 4294967294LL;
      }
      if ( MultiByteToWideChar(CodePage, 8u, a2, 2, lpWideCharStr, 1) != 0 )
        return 2;
LABEL_16:
      *errno() = 42;
      return 0xFFFFFFFFLL;
    }
LABEL_18:
    if ( CodePage != 0 )
    {
      if ( MultiByteToWideChar(CodePage, 8u, a2, 1, lpWideCharStr, 1) == 0 )
        goto LABEL_16;
    }
    else
    {
      *lpWideCharStr = *(unsigned __int8 *)a2;
    }
    return 1;
  }
  MultiByteStr[1] = *a2;
  if ( MultiByteToWideChar(CodePage, 8u, MultiByteStr, 2, lpWideCharStr, 1) != 0 )
    return 2;
  *errno() = 42;
  return 0xFFFFFFFFLL;
}

