#include "tags.h"
#include "vars.h"

/*
*
*/

void t_4a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        idx_t _it = get_idx_pi17(o, 0);

        join_t _x1 = get_mem_18(o, STP_Z0), _x2 = get_mem_19(o, 1);

        {
            mem_t _y = { .val = _x1._64.val << (_x2._64.val & 0x3f) };

            v19[_it] = _y;

            fprintf(vLog, "shl:64> v19[ " FII_ "] := v18[ " FII_ "] << (v19[ " FII_ "] & 0x3f) = " F64_ " << " F64_ " = " F64_ "\n", _it, _x1._ii, _x2._ii, _x1._64.val, (_x2._64.val & 0x3f), _y.val); fflush (vLog);
        }
    }

    set_idx_16(o, STP_N1); // (idx_t) v16 -= 1;
    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
