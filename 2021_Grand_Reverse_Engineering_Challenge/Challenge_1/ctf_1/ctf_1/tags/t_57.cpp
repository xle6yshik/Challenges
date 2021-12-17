#include "tags.h"
#include "vars.h"

/*
*
*/

void t_57(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1918(o, 0, STP_Z0);

        set_val_18(o, STP_Z0, 1);

        cpy_1918(o, 3, STP_Z0);

        mul_191919(o, 5, 6, 4);

        cpy_1819(o, STP_Z0, 7);
    }

    set_idx_17(o, 8); // (idx_t*) v17 += 8; (tag_t*) v17=v17+0x21;
}
