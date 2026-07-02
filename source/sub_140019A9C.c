// sub_140019A9C @ 0x140019A9C
#include <stdint.h>
#include <windows.h>

__int64 __fastcall sub_140019A9C(__int16 a1, __int64 a2, int a3, unsigned __int16 *a4, __int64 *a5)
{
  unsigned __int16 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  wchar_t **v8; // rax
  char **v9; // rax
  char *v10; // rax
  int v11; // eax
  __int64 *v12; // rax
  unsigned int *v13; // rax
  unsigned int *v14; // rax
  int v15; // eax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 *v21; // rax
  double **v22; // rax
  double **v23; // rax
  double **v24; // rax
  double *v25; // rax
  __int64 *v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  int *v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct lconv *v36; // rax
  int v37; // eax
  int v38; // edx
  unsigned __int16 *v39; // rax
  _TBYTE v41; // [rsp+30h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-90h] BYREF
  __int64 v43; // [rsp+48h] [rbp-88h]
  __int64 v44; // [rsp+54h] [rbp-7Ch] BYREF
  __int16 v45; // [rsp+5Ch] [rbp-74h] BYREF
  wchar_t v46; // [rsp+5Eh] [rbp-72h] BYREF
  __int64 v47; // [rsp+60h] [rbp-70h] BYREF
  __int64 v48; // [rsp+68h] [rbp-68h]
  __int64 v49; // [rsp+70h] [rbp-60h] BYREF
  int v50; // [rsp+78h] [rbp-58h]
  int v51; // [rsp+7Ch] [rbp-54h] BYREF
  _DWORD v52[2]; // [rsp+80h] [rbp-50h] BYREF
  __int16 v53; // [rsp+88h] [rbp-48h]
  int v54; // [rsp+8Ch] [rbp-44h]
  __int16 v55; // [rsp+90h] [rbp-40h]
  unsigned int v56; // [rsp+94h] [rbp-3Ch]
  int v57; // [rsp+98h] [rbp-38h]
  int v58; // [rsp+9Ch] [rbp-34h]
  int v59; // [rsp+A4h] [rbp-2Ch]
  unsigned __int16 *v60; // [rsp+A8h] [rbp-28h]
  int v61; // [rsp+B0h] [rbp-20h]
  int ErrorMessage; // [rsp+B4h] [rbp-1Ch]
  int *v63; // [rsp+B8h] [rbp-18h]
  int v64; // [rsp+C0h] [rbp-10h]
  unsigned int v65; // [rsp+C4h] [rbp-Ch]
  wchar_t *v66; // [rsp+C8h] [rbp-8h]
  int v68; // [rsp+E0h] [rbp+10h]

  ErrorMessage = *errno();
  v49 = a2;
  v68 = a1 & 0x6000;
  v50 = v68;
  v51 = -1;
  v52[0] = -1;
  v52[1] = -3;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = a3;
  v58 = -1;
  v66 = nullptr;
LABEL_192:
  while ( 1 )
  {
    v39 = a4++;
    v61 = *v39;
    if ( v61 == 0 )
      break;
    if ( v61 == 37 )
    {
      v65 = 0;
      v64 = 0;
      v60 = a4;
      v63 = &v51;
      if ( v66 != nullptr )
      {
        v52[0] = -1;
        v51 = -1;
        sub_140017D2F(v66, a4 - v66 - 1, (__int64)&v49);
        v66 = nullptr;
      }
      v50 = v68;
      v52[0] = -1;
      v51 = -1;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_188:
          if ( *a4 == 0 )
            goto LABEL_192;
          v5 = a4++;
          v61 = *v5;
          if ( v61 != 122 )
            break;
          v64 = 3;
          v65 = 4;
        }
        if ( v61 > 122 )
          break;
        if ( v61 == 120 )
          goto LABEL_74;
        if ( v61 > 120 )
          break;
        if ( v61 == 117 )
          goto LABEL_74;
        if ( v61 > 117 )
          break;
        switch ( v61 )
        {
          case 't':
            v64 = 3;
            v65 = 4;
            goto LABEL_188;
          case 's':
            goto LABEL_69;
          case 'p':
            if ( v65 == 0 && v68 == v50 )
            {
              v20 = v50;
              BYTE1(v20) = BYTE1(v50) | 2;
              v50 = v20;
              v52[0] = 16;
            }
            v21 = a5++;
            v47 = *v21;
            v48 = 0;
            v42 = v47;
            v43 = 0;
            sub_1400183CA(120, &v42, &v49);
            goto LABEL_192;
          default:
            break;
        }
        if ( v61 > 112 )
          break;
        switch ( v61 )
        {
          case 'o':
            goto LABEL_74;
          case 'n':
            switch ( v64 )
            {
              case 5:
                v26 = a5++;
                *(_BYTE *)*v26 = v56;
                break;
              case 1:
                v27 = a5++;
                *(_WORD *)*v27 = v56;
                break;
              case 2:
                v28 = a5++;
                *(_DWORD *)*v28 = v56;
                break;
              default:
                v29 = a5++;
                if ( v64 == 3 )
                  *(_QWORD *)*v29 = (int)v56;
                else
                  *(_DWORD *)*v29 = v56;
                break;
            }
            goto LABEL_192;
          case 'm':
            v10 = strerror(ErrorMessage);
            sub_140017CA9(v10, (__int64)&v49);
            goto LABEL_192;
          case 'l':
            if ( *a4 == 108 )
            {
              ++a4;
              v64 = 3;
            }
            else
            {
              v64 = 2;
            }
            v65 = 4;
            break;
          case 'j':
            v64 = 3;
            v65 = 4;
            goto LABEL_188;
          default:
            if ( v61 > 106 )
              goto LABEL_175;
            switch ( v61 )
            {
              case 'i':
                goto LABEL_85;
              case 'h':
                if ( *a4 == 104 )
                {
                  ++a4;
                  v64 = 5;
                }
                else
                {
                  v64 = 1;
                }
                v65 = 4;
                break;
              case 'g':
                v50 |= 0x20u;
LABEL_112:
                v24 = (double **)a5++;
                if ( (v50 & 4) != 0 )
                  *(double *)&v41 = **v24;
                else
                  *(double *)&v41 = *(double *)v24;
                sub_140019176((double *)&v41, &v49);
                goto LABEL_192;
              case 'f':
                v50 |= 0x20u;
LABEL_107:
                v23 = (double **)a5++;
                if ( (v50 & 4) != 0 )
                  *(double *)&v41 = **v23;
                else
                  *(double *)&v41 = *(double *)v23;
                sub_140018FFB((double *)&v41, (__int64)&v49);
                goto LABEL_192;
              case 'e':
                v50 |= 0x20u;
LABEL_102:
                v22 = (double **)a5++;
                if ( (v50 & 4) != 0 )
                  *(double *)&v41 = **v22;
                else
                  *(double *)&v41 = *(double *)v22;
                sub_1400190CB((double *)&v41, &v49);
                goto LABEL_192;
              case 'd':
LABEL_85:
                v15 = v50;
                LOBYTE(v15) = v50 | 0x80;
                v50 = v15;
                if ( v64 == 3 )
                {
                  v16 = a5++;
                  v47 = *v16;
                }
                else if ( v64 == 2 )
                {
                  v17 = a5++;
                  v47 = *(int *)v17;
                }
                else
                {
                  v18 = a5++;
                  v47 = *(int *)v18;
                  if ( v64 == 1 )
                  {
                    v47 = (__int16)v47;
                  }
                  else if ( v64 == 5 )
                  {
                    v47 = (char)v47;
                  }
                }
                if ( v47 >= 0 )
                  v19 = 0;
                else
                  v19 = -1;
                v48 = v19;
                v42 = v47;
                v43 = v19;
                sub_140018047(&v42, (__int64)&v49);
                goto LABEL_192;
              case 'c':
                goto LABEL_64;
              case 'a':
                v50 |= 0x20u;
LABEL_117:
                v25 = (double *)a5++;
                if ( (v50 & 4) != 0 )
                {
                  *(double *)&v41 = **(double **)v25;
                  sub_140019826((double *)&v41, (__int64)&v49);
                }
                else
                {
                  sub_14001993F(*v25, (__int64)&v49);
                }
                goto LABEL_192;
              default:
                if ( v61 > 97 )
                  goto LABEL_175;
                if ( v61 == 88 )
                {
LABEL_74:
                  v11 = v50;
                  BYTE1(v11) = BYTE1(v50) & 0xFE;
                  v50 = v11;
                  if ( v64 == 3 )
                  {
                    v12 = a5++;
                    v47 = *v12;
                  }
                  else if ( v64 == 2 )
                  {
                    v13 = (unsigned int *)a5++;
                    v47 = *v13;
                  }
                  else
                  {
                    v14 = (unsigned int *)a5++;
                    v47 = *v14;
                    if ( v64 == 1 )
                    {
                      v47 = (unsigned __int16)v47;
                    }
                    else if ( v64 == 5 )
                    {
                      v47 = (unsigned __int8)v47;
                    }
                  }
                  v42 = v47;
                  v43 = v48;
                  if ( v61 == 117 )
                    sub_140018047(&v42, (__int64)&v49);
                  else
                    sub_1400183CA(v61, &v42, &v49);
                  goto LABEL_192;
                }
                if ( v61 > 88 )
                  goto LABEL_175;
                if ( v61 == 83 )
                {
                  v64 = 2;
LABEL_69:
                  if ( v64 == 2 || v64 == 3 )
                  {
                    v8 = (wchar_t **)a5++;
                    sub_140017F31(*v8, (__int64)&v49);
                  }
                  else
                  {
                    v9 = (char **)a5++;
                    sub_140017CA9(*v9, (__int64)&v49);
                  }
                  goto LABEL_192;
                }
                if ( v61 > 83 )
                  goto LABEL_175;
                if ( v61 == 76 )
                {
                  v50 |= 4u;
                  v65 = 4;
                  goto LABEL_188;
                }
                if ( v61 > 76 )
                  goto LABEL_175;
                if ( v61 == 73 )
                {
                  if ( *a4 == 54 && a4[1] == 52 )
                  {
                    v64 = 3;
                    a4 += 2;
                  }
                  else if ( *a4 == 51 && a4[1] == 50 )
                  {
                    v64 = 2;
                    a4 += 2;
                  }
                  else
                  {
                    v64 = 3;
                  }
                  v65 = 4;
                }
                else
                {
                  if ( v61 > 73 )
                    goto LABEL_175;
                  if ( v61 == 71 )
                    goto LABEL_112;
                  if ( v61 > 71 )
                    goto LABEL_175;
                  switch ( v61 )
                  {
                    case 'F':
                      goto LABEL_107;
                    case 'E':
                      goto LABEL_102;
                    case 'C':
                      v64 = 2;
LABEL_64:
                      v52[0] = -1;
                      if ( v64 == 2 || v64 == 3 )
                      {
                        v6 = a5++;
                        v46 = *(_DWORD *)v6;
                        sub_140017D2F(&v46, 1, (__int64)&v49);
                      }
                      else
                      {
                        v7 = a5++;
                        LOBYTE(v47) = *(_DWORD *)v7;
                        sub_140017A4B((char *)&v47, 1, (__int64)&v49);
                      }
                      goto LABEL_192;
                    default:
                      break;
                  }
                  if ( v61 > 67 )
                    goto LABEL_175;
                  if ( v61 == 65 )
                    goto LABEL_117;
                  if ( v61 > 65 )
                    goto LABEL_175;
                  if ( v61 == 48 )
                  {
                    if ( v65 != 0 )
                      goto LABEL_175;
                    v37 = v50;
                    BYTE1(v37) = BYTE1(v50) | 2;
                    v50 = v37;
                  }
                  else
                  {
                    if ( v61 > 48 )
                      goto LABEL_175;
                    if ( v61 == 46 )
                    {
                      if ( v65 > 1 )
                      {
                        v65 = 4;
                      }
                      else
                      {
                        v52[0] = 0;
                        v63 = v52;
                        v65 = 2;
                      }
                    }
                    else
                    {
                      if ( v61 > 46 )
                        goto LABEL_175;
                      if ( v61 == 45 )
                      {
                        if ( v65 == 0 )
                        {
                          v34 = v50;
                          BYTE1(v34) = BYTE1(v50) | 4;
                          v50 = v34;
                        }
                      }
                      else if ( v61 == 43 )
                      {
                        if ( v65 == 0 )
                        {
                          v33 = v50;
                          BYTE1(v33) = BYTE1(v50) | 1;
                          v50 = v33;
                        }
                      }
                      else
                      {
                        if ( v61 > 43 )
                          goto LABEL_175;
                        if ( v61 == 42 )
                        {
                          if ( v63 != nullptr && (v65 == 0 || v65 == 2) )
                          {
                            v30 = (int *)a5++;
                            *v63 = *v30;
                            if ( *v63 < 0 )
                            {
                              if ( v65 != 0 )
                              {
                                v52[0] = -1;
                              }
                              else
                              {
                                v31 = v50;
                                BYTE1(v31) = BYTE1(v50) | 4;
                                v50 = v31;
                                v51 = -v51;
                              }
                            }
                          }
                          else
                          {
                            v65 = 4;
                          }
                          v63 = nullptr;
                        }
                        else if ( v61 == 39 )
                        {
                          if ( v65 == 0 )
                          {
                            v35 = v50;
                            BYTE1(v35) = BYTE1(v50) | 0x10;
                            v50 = v35;
                            v44 = 0;
                            v36 = localeconv();
                            v59 = sub_14002070E(&v45, v36->thousands_sep, 16, &v44);
                            if ( v59 > 0 )
                              v55 = v45;
                            v54 = v59;
                          }
                        }
                        else
                        {
                          if ( v61 > 39 )
                            goto LABEL_175;
                          if ( v61 == 37 )
                          {
                            v52[0] = -1;
                            v51 = -1;
                            sub_140017D2F((wchar_t *)"%", 1, (__int64)&v49);
                            goto LABEL_192;
                          }
                          if ( v61 > 37 )
                            goto LABEL_175;
                          if ( v61 == 32 )
                          {
                            if ( v65 == 0 )
                              v50 |= 0x40u;
                          }
                          else
                          {
                            if ( v61 != 35 )
                              goto LABEL_175;
                            if ( v65 == 0 )
                            {
                              v32 = v50;
                              BYTE1(v32) = BYTE1(v50) | 8;
                              v50 = v32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
      }
LABEL_175:
      if ( v65 > 3 || v61 > 57 || v61 <= 47 )
      {
        a4 = v60;
        v52[0] = -1;
        v51 = -1;
        sub_140017D2F((wchar_t *)"%", 1, (__int64)&v49);
        continue;
      }
      if ( v65 != 0 )
      {
        if ( v65 == 2 )
          v65 = 3;
      }
      else
      {
        v65 = 1;
      }
      if ( v63 != nullptr )
      {
        if ( *v63 >= 0 )
          v38 = 10 * *v63 + v61 - 48;
        else
          v38 = v61 - 48;
        *v63 = v38;
      }
      goto LABEL_188;
    }
    if ( v66 == nullptr )
      v66 = a4 - 1;
  }
  if ( v66 != nullptr )
  {
    v52[0] = -1;
    v51 = -1;
    sub_140017D2F(v66, a4 - v66 - 1, (__int64)&v49);
  }
  return v56;
}

