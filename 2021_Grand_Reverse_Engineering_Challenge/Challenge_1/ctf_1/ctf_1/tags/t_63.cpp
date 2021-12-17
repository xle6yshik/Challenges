#include "tags.h"
#include "vars.h"

/*
*
*/

void t_63(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cne_181919(o, bm_32(STP_P1), bm_32(1), bm_32(0));
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
