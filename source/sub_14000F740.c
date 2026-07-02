// sub_14000F740 @ 0x14000F740
#include <stdint.h>
#include <windows.h>

// positive sp value has been detected, the output may be wrong!
wchar_t *__fastcall sub_14000F740(const WCHAR *a1)
{
  DWORD v1; // edx
  wchar_t *result; // rax
  WCHAR v3[32772]; // [rsp+20h] [rbp-10008h] BYREF

  v3[0] = 0;
  v1 = GetEnvironmentVariableW(a1, v3, 0x10000u) - 1;
  result = nullptr;
  if ( v1 <= 0xFFFF )
    return wcsdup(v3);
  return result;
}

