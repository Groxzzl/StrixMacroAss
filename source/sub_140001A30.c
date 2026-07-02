// sub_140001A30 @ 0x140001A30
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_140001A30(__int64 a1, char *a2, size_t a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // esi
  char *v19; // [rsp+28h] [rbp-40h]
  char *v20; // [rsp+78h] [rbp+10h]
  int v21; // [rsp+80h] [rbp+18h]

  *(_QWORD *)a1 += a3;
  v4 = *(unsigned int *)(a1 + 72);
  result = v4;
  if ( a3 + v4 > 0x1F )
  {
    v7 = (unsigned __int64)&a2[a3];
    if ( (_DWORD)v4 != 0 )
    {
      v19 = &a2[a3];
      v20 = a2;
      memcpy((void *)(a1 + v4 + 40), a2, (unsigned int)(32 - v4));
      v16 = *(_QWORD *)(a1 + 40);
      v17 = (unsigned int)(32 - *(_DWORD *)(a1 + 72));
      v7 = (unsigned __int64)v19;
      *(_DWORD *)(a1 + 72) = 0;
      a2 = &v20[v17];
      v8 = (unsigned __int64)&v20[v17 + 32];
      *(_QWORD *)(a1 + 8) = 0x9E3779B185EBCA87uLL * __ROL8__(*(_QWORD *)(a1 + 8) - 0x3D4D51C2D82B14B1LL * v16, 31);
      *(_QWORD *)(a1 + 16) = 0x9E3779B185EBCA87uLL
                           * __ROL8__(*(_QWORD *)(a1 + 16) - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 + 48), 31);
      result = 0x9E3779B185EBCA87uLL * __ROL8__(*(_QWORD *)(a1 + 32) - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 + 64), 31);
      *(_QWORD *)(a1 + 24) = 0x9E3779B185EBCA87uLL
                           * __ROL8__(*(_QWORD *)(a1 + 24) - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 + 56), 31);
      *(_QWORD *)(a1 + 32) = result;
      if ( (unsigned __int64)v19 >= v8 )
      {
LABEL_4:
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(a1 + 16);
        v11 = v7 - 32;
        result = (unsigned __int64)a2;
        v12 = *(_QWORD *)(a1 + 24);
        v13 = *(_QWORD *)(a1 + 32);
        do
        {
          v14 = *(_QWORD *)result;
          result += 32LL;
          v9 = 0x9E3779B185EBCA87uLL * __ROL8__(v9 - 0x3D4D51C2D82B14B1LL * v14, 31);
          v10 = 0x9E3779B185EBCA87uLL * __ROL8__(v10 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(result - 24), 31);
          v12 = 0x9E3779B185EBCA87uLL * __ROL8__(v12 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(result - 16), 31);
          v15 = 0x9E3779B185EBCA87uLL * __ROL8__(v13 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(result - 8), 31);
          v13 = v15;
        }
        while ( v11 >= result );
        *(_QWORD *)(a1 + 8) = v9;
        *(_QWORD *)(a1 + 16) = v10;
        *(_QWORD *)(a1 + 24) = v12;
        a2 = (char *)(v8 + ((v11 - (_QWORD)a2) & 0xFFFFFFFFFFFFFFE0uLL));
        *(_QWORD *)(a1 + 32) = v15;
      }
    }
    else
    {
      v8 = (unsigned __int64)(a2 + 32);
      if ( v7 >= (unsigned __int64)(a2 + 32) )
        goto LABEL_4;
    }
    if ( (unsigned __int64)a2 < v7 )
    {
      v18 = v7 - (_DWORD)a2;
      result = (unsigned __int64)memcpy((void *)(a1 + 40), a2, v7 - (_QWORD)a2);
      *(_DWORD *)(a1 + 72) = v18;
    }
    return result;
  }
  if ( a2 != nullptr )
  {
    v21 = a3;
    memcpy((void *)(a1 + v4 + 40), a2, a3);
    LODWORD(result) = *(_DWORD *)(a1 + 72);
    LODWORD(a3) = v21;
  }
  result = (unsigned int)(a3 + result);
  *(_DWORD *)(a1 + 72) = result;
  return result;
}

