#include "tags.h"
#include "vars.h"

/*
*
*/

void t_bb(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
