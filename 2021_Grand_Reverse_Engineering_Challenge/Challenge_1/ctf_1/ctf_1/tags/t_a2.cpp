#include "tags.h"
#include "vars.h"

/*
*
*/

void t_a2(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        idx_t from = 0;

        // TODO: S32 -> 64
        // mov     rdx, [rbp+v17]
        // mov     rax, [rbp+v17]
        // mov     eax, [rax]
        // cdqe
        // add     rax, rdx
        // mov     [rbp+v17], rax

        {
            idx_t _n = get_idx_pi17(o, from);

            set_tag_17(o, _n); // (tag_t) v17 += p17[0];
        }
    }
}
