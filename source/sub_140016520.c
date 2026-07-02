// sub_140016520 @ 0x140016520
#include <stdint.h>
#include <windows.h>

void __noreturn sub_140016520(const char *a1, ...)
{
  FILE *v1; // rax
  FILE *v2; // rax
  va_list va; // [rsp+58h] [rbp+28h] BYREF

  va_start(va, a1);
  v1 = (FILE *)sub_140020A80(2);
  fprintf(v1, "Mingw-w64 runtime failure:\n");
  v2 = (FILE *)sub_140020A80(2);
  vfprintf(v2, a1, va);
  abort();
}

