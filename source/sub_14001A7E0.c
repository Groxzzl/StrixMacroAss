// sub_14001A7E0 @ 0x14001A7E0
#include <stdint.h>
#include <windows.h>

unsigned int *__fastcall sub_14001A7E0(int a1)
{
  unsigned int *v1; // rax
  unsigned int v3; // [rsp+28h] [rbp-8h]
  int v4; // [rsp+2Ch] [rbp-4h]

  v4 = 4;
  v3 = 0;
  while ( a1 > v4 + 23 )
  {
    ++v3;
    v4 *= 2;
  }
  v1 = (unsigned int *)sub_14001C66D(v3);
  *v1 = v3;
  return v1 + 1;
}

