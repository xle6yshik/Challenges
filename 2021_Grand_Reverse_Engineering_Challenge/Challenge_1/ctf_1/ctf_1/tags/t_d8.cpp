#include "tags.h"
#include "vars.h"

/*
*
*/

void t_d8(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_18(o, STP_P1, 0);

        cpy_1918(o, 2, STP_P1);

        set_val_18(o, STP_P1, 3);

        cpy_1918(o, 5, STP_P1);

        mul_181919(o, STP_P1, 7, 6);

        set_val_19(o, 8, 9);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 11); // (idx_t*) v17 += 11; (tag_t*) v17=v17+0x2d;
}
