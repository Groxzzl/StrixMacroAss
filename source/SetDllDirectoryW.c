// SetDllDirectoryW @ 0x140021018
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall SetDllDirectoryW(LPCWSTR lpPathName)
{
  return __imp_SetDllDirectoryW(lpPathName);
}

