// CreateFileMappingW @ 0x140021148
#include <stdint.h>
#include <windows.h>

// attributes: thunk
HANDLE __stdcall CreateFileMappingW(
        HANDLE hFile,
        LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
        DWORD flProtect,
        DWORD dwMaximumSizeHigh,
        DWORD dwMaximumSizeLow,
        LPCWSTR lpName)
{
  return __imp_CreateFileMappingW(
           hFile,
           lpFileMappingAttributes,
           flProtect,
           dwMaximumSizeHigh,
           dwMaximumSizeLow,
           lpName);
}

