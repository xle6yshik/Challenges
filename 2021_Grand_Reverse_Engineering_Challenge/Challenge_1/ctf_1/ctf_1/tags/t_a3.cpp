#include "tags.h"
#include "vars.h"

/*
*
*/

void t_a3(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1918(o, 0, STP_Z0);

        set_val_18(o, STP_Z0, 1);

        cpy_1918(o, 3, STP_Z0);

        mul_191919(o, 5, 6, 4);

        cpy_1819(o, STP_Z0, 7);

        set_val_19(o, 10, 8);

        add_181918(o, STP_Z0, 11, STP_Z0);

        // TODO: S32 -> 64
        // mov     rcx, [rbp+rax*8+v19]
        // mov     eax, dword ptr[rbp + rax * 8 + v18]
        // movsxd  rdx, eax
        // add     rdx, rcx
        // mov     [rbp+rax*8+v18], rdx

        add_181819(o, STP_Z0, bm_s32(STP_Z0), 12);
    }

    set_idx_17(o, 13); // (idx_t*) v17 += 13; (tag_t*) v17=v17+0x35;
}
