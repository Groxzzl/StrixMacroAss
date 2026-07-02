// strerror @ 0x140020B90
#include <stdint.h>
#include <windows.h>

// attributes: thunk
char *__cdecl strerror(int ErrorMessage)
{
  return __imp_strerror(ErrorMessage);
}

