#include "tags.h"
#include "vars.h"

/*
*
*/

void t_e4(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        orr_181918(o, STP_Z0, 0, STP_Z0);
    }

    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
