#include "tags.h"
#include "vars.h"

/*
*
*/

void t_48(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        wrt32_1818(o, STP_Z0, STP_N1);
    }

    set_idx_16(o, STP_N2); // (idx_t) v16 -= 2;
}
