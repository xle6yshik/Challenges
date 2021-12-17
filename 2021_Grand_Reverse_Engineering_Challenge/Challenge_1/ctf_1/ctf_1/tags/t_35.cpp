#include "tags.h"
#include "vars.h"

/*
*
*/

void t_35(obj_t *o)
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

        adr64_18_base(o, STP_P1, 3);

        cpy_1918(o, 4, STP_P1);

        wrt64_1819(o, STP_Z0, 5);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 6); // (idx_t*) v17 += 6; (tag_t*) v17=v17+0x19;
}
