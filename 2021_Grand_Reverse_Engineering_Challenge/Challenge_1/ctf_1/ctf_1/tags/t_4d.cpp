#include "tags.h"
#include "vars.h"

/*
*
*/

void t_4d(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        set_val_19(o, 2, 0);
    }

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xd;
}
