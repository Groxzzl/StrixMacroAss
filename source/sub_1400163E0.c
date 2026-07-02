// sub_1400163E0 @ 0x1400163E0
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_1400163E0(__int64 a1)
{
  int v1; // eax
  double v2; // xmm8_8
  double v3; // xmm7_8
  double v4; // xmm6_8
  const char *v5; // rbx
  FILE *v6; // rax
  const char *v8; // [rsp+48h] [rbp-8h]

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 6 )
  {
    v8 = "Partial loss of significance (PLOSS)";
  }
  else
  {
    if ( v1 > 6 )
      goto LABEL_16;
    if ( v1 == 5 )
    {
      v8 = "Total loss of significance (TLOSS)";
      goto LABEL_17;
    }
    if ( v1 > 5 )
    {
LABEL_16:
      v8 = "Unknown error";
      goto LABEL_17;
    }
    switch ( v1 )
    {
      case 4:
        v8 = "The result is too small to be represented (UNDERFLOW)";
        break;
      case 3:
        v8 = "Overflow range error (OVERFLOW)";
        break;
      case 1:
        v8 = "Argument domain error (DOMAIN)";
        break;
      case 2:
        v8 = "Argument singularity (SIGN)";
        break;
      default:
        goto LABEL_16;
    }
  }
LABEL_17:
  v2 = *(double *)(a1 + 32);
  v3 = *(double *)(a1 + 24);
  v4 = *(double *)(a1 + 16);
  v5 = *(const char **)(a1 + 8);
  v6 = (FILE *)sub_140020A80(2);
  fprintf(v6, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", v8, v5, v4, v3, v2);
  return 0;
}

