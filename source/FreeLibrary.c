// FreeLibrary @ 0x140021110
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall FreeLibrary(HMODULE hLibModule)
{
  return __imp_FreeLibrary(hLibModule);
}

