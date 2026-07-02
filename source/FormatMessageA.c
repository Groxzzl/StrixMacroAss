// FormatMessageA @ 0x140021118
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall FormatMessageA(
        DWORD dwFlags,
        LPCVOID lpSource,
        DWORD dwMessageId,
        DWORD dwLanguageId,
        LPSTR lpBuffer,
        DWORD nSize,
        va_list *Arguments)
{
  return __imp_FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}

