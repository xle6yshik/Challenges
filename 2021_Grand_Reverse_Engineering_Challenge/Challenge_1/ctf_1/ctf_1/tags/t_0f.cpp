#include "tags.h"
#include "vars.h"

/*
*
*/

void t_0f(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        mul_181919(o, STP_P1, 1, 0);

        set_val_19(o, 2, 3);
    }

    set_idx_16(o, STP_P1); // (idx_t) v16 += 1;
    set_idx_17(o, 5); // (idx_t*) v17 += 5; (tag_t*) v17=v17+0x15;
}
