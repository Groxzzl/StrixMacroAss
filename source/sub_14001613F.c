// sub_14001613F @ 0x14001613F
#include <stdint.h>
#include <windows.h>

int sub_14001613F()
{
  int j; // [rsp+28h] [rbp-8h]
  int i; // [rsp+2Ch] [rbp-4h]

  for ( i = 0; qword_142424880[i + 1] != nullptr; ++i )
    ;
  for ( j = i; j != 0; --j )
    qword_142424880[j]();
  return sub_1400015DE((void (__cdecl *)())sub_140016100);
}

