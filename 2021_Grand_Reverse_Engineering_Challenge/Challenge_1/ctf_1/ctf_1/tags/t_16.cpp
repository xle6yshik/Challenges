#include "tags.h"
#include "vars.h"

/*
*
*/

void t_16(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_18(o, STP_P1, 0);

        cpy_1918(o, 2, STP_P1);

        set_val_19(o, 3, 4);

        mul_191919(o, 7, 8, 6);

        cpy_1819(o, STP_P1, 9);

        set_val_19(o, 12, 10);

        add_181819(o, STP_P1, STP_P1, 13);

        // TODO: S32 -> 64
        // mov     rdx, [rbp + rax * 8 + v19]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // cdqe
        // add     rdx, rax
        // mov[rbp + rax * 8 + v18], rdx

        add_181918(o, STP_P1, 14, bm_s32(STP_P1));

        adr64_19_base(o, 15, 16);

        wrt64_1819(o, STP_P1, 17);
    }

    set_idx_17(o, 18); // (idx_t*) v17 += 18; (tag_t*) v17=v17+0x49;
}
