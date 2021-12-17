#include "tags.h"
#include "vars.h"

/*
*
*/

void t_58(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        cpy_1819(o, STP_P1, 0);

        adr64_19_base(o, 1, 2);

        wrt64_1819(o, STP_P1, 3);

        adr64_18_base(o, STP_P1, 4);

        cpy_1918(o, 5, STP_P1);
    }

    set_idx_17(o, 6); // (idx_t*) v17 += 6; (tag_t*) v17=v17+0x19;
}
