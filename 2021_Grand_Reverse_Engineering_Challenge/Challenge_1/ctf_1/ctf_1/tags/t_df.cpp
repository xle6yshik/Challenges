#include "tags.h"
#include "vars.h"

/*
*
*/

void t_df(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // TODO: 32 -> 64
        // mov     ecx, dword ptr[rbp + rax * 8 + v19]
        // mov     edx, dword ptr[rbp + rax * 8 + v18]
        // sub     ecx, edx
        // mov     edx, ecx
        // mov     dword ptr[rbp + rax * 8 + v18], edx

        sub_181918(o, bm_32(STP_Z0), bm_32(0), bm_32(STP_Z0));
    }

    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
