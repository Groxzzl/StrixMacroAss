// IsDBCSLeadByteEx @ 0x140021070
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall IsDBCSLeadByteEx(UINT CodePage, BYTE TestChar)
{
  return __imp_IsDBCSLeadByteEx(CodePage, TestChar);
}

