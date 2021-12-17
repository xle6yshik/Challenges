#include "tags.h"
#include "vars.h"

/*
*
*/

void t_2a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        join_t _f = get_mem_19(o, 0);

        v17->val = _f._64.val;

        fprintf(vLog, "s: v17 := v19[ " FII_ "] = " F64_ "\n", _f._ii, _f._64.val); fflush (vLog);
    }
}
