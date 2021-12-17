#include "tags.h"
#include "vars.h"

/*
*
*/

void t_30(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        add_191818(o, 0, STP_Z0, STP_N1);

        cpy_1819(o, STP_N1, 1);

        // TODO: S32 -> 64
        // mov     rdx, [rbp + rax * 8 + v19]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // cdqe
        // add     rdx, rax
        // mov     [rbp + rax * 8 + v18], rdx

        add_181918(o, STP_N1, 2, bm_s32(STP_N1));

        cpy_1918(o, 3, STP_N1);

        wrt64_1919(o, 4, 5);

        adr64_18_base(o, STP_N1, 6);

        cpy_1918(o, 7, STP_N1);
    }

    set_idx_16(o, STP_N2); // (idx_t) v16 -= 2;
    set_idx_17(o, 8); // (idx_t*) v17 += 8; (tag_t*) v17=v17+0x21;
}
