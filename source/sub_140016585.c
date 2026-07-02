// sub_140016585 @ 0x140016585
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_140016585(const void *a1)
{
  unsigned __int64 result; // rax
  DWORD LastError; // eax
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+20h] [rbp-40h] BYREF
  __int64 v4; // [rsp+50h] [rbp-10h]
  DWORD flNewProtect; // [rsp+58h] [rbp-8h]
  int i; // [rsp+5Ch] [rbp-4h]

  for ( i = 0; i < dword_1424509E8; ++i )
  {
    if ( (unsigned __int64)a1 >= *(_QWORD *)(qword_1424509E0 + 40LL * i + 24) )
    {
      result = *(_QWORD *)(qword_1424509E0 + 40LL * i + 24)
             + *(unsigned int *)(*(_QWORD *)(qword_1424509E0 + 40LL * i + 32) + 8LL);
      if ( (unsigned __int64)a1 < result )
        return result;
    }
  }
  v4 = sub_1400175BB(a1);
  if ( v4 == 0 )
    sub_140016520("Address %p has no image-section", a1);
  *(_QWORD *)(qword_1424509E0 + 40LL * i + 32) = v4;
  *(_DWORD *)(qword_1424509E0 + 40LL * i) = 0;
  *(_QWORD *)(qword_1424509E0 + 40LL * i + 24) = sub_140017707() + *(unsigned int *)(v4 + 12);
  if ( VirtualQuery(*(LPCVOID *)(qword_1424509E0 + 40LL * i + 24), &Buffer, 0x30u) == 0 )
    sub_140016520(
      "  VirtualQuery failed for %d bytes at address %p",
      *(_DWORD *)(v4 + 8),
      *(const void **)(qword_1424509E0 + 40LL * i + 24));
  if ( Buffer.Protect != 64 && Buffer.Protect != 4 && Buffer.Protect != 128 && Buffer.Protect != 8 )
  {
    if ( Buffer.Protect == 2 )
      flNewProtect = 4;
    else
      flNewProtect = 64;
    *(_QWORD *)(qword_1424509E0 + 40LL * i + 8) = Buffer.BaseAddress;
    *(_QWORD *)(qword_1424509E0 + 40LL * i + 16) = Buffer.RegionSize;
    if ( !VirtualProtect(Buffer.BaseAddress, Buffer.RegionSize, flNewProtect, (PDWORD)(qword_1424509E0 + 40LL * i)) )
    {
      LastError = GetLastError();
      sub_140016520("  VirtualProtect failed with code 0x%x", LastError);
    }
  }
  return (unsigned int)++dword_1424509E8;
}

