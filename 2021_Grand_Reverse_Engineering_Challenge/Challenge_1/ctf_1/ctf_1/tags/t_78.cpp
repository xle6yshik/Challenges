#include "tags.h"
#include "vars.h"

/*
*
*/

void t_78(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_18(o, STP_P1, 0);

        cpy_1918(o, 2, STP_P1);

        set_val_19(o, 3, 4);

        mul_191919(o, 7, 8, 6);

        cpy_1819(o, STP_P1, 9);

        set_val_19(o, 12, 10);

        add_181819(o, STP_P1, STP_P1, 13);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 14); // (idx_t*) v17 += 14; (tag_t*) v17=v17+0x39;
}
