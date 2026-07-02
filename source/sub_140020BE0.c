// sub_140020BE0 @ 0x140020BE0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140020BE0(CHAR *lpMultiByteStr, WCHAR a2, UINT a3, int a4)
{
  BOOL UsedDefaultChar; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v6; // [rsp+4Ch] [rbp-4h]
  WCHAR WideCharStr; // [rsp+68h] [rbp+18h] BYREF
  UINT CodePage; // [rsp+70h] [rbp+20h]
  int cbMultiByte; // [rsp+78h] [rbp+28h]

  CodePage = a3;
  cbMultiByte = a4;
  WideCharStr = a2;
  if ( a3 != 0 )
  {
    UsedDefaultChar = false;
    v6 = WideCharToMultiByte(CodePage, 0, &WideCharStr, 1, lpMultiByteStr, cbMultiByte, nullptr, &UsedDefaultChar);
    if ( v6 != 0 && !UsedDefaultChar )
    {
      return v6;
    }
    else
    {
      *errno() = 42;
      return 0xFFFFFFFFLL;
    }
  }
  else if ( WideCharStr <= 0xFFu )
  {
    *lpMultiByteStr = WideCharStr;
    return 1;
  }
  else
  {
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
}

