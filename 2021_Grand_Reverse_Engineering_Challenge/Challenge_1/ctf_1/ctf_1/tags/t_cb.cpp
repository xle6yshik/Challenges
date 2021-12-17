#include "tags.h"
#include "vars.h"

/*
*
*/

void t_cb(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        adr64_19_base(o, 0, 1);

        adr64_18_v20(o, STP_P1, 2);

        cpy_1918(o, 3, STP_P1);

        set_val_19(o, 4, 5);

        set_val_18(o, STP_P1, 7);

        cpy_1918(o, 9, STP_P1);

        mul_191919(o, 11, 12, 10);

        cpy_1819(o, STP_P1, 13);

        set_val_19(o, 14, 15);

        cpy_1819(o, STP_P2, 17);
    }

    set_idx_16(o, STP_P2); // (idx_t) v16 += 2;
    set_idx_17(o, 18); // (idx_t*) v17 += 18; (tag_t*) v17=v17+0x49;
}
