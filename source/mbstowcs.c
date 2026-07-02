// mbstowcs @ 0x140020B78
#include <stdint.h>
#include <windows.h>

// attributes: thunk
size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  return __imp_mbstowcs(Dest, Source, MaxCount);
}

