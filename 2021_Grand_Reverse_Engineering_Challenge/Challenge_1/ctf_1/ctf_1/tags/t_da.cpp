#include "tags.h"
#include "vars.h"

/*
*
*/

void t_da(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    // TODO: S32 -> 64
    // mov     rdx, [rbp + rax * 8 + v18]
    // mov     eax, dword ptr[rbp + rax * 8 + v18]
    // cdqe
    // add     rdx, rax
    // mov[rbp + rax * 8 + v18], rdx

    {
        add_181818(o, STP_N1, STP_Z0, bm_s32(STP_N1));
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
}
