// sub_140017F31 @ 0x140017F31
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140017F31(wchar_t *a1, __int64 a2)
{
  signed int v2; // eax
  wchar_t *String; // [rsp+30h] [rbp+10h]

  String = a1;
  if ( a1 == nullptr )
    String = L"(null)";
  if ( *(int *)(a2 + 16) < 0 )
    v2 = wcslen(String);
  else
    v2 = sub_1400204A0(String, *(int *)(a2 + 16));
  return sub_140017D2F(String, v2, a2);
}

