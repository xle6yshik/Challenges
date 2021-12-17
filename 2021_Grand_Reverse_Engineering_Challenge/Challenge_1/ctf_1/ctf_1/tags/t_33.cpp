#include "tags.h"
#include "vars.h"

/*
*
*/

void t_33(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // TODO: 32 -> 64
        // mov     ecx, dword ptr[rbp + rax * 8 + v19]
        // mov     edx, dword ptr[rbp + rax * 8 + v19]
        // add     edx, ecx
        // mov     dword ptr[rbp + rax * 8 + v19], edx

        add_191919(o, bm_32(1), bm_32(2), bm_32(0));
    }

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xd;
}
