// sub_14001693B @ 0x14001693B
#include <stdint.h>
#include <windows.h>

void *__fastcall sub_14001693B(void *a1, const void *a2, size_t a3)
{
  void *result; // rax

  if ( a3 != 0 )
  {
    sub_140016585(a1);
    return memcpy(a1, a2, a3);
  }
  return result;
}

