#include "tags.h"
#include "vars.h"

/*
*
*/

void t_4f(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);

        set_val_19(o, 3, 1);

        cpy_1819(o, STP_P2, 4);

        add_191818(o, 5, STP_P2, STP_P1);

        cpy_1819(o, STP_P1, 6);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 7); // (idx_t*) v17 += 7; (tag_t*) v17=v17+0x1d;
}
