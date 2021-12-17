#include "tags.h"
#include "vars.h"

/*
*
*/

void t_41(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        and_191819(o, bm_32(0), bm_32(STP_Z0), bm_32(1));
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
