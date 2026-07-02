// AddDllDirectory @ 0x140021168
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DLL_DIRECTORY_COOKIE __stdcall AddDllDirectory(PCWSTR NewDirectory)
{
  return __imp_AddDllDirectory(NewDirectory);
}

