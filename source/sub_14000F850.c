// sub_14000F850 @ 0x14000F850
#include <stdint.h>
#include <windows.h>

BOOL __fastcall sub_14000F850(char *a1, const WCHAR *a2)
{
  char *v2; // rsi
  char v4; // al
  WCHAR *v5; // r15
  _BYTE *v6; // r12
  __int64 v7; // rbx
  WCHAR *i; // rax
  char Source[2]; // [rsp+2Ah] [rbp-9Eh] BYREF
  wchar_t Dest; // [rsp+2Ch] [rbp-9Ch] BYREF
  WCHAR Name[76]; // [rsp+30h] [rbp-98h] BYREF

  v2 = a1;
  v4 = *a1;
  Name[0] = 0;
  v5 = Name;
  v6 = a1 + 40;
  if ( v4 != 0 )
  {
    do
    {
      Source[0] = v4;
      v7 = v6 - v2;
      Source[1] = 0;
      if ( mbstowcs(&Dest, Source, 2u) != 1 )
        goto LABEL_8;
      for ( i = v5; *i != 0; --v7 )
        ++i;
      if ( v7 == 0 )
LABEL_8:
        sub_140021196();
      *i = Dest;
      ++v2;
      ++v5;
      i[1] = 0;
      v4 = *v2;
    }
    while ( *v2 != 0 );
  }
  return SetEnvironmentVariableW(Name, a2);
}

