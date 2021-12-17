#include "tags.h"
#include "vars.h"

/*
*
*/

void t_97(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        les_191919(o, bm_32(1), 0, 2);
    }

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xd;
}
