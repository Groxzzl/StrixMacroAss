// sub_1400203B0 @ 0x1400203B0
#include <stdint.h>
#include <windows.h>

__int64 sub_1400203B0(__int64 a1, __int64 a2, const char *a3, ...)
{
  va_list va; // [rsp+68h] [rbp+38h] BYREF

  va_start(va, a3);
  return (unsigned int)sub_140020400(a1, a2, a3, (__int64 *)va);
}

