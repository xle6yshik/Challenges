#include "tags.h"
#include "vars.h"

/*
*
*/

void t_3f(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);

        add_191818(o, 1, STP_P1, STP_Z0);

        cpy_1819(o, STP_Z0, 2);

        // TODO: S32 -> 64
        // mov     rcx, [rbp + rax * 8 + v19]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // movsxd  rdx, eax
        // add     rdx, rcx
        // mov     [rbp + rax * 8 + v18], rdx

        add_181819(o, STP_Z0, bm_s32(STP_Z0), 3);

        cpy_1918(o, 4, STP_Z0);

        wrt64_1919(o, 5, 6);

        adr64_19_base(o, 7, 8);

        set_val_18(o, STP_Z0, 9);

        cpy_1918(o, 11, STP_Z0);

        set_val_19(o, 12, 13);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 15); // (idx_t*) v17 += 15; (tag_t*) v17=v17+0x3d;
}
