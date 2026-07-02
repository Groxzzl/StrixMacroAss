// SetUnhandledExceptionFilter @ 0x140021008
#include <stdint.h>
#include <windows.h>

// attributes: thunk
LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
  return __imp_SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

