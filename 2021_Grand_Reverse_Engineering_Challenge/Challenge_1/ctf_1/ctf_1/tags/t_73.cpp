#include "tags.h"
#include "vars.h"

/*
*
*/

void t_73(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        mul_181919(o, STP_P1, 1, 0);

        set_val_19(o, 4, 2);

        add_181819(o, STP_P1, STP_P1, 5);

        adr64_19_v20(o, 6, 7);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 8); // (idx_t*) v17 += 8; (tag_t*) v17=v17+0x21;
}
