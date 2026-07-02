// K32GetModuleFileNameExW @ 0x140021068
#include <stdint.h>
#include <windows.h>

// attributes: thunk
DWORD __stdcall K32GetModuleFileNameExW(HANDLE hProcess, HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
{
  return __imp_K32GetModuleFileNameExW(hProcess, hModule, lpFilename, nSize);
}

