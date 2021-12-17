#include "tags.h"
#include "vars.h"

/*
*
*/

void t_ad(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        rdr8_1919(o, 0, 1);
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
