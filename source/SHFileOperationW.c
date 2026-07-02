// SHFileOperationW @ 0x140021178
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int __stdcall SHFileOperationW(LPSHFILEOPSTRUCTW lpFileOp)
{
  return __imp_SHFileOperationW(lpFileOp);
}

