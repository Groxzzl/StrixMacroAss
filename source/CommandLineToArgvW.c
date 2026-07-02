// CommandLineToArgvW @ 0x140021180
#include <stdint.h>
#include <windows.h>

// attributes: thunk
LPWSTR *__stdcall CommandLineToArgvW(LPCWSTR lpCmdLine, int *pNumArgs)
{
  return __imp_CommandLineToArgvW(lpCmdLine, pNumArgs);
}

