#include "tags.h"
#include "vars.h"

/*
*
*/

void t_74(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        rdr64_1919(o, 1, 0);
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
