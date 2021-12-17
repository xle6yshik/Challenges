#include "tags.h"
#include "vars.h"

/*
*
*/

void t_3c(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        ceq_181819(o, bm_32(STP_Z0), STP_Z0, 0);

        // AM = 1, FM = 0, G = 1, flag = 1
        // if (o->mEmul) { mem_t e = { .val = 1 }; set_act_18(o, STP_Z0, e); }
    }

    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
