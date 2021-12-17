#include "tags.h"
#include "vars.h"

/*
*
*/

void t_b1(obj_t *o)
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
        // mov[rbp + rax * 8 + v18], rdx

        add_181819(o, STP_Z0, bm_s32(STP_Z0), 3);

        cpy_1918(o, 4, STP_Z0);

        wrt64_1919(o, 5, 6);

        adr64_19_v20(o, 7, 8);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 9); // (idx_t*) v17 += 9; (tag_t*) v17=v17+0x25;
}
