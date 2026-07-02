// sub_140001075 @ 0x140001075
#include <stdint.h>
#include <windows.h>

__int64 sub_140001075()
{
  signed __int64 v0; // rcx
  signed __int64 *v1; // rdx
  int v3; // [rsp+3Ch] [rbp-54h] BYREF
  __int64 v4; // [rsp+40h] [rbp-50h]
  signed __int64 *v5; // [rsp+48h] [rbp-48h]
  __int64 v6; // [rsp+50h] [rbp-40h]
  signed __int64 v7; // [rsp+58h] [rbp-38h]
  signed __int64 *v8; // [rsp+60h] [rbp-30h]
  struct _TEB *v9; // [rsp+68h] [rbp-28h]
  int v10; // [rsp+70h] [rbp-20h]
  int Code; // [rsp+74h] [rbp-1Ch]
  PVOID StackBase; // [rsp+78h] [rbp-18h]
  signed __int64 v13; // [rsp+80h] [rbp-10h]
  int v14; // [rsp+8Ch] [rbp-4h]

  v13 = 0;
  v10 = 48;
  v9 = NtCurrentTeb();
  StackBase = v9->NtTib.StackBase;
  v14 = 0;
  Code = 0;
  while ( 1 )
  {
    v8 = &qword_142450998;
    v7 = (signed __int64)StackBase;
    v6 = 0;
    v0 = (signed __int64)StackBase;
    v1 = &qword_142450998;
    v13 = _InterlockedCompareExchange64(&qword_142450998, (signed __int64)StackBase, 0);
    if ( v13 == 0 )
      break;
    if ( (PVOID)v13 == StackBase )
    {
      v14 = 1;
      break;
    }
    Sleep(0x3E8u);
  }
  if ( unk_142450990 == 1 )
    sub_1424E2000(31);
  if ( unk_142450990 != 0 )
  {
    dword_14242801C = 1;
  }
  else
  {
    unk_142450990 = 1;
    sub_140016D00();
    qword_142450A10 = (__int64)SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&loc_140016E50);
    sub_140020A20(sub_140001000);
    sub_1400173D0();
    dword_142428018 = sub_140001398();
    if ( unk_1424509D0 != 0 )
      _set_app_type(_crt_gui_app);
    else
      _set_app_type(_crt_console_app);
    *(_DWORD *)sub_1400209D0() = unk_142450A00;
    *(_DWORD *)sub_1400209E0() = unk_1424509C0;
    Code = sub_140016510();
    if ( Code < 0 )
      amsg_exit(8);
    if ( unk_140022060 == 1 )
      sub_140016E1A(sub_1400163E0);
    if ( unk_140022040 == -1 )
      sub_140020A60(0xFFFFFFFFLL);
    if ( (unsigned int)sub_140020960(&unk_1424248B8, &unk_1424248C0) != 0 )
      return 255;
    v3 = unk_1424509A0;
    Code = _wgetmainargs(&dword_142428004, &qword_142428008, &qword_142428010, unk_140022030, &v3);
    if ( Code < 0 )
      amsg_exit(8);
    Code = sub_14000149C((unsigned int)dword_142428004, &qword_142428008);
    if ( Code != 0 )
      amsg_exit(8);
    initterm(&qword_1424248A8, &qword_1424248B0);
    sub_1400161B7();
    unk_142450990 = 2;
  }
  if ( v14 == 0 )
  {
    v5 = &qword_142450998;
    v4 = 0;
    v1 = (signed __int64 *)_InterlockedExchange64(&qword_142450998, 0);
  }
  if ( TlsCallback_0 != nullptr )
    TlsCallback_0(0, 2, 0);
  *(_QWORD *)sub_1400209F0(v0, v1) = qword_142428010;
  Code = sub_1400161E0((unsigned int)dword_142428004, qword_142428008, qword_142428010);
  if ( dword_142428018 == 0 )
    exit(Code);
  if ( dword_14242801C == 0 )
    cexit();
  return (unsigned int)Code;
}

