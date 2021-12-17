#include "tags.h"
#include "vars.h"

/*
*
*/

void t_24(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    // TODO: 32 -> 64
    // mov     edx, dword ptr[rbp + rax * 8 + v19]
    // mov     eax, dword ptr[rbp + rax * 8 + v19]
    // mov     ecx, eax
    // shr     edx, cl
    // mov     dword ptr[rbp + rax * 8 + v19], edx

    shr_191919(o, bm_32(1), bm_32(0), bm_8(2));

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xd;
}
