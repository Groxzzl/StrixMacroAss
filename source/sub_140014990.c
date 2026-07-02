// sub_140014990 @ 0x140014990
#include <stdint.h>
#include <windows.h>

void *__fastcall sub_140014990(char *a1, size_t Size)
{
  __m128i si128; // xmm6
  char v3; // di
  __int64 v5; // rdx
  char *v7; // r8
  void *v8; // rcx
  void *v9; // rax
  bool v10; // zf
  size_t v11; // rbx
  void *result; // rax

  si128 = _mm_load_si128((const __m128i *)&xmmword_142423ED0);
  v3 = 0;
  v5 = qword_142450960;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (char *)*(&Block + 1) - v5;
      if ( v7 != nullptr )
        break;
      while ( 1 )
      {
        v3 |= qword_142450940 < (unsigned __int64)qword_142450938;
        if ( v3 == 0 )
          break;
        v8 = qword_14244C8E8;
        *(__m128i *)(&Block + 1) = si128;
        if ( sub_140013760((__int64)v8) > 0xFFFFFFFFFFFFFF88uLL )
          goto LABEL_11;
        v9 = (void *)qword_142450960;
        v10 = *(&Block + 1) == (void *)qword_142450960;
        qword_142450960 = 0;
        v3 = v10;
        v5 = 0;
        *(&Block + 1) = v9;
        v7 = (char *)*(&Block + 1);
        if ( v7 != nullptr )
          goto LABEL_6;
      }
      if ( qword_142450940 != qword_142450938 )
LABEL_11:
        sub_140010D20("Error, couldn't decode attached data.");
    }
LABEL_6:
    v11 = (size_t)v7;
    if ( (unsigned __int64)v7 > Size )
      v11 = Size;
    result = memcpy(a1, (char *)Block + v5, v11);
    v5 = v11 + qword_142450960;
    qword_142450960 += v11;
    Size -= v11;
    if ( Size == 0 )
      return result;
    a1 += v11;
  }
}

