// wcscmp @ 0x140020BB8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  return __imp_wcscmp(String1, String2);
}

