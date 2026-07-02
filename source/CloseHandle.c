// CloseHandle @ 0x140021160
#include <stdint.h>
#include <windows.h>

// attributes: thunk
BOOL __stdcall CloseHandle(HANDLE hObject)
{
  return __imp_CloseHandle(hObject);
}

