// sub_14000BE60 @ 0x14000BE60
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_14000BE60(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        size_t a4,
        char *a5,
        const __m128i **a6,
        __int64 a7,
        const __m128i *a8,
        __int64 a9,
        unsigned __int64 a10)
{
  unsigned __int64 v10; // rsi
  size_t v12; // rbx
  const __m128i *v13; // r8
  char *v14; // rdi
  unsigned __int64 v15; // rbp
  const __m128i *v16; // r10
  const void *v17; // rdx
  const __m128i *v19; // [rsp+30h] [rbp-38h]
  const __m128i *v20; // [rsp+38h] [rbp-30h]

  v10 = a3 + a4;
  v12 = a4;
  if ( a2 - a1 < a3 + a4 )
    return -70;
  v13 = *a6;
  if ( a7 - (__int64)*a6 >= a3 )
  {
    v14 = (char *)(a1 + a3);
    v15 = a2 - 32;
    v20 = (const __m128i *)((char *)v13 + a3);
    v19 = (const __m128i *)(a1 + a3 - (_QWORD)a5);
    sub_14000B600(a1, a2 - 32, v13, a3, 0);
    v16 = v19;
    *a6 = v20;
    if ( v14 - (char *)a8 >= (unsigned __int64)a5 )
      goto LABEL_7;
    if ( &v14[-a9] >= a5 )
    {
      v17 = (const void *)(a10 - ((char *)a8 - (char *)v19));
      if ( a10 >= (unsigned __int64)v17 + v12 )
      {
        memmove(v14, v17, v12);
        return v10;
      }
      memmove(v14, v17, (char *)a8 - (char *)v19);
      v16 = a8;
      v14 += (char *)a8 - (char *)v19;
      v12 -= (char *)a8 - (char *)v19;
LABEL_7:
      sub_14000B600((unsigned __int64)v14, v15, v16, v12, 1);
      return v10;
    }
  }
  return -20;
}

