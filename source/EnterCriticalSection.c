// EnterCriticalSection @ 0x140021120
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_EnterCriticalSection(lpCriticalSection);
}

