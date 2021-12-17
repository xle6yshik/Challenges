#include "tags.h"
#include "vars.h"

/*
*
*/

void t_66(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        wrt64_1819(o, STP_Z0, 0);
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
