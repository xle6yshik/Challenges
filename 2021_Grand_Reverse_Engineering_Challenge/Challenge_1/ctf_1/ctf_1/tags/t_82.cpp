#include "tags.h"
#include "vars.h"

/*
*
*/

void t_82(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_19(o, 0, 1);

        set_val_18(o, STP_P1, 3);

        cpy_1918(o, 5, STP_P1);

        mul_181919(o, STP_P1, 7, 6);

        set_val_19(o, 10, 8);

        add_181819(o, STP_P1, STP_P1, 11);

        adr64_18_v20(o, STP_P2, 12);

        // TODO: S32 -> 64
        // mov     rcx, [rbp + rax * 8 + v18]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // movsxd  rdx, eax
        // add     rdx, rcx
        // mov[rbp + rax * 8 + v19], rdx

        add_191818(o, 13, bm_s32(STP_P1), STP_P2);

        cpy_1819(o, STP_P1, 14);

        adr64_18_base(o, STP_P2, 15);
    }

    set_idx_16(o, STP_P2); // (idx_t) v16 += 2;
    set_idx_17(o, 16); // (idx_t*) v17 += 16; (tag_t*) v17=v17+0x41;
}
