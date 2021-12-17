#include "tags.h"
#include "vars.h"

/*
*
*/

void t_a8(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        mul_181919(o, STP_P1, 1, 0);

        set_val_19(o, 2, 3);

        add_181819(o, STP_P1, STP_P1, 5);

        // TODO: S32 -> 64
        // mov     rdx, [rbp + rax * 8 + v19]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // cdqe
        // add     rdx, rax
        // mov     [rbp + rax * 8 + v18], rdx

        add_181918(o, STP_P1, 6, bm_s32(STP_P1));

        adr64_19_base(o, 7, 8);

        wrt64_1819(o, STP_P1, 9);

        adr64_19_v20(o, 10, 11);

        set_val_19(o, 12, 13);

        set_val_18(o, STP_P1, 15);

        cpy_1918(o, 17, STP_P1);
    }

    set_idx_17(o, 18); // (idx_t*) v17 += 18; (tag_t*) v17=v17+0x49;
}
