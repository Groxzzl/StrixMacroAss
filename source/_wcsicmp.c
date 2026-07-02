// _wcsicmp @ 0x140020B08
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  return _wcsicmp(String1, String2);
}

