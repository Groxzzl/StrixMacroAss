// MapViewOfFile @ 0x140021048
#include <stdint.h>
#include <windows.h>

// attributes: thunk
LPVOID __stdcall MapViewOfFile(
        HANDLE hFileMappingObject,
        DWORD dwDesiredAccess,
        DWORD dwFileOffsetHigh,
        DWORD dwFileOffsetLow,
        SIZE_T dwNumberOfBytesToMap)
{
  return __imp_MapViewOfFile(
           hFileMappingObject,
           dwDesiredAccess,
           dwFileOffsetHigh,
           dwFileOffsetLow,
           dwNumberOfBytesToMap);
}

