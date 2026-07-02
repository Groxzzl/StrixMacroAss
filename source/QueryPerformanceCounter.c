// QueryPerformanceCounter @ 0x140021030
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)
{
  return __imp_QueryPerformanceCounter(lpPerformanceCount);
}

