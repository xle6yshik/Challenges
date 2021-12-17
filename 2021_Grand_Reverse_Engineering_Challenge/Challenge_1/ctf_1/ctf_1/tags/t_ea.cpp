#include "tags.h"
#include "vars.h"

/*
*
*/

void t_ea(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // TODO: 32 -> 32
        // mov     edx, dword ptr[rbp + rax * 8 + v19]
        // mov     dword ptr[rbp + rax * 8 + v19], edx

        cpy_1919(o, bm_32(1), bm_32(0));
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
