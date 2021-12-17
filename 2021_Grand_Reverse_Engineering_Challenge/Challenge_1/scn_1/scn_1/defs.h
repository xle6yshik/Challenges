// #pragma once

#ifndef _DEFS_H
#define _DEFS_H

#include "types.h"

/*
*
*/

#define cnst_15 ( (u32_t) 0xA ) // 10

#define cnst_16 ( (u32_t) 0x4 ) // 4

#define cnst_21 ( (u32_t) 0x6 ) // 6

/*
*
*/

#define n_count(a) ( (u32_t) (sizeof(a) / sizeof(a[0])) )

#define n_mod_4 ( (u32_t) cnst_16 )

#define n_mod_6 ( (u32_t) cnst_21 )

#endif
