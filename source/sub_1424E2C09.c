// sub_1424E2C09 @ 0x1424E2C09
#include <stdint.h>
#include <windows.h>

__int64 sub_1424E2C09()
{
  sub_1424E291D();
  sub_1424E2B73();
  sub_1424E2C09();
  sub_1424E291D();
  sub_1424E2C09();
  __asm
  {
    fsub    st, st(1)
    fcmove  st, st(4)
    fcmovb  st, st(1)
    fcmovb  st, st(1)
    fst     st
    fcmovb  st, st(7)
    fst     st(6)
    fcmove  st, st(7)
    fadd    st, st(2)
    fadd    st, st(1)
    fcmove  st, st(3)
    fcmovbe st, st(1)
    fst     st
    fsub    st, st(6)
    fst     st(5)
    fst     st(7)
    fcmovbe st, st(1)
    fcmovb  st, st(4)
    fcmove  st, st
    fst     st(2)
    fmul    st, st(4)
    fcmovbe st, st(3)
    fst     st(4)
    fadd    st, st(2)
    fcmove  st, st(7)
    fst     st(1)
    fcmovb  st, st(3)
    fcmove  st, st(3)
    fcmovb  st, st(7)
    fcomp   st(7)
    fst     st(5)
    fcmovbe st, st(5)
    fcmove  st, st(2)
    fcmove  st, st(3)
    fst     st(3)
    fcmovu  st, st(3)
    fst     st(1)
    fst     st(4)
    fcmovb  st, st(7)
    fst     st(5)
    fst     st(2)
    fcmove  st, st(6)
  }
  sub_1424E2A2C();
  sub_1424E2B73();
  sub_1424E2B73();
  __asm
  {
    fst     st
    fcmovbe st, st(7)
    fst     st(2)
    fcmovbe st, st(2)
    fst     st(4)
    fsub    st, st(6)
    fcomp   st(2)
    fcmovbe st, st(1)
    fcmovb  st, st(6)
    fst     st
    fmul    st, st(2)
    fcmovbe st, st(4)
    fcom    st(7)
    fsub    st, st(2)
    fst     st
    fcmove  st, st
    fst     st
    fadd    st, st(3)
    fst     st(3)
  }
  sub_1424E29EE();
  sub_1424E291D();
  sub_1424E2C09();
  sub_1424E2A2C();
  sub_1424E29EE();
  return sub_1424E29EE();
}

