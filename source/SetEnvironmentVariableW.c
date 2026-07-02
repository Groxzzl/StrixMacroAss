// SetEnvironmentVariableW @ 0x140021010
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall SetEnvironmentVariableW(LPCWSTR lpName, LPCWSTR lpValue)
{
  return __imp_SetEnvironmentVariableW(lpName, lpValue);
}

