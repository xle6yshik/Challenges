#include "tags.h"
#include "vars.h"

/*
*
*/

void t_dc(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);

        set_val_19(o, 3, 1);

        cpy_1819(o, STP_P2, 4);

        add_191818(o, 5, STP_P2, STP_P1);

        cpy_1819(o, STP_P1, 6);

        adr64_18_v20(o, STP_P2, 7);

        // TODO: S32 -> 64
        // mov     rcx, [rbp + rax * 8 + v18]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // movsxd  rdx, eax
        // add     rdx, rcx
        // mov     [rbp + rax * 8 + v19], rdx

        add_191818(o, 8, bm_s32(STP_P1), STP_P2);

        cpy_1819(o, STP_P1, 9);

        adr64_19_base(o, 10, 11);

        wrt64_1819(o, STP_P1, 12);
    }

    set_idx_17(o, 13); // (idx_t*) v17 += 13; (tag_t*) v17=v17+0x35;
}
