// sub_140010F60 @ 0x140010F60
#include <stdint.h>
#include <windows.h>

// positive sp value has been detected, the output may be wrong!
wchar_t *sub_140010F60()
{
  wchar_t *v0; // rcx
  wchar_t *v1; // rdx
  wchar_t *v2; // r8
  wchar_t v3; // cx
  wchar_t *v4; // rax
  wchar_t *result; // rax
  wchar_t v6[4108]; // [rsp+20h] [rbp-2018h] BYREF

  sub_140017890();
  v1 = v0;
  v2 = v0 + 4096;
  memset(v6, 0, 0x2000u);
  v3 = *v0;
  v4 = v6;
  if ( v3 != 0 )
  {
    while ( 1 )
    {
      ++v1;
      *v4++ = v3;
      v3 = *v1;
      if ( *v1 == 0 )
        break;
      if ( v2 == v1 )
        abort();
    }
  }
  *v4 = 0;
  result = &v6[wcslen(v6)];
  if ( v6 < result )
  {
    while ( *result != 92 )
    {
      if ( v6 >= --result )
        return result;
    }
    *result = 0;
    result = (wchar_t *)sub_140010E20();
    if ( (_BYTE)result == 0 )
    {
      ((void (__fastcall *)(wchar_t *))sub_140010F60)(v6);
      return (wchar_t *)sub_140010E20();
    }
  }
  return result;
}

