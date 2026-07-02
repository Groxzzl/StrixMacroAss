// GetSystemTimeAsFileTime @ 0x140021088
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __stdcall GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
  __imp_GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
}

