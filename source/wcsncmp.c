// wcsncmp @ 0x140020BC8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  return __imp_wcsncmp(String1, String2, MaxCount);
}

