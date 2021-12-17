#include "tags.h"
#include "vars.h"

/*
*
*/

void t_29(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // movzx   edx, byte ptr[rbp + rax * 8 + v19]
        // mov     byte ptr[rbp + rax * 8 + v18], dl

        cpy_1819(o, bm_8(STP_P1), bm_8(0));
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
