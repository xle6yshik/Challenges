#include "tags.h"
#include "vars.h"

/*
*
*/

void t_01(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    // TODO: 32 -> 32
    // mov     edx, dword ptr[rbp + rax * 8 + v19]
    // mov     dword ptr[rbp + rax * 8 + v18], edx

    {
        cpy_1819(o, bm_32(STP_P1), bm_32(0));
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
