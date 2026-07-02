// free @ 0x140020B50
#include <stdint.h>
#include <windows.h>

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}

