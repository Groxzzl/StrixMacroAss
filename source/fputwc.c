// fputwc @ 0x140020B48
#include <stdint.h>
#include <windows.h>

// attributes: thunk
wint_t __cdecl fputwc(wchar_t Character, FILE *Stream)
{
  return __imp_fputwc(Character, Stream);
}

