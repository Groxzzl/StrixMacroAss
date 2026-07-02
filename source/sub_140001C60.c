// sub_140001C60 @ 0x140001C60
#include <stdint.h>
#include <windows.h>

unsigned __int64 __fastcall sub_140001C60(__int64 a1)
{
  unsigned int *v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  v2 = (unsigned int *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = (unsigned __int64)v2 + *(unsigned int *)(a1 + 72);
  if ( *(_QWORD *)a1 <= 0x1Fu )
    v5 = v3 + 0x27D4EB2F165667C5LL;
  else
    v5 = 0x9E3779B185EBCA87uLL
       * ((0x9E3779B185EBCA87uLL * __ROL8__(0xC2B2AE3D27D4EB4FuLL * *(_QWORD *)(a1 + 32), 31))
        ^ (0x85EBCA77C2B2AE63uLL
         - 0x61C8864E7A143579LL
         * ((0x9E3779B185EBCA87uLL * __ROL8__(0xC2B2AE3D27D4EB4FuLL * v3, 31))
          ^ (0x85EBCA77C2B2AE63uLL
           - 0x61C8864E7A143579LL
           * ((0x9E3779B185EBCA87uLL
             * ((0x9E3779B185EBCA87uLL * __ROL8__(0xC2B2AE3D27D4EB4FuLL * *(_QWORD *)(a1 + 8), 31))
              ^ (__ROL8__(*(_QWORD *)(a1 + 32), 18)
               + __ROL8__(v3, 12)
               + __ROL8__(*(_QWORD *)(a1 + 16), 7)
               + __ROL8__(*(_QWORD *)(a1 + 8), 1)))
             - 0x7A1435883D4D519DLL)
            ^ (0x9E3779B185EBCA87uLL * __ROL8__(0xC2B2AE3D27D4EB4FuLL * *(_QWORD *)(a1 + 16), 31)))))))
       - 0x7A1435883D4D519DLL;
  v6 = *(_QWORD *)a1 + v5;
  if ( v4 >= a1 + 48 )
  {
    v7 = a1 + 48;
    do
    {
      v8 = *(_QWORD *)(v7 - 8);
      v7 += 8LL;
      v6 = 0x9E3779B185EBCA87uLL * __ROL8__(v6 ^ (0x9E3779B185EBCA87uLL * __ROL8__(0xC2B2AE3D27D4EB4FuLL * v8, 31)), 27)
         - 0x7A1435883D4D519DLL;
    }
    while ( v4 >= v7 );
    v2 = (unsigned int *)(a1 + 48 + ((v4 - a1 - 48) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  if ( v4 >= (unsigned __int64)(v2 + 1) )
  {
    v9 = 0x9E3779B185EBCA87uLL * *v2++;
    v6 = 0xC2B2AE3D27D4EB4FuLL * __ROL8__(v6 ^ v9, 23) + 0x165667B19E3779F9LL;
  }
  if ( (unsigned __int64)v2 < v4 )
  {
    do
    {
      v10 = *(unsigned __int8 *)v2;
      v2 = (unsigned int *)((char *)v2 + 1);
      v6 = 0x9E3779B185EBCA87uLL * __ROL8__(v6 ^ (0x27D4EB2F165667C5LL * v10), 11);
    }
    while ( (unsigned int *)v4 != v2 );
  }
  return ((0x165667B19E3779F9LL
         * (((0xC2B2AE3D27D4EB4FuLL * (v6 ^ (v6 >> 33))) >> 29) ^ (0xC2B2AE3D27D4EB4FuLL * (v6 ^ (v6 >> 33))))) >> 32)
       ^ (0x165667B19E3779F9LL
        * (((0xC2B2AE3D27D4EB4FuLL * (v6 ^ (v6 >> 33))) >> 29) ^ (0xC2B2AE3D27D4EB4FuLL * (v6 ^ (v6 >> 33)))));
}

