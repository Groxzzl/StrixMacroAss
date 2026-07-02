// wcslen @ 0x140020BC0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
size_t __cdecl wcslen(const wchar_t *String)
{
  return __imp_wcslen(String);
}

