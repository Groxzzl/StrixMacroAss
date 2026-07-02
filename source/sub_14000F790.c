// sub_14000F790 @ 0x14000F790
#include <stdint.h>
#include <windows.h>

wchar_t *__fastcall sub_14000F790(char *a1)
{
  char *v1; // rsi
  char v2; // al
  WCHAR *v3; // rdi
  _BYTE *v4; // r13
  __int64 v5; // rbx
  WCHAR *i; // rax
  char Source[2]; // [rsp+2Ah] [rbp-8Eh] BYREF
  wchar_t Dest; // [rsp+2Ch] [rbp-8Ch] BYREF
  WCHAR v10[68]; // [rsp+30h] [rbp-88h] BYREF

  v1 = a1;
  v2 = *a1;
  v10[0] = 0;
  v3 = v10;
  v4 = a1 + 40;
  if ( v2 != 0 )
  {
    do
    {
      Source[0] = v2;
      v5 = v4 - v1;
      Source[1] = 0;
      if ( mbstowcs(&Dest, Source, 2u) != 1 )
        goto LABEL_8;
      for ( i = v3; *i != 0; --v5 )
        ++i;
      if ( v5 == 0 )
LABEL_8:
        sub_140021190();
      *i = Dest;
      ++v1;
      ++v3;
      i[1] = 0;
      v2 = *v1;
    }
    while ( *v1 != 0 );
  }
  return sub_14000F740(v10);
}

