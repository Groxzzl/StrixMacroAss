// sub_140011030 @ 0x140011030
#include <stdint.h>
#include <windows.h>

void sub_140011030()
{
  int v0; // ebx
  __m128i v1; // xmm7
  __m128i v2; // xmm6
  DWORD FileAttributesW; // eax
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+20h] [rbp-78h] BYREF

  if ( hObject != nullptr )
  {
    if ( WaitForSingleObject(hObject, 0x1388u) != 0 )
      TerminateProcess(hObject, 0);
    CloseHandle(hObject);
  }
  if ( byte_14244A8C0 != 0 )
  {
    FileOp.fFlags = 1044;
    FileOp.hwnd = nullptr;
    v0 = 20;
    v1 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&PathName);
    v2 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_142423EA0), (__m128i)(unsigned __int64)&PathName);
    *(__m128i *)&FileOp.pFrom = v2;
    FileOp.wFunc = 3;
    FileOp.fAnyOperationsAborted = false;
    *(__m128i *)&FileOp.hNameMappings = v1;
    SHFileOperationW(&FileOp);
    do
    {
      FileAttributesW = GetFileAttributesW(&FileName);
      if ( FileAttributesW == -1 )
        break;
      if ( (FileAttributesW & 0x10) == 0 )
        break;
      Sleep(0x64u);
      *(__m128i *)&FileOp.pFrom = v2;
      FileOp.hwnd = nullptr;
      FileOp.wFunc = 3;
      FileOp.fFlags = 1044;
      FileOp.fAnyOperationsAborted = false;
      *(__m128i *)&FileOp.hNameMappings = v1;
      SHFileOperationW(&FileOp);
      --v0;
    }
    while ( v0 != 0 );
  }
}

