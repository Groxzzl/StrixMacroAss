// sub_140016DB0 @ 0x140016DB0
#include <stdint.h>
#include <windows.h>

__int64 (__fastcall *__fastcall sub_140016DB0(int a1, __int64 a2, double a3, double a4, __int64 a5))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  int v6; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+28h] [rbp-28h]
  double v8; // [rsp+30h] [rbp-20h]
  double v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]

  result = qword_1424509F0;
  if ( qword_1424509F0 != nullptr )
  {
    v6 = a1;
    v7 = a2;
    v8 = a3;
    v9 = a4;
    v10 = a5;
    return (__int64 (__fastcall *)(_QWORD))qword_1424509F0(&v6);
  }
  return result;
}

