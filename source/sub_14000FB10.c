// sub_14000FB10 @ 0x14000FB10
#include <stdint.h>
#include <windows.h>

WCHAR *__fastcall sub_14000FB10(char a1)
{
  HANDLE FileW; // rdi
  WCHAR *v2; // rax
  HMODULE ModuleHandleA; // rax
  FARPROC ProcAddress; // rax
  unsigned int v5; // eax
  void *v6; // rcx
  unsigned int v7; // edi
  __int16 v8; // dx
  WCHAR *v9; // rax
  __int16 v10; // dx
  WCHAR *v11; // rax
  WCHAR *v12; // rax
  WCHAR *v13; // rax
  WCHAR *v15; // [rsp+48h] [rbp-20h]

  if ( a1 != 0 )
  {
    if ( szLongPath == 0 )
    {
      GetModuleFileNameW(nullptr, &szLongPath, 0x1001u);
      FileW = CreateFileW(&szLongPath, 0, 7u, nullptr, 3u, 0x80u, nullptr);
      v2 = &szLongPath;
      if ( szLongPath != 0 )
      {
        while ( *++v2 != 0 )
        {
          if ( v2 == (WCHAR *)&unk_142450922 )
            goto LABEL_40;
        }
      }
      *v2 = 0;
      if ( FileW == (HANDLE)-1LL )
        goto LABEL_24;
      ModuleHandleA = GetModuleHandleA("Kernel32.dll");
      ProcAddress = GetProcAddress(ModuleHandleA, "GetFinalPathNameByHandleW");
      if ( ProcAddress != nullptr )
      {
        v5 = ((__int64 (__fastcall *)(HANDLE, WCHAR *, __int64, _QWORD))ProcAddress)(FileW, &szLongPath, 4097, 0);
        v6 = FileW;
        v7 = v5;
        CloseHandle(v6);
        if ( v7 > 0x1000 )
LABEL_40:
          abort();
      }
      else
      {
        CloseHandle(FileW);
      }
      if ( wcsncmp(&szLongPath, L"\\\\?\\", 4u) == 0 )
      {
        if ( wcscmp((const wchar_t *)&word_14244E928, &szLongPath) == 0 )
        {
          v9 = &szLongPath;
          if ( szLongPath != 0 )
          {
            while ( *++v9 != 0 )
            {
              if ( v9 == (WCHAR *)&unk_142450922 )
                goto LABEL_40;
            }
          }
        }
        else
        {
          if ( word_14244E92A != 58 )
            goto LABEL_18;
          v8 = word_14244E928;
          v9 = &szLongPath;
          if ( word_14244E928 != 0 )
          {
            while ( 1 )
            {
              *v9 = v8;
              v8 = v9[5];
              ++v9;
              if ( v8 == 0 )
                break;
              if ( v9 == (WCHAR *)&unk_142450922 )
                goto LABEL_40;
            }
          }
        }
        *v9 = 0;
      }
LABEL_18:
      if ( wcsncmp(&szLongPath, asc_142423232, 8u) == 0 )
      {
        v10 = word_14244E92C;
        v11 = &szLongPath;
        if ( word_14244E92C != 0 )
        {
          while ( 1 )
          {
            *v11 = v10;
            v10 = v11[7];
            ++v11;
            if ( v10 == 0 )
              break;
            if ( v11 == (WCHAR *)&unk_142450922 )
              goto LABEL_40;
          }
        }
        *v11 = 0;
        szLongPath = 92;
      }
LABEL_24:
      v12 = &szLongPath;
LABEL_31:
      v15 = v12;
      sub_14000F920(&szLongPath, 4097);
      return v15;
    }
    return &szLongPath;
  }
  else
  {
    if ( Filename == 0 )
    {
      GetModuleFileNameW(nullptr, &Filename, 0x1001u);
      v13 = &Filename;
      if ( Filename != 0 )
      {
        while ( *++v13 != 0 )
        {
          if ( v13 == (WCHAR *)&unk_14244E902 )
            goto LABEL_40;
        }
      }
      *v13 = 0;
      v12 = &Filename;
      goto LABEL_31;
    }
    return &Filename;
  }
}

