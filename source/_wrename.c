// _wrename @ 0x140020B18
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __cdecl wrename(const wchar_t *OldFileName, const wchar_t *NewFileName)
{
  return _wrename(OldFileName, NewFileName);
}

