#include "tags.h"
#include "vars.h"

/*
*
*/

void t_d4(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        adr64_19_base(o, 0, 1);

        adr64_18_v20(o, STP_P1, 2);

        cpy_1918(o, 3, STP_P1);

        set_val_19(o, 4, 5);

        set_val_18(o, STP_P1, 7);

        cpy_1918(o, 9, STP_P1);
    }

    set_idx_17(o, 10); // (idx_t*) v17 += 10; (tag_t*) v17=v17+0x29;
}
