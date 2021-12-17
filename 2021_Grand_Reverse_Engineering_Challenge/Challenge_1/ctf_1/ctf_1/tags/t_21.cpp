#include "tags.h"
#include "vars.h"

/*
*
*/

void t_21(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_18(o, STP_P1, 0);

        cpy_1918(o, 2, STP_P1);
    }

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xd;
}
