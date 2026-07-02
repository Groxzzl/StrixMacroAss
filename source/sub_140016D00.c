// sub_140016D00 @ 0x140016D00
#include <stdint.h>
#include <windows.h>

__int64 sub_140016D00()
{
  __int64 result; // rax
  void *v1; // rsp
  char v2; // [rsp+20h] [rbp-10h] BYREF
  int v3; // [rsp+2Ch] [rbp-4h]

  result = (unsigned int)dword_1424509EC;
  if ( dword_1424509EC == 0 )
  {
    dword_1424509EC = 1;
    v3 = sub_14001760B();
    v1 = alloca(sub_140017890());
    qword_1424509E0 = (__int64)&v2;
    dword_1424509E8 = 0;
    sub_140016982(qword_142424880, (unsigned __int64)qword_142424880, 0x140000000LL);
    return sub_140016863();
  }
  return result;
}

