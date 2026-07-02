// vfprintf @ 0x140020BA8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl vfprintf(FILE *const Stream, const char *const Format, va_list ArgList)
{
  return __imp_vfprintf(Stream, Format, ArgList);
}

