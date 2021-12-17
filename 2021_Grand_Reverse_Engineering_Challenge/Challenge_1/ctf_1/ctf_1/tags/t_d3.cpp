#include "tags.h"
#include "vars.h"

/*
*
*/

void t_d3(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        mul_181919(o, STP_P1, 1, 0);

        set_val_19(o, 4, 2);

        cpy_1819(o, STP_P2, 5);
    }

    set_idx_16(o, STP_P2); // (idx_t) v16 += 2;
    set_idx_17(o, 6); // (idx_t*) v17 += 6; (tag_t*) v17=v17+0x19;
}
