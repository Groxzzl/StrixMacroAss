// fprintf @ 0x140020B40
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int fprintf(FILE *const Stream, const char *const Format, ...)
{
  return __imp_fprintf(Stream, Format);
}

