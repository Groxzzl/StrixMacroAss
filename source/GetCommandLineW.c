// GetCommandLineW @ 0x140021100
#include <stdint.h>
#include <windows.h>

// attributes: thunk
LPWSTR __stdcall GetCommandLineW()
{
  return __imp_GetCommandLineW();
}

