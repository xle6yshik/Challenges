#include "tags.h"
#include "vars.h"

/*
*
*/

void t_5b(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);

        // TODO: S32 -> 64
        // mov     rcx, [rbp + rax * 8 + v18]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // movsxd  rdx, eax
        // add     rdx, rcx
        // mov[rbp + rax * 8 + v19], rdx

        add_191818(o, 1, bm_s32(STP_Z0), STP_P1);

        cpy_1819(o, STP_Z0, 2);

        adr64_19_base(o, 3, 4);

        wrt64_1819(o, STP_Z0, 5);

        adr64_18_base(o, STP_Z0, 6);

        cpy_1918(o, 7, STP_Z0);

        adr64_18_v20(o, STP_Z0, 8);

        cpy_1918(o, 9, STP_Z0);

        set_val_19(o, 10, 11);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 13); // (idx_t*) v17 += 13; (tag_t*) v17=v17+0x35;
}
