#include "tags.h"
#include "vars.h"

/*
*
*/

void t_b8(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);

        set_val_19(o, 3, 1);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 4); // (idx_t*) v17 += 4; (tag_t*) v17=v17+0x11;
}
