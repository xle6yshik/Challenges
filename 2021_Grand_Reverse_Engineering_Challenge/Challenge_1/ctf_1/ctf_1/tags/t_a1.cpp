#include "tags.h"
#include "vars.h"

/*
*
*/

void t_a1(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        ceq_181818(o, bm_32(STP_N1), bm_32(STP_Z0), bm_32(STP_N1));
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
}
