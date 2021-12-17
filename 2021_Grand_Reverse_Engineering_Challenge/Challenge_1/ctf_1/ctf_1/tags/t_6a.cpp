#include "tags.h"
#include "vars.h"

/*
*
*/

void t_6a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // TODO: S32 -> 64
        // mov     edx, dword ptr[rbp + rax * 8 + v18]
        // movsxd  rdx, edx
        // mov     [rbp + rax * 8 + v18], rdx

        cpy_1818(o, STP_Z0, bm_s32(STP_Z0));
    }
}
