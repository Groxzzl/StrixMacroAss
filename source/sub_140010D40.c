// sub_140010D40 @ 0x140010D40
#include <stdint.h>
#include <windows.h>

void __fastcall __noreturn sub_140010D40(const wchar_t *a1)
{
  __int64 v2; // rax

  v2 = off_140022160();
  sub_14001D740(v2, "Error, couldn't runtime expand spec '%ls'.\n", a1);
  abort();
}

