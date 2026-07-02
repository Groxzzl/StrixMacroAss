// sub_140001620 @ 0x140001620
#include <stdint.h>
#include <windows.h>

int sub_140001620()
{
  HMODULE ModuleHandleA; // rbx
  FARPROC ProcAddress; // [rsp+28h] [rbp-8h]

  ModuleHandleA = GetModuleHandleA("libgcc_s_dw2-1.dll");
  if ( ModuleHandleA != nullptr )
  {
    qword_142428020 = (__int64)LoadLibraryA("libgcc_s_dw2-1.dll");
    ProcAddress = GetProcAddress(ModuleHandleA, "__register_frame_info");
    qword_140022000 = ((__int64 (__fastcall *)(HMODULE, const char *))GetProcAddress)(
                        ModuleHandleA,
                        "__deregister_frame_info");
    if ( ProcAddress != nullptr )
      ((void (__fastcall *)(void *, void *))ProcAddress)(&unk_142425000, &unk_142428040);
  }
  else
  {
    qword_140022000 = (__int64)sub_140001610;
    ((void (__fastcall *)(void *, void *))nullsub_1)(&unk_142425000, &unk_142428040);
  }
  return sub_1400015DE((void (__cdecl *)())sub_1400016D0);
}

