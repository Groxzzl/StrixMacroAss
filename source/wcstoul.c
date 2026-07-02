// wcstoul @ 0x140020BD0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
unsigned int __cdecl wcstoul(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return __imp_wcstoul(String, EndPtr, Radix);
}

