#include "tags.h"
#include "vars.h"

/*
*
*/

void t_08(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);

        set_val_19(o, 3, 1);

        cpy_1819(o, STP_P2, 4);
    }

    set_idx_16(o, STP_P2); // (idx_t) v16 += 2;
    set_idx_17(o, 5); // (idx_t*) v17 += 5; (tag_t*) v17=v17+0x15;
}
