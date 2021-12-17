// #pragma once

#ifndef _DEFS_H
#define _DEFS_H

#include "types.h"

/*
*
*/

#define FMT_(s) #s

#define FII_ FMT_(%lX)

#define F08_ FMT_(0x%02x)
#define F32_ FMT_(%lX)
#define F64_ FMT_(%llX)

/*
* mem_t to <type>
*/

#define VAL(a) ((val_t) &a[0])

#define TAG(a) ((tag_t*)&a[0])
#define IDX(a) ((idx_t*)&a[0])
#define PTR(a) ((ptr_t*)&a[0])

/*
*
*/

#define vLog (o->mLog)

#define v5 (o->m5)

#define vF80 (o->mF80)
#define vF7C (o->mF7C)

#define vF78 (o->mF78)
#define vF70 (o->mF70)
#define vF68 (o->mF68)
#define vF60 (o->mF60)
#define vF58 (o->mF58)
#define vF50 (o->mF50)
#define vF48 (o->mF48)

#define vF40 (o->mF40)

#define v16 (o->m16)
#define v17 (o->m17)

#define v18 (o->m18)
#define v19 (o->m19)

#define v20 (o->m20)

/*
*
*/

#define TAG_V20 TAG(v20)
#define VAL_V20 VAL(v20)

/*
*
*/

#define n_count(a) ( (uint32_t) (sizeof(a) / sizeof(a[0])) )

#endif
