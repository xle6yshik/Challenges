#include "tags.h"
#include "vars.h"

/*
*
*/

void t_bf(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        mul_181919(o, STP_P1, 1, 0);

        set_val_19(o, 4, 2);

        add_181819(o, STP_P1, STP_P1, 5);

        adr64_19_v20(o, 6, 7);

        cpy_1819(o, STP_P2, 8);

        // TODO: S32 -> 64
        // mov     rcx, [rbp + rax * 8 + v18]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // movsxd  rdx, eax
        // add     rdx, rcx
        // mov[rbp + rax * 8 + v19], rdx

        add_191818(o, 9, bm_s32(STP_P1), STP_P2);
    }

    set_idx_17(o, 10); // (idx_t*) v17 += 10; (tag_t*) v17=v17+0x29;
}
