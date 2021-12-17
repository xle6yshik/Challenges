#include "tags.h"
#include "vars.h"

/*
*
*/

void t_9a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    // TODO: 32 -> 32
    // mov     ecx, dword ptr[rbp + rax * 8 + v18]
    // mov     edx, dword ptr[rbp + rax * 8 + v18]
    // xor edx, ecx
    // mov     dword ptr[rbp + rax * 8 + v19], edx

    {
        xor_191818(o, bm_32(0), bm_32(STP_N1), bm_32(STP_Z0));
    }

    set_idx_16(o, STP_N2); // (idx_t) v16 -= 2;
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+5;
}
