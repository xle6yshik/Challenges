#include "tags.h"
#include "vars.h"

/*
*
*/

void t_5a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_18(o, STP_P1, 0);

        cpy_1918(o, 2, STP_P1);

        mul_191919(o, 4, 5, 3);

        cpy_1819(o, STP_P1, 6);

        set_val_19(o, 9, 7);

        cpy_1819(o, STP_P2, 10);

        add_191818(o, 11, STP_P2, STP_P1);

        cpy_1819(o, STP_P1, 12);

        // TODO: S32 -> 64
        // mov     rdx, [rbp + rax * 8 + v19]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // cdqe
        // add     rdx, rax
        // mov     [rbp + rax * 8 + v18], rdx

        add_181918(o, STP_P1, 13, bm_s32(STP_P1));
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 14); // (idx_t*) v17 += 14; (tag_t*) v17=v17+0x39;
}
