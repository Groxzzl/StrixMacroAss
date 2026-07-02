// sub_140017890 @ 0x140017890
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_140017890()
{
  unsigned __int64 v0; // rax
  char *v1; // rcx
  unsigned __int64 v3; // [rsp-8h] [rbp-10h]
  char v4; // [rsp+10h] [rbp+8h] BYREF

  v3 = v0;
  v1 = &v4;
  if ( v0 >= 0x1000 )
  {
    do
    {
      v1 -= 4096;
      *(_QWORD *)v1 = *(_QWORD *)v1;
      v0 -= 4096LL;
    }
    while ( v0 > 0x1000 );
  }
  *(_QWORD *)&v1[-v0] = *(_QWORD *)&v1[-v0];
  return v3;
}

