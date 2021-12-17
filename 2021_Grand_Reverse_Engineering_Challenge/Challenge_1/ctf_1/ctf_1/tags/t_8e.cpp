#include "tags.h"
#include "vars.h"

/*
*
*/

void t_8e(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        adr64_19_base(o, 0, 1);

        adr64_18_v20(o, STP_P1, 2);

        cpy_1918(o, 3, STP_P1);

        set_val_18(o, STP_P1, 4);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 6); // (idx_t*) v17 += 6; (tag_t*) v17=v17+0x19;
}
