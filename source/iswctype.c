// iswctype @ 0x140020B60
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl iswctype(wint_t C, wctype_t Type)
{
  return __imp_iswctype(C, Type);
}

