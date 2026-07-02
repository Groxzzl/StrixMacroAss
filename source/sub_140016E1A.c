// sub_140016E1A @ 0x140016E1A
#include <stdint.h>
#include <windows.h>

void __fastcall sub_140016E1A(__int64 (__fastcall *a1)(_QWORD))
{
  qword_1424509F0 = a1;
  _setusermatherr((_UserMathErrorFunctionPointer)a1);
}

