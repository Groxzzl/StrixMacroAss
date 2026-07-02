// _errno @ 0x140020AF8
#include <stdint.h>
#include <windows.h>

// attributes: thunk
int *__cdecl errno()
{
  return _errno();
}

