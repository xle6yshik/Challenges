#include "tags.h"
#include "vars.h"

/*
*
*/

void t_a0(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        sub_181819(o, STP_Z0, STP_Z0, 0);
    }

    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
