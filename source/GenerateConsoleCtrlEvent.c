// GenerateConsoleCtrlEvent @ 0x140021108
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall GenerateConsoleCtrlEvent(DWORD dwCtrlEvent, DWORD dwProcessGroupId)
{
  return __imp_GenerateConsoleCtrlEvent(dwCtrlEvent, dwProcessGroupId);
}

