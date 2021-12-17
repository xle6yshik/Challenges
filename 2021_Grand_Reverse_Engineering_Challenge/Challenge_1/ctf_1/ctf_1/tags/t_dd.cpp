#include "tags.h"
#include "vars.h"

/*
*
*/

void t_dd(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1918(o, 0, STP_Z0);

        set_val_18(o, STP_Z0, 1);

        cpy_1918(o, 3, STP_Z0);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 4); // (idx_t*) v17 += 4; (tag_t*) v17=v17+0x11;
}
