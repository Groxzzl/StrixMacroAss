// sub_1424E2B73 @ 0x1424E2B73
#include <stdint.h>
#include <windows.h>

__int16 sub_1424E2B73()
{
  __int16 v0; // dx

  __asm
  {
    fcmovb  st, st(6)
    fcmove  st, st(5)
    fcom    st
    fcomp   st(3)
    fst     st(7)
    fsub    st, st(4)
    fst     st(6)
    fst     st(3)
    fst     st(2)
    fcmovu  st, st(1)
    fst     st(2)
    fcom    st(1)
    fst     st
    fcmovb  st, st(1)
    fcmovb  st, st(3)
    fcmovb  st, st(2)
    fsub    st, st
    fcmove  st, st(6)
    fsubr   st, st(6)
    fst     st(2)
    fcom    st(1)
    fsubr   st, st
    fst     st(7)
    fcmovbe st, st(3)
    fsubr   st, st(4)
    fcmove  st, st
    fsub    st, st(1)
    fst     st(5)
    fcmove  st, st(7)
    fcomp   st(6)
    fst     st(3)
    fcomp   st(5)
    fst     st(6)
    fadd    st, st(5)
    fcomp   st(3)
    fst     st(1)
    fcmove  st, st(4)
    fsubr   st, st(3)
    fadd    st, st(7)
    fcom    st(3)
    fcmovbe st, st
    fcomp   st(4)
    fsubr   st, st(1)
    fcmovb  st, st(1)
    fst     st
    fst     st(1)
    fst     st(6)
    fst     st(1)
    fst     st(4)
    fcmovb  st, st(7)
    fst     st(7)
    fst     st(5)
    fst     st(5)
    fadd    st, st(7)
    fcmovb  st, st(3)
    fst     st(2)
    fcomp   st(5)
  }
  sub_1424E2A2C();
  sub_1424E29E0();
  __asm { fst     st(6) }
  return v0;
}

