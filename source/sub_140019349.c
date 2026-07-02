// sub_140019349 @ 0x140019349
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140019349(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE *v4; // rax
  int v5; // ecx
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h]
  _BYTE v18[36]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-1Ch]
  int v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+6Ch] [rbp-14h]
  int v22; // [rsp+70h] [rbp-10h]
  __int16 v23; // [rsp+76h] [rbp-Ah]
  _BYTE *v24; // [rsp+78h] [rbp-8h]

  v24 = v18;
  v23 = 2;
  if ( *(_QWORD *)a1 != 0 || *(_WORD *)(a1 + 8) != 0 )
    *(_WORD *)(a1 + 8) -= 3;
  if ( *(_DWORD *)(a2 + 16) <= 0xEu )
  {
    *(_QWORD *)a1 >>= 1;
    *(_QWORD *)a1 += 4LL << (4 * (14 - *(_BYTE *)(a2 + 16)));
    if ( *(__int64 *)a1 < 0 )
    {
      *(_WORD *)(a1 + 8) += 4;
      v3 = *(_QWORD *)a1 >> 3;
    }
    else
    {
      v3 = 2LL * *(_QWORD *)a1;
    }
    *(_QWORD *)a1 = v3;
    *(_QWORD *)a1 >>= 4 * (15 - *(_BYTE *)(a2 + 16));
  }
  if ( *(_QWORD *)a1 != 0 || *(int *)(a2 + 16) > 0 )
  {
    if ( *(_DWORD *)(a2 + 16) > 0xEu )
      v22 = 16;
    else
      v22 = *(_DWORD *)(a2 + 16) + 1;
    while ( v22 > 0 )
    {
      v19 = *(_DWORD *)a1 & 0xF;
      if ( v22 == 1 )
      {
        if ( v18 < v24 || (*(_DWORD *)(a2 + 8) & 0x800) != 0 || *(int *)(a2 + 16) > 0 )
        {
          v4 = v24++;
          *v4 = 46;
        }
      }
      else if ( *(int *)(a2 + 16) > 0 )
      {
        --*(_DWORD *)(a2 + 16);
      }
      if ( v19 != 0 || v18 < v24 || *(int *)(a2 + 16) >= 0 )
      {
        if ( v19 <= 9 )
          LOBYTE(v5) = v19 + 48;
        else
          v5 = (v19 + 55) | *(_DWORD *)(a2 + 8) & 0x20;
        v6 = v24++;
        *v6 = v5;
      }
      *(_QWORD *)a1 >>= 4;
      --v22;
    }
  }
  if ( v24 == v18 )
  {
    if ( *(int *)(a2 + 16) > 0 || (*(_DWORD *)(a2 + 8) & 0x800) != 0 )
    {
      v7 = v24++;
      *v7 = 46;
    }
    v8 = v24++;
    *v8 = 48;
  }
  if ( *(int *)(a2 + 12) > 0 )
  {
    v21 = v24 - v18;
    v20 = *(__int16 *)(a1 + 8);
    if ( *(int *)(a2 + 16) > 0 )
      v21 += *(_DWORD *)(a2 + 16);
    if ( (*(_DWORD *)(a2 + 8) & 0x1C0) != 0 )
      v9 = 6;
    else
      v9 = 5;
    v21 += v9;
    while ( 1 )
    {
      v20 /= 10;
      if ( v20 == 0 )
        break;
      ++v21;
      ++v23;
    }
    if ( v21 >= *(_DWORD *)(a2 + 12) )
    {
      *(_DWORD *)(a2 + 12) = -1;
    }
    else
    {
      *(_DWORD *)(a2 + 12) -= v21;
      if ( (*(_DWORD *)(a2 + 8) & 0x600) == 0 )
      {
        while ( 1 )
        {
          v10 = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 12) = v10 - 1;
          if ( v10 <= 0 )
            break;
          sub_1400179C0(0x20u, a2);
        }
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x80) != 0 )
  {
    sub_1400179C0(0x2Du, a2);
  }
  else if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
  {
    sub_1400179C0(0x2Bu, a2);
  }
  else if ( (*(_DWORD *)(a2 + 8) & 0x40) != 0 )
  {
    sub_1400179C0(0x20u, a2);
  }
  sub_1400179C0(0x30u, a2);
  sub_1400179C0(*(_WORD *)(a2 + 8) & 0x20 | 0x58, a2);
  if ( *(int *)(a2 + 12) > 0 && (*(_DWORD *)(a2 + 8) & 0x200) != 0 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v11 - 1;
      if ( v11 <= 0 )
        break;
      sub_1400179C0(0x30u, a2);
    }
  }
  while ( v18 < v24 )
    sub_140018991((char)*--v24, a2);
  while ( 1 )
  {
    v12 = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 16) = v12 - 1;
    if ( v12 <= 0 )
      break;
    sub_1400179C0(0x30u, a2);
  }
  sub_1400179C0(*(_WORD *)(a2 + 8) & 0x20 | 0x50, a2);
  *(_DWORD *)(a2 + 12) += v23;
  *(_DWORD *)(a2 + 8) |= 0x1C0u;
  if ( *(__int16 *)(a1 + 8) >= 0 )
    v13 = 0;
  else
    v13 = -1;
  v17 = v13;
  v16 = *(__int16 *)(a1 + 8);
  v15[0] = v16;
  v15[1] = v13;
  return sub_140018047(v15, a2);
}

