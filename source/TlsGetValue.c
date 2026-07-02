// TlsGetValue @ 0x140020FF0
#include <stdint.h>
#include <windows.h>

// attributes: thunk
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
{
  return __imp_TlsGetValue(dwTlsIndex);
}

