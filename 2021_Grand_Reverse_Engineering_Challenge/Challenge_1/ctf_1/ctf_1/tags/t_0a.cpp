#include "tags.h"
#include "vars.h"

/*
*
*/

void t_0a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        ceq_181819(o, bm_32(STP_Z0), bm_32(STP_Z0), bm_32(0));
    }

    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
