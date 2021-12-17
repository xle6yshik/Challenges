#include "tags.h"
#include "vars.h"

/*
*
*/

void t_bd(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        // TODO: 08 -> 64
        // movzx   edx, byte ptr[rbp + rax * 8 + v18]
        // movzx   edx, dl
        // mov     dword ptr[rbp + rax * 8 + v18], edx

        cpy_1818(o, bm_32(STP_Z0), bm_8(STP_Z0));
    }
}
