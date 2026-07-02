// LeaveCriticalSection @ 0x140021060
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_LeaveCriticalSection(lpCriticalSection);
}

