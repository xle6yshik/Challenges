#include "tags.h"
#include "vars.h"

/*
*
*/

void t_fe(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        add_191818(o, 0, STP_Z0, STP_N1);
    }

    set_idx_16(o, STP_N2); // (idx_t) v16 -= 2;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
