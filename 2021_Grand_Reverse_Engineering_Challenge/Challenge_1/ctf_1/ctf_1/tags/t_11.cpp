#include "tags.h"
#include "vars.h"

/*
*
*/

void t_11(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // TODO: 64 -> 32
        // mov     rdx, [rbp + rax * 8 + v19]
        // mov     dword ptr[rbp + rax * 8 + v19], edx

        cpy_1919(o, bm_32(0), 1);
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
