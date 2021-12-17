#include "tags.h"
#include "vars.h"

/*
*
*/

void t_2b(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // TODO: S32 -> 64
        // mov     edx, dword ptr[rbp + rax * 8 + v19]
        // movsxd  rdx, edx
        // mov     [rbp + rax * 8 + v19], rdx

        cpy_1919(o, 0, bm_s32(1));
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
