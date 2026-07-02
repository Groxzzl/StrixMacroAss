// SetConsoleCtrlHandler @ 0x140021020
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
{
  return __imp_SetConsoleCtrlHandler(HandlerRoutine, Add);
}

