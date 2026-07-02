// InitializeCriticalSection @ 0x140021078
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_InitializeCriticalSection(lpCriticalSection);
}

