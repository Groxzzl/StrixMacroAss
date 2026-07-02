// sub_14001D740 @ 0x14001D740
#include <stdint.h>
#include <windows.h>

__int64 sub_14001D740(__int64 a1, const char *a2, ...)
{
  unsigned int v2; // ebx
  int v5; // [rsp+68h] [rbp+28h]
  va_list va; // [rsp+70h] [rbp+30h] BYREF

  va_start(va, a2);
  v5 = (int)a2;
  sub_140020E70(a1);
  v2 = sub_14001F72B(24576, a1, 0, v5, (__int64)va);
  sub_140020EFA(a1);
  return v2;
}

