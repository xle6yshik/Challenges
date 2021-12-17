#include "tags.h"
#include "vars.h"

/*
*
*/

void t_00(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_19(o, 0, 1);

        set_val_18(o, STP_P1, 3);

        cpy_1918(o, 5, STP_P1);
    }

    set_idx_17(o, 6); // (idx_t*) v17 += 6; (tag_t*) v17=v17+0x19;
}
