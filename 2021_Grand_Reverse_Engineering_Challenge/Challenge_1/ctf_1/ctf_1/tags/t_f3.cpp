#include "tags.h"
#include "vars.h"

/*
*
*/

void t_f3(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        mod_181918(o, STP_Z0, 0, STP_Z0);
    }

    {
        // AM = 1, FM = 3
        // if (o->mEmul) { mem_t e = { .val = 3 }; set_act_18(o, STP_Z0, e); }
        // AM = 1, FM = 1
        // if (o->mEmul) { mem_t e = { .val = 1 }; set_act_18(o, STP_Z0, e); }
    }

    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
