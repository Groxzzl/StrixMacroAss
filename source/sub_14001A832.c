// sub_14001A832 @ 0x14001A832
#include <stdint.h>
#include <windows.h>

unsigned int *__fastcall sub_14001A832(_BYTE *a1, unsigned int **a2, int a3)
{
  _BYTE *v3; // rax
  unsigned int *v5; // [rsp+20h] [rbp-10h]
  unsigned int *i; // [rsp+28h] [rbp-8h]

  v5 = sub_14001A7E0(a3);
  for ( i = v5; ; i = (unsigned int *)((char *)i + 1) )
  {
    v3 = a1++;
    *(_BYTE *)i = *v3;
    if ( *(_BYTE *)i == 0 )
      break;
  }
  if ( a2 != nullptr )
    *a2 = i;
  return v5;
}

