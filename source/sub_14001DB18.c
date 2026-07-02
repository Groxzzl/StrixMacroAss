// sub_14001DB18 @ 0x14001DB18
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14001DB18(wchar_t *a1, _DWORD *a2)
{
  int v2; // eax
  wchar_t *String; // [rsp+30h] [rbp+10h]

  String = a1;
  if ( a1 == nullptr )
    String = L"(null)";
  if ( (int)a2[4] < 0 )
    v2 = wcslen(String);
  else
    v2 = sub_1400204A0(String, (int)a2[4]);
  return sub_14001D9B9(String, v2, a2);
}

