// Sleep @ 0x140021000
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __stdcall Sleep(DWORD dwMilliseconds)
{
  __imp_Sleep(dwMilliseconds);
}

