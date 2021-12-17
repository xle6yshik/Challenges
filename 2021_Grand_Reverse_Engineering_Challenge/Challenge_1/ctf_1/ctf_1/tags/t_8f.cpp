#include "tags.h"
#include "vars.h"

/*
*
*/

void t_8f(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    // TODO: S32 -> 64
    // mov     rcx, [rbp + rax * 8 + v18]
    // mov     eax, dword ptr[rbp + rax * 8 + v18]
    // movsxd  rdx, eax
    // add     rdx, rcx
    // mov[rbp + rax * 8 + v19], rdx

    {
        add_191818(o, 0, bm_s32(STP_N1), STP_Z0);
    }

    set_idx_16(o, STP_N2); // (idx_t) v16 -= 2;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
