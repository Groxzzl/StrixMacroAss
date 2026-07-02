// LoadLibraryA @ 0x140021058
#include <stdint.h>
#include <windows.h>

// attributes: thunk
HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
{
  return __imp_LoadLibraryA(lpLibFileName);
}

