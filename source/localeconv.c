// localeconv @ 0x140020B68
#include <stdint.h>
#include <windows.h>

// attributes: thunk
struct lconv *__cdecl localeconv()
{
  return __imp_localeconv();
}

