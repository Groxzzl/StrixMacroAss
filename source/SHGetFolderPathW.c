// SHGetFolderPathW @ 0x140021170
#include <stdint.h>
#include <windows.h>

// attributes: thunk
HRESULT __stdcall SHGetFolderPathW(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPWSTR pszPath)
{
  return __imp_SHGetFolderPathW(hwnd, csidl, hToken, dwFlags, pszPath);
}

