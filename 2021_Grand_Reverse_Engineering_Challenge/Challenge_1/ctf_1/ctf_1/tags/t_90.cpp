#include "tags.h"
#include "vars.h"

/*
*
*/

void t_90(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        wrt64_1819(o, STP_Z0, 0);

        adr64_19_base(o, 1, 2);

        set_val_19(o, 3, 4);

        set_val_19(o, 6, 7);

        mul_181919(o, STP_Z0, 9, 10);

        set_val_19(o, 11, 12);

        add_181918(o, STP_Z0, 14, STP_Z0);

        adr64_18_v20(o, STP_P1, 15);

        // TODO: S32 -> 64
        // mov     rcx, [rbp + rax * 8 + v18]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // movsxd  rdx, eax
        // add     rdx, rcx
        // mov     [rbp + rax * 8 + v19], rdx

        add_191818(o, 16, bm_s32(STP_Z0), STP_P1);

        wrt64_1919(o, 17, 18);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 19); // (idx_t*) v17 += 19; (tag_t*) v17=v17+0x4d;
}
