#include "tags.h"
#include "vars.h"

/*
*
*/

void t_46(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        adr64_19_base(o, 0, 1);

        adr64_19_v20(o, 2, 3);
    }

    set_idx_17(o, 4); // (idx_t*) v17 += 4; (tag_t*) v17=v17+0x11;
}
