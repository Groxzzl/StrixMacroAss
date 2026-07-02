// fputc @ 0x140020FA0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl fputc(int Character, FILE *Stream)
{
  return __imp_fputc(Character, Stream);
}

