// TerminateProcess @ 0x140020FF8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
{
  return __imp_TerminateProcess(hProcess, uExitCode);
}

