#include "tags.h"
#include "vars.h"

/*
*
*/

void t_56(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    // TODO: 32 -> 64 ???
    // mov     edx, dword ptr [rbp+rax*8+v18]
    // mov     edx, edx
    // mov     [rbp+rax*8+v18], rdx

    {
        cpy_1818(o, STP_Z0, bm_32(STP_Z0));
    }
}
