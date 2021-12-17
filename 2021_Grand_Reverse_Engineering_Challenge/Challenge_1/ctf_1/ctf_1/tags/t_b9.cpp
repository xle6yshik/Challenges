#include "tags.h"
#include "vars.h"

/*
*
*/

void t_b9(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1918(o, 0, STP_Z0);

        adr64_18_v20(o, STP_Z0, 1);

        cpy_1918(o, 2, STP_Z0);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xd;
}
