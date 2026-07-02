// sub_140014A80 @ 0x140014A80
#include <stdint.h>
#include <windows.h>

// positive sp value has been detected, the output may be wrong!
__int64 sub_140014A80()
{
  wchar_t *v0; // rax
  const wchar_t *v1; // r13
  char *v2; // r13
  WCHAR *v3; // r14
  char v4; // al
  char *v5; // r15
  WCHAR *i; // rax
  _WORD *v7; // r13
  char v8; // al
  const char *v9; // r15
  char *v10; // rsi
  _WORD *j; // rax
  _WORD *v12; // r13
  char v13; // al
  const char *v14; // r15
  char *v15; // rsi
  _WORD *k; // rax
  DWORD CurrentProcessId; // eax
  char v18; // al
  __int64 v19; // r12
  WCHAR *v20; // rbx
  __int64 v21; // rdx
  WCHAR *m; // rax
  WCHAR *v23; // r14
  char v24; // al
  DWORD v25; // esi
  HANDLE v26; // rax
  void *v27; // rdi
  WCHAR *v28; // rax
  void (__stdcall *v29)(HANDLE); // rsi
  _BYTE *v30; // rax
  __int64 v31; // rsi
  char v32; // cl
  bool v33; // dl
  bool v34; // zf
  char *v35; // rax
  _DWORD *v36; // r8
  BOOL v42; // ecx
  __int64 v43; // rax
  __m128i si128; // xmm6
  __m128i v45; // xmm7
  void *v46; // rbx
  __int16 *v47; // r15
  __int64 v48; // r13
  char v49; // r14
  struct _PROCESS_INFORMATION *v50; // rdi
  unsigned __int64 v51; // rsi
  size_t v52; // r8
  void *v53; // rcx
  __int16 hProcess; // ax
  __int16 v55; // cx
  WCHAR v56; // r8
  WCHAR *v57; // rdx
  char *v58; // rax
  __int64 v59; // rdx
  WCHAR *v60; // rax
  __int64 v61; // rdx
  WCHAR *n; // rax
  __int16 *v63; // r8
  WCHAR v64; // cx
  __int16 *v65; // rax
  WCHAR *v66; // rdx
  DWORD *v67; // rdx
  WCHAR v68; // cx
  __int16 *v69; // rax
  char *v70; // rsi
  DWORD *v71; // rax
  HANDLE FileW; // r15
  size_t v73; // rbx
  struct _PROCESS_INFORMATION *v74; // rdx
  __int16 v75; // cx
  struct _PROCESS_INFORMATION *v76; // rax
  struct _PROCESS_INFORMATION *v77; // rax
  char *v78; // rbx
  __int64 v79; // rdi
  void (__fastcall *v80)(__int64); // r12
  __int64 v81; // r14
  void (*v82)(void); // r13
  __int64 v83; // rcx
  void *v84; // rdx
  WCHAR *v85; // rax
  WCHAR v86; // r8
  WCHAR *v87; // r9
  __int16 *v88; // rdx
  __int16 v89; // r8
  __int16 *v90; // rax
  __int16 *v91; // rdx
  HANDLE StdHandle; // rax
  const WCHAR *CommandLineW; // rax
  LPWSTR *v94; // rax
  LPWSTR *v95; // rdi
  int v96; // r9d
  const wchar_t *v97; // r13
  const char *v98; // rbp
  wchar_t v99; // dx
  __int64 v100; // rdx
  WCHAR *v101; // rax
  WCHAR *v102; // rcx
  WCHAR v103; // dx
  int v104; // r8d
  WCHAR *v105; // r11
  int v106; // r9d
  __int64 v107; // rdx
  WCHAR *v108; // rax
  __int64 v109; // r8
  WCHAR *v110; // rax
  int v111; // r9d
  int jj; // r8d
  __int64 v113; // rdx
  WCHAR *v114; // rax
  WCHAR *v115; // rcx
  __int64 v116; // rdx
  WCHAR *v117; // rax
  WCHAR v118; // r8
  int v120; // r8d
  int ii; // ecx
  __int64 v122; // rdx
  WCHAR *v123; // rax
  __int64 v124; // rdx
  WCHAR *v125; // rax
  __int64 v126; // rdx
  WCHAR *v127; // rax
  HMODULE Library; // rax
  FARPROC v129; // rax
  HANDLE v135; // rsi
  DWORD *v136; // rax
  HMODULE ModuleHandleA; // rax
  FARPROC ProcAddress; // rax
  unsigned int v139; // eax
  void *v140; // rcx
  unsigned int v141; // ebp
  WCHAR *v142; // rax
  wchar_t v143; // dx
  WCHAR *v144; // rax
  DWORD LastError; // eax
  DWORD v146; // eax
  wchar_t v147; // dx
  void *v148; // rcx
  WCHAR *v149; // rax
  char v150; // al
  DWORD v151; // eax
  __int64 v152; // rax
  size_t v153; // [rsp+50h] [rbp-53A8h]
  __int64 v154; // [rsp+50h] [rbp-53A8h]
  const wchar_t *v155; // [rsp+60h] [rbp-5398h]
  const WCHAR *v156; // [rsp+68h] [rbp-5390h]
  const WCHAR **v157; // [rsp+70h] [rbp-5388h]
  unsigned int v158; // [rsp+7Ch] [rbp-537Ch]
  char v159[2]; // [rsp+8Ch] [rbp-536Ch] BYREF
  char v160[2]; // [rsp+8Eh] [rbp-536Ah] BYREF
  char v161[2]; // [rsp+90h] [rbp-5368h] BYREF
  char v162[2]; // [rsp+92h] [rbp-5366h] BYREF
  int v163; // [rsp+94h] [rbp-5364h] BYREF
  wchar_t v164[2]; // [rsp+98h] [rbp-5360h] BYREF
  wchar_t v165; // [rsp+9Ch] [rbp-535Ch] BYREF
  wchar_t v166[2]; // [rsp+A0h] [rbp-5358h] BYREF
  wchar_t v167; // [rsp+A4h] [rbp-5354h] BYREF
  wchar_t *v168; // [rsp+A8h] [rbp-5350h] BYREF
  _WORD v169[40]; // [rsp+B0h] [rbp-5348h] BYREF
  _WORD v170[40]; // [rsp+100h] [rbp-52F8h] BYREF
  WCHAR v171[40]; // [rsp+150h] [rbp-52A8h] BYREF
  struct _STARTUPINFOW v172; // [rsp+1A0h] [rbp-5258h] BYREF
  char v173[128]; // [rsp+210h] [rbp-51E8h] BYREF
  WCHAR v174[128]; // [rsp+290h] [rbp-5168h] BYREF
  WCHAR v175; // [rsp+390h] [rbp-5068h] BYREF
  wchar_t v176[2044]; // [rsp+398h] [rbp-5060h] BYREF
  DWORD v177[2048]; // [rsp+1390h] [rbp-4068h] BYREF
  struct _PROCESS_INFORMATION v178[344]; // [rsp+3390h] [rbp-2068h] BYREF

  sub_140017890();
  v158 = *(_DWORD *)off_140022130();
  v157 = *(const WCHAR ***)off_140022120();
  SetDllDirectoryW(&PathName);
  v0 = sub_14000F790("NUITKA_ONEFILE_PARENT");
  v1 = v0;
  if ( v0 != nullptr && *v0 != 0 )
  {
    *_errno() = 0;
    v168 = nullptr;
    v25 = wcstoul(v1, &v168, 10);
    if ( *_errno() == 0 && *v168 == 0 )
    {
      v26 = OpenProcess(0x410u, false, v25);
      v27 = v26;
      if ( v26 != nullptr )
      {
        if ( K32GetModuleFileNameExW(v26, nullptr, &v175, 0x800u) == 0 )
        {
          v28 = sub_14000FB10(1);
          wcscmp(&v175, v28);
          v29 = (void (__stdcall *)(HANDLE))CloseHandle;
LABEL_36:
          v29(v27);
          goto LABEL_3;
        }
        v135 = CreateFileW(&v175, 0, 7u, nullptr, 3u, 0x80u, nullptr);
        v136 = (DWORD *)&v175;
        if ( v175 != 0 )
        {
          while ( 1 )
          {
            v136 = (DWORD *)((char *)v136 + 2);
            if ( *(_WORD *)v136 == 0 )
              break;
            if ( v136 == v177 )
              goto LABEL_255;
          }
        }
        *(_WORD *)v136 = 0;
        if ( v135 == (HANDLE)-1LL )
        {
          v29 = (void (__stdcall *)(HANDLE))CloseHandle;
          goto LABEL_240;
        }
        ModuleHandleA = GetModuleHandleA("Kernel32.dll");
        ProcAddress = GetProcAddress(ModuleHandleA, "GetFinalPathNameByHandleW");
        if ( ProcAddress != nullptr )
        {
          v139 = ((__int64 (__fastcall *)(HANDLE, WCHAR *, __int64, _QWORD))ProcAddress)(v135, &v175, 2048, 0);
          v140 = v135;
          v29 = (void (__stdcall *)(HANDLE))CloseHandle;
          v141 = v139;
          CloseHandle(v140);
          if ( v141 > 0x7FF )
            goto LABEL_255;
        }
        else
        {
          v148 = v135;
          v29 = (void (__stdcall *)(HANDLE))CloseHandle;
          CloseHandle(v148);
        }
        if ( wcsncmp(&v175, L"\\\\?\\", 4u) == 0 )
        {
          if ( wcscmp(v176, &v175) == 0 )
          {
            v142 = &v175;
            if ( v175 != 0 )
            {
              while ( *++v142 != 0 )
              {
                if ( v142 == (WCHAR *)v177 )
                  goto LABEL_255;
              }
            }
LABEL_220:
            *v142 = 0;
            goto LABEL_221;
          }
          if ( v176[1] == 58 )
          {
            v147 = v176[0];
            v142 = &v175;
            if ( v176[0] != 0 )
            {
              while ( 1 )
              {
                *v142 = v147;
                v147 = v142[5];
                ++v142;
                if ( v147 == 0 )
                  break;
                if ( v142 == (WCHAR *)v177 )
                  goto LABEL_255;
              }
            }
            goto LABEL_220;
          }
        }
LABEL_221:
        if ( wcsncmp(&v175, asc_142423232, 8u) == 0 )
        {
          v143 = v176[2];
          v144 = &v175;
          if ( v176[2] != 0 )
          {
            while ( 1 )
            {
              *v144 = v143;
              v143 = v144[7];
              ++v144;
              if ( v143 == 0 )
                break;
              if ( v144 == (WCHAR *)v177 )
                goto LABEL_255;
            }
          }
          *v144 = 0;
          v175 = 92;
        }
LABEL_240:
        sub_14000F920(&v175, 2048);
        v149 = sub_14000FB10(1);
        if ( wcscmp(&v175, v149) == 0 )
        {
          v23 = &FileName;
          v29(v27);
          v150 = sub_14000FE00();
          qword_1424488A0 = 37746984;
          v34 = v150 == 0;
          v30 = &unk_140023050;
          qword_1424488A8 = (__int64)&unk_140023050;
          if ( v34 )
            goto LABEL_30;
          goto LABEL_39;
        }
        goto LABEL_36;
      }
      CloseHandle(nullptr);
    }
  }
LABEL_3:
  v2 = "NUITKA_ONEFILE_START";
  v3 = v171;
  v4 = 78;
  v171[0] = 0;
  do
  {
    v159[0] = v4;
    v5 = (char *)("ouldn't runtime expand spec '%ls'.\n" - v2);
    v159[1] = 0;
    if ( mbstowcs(v164, v159, 2u) != 1 )
      goto LABEL_255;
    for ( i = v3; *i != 0; --v5 )
      ++i;
    if ( v5 == nullptr )
      goto LABEL_255;
    ++v2;
    *i = v164[0];
    ++v3;
    i[1] = 0;
    v4 = *v2;
  }
  while ( v2 != "" );
  v7 = v170;
  SetEnvironmentVariableW(v171, nullptr);
  v8 = 78;
  v170[0] = 0;
  v9 = "NUITKA_ONEFILE_TIME_US";
  do
  {
    v160[0] = v8;
    v10 = (char *)((char *)L"ME" - v9);
    v160[1] = 0;
    if ( mbstowcs(&v165, v160, 2u) != 1 )
      goto LABEL_255;
    for ( j = v7; *j != 0; --v10 )
      ++j;
    if ( v10 == nullptr )
      goto LABEL_255;
    *j = v165;
    ++v9;
    ++v7;
    j[1] = 0;
    v8 = *v9;
  }
  while ( v9 != "" );
  v12 = v169;
  ((void (__fastcall *)(_WORD *, _QWORD))SetEnvironmentVariableW)(v170, 0);
  v169[0] = 0;
  v13 = 78;
  v14 = "NUITKA_ONEFILE_RANDOM";
  do
  {
    v161[0] = v13;
    v15 = (char *)((char *)L"HIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_" - v14);
    v161[1] = 0;
    if ( mbstowcs(v166, v161, 2u) != 1 )
      goto LABEL_255;
    for ( k = v12; *k != 0; --v15 )
      ++k;
    if ( v15 == nullptr )
      goto LABEL_255;
    ++v14;
    *k = v166[0];
    ++v12;
    k[1] = 0;
    v13 = *v14;
  }
  while ( v14 != "" );
  ((void (__fastcall *)(_WORD *, _QWORD))SetEnvironmentVariableW)(v169, 0);
  CurrentProcessId = GetCurrentProcessId();
  sub_1400203B0(v173, 128, "%ld", CurrentProcessId);
  v18 = v173[0];
  v174[0] = 0;
  if ( v173[0] != 0 )
  {
    v19 = 128;
    v20 = v174;
    while ( 1 )
    {
      v162[0] = v18;
      v162[1] = 0;
      if ( mbstowcs(&v167, v162, 2u) != 1 )
        goto LABEL_255;
      v21 = v19;
      for ( m = v20; *m != 0; --v21 )
        ++m;
      if ( v21 == 0 )
        goto LABEL_255;
      *m = v167;
      ++v20;
      m[1] = 0;
      v18 = *((_BYTE *)v174 + 1 - v19);
      if ( v18 == 0 )
        break;
      --v19;
    }
  }
  sub_14000F850("NUITKA_ONEFILE_PARENT", v174);
  v23 = &FileName;
  v24 = sub_14000FE00();
  qword_1424488A0 = 37746984;
  qword_1424488A8 = (__int64)&unk_140023050;
  if ( v24 == 0 )
LABEL_30:
    sub_140010D40(L"{TEMP}\\onefile_{PID}_{TIME_US}_{RANDOM}");
  if ( !SetConsoleCtrlHandler((PHANDLER_ROUTINE)HandlerRoutine, true) )
    sub_140010D20("Error, failed to register signal handler.");
  v30 = (_BYTE *)qword_1424488A8;
  v1 = nullptr;
LABEL_39:
  v31 = (__int64)(v30 + 3);
  v32 = v30[2];
  v33 = *v30 != 75;
  v34 = v30[1] == 65;
  qword_1424488A8 = (__int64)(v30 + 3);
  if ( !v34 || v33 || v32 != 89 )
    sub_140010D20("Error, couldn't find attached data header.");
  qword_142450930 = 0;
  Block = malloc(0x20000u);
  if ( Block == nullptr )
LABEL_205:
    sub_140010D20("Error, couldn't allocate memory.");
  v35 = (char *)malloc(0x274B8u);
  v36 = v35;
  if ( v35 == nullptr )
  {
    qword_14244C8E8 = nullptr;
    goto LABEL_205;
  }
  *((_QWORD *)v35 + 3702) = 0;
  *((_QWORD *)v35 + 3705) = 0;
  *((_QWORD *)v35 + 3675) = 0;
  *(_QWORD *)(v35 + 29676) = 0;
  *((_QWORD *)v35 + 3711) = 0;
  *((_QWORD *)v35 + 3712) = 0;
  *((_QWORD *)v35 + 3716) = 0;
  *((_DWORD *)v35 + 7421) = 0;
  *((_QWORD *)v35 + 3720) = 0;
  *((_DWORD *)v35 + 7442) = 0;
  *((_DWORD *)v35 + 7445) = 0;
  *((_QWORD *)v35 + 20118) = 0;
  *((_OWORD *)v35 + 1850) = 0;
  *(_OWORD *)(v35 + 29656) = 0;
  _RAX = 0;
  __asm { cpuid }
  v42 = false;
  if ( (unsigned int)_RAX > 6 )
  {
    _RAX = 7;
    __asm { cpuid }
    v42 = (_RBX & 0x100) != 0;
  }
  v43 = qword_1424488A0;
  v36[7412] = v42;
  *((_QWORD *)v36 + 3714) = 134217729;
  si128 = _mm_load_si128((const __m128i *)&xmmword_142423ED0);
  qword_142450938 = v43;
  v45 = _mm_cvtsi32_si128(0x5Cu);
  v36[7446] = 0;
  *((_QWORD *)v36 + 3697) = 0;
  v36[7396] = 1;
  qword_14244C8E8 = v36;
  qword_142450930 = v31;
  qword_142450940 = 0;
  byte_14244A8C0 = 1;
  while ( 1 )
  {
    v46 = *(&Block + 1);
    v156 = v23;
    v47 = &word_1424480A0;
    v155 = v1;
    v48 = qword_142450960;
    while ( 1 )
    {
      v49 = 0;
      v50 = v178;
      v51 = 2;
      while ( 1 )
      {
        while ( 1 )
        {
          v52 = (size_t)v46 - v48;
          if ( v46 != (void *)v48 )
            break;
          while ( 1 )
          {
            v49 |= qword_142450940 < (unsigned __int64)qword_142450938;
            if ( v49 == 0 )
              break;
            v53 = qword_14244C8E8;
            *(__m128i *)(&Block + 1) = si128;
            if ( sub_140013760((__int64)v53) > 0xFFFFFFFFFFFFFF88uLL )
              goto LABEL_57;
            v46 = (void *)qword_142450960;
            v34 = *(&Block + 1) == (void *)qword_142450960;
            qword_142450960 = 0;
            v49 = v34;
            v48 = 0;
            *(&Block + 1) = v46;
            v52 = (size_t)v46;
            if ( v46 != nullptr )
              goto LABEL_52;
          }
          if ( qword_142450940 != qword_142450938 )
LABEL_57:
            sub_140010D20("Error, couldn't decode attached data.");
        }
LABEL_52:
        if ( v52 > v51 )
          v52 = v51;
        v153 = v52;
        memcpy(v50, (char *)Block + v48, v52);
        v48 += v153;
        qword_142450960 = v48;
        v51 -= v153;
        if ( v51 == 0 )
          break;
        v50 = (struct _PROCESS_INFORMATION *)((char *)v50 + v153);
      }
      hProcess = (__int16)v178[0].hProcess;
      *v47 = (__int16)v178[0].hProcess;
      if ( hProcess == 0 )
        break;
      ++v47;
    }
    v55 = word_1424480A0;
    v1 = v155;
    v23 = (WCHAR *)v156;
    if ( word_1424480A0 == 0 )
      break;
    v56 = *v156;
    v57 = word_1424460A0;
    v58 = (char *)&FileName;
    word_1424460A0[0] = 0;
    if ( v56 != 0 )
    {
      while ( 1 )
      {
        v58 += 2;
        *v57++ = v56;
        v56 = *(_WORD *)v58;
        if ( *(_WORD *)v58 == 0 )
          break;
        if ( v58 == &byte_14244A8C0 )
          goto LABEL_255;
      }
    }
    *v57 = 0;
    if ( word_1424460A0[0] != 0 )
    {
      v59 = 4096;
      v60 = word_1424460A0;
      do
      {
        ++v60;
        --v59;
      }
      while ( *v60 != 0 );
      if ( v59 == 0 )
        goto LABEL_255;
    }
    else
    {
      v60 = word_1424460A0;
    }
    *(_DWORD *)v60 = _mm_cvtsi128_si32(v45);
    v61 = 4096;
    for ( n = word_1424460A0; *n != 0; --v61 )
      ++n;
    v63 = &word_1424480A0;
    do
    {
      if ( v61 == 0 )
        goto LABEL_255;
      ++v63;
      *n++ = v55;
      --v61;
      v55 = *v63;
    }
    while ( *v63 != 0 );
    v34 = word_1424440A0 == 0;
    *n = 0;
    if ( v34 )
    {
      v64 = word_1424460A0[0];
      v65 = (__int16 *)word_1424460A0;
      v66 = &word_1424440A0;
      if ( word_1424460A0[0] != 0 )
      {
        while ( 1 )
        {
          ++v65;
          *v66++ = v64;
          v64 = *v65;
          if ( *v65 == 0 )
            break;
          if ( v65 == &word_1424480A0 )
            goto LABEL_255;
        }
      }
      *v66 = 0;
      if ( v155 != nullptr )
      {
        AddDllDirectory(v156);
        Library = LoadLibraryExW(&word_1424440A0, nullptr, 0xD00u);
        if ( Library == nullptr )
        {
          LastError = GetLastError();
          sub_140010D70("Error, load DLL.", LastError);
        }
        v129 = GetProcAddress(Library, "run_code");
        if ( v129 == nullptr )
          sub_140010D20("Error, DLL entry point not found.");
        return ((__int64 (__fastcall *)(_QWORD, const WCHAR **, WCHAR *))v129)(v158, v157, &word_1424440A0);
      }
    }
    sub_140014990((char *)v178, 8u);
    v67 = v177;
    memset(v177, 0, sizeof(v177));
    v68 = word_1424460A0[0];
    v69 = (__int16 *)word_1424460A0;
    v70 = (char *)v178[0].hProcess;
    if ( word_1424460A0[0] != 0 )
    {
      while ( 1 )
      {
        ++v69;
        *(_WORD *)v67 = v68;
        v67 = (DWORD *)((char *)v67 + 2);
        v68 = *v69;
        if ( *v69 == 0 )
          break;
        if ( v69 == &word_1424480A0 )
          goto LABEL_255;
      }
    }
    *(_WORD *)v67 = 0;
    v71 = (DWORD *)((char *)v177 + 2 * wcslen((const wchar_t *)v177));
    if ( v177 < v71 )
    {
      while ( *(_WORD *)v71 != 92 )
      {
        v71 = (DWORD *)((char *)v71 - 2);
        if ( v177 >= v71 )
          goto LABEL_89;
      }
      *(_WORD *)v71 = 0;
      if ( (unsigned __int8)sub_140010E20() == 0 )
      {
        v74 = v178;
        memset(v178, 0, 0x2000u);
        v75 = v177[0];
        v76 = (struct _PROCESS_INFORMATION *)v177;
        if ( LOWORD(v177[0]) != 0 )
        {
          while ( 1 )
          {
            v76 = (struct _PROCESS_INFORMATION *)((char *)v76 + 2);
            LOWORD(v74->hProcess) = v75;
            v74 = (struct _PROCESS_INFORMATION *)((char *)v74 + 2);
            v75 = (__int16)v76->hProcess;
            if ( LOWORD(v76->hProcess) == 0 )
              break;
            if ( v76 == v178 )
              goto LABEL_255;
          }
        }
        LOWORD(v74->hProcess) = 0;
        v77 = (struct _PROCESS_INFORMATION *)((char *)v178 + 2 * wcslen((const wchar_t *)v178));
        if ( v178 < v77 )
        {
          while ( LOWORD(v77->hProcess) != 92 )
          {
            v77 = (struct _PROCESS_INFORMATION *)((char *)v77 - 2);
            if ( v178 >= v77 )
              goto LABEL_106;
          }
          LOWORD(v77->hProcess) = 0;
          if ( (unsigned __int8)sub_140010E20() == 0 )
          {
            sub_140010F60();
            sub_140010E20();
          }
        }
LABEL_106:
        sub_140010E20();
      }
    }
LABEL_89:
    FileW = CreateFileW(word_1424460A0, 0x40000000u, 2u, nullptr, 2u, 0, nullptr);
    if ( FileW == (HANDLE)-1LL )
    {
      v152 = off_140022160();
      sub_14001D740(v152, "Error, failed to open '%ls' for writing.\n", word_1424460A0);
      exit(2);
    }
    for ( ; v70 != nullptr; v70 -= v73 )
    {
      v73 = 0x8000;
      if ( (unsigned __int64)v70 <= 0x8000 )
        v73 = (size_t)v70;
      sub_140014990(byte_142428080, v73);
      LODWORD(v178[0].hProcess) = 0;
      if ( !WriteFile(FileW, byte_142428080, v73, (LPDWORD)v178, nullptr) )
      {
        v151 = GetLastError();
        sub_140010D70("Error, couldn't unpack file to target path.", v151);
      }
    }
    CloseHandle(FileW);
  }
  v78 = (char *)qword_14244C8E8;
  if ( qword_14244C8E8 != nullptr && *((_QWORD *)qword_14244C8E8 + 3705) == 0 )
  {
    v79 = *((_QWORD *)qword_14244C8E8 + 3707);
    v80 = *((void (__fastcall **)(__int64))qword_14244C8E8 + 3701);
    v81 = *((_QWORD *)qword_14244C8E8 + 3702);
    if ( v79 == 0 )
      goto LABEL_115;
    v82 = *(void (**)(void))(v79 + 27336);
    v83 = *(_QWORD *)(v79 + 27344);
    if ( *(_QWORD *)v79 != 0 )
    {
      if ( v82 != nullptr )
      {
        v154 = *(_QWORD *)(v79 + 27344);
        v82();
        v83 = v154;
LABEL_114:
        ((void (__fastcall *)(__int64, __int64))v82)(v83, v79);
        goto LABEL_115;
      }
      free(*(void **)v79);
    }
    else if ( v82 != nullptr )
    {
      goto LABEL_114;
    }
    free((void *)v79);
LABEL_115:
    v84 = *((void **)v78 + 3711);
    *((_DWORD *)v78 + 7420) = 0;
    *(_OWORD *)(v78 + 29656) = 0;
    if ( v84 != nullptr )
    {
      if ( v80 != nullptr )
      {
        v80(v81);
        *((_QWORD *)v78 + 3711) = 0;
LABEL_118:
        ((void (__fastcall *)(__int64, char *))v80)(v81, v78);
        goto LABEL_119;
      }
      free(v84);
    }
    else if ( v80 != nullptr )
    {
      goto LABEL_118;
    }
    free(v78);
  }
LABEL_119:
  free(Block);
  v85 = sub_14000FB10(0);
  v86 = *v85;
  if ( *v85 != 0 )
  {
    v87 = v85 + 4097;
    v88 = (__int16 *)word_142430080;
    while ( 1 )
    {
      ++v85;
      *v88++ = v86;
      v86 = *v85;
      if ( *v85 == 0 )
        break;
      if ( v85 == v87 )
        goto LABEL_255;
    }
  }
  else
  {
    v88 = (__int16 *)word_142430080;
  }
  *v88 = 0;
  v89 = word_142430080[0];
  if ( word_142430080[0] != 0 )
  {
    v90 = nullptr;
    v91 = (__int16 *)word_142430080;
    do
    {
      if ( v89 == 92 )
        v90 = v91;
      v89 = v91[1];
      ++v91;
    }
    while ( v89 != 0 );
    if ( v90 != nullptr )
      *v90 = 0;
  }
  sub_14000F850("NUITKA_ONEFILE_DIRECTORY", word_142430080);
  sub_14000F850("NUITKA_ORIGINAL_ARGV0", *v157);
  if ( ApplicationName == 0 && GetModuleFileNameW(nullptr, &ApplicationName, 0x1000u) == 0 )
    goto LABEL_255;
  memset(&v172, 0, sizeof(v172));
  v172.dwFlags = 256;
  v172.hStdInput = GetStdHandle(0xFFFFFFF6);
  v172.hStdOutput = GetStdHandle(0xFFFFFFF5);
  StdHandle = GetStdHandle(0xFFFFFFF4);
  v172.cb = 104;
  v172.hStdError = StdHandle;
  CommandLineW = GetCommandLineW();
  v94 = CommandLineToArgvW(CommandLineW, &v163);
  CommandLine = 0;
  v95 = v94;
  if ( ApplicationName == 0 && GetModuleFileNameW(nullptr, &ApplicationName, 0x1000u) == 0 )
LABEL_255:
    abort();
  v96 = v163;
  *v95 = &ApplicationName;
  if ( v96 > 0 )
  {
    do
    {
      if ( (int)v51 > 0 )
      {
        if ( CommandLine != 0 )
        {
          v126 = 0x8000;
          v127 = &CommandLine;
          do
          {
            ++v127;
            --v126;
          }
          while ( *v127 != 0 );
          if ( v126 == 0 )
            goto LABEL_255;
        }
        else
        {
          v127 = &CommandLine;
        }
        *(_DWORD *)v127 = 32;
      }
      v97 = v95[v51];
      v98 = " ";
      v99 = 32;
      do
      {
        if ( wcschr(v97, v99) != nullptr )
        {
          v100 = 0x8000;
          v101 = &CommandLine;
          if ( CommandLine != 0 )
          {
            do
            {
              ++v101;
              --v100;
            }
            while ( *v101 != 0 );
            if ( v100 == 0 )
              goto LABEL_255;
          }
          v102 = v95[v51];
          *(_DWORD *)v101 = 34;
          v103 = *v102;
          if ( *v102 == 92 )
          {
LABEL_143:
            v104 = 0;
            do
            {
              v105 = v102;
              v103 = v102[1];
              ++v102;
              ++v104;
            }
            while ( v103 == 92 );
            if ( v103 != 0 )
            {
              if ( v103 == 34 )
              {
                v111 = 2 * v104 + 1;
                if ( v111 > 0 )
                  goto LABEL_163;
              }
              else
              {
                v106 = 0;
                if ( v104 > 0 )
                {
                  while ( 1 )
                  {
                    v107 = 0x8000;
                    v108 = &CommandLine;
                    if ( CommandLine != 0 )
                    {
                      do
                      {
                        ++v108;
                        --v107;
                      }
                      while ( *v108 != 0 );
                      if ( v107 == 0 )
                        goto LABEL_255;
                    }
                    *(_DWORD *)v108 = 92;
                    if ( v104 == v106 + 1 )
                      break;
                    ++v106;
                  }
                  v103 = v105[1];
                }
              }
LABEL_154:
              if ( CommandLine == 0 )
                goto LABEL_169;
LABEL_155:
              v109 = 0x8000;
              v110 = &CommandLine;
              do
              {
                ++v110;
                --v109;
              }
              while ( *v110 != 0 );
              if ( v109 != 0 )
                goto LABEL_158;
              goto LABEL_255;
            }
            v120 = 2 * v104;
            if ( v120 > 0 )
            {
              for ( ii = 0; ii != v120; ++ii )
              {
                v122 = 0x8000;
                v123 = &CommandLine;
                if ( CommandLine != 0 )
                {
                  do
                  {
                    ++v123;
                    --v122;
                  }
                  while ( *v123 != 0 );
                  if ( v122 == 0 )
                    goto LABEL_255;
                }
                *(_DWORD *)v123 = 92;
              }
            }
          }
          else
          {
            while ( v103 != 0 )
            {
              if ( v103 != 34 )
                goto LABEL_154;
              v111 = 1;
LABEL_163:
              for ( jj = 0; jj < v111; ++jj )
              {
                v113 = 0x8000;
                v114 = &CommandLine;
                if ( CommandLine != 0 )
                {
                  do
                  {
                    ++v114;
                    --v113;
                  }
                  while ( *v114 != 0 );
                  if ( v113 == 0 )
                    goto LABEL_255;
                }
                *(_DWORD *)v114 = 92;
              }
              v103 = *v102;
              if ( CommandLine != 0 )
                goto LABEL_155;
LABEL_169:
              v110 = &CommandLine;
LABEL_158:
              ++v102;
              *v110 = v103;
              v110[1] = 0;
              v103 = *v102;
              if ( *v102 == 92 )
                goto LABEL_143;
            }
          }
          v124 = 0x8000;
          v125 = &CommandLine;
          if ( CommandLine != 0 )
          {
            do
            {
              ++v125;
              --v124;
            }
            while ( *v125 != 0 );
            if ( v124 == 0 )
              goto LABEL_255;
          }
          *(_DWORD *)v125 = 34;
          goto LABEL_178;
        }
        v99 = *((_WORD *)v98 + 1);
        v98 += 2;
      }
      while ( v99 != 0 );
      v115 = v95[v51];
      if ( v115 == nullptr )
        goto LABEL_255;
      v116 = 0x8000;
      v117 = &CommandLine;
      if ( CommandLine != 0 )
      {
        do
        {
          ++v117;
          --v116;
        }
        while ( *v117 != 0 );
        v118 = *v115;
        if ( *v115 != 0 )
        {
LABEL_174:
          if ( v116 == 0 )
            goto LABEL_255;
          *v117++ = v118;
          ++v115;
          --v116;
          goto LABEL_176;
        }
      }
      else
      {
LABEL_176:
        v118 = *v115;
        if ( *v115 != 0 )
          goto LABEL_174;
      }
      *v117 = 0;
LABEL_178:
      ++v51;
    }
    while ( v163 > (int)v51 );
  }
  if ( !CreateProcessW(&ApplicationName, &CommandLine, nullptr, nullptr, true, 0x20u, nullptr, nullptr, &v172, v178) )
  {
    v146 = GetLastError();
    sub_140010D70("Error, couldn't launch child", v146);
  }
  CloseHandle(v178[0].hThread);
  v177[0] = 0;
  hObject = v178[0].hProcess;
  if ( v178[0].hProcess != nullptr )
  {
    WaitForSingleObject(v178[0].hProcess, 0xFFFFFFFF);
    if ( !GetExitCodeProcess(hObject, v177) )
      v177[0] = 1;
    CloseHandle(hObject);
    hObject = nullptr;
  }
  sub_140011030();
  return v177[0];
}

