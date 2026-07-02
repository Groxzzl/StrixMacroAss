// GetStartupInfoW @ 0x140021098
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __stdcall GetStartupInfoW(LPSTARTUPINFOW lpStartupInfo)
{
  __imp_GetStartupInfoW(lpStartupInfo);
}

