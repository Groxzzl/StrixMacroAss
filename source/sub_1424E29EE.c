// sub_1424E29EE @ 0x1424E29EE
#include <stdint.h>
#include <windows.h>

__int64 sub_1424E29EE()
{
  sub_1424E29EE();
  __asm
  {
    fsubr   st, st(5)
    fst     st(5)
    fcmove  st, st(7)
    fst     st(4)
    fst     st(3)
    fsubr   st, st(2)
    fst     st(1)
    fcmove  st, st(3)
    fcom    st(3)
    fst     st(5)
    fcmove  st, st(7)
    fcmove  st, st(5)
    fcomp   st(4)
    fst     st(2)
    fcom    st(2)
    fcomp   st(6)
    fcmove  st, st(3)
    fcmovbe st, st
    fcmove  st, st(7)
  }
  return sub_1424E2C09();
}

