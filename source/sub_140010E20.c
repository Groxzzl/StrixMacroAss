// sub_140010E20 @ 0x140010E20
#include <stdint.h>
#include <windows.h>

// positive sp value has been detected, the output may be wrong!
__int64 sub_140010E20()
{
  int v0; // eax
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rbx
  wchar_t *v6; // rax
  __int64 v7; // rbx
  wchar_t v8[4108]; // [rsp+20h] [rbp-2018h] BYREF

  sub_140017890();
  v0 = dword_14244C8E0;
  v2 = v1;
  if ( dword_14244C8E0 == 0 )
  {
    if ( (unsigned __int8)sub_14000FE00() == 0 )
      sub_140010D40((const wchar_t *)"{");
    v7 = dword_14244C8E0;
    *((_QWORD *)&unk_14244A8E0 + v7) = wcsdup(v8);
    v0 = ++dword_14244C8E0;
  }
  v3 = 0;
  if ( v0 > 0 )
  {
    while ( wcscmp((const wchar_t *)v2, *((const wchar_t **)&unk_14244A8E0 + v3)) != 0 )
    {
      if ( dword_14244C8E0 <= (int)++v3 )
        goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  if ( wcslen((const wchar_t *)v2) == 2 && *(_WORD *)(v2 + 2) == 58 )
    return 1;
  if ( CreateDirectoryW((LPCWSTR)v2, nullptr) || GetLastError() == 183 )
  {
    v5 = dword_14244C8E0;
    if ( dword_14244C8E0 <= 1023 )
    {
      v6 = wcsdup((const wchar_t *)v2);
      ++dword_14244C8E0;
      *((_QWORD *)&unk_14244A8E0 + v5) = v6;
    }
    return 1;
  }
  return 0;
}

