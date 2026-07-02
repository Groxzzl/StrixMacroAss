// DeleteCriticalSection @ 0x140021130
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection);
}

