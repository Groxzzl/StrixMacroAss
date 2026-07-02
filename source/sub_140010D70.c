// sub_140010D70 @ 0x140010D70
#include <stdint.h>
#include <windows.h>

void __fastcall __noreturn sub_140010D70(const char *a1, DWORD a2)
{
  DWORD v4; // eax
  __int64 v5; // rax
  const char *v7; // rbx
  char v8; // cl
  __int64 v9; // rax
  CHAR Buffer[32]; // [rsp+48h] [rbp-20h] BYREF

  v4 = FormatMessageA(0x1300u, nullptr, a2, 0x409u, Buffer, 0, nullptr);
  if ( v4 != 0 )
  {
    v5 = v4 - 1;
    while ( 1 )
    {
      v7 = *(const char **)Buffer;
      v8 = *(_BYTE *)(*(_QWORD *)Buffer + v5);
      if ( v8 != 13 && v8 != 10 )
        break;
      *(_BYTE *)(*(_QWORD *)Buffer + v5) = 0;
      if ( v5-- == 0 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v7 = *(const char **)Buffer;
  }
  v9 = off_140022160();
  sub_14001D740(v9, "%s ([Error %ld] %s)\n", a1, a2, v7);
  exit(2);
}

