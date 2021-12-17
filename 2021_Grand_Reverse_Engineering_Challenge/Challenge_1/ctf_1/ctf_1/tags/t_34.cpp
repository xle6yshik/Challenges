#include "tags.h"
#include "vars.h"

/*
*
*/

void t_34(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        rdr32_1918(o, 0, STP_Z0);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
