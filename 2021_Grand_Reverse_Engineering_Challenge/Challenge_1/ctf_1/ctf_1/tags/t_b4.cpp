#include "tags.h"
#include "vars.h"

/*
*
*/

void t_b4(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        rdr32_1818(o, STP_Z0, STP_Z0);
    }
}
