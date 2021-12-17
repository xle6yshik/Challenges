#include "tags.h"
#include "vars.h"

/*
*
*/

void t_d2(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        wrt64_1919(o, 0, 1);

        adr64_19_base(o, 2, 3);

        adr64_18_v20(o, STP_P1, 4);

        cpy_1918(o, 5, STP_P1);

        set_val_19(o, 6, 7);

        set_val_19(o, 9, 10);

        mul_191919(o, 13, 14, 12);
    }

    set_idx_17(o, 15); // (idx_t*) v17 += 15; (tag_t*) v17=v17+0x3d;
}
