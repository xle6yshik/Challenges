#include "tags.h"
#include "vars.h"

/*
*
*/

void t_f2(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_19(o, 0, 1);

        set_val_19(o, 3, 4);

        mul_181919(o, STP_P1, 7, 6);

        set_val_19(o, 8, 9);

        add_181819(o, STP_P1, STP_P1, 11);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 12); // (idx_t*) v17 += 12; (tag_t*) v17=v17+0x31;
}
