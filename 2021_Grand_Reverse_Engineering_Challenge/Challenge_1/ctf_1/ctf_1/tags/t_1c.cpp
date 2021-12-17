#include "tags.h"
#include "vars.h"

/*
*
*/

void t_1c(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    // TODO: *32 -> 32
    // mov     rax, [rbp + rax * 8 + v19]
    // mov     edx, [rax]
    // mov     dword ptr[rbp + rax * 8 + v19], edx

    {
        rdr32_1919(o, 0, 1);
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+9;
}
