// _wcsdup @ 0x140020B10
#include <stdint.h>
#include <windows.h>

// attributes: thunk
wchar_t *__cdecl wcsdup(const wchar_t *String)
{
  return _wcsdup(String);
}

