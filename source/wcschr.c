// wcschr @ 0x140020BB0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  return __imp_wcschr(Str, Ch);
}

