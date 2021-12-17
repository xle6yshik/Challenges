#include "tags.h"
#include "vars.h"

/*
*
*/

void t_9f(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    // TODO: 32 -> 64 ???
    // mov     edx, dword ptr[rbp + rax * 8 + v19]
    // mov     edx, edx
    // mov[rbp + rax * 8 + v18], rdx

    {
        cpy_1819(o, STP_P1, bm_32(0));
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
