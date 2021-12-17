#include "tags.h"
#include "vars.h"

/*
*
*/

void t_2d(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);

        adr64_19_base(o, 1, 2);

        wrt64_1819(o, STP_P1, 3);

        adr64_18_base(o, STP_P1, 4);

        cpy_1918(o, 5, STP_P1);

        adr64_19_v20(o, 6, 7);

        set_val_19(o, 8, 9);

        set_val_19(o, 11, 12);

        mul_181919(o, STP_P1, 15, 14);

        set_val_19(o, 16, 17);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 19); // (idx_t*) v17 += 19; (tag_t*) v17=v17+0x4d;
}
