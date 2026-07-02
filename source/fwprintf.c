// fwprintf @ 0x140020B58
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int fwprintf(FILE *const Stream, const wchar_t *const Format, ...)
{
  return __imp_fwprintf(Stream, Format);
}

