// sub_14000B600 @ 0x14000B600
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_14000B600(
        unsigned __int64 a1,
        unsigned __int64 a2,
        const __m128i *a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  const __m128i *v12; // r11
  _BYTE *v13; // rdx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // r11
  __int64 v18; // rsi
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r9
  _DWORD *v26; // r8
  unsigned __int64 v27; // rax
  const __m128i *v28; // rdx
  __m128i v29; // xmm3
  const __m128i *v30; // r8
  __m128i v31; // xmm1
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r9
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // rdx

  result = a1;
  v7 = a1 + a4;
  if ( a4 <= 7 )
  {
    if ( result >= v7 )
      return result;
    if ( (unsigned __int64)(a4 - 1) <= 6 || result - (unsigned __int64)a3 - 1 <= 0xE )
    {
      v37 = 0;
      do
      {
        *(_BYTE *)(result + v37) = a3->m128i_i8[v37];
        ++v37;
      }
      while ( a4 != v37 );
      return result;
    }
    v22 = 0;
    v23 = a4 & 0xFFFFFFFFFFFFFFF0uLL;
    do
    {
      *(__m128i *)(result + v22) = _mm_loadu_si128(&a3[v22 / 0x10]);
      v22 += 16LL;
    }
    while ( v23 != v22 );
    if ( a4 == v23 )
      return result;
    v24 = a4 - v23;
    v12 = (const __m128i *)((char *)a3 + v23);
    v13 = (_BYTE *)(result + v23);
    if ( v24 - 1 > 6 )
    {
      *(_QWORD *)(result + v23) = *(__int64 *)((char *)a3->m128i_i64 + v23);
      if ( (v24 & 7) == 0 )
        return result;
      v25 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
      v12 = (const __m128i *)((char *)v12 + v25);
      v13 += v25;
    }
    goto LABEL_15;
  }
  if ( a5 != 1 )
  {
    if ( a2 < v7 )
    {
      if ( a2 < result )
        goto LABEL_5;
      v18 = a2 - result;
      goto LABEL_48;
    }
    goto LABEL_53;
  }
  v15 = result - (_QWORD)a3;
  if ( result - (unsigned __int64)a3 <= 7 )
  {
    *(_BYTE *)result = a3->m128i_i8[0];
    *(_BYTE *)(result + 1) = a3->m128i_i8[1];
    *(_BYTE *)(result + 2) = a3->m128i_i8[2];
    *(_BYTE *)(result + 3) = a3->m128i_i8[3];
    v26 = (__int32 *)((char *)a3->m128i_i32 + dword_142423E40[v15]);
    *(_DWORD *)(result + 4) = *v26;
    a3 = (const __m128i *)((char *)v26 - dword_142423E60[v15]);
  }
  else
  {
    *(_QWORD *)result = a3->m128i_i64[0];
  }
  v16 = &a3->m128i_u64[1];
  v17 = result + 8;
  if ( a2 < v7 )
  {
    if ( a2 < v17 )
    {
      a3 = (const __m128i *)((char *)a3 + 8);
      result += 8LL;
LABEL_5:
      if ( result >= v7 )
        return result;
      v8 = v7 - result;
      v9 = v7 - result - 1;
      if ( v9 <= 6 || result - 1 - (unsigned __int64)a3 <= 0xE )
      {
        v32 = 0;
        do
        {
          *(_BYTE *)(result + v32) = a3->m128i_i8[v32];
          ++v32;
        }
        while ( v32 != v8 );
        return result;
      }
      if ( v9 <= 0xE )
      {
        v12 = a3;
        v13 = (_BYTE *)result;
        v11 = 0;
      }
      else
      {
        v10 = 0;
        v11 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
        do
        {
          *(__m128i *)(result + v10) = _mm_loadu_si128(&a3[v10 / 0x10]);
          v10 += 16LL;
        }
        while ( v11 != v10 );
        if ( v8 == v11 )
          return result;
        v8 -= v11;
        v12 = (const __m128i *)((char *)a3 + v11);
        v13 = (_BYTE *)(result + v11);
        if ( v8 - 1 <= 6 )
          goto LABEL_15;
      }
      *(_QWORD *)(result + v11) = *(__int64 *)((char *)a3->m128i_i64 + v11);
      if ( (v8 & 7) == 0 )
        return result;
      v14 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
      v12 = (const __m128i *)((char *)v12 + v14);
      v13 += v14;
LABEL_15:
      *v13 = v12->m128i_i8[0];
      result = (unsigned __int64)(v13 + 1);
      if ( (unsigned __int64)(v13 + 1) < v7 )
      {
        v13[1] = v12->m128i_i8[1];
        result = (unsigned __int64)(v13 + 2);
        if ( (unsigned __int64)(v13 + 2) < v7 )
        {
          v13[2] = v12->m128i_i8[2];
          result = (unsigned __int64)(v13 + 3);
          if ( (unsigned __int64)(v13 + 3) < v7 )
          {
            v13[3] = v12->m128i_i8[3];
            result = (unsigned __int64)(v13 + 4);
            if ( (unsigned __int64)(v13 + 4) < v7 )
            {
              v13[4] = v12->m128i_i8[4];
              result = (unsigned __int64)(v13 + 5);
              if ( (unsigned __int64)(v13 + 5) < v7 )
              {
                v13[5] = v12->m128i_i8[5];
                result = (unsigned __int64)(v13 + 6);
                if ( (unsigned __int64)(v13 + 6) < v7 )
                {
                  result = v12->m128i_u8[6];
                  v13[6] = result;
                }
              }
            }
          }
        }
      }
      return result;
    }
    v18 = a2 - v17;
    if ( (__int64)(result - (_QWORD)a3) <= 15 )
    {
      v19 = a2 - result - 9;
      if ( a2 < result + 9 || v19 <= 0x17 || result - 1 - (unsigned __int64)a3 <= 0xE )
      {
        v38 = &a3->m128i_i64[1];
        do
        {
          v39 = *v38;
          v17 += 8LL;
          ++v38;
          *(_QWORD *)(v17 - 8) = v39;
        }
        while ( v17 < a2 );
      }
      else
      {
        v20 = (v19 >> 3) + 1;
        v21 = 0;
        do
        {
          *(__m128i *)(result + v21 * 16 + 8) = _mm_loadu_si128((const __m128i *)&a3[v21].m128i_u64[1]);
          ++v21;
        }
        while ( v20 >> 1 != v21 );
        if ( (v20 & 1) != 0 )
          *(_QWORD *)(v17 + 8 * (v20 & 0xFFFFFFFFFFFFFFFEuLL)) = v16[v20 & 0xFFFFFFFFFFFFFFFEuLL];
      }
      a3 = (const __m128i *)((char *)a3 + 8);
      goto LABEL_36;
    }
    a3 = (const __m128i *)((char *)a3 + 8);
    result += 8LL;
LABEL_48:
    *(__m128i *)result = _mm_loadu_si128(a3);
    if ( v18 > 16 )
    {
      v27 = result + 16;
      v28 = a3 + 1;
      do
      {
        v29 = _mm_loadu_si128(v28);
        v27 += 32LL;
        v28 += 2;
        *(__m128i *)(v27 - 32) = v29;
        *(__m128i *)(v27 - 16) = _mm_loadu_si128(v28 - 1);
      }
      while ( v27 < a2 );
    }
LABEL_36:
    a3 = (const __m128i *)((char *)a3 + v18);
    result = a2;
    goto LABEL_5;
  }
  v7 = v17 + a4;
  if ( (__int64)(result - (_QWORD)a3) > 15 )
  {
    a3 = (const __m128i *)((char *)a3 + 8);
    result += 8LL;
LABEL_53:
    *(__m128i *)result = _mm_loadu_si128(a3);
    if ( a4 > 16 )
    {
      result += 16LL;
      v30 = a3 + 1;
      do
      {
        v31 = _mm_loadu_si128(v30);
        result += 32LL;
        v30 += 2;
        *(__m128i *)(result - 32) = v31;
        *(__m128i *)(result - 16) = _mm_loadu_si128(v30 - 1);
      }
      while ( result < v7 );
    }
    return result;
  }
  v33 = v7 - result - 9;
  if ( v7 < result + 9 || v33 <= 0x17 || result - 1 - (unsigned __int64)a3 <= 0xE )
  {
    do
    {
      result = *v16;
      v17 += 8LL;
      ++v16;
      *(_QWORD *)(v17 - 8) = result;
    }
    while ( v17 < v7 );
  }
  else
  {
    v34 = 0;
    v35 = (v33 >> 3) + 1;
    do
    {
      *(__m128i *)(result + v34 * 16 + 8) = _mm_loadu_si128((const __m128i *)&a3[v34].m128i_u64[1]);
      ++v34;
    }
    while ( v34 != v35 >> 1 );
    if ( (v35 & 1) != 0 )
    {
      v36 = v35 & 0xFFFFFFFFFFFFFFFEuLL;
      result = v16[v36];
      *(_QWORD *)(v17 + 8 * v36) = result;
    }
  }
  return result;
}

