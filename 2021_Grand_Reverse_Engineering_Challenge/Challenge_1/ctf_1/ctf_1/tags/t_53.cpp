#include "tags.h"
#include "vars.h"

/*
*
*/

void t_53(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // TODO: S32 -> 64
        // mov     ecx, dword ptr[rbp + rax * 8 + v19]
        // mov     edx, dword ptr[rbp + rax * 8 + v19]
        // imul    edx, ecx
        // mov     dword ptr[rbp + rax * 8 + v19], edx

        mul_191919(o, bm_32(1), bm_32(0), bm_32(2));
    }

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xd;
}
