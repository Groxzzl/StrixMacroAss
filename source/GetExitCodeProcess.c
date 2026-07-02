// GetExitCodeProcess @ 0x1400210E8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall GetExitCodeProcess(HANDLE hProcess, LPDWORD lpExitCode)
{
  return __imp_GetExitCodeProcess(hProcess, lpExitCode);
}

