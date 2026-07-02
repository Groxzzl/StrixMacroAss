// OpenProcess @ 0x140021038
#include <stdint.h>
#include <windows.h>

// attributes: thunk
HANDLE __stdcall OpenProcess(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwProcessId)
{
  return __imp_OpenProcess(dwDesiredAccess, bInheritHandle, dwProcessId);
}

