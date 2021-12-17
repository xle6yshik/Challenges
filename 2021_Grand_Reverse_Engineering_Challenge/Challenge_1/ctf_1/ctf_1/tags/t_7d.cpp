#include "tags.h"
#include "vars.h"

/*
*
*/

void t_7d(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        adr64_19_v20(o, 0, 1);
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
