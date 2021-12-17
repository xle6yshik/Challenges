#include "tags.h"
#include "vars.h"

/*
*
*/

void t_45(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1918(o, 0, STP_Z0);

        wrt64_1819(o, STP_N1, 1);

        adr64_18_v20(o, STP_N1, 2);

        cpy_1918(o, 3, STP_N1);
    }

    set_idx_16(o, STP_N2); // (idx_t) v16 -= 2;
    set_idx_17(o, 4); // (idx_t*) v17 += 4; (tag_t*) v17=v17+0x11;
}
