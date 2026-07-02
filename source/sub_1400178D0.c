// sub_1400178D0 @ 0x1400178D0
#include <stdint.h>
#include <windows.h>

__int64 sub_1400178D0(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+38h] BYREF

  va_start(va, a3);
  return (unsigned int)sub_140017920(a1, a2, a3, (__int64 *)va);
}

