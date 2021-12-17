// #pragma once

#ifndef _VARS_H
#define _VARS_H

#include "defs.h"

/*
*
*/

extern opts_t g_opts;

/*
*
*/

extern const char* g_bms[];

/*
*
*/

extern char g_acts[];

/*
*
*/

extern uint32_t g_user[];

// #define TAG_USER TAG(g_user)

extern uint32_t n_user;

extern uint32_t *g_ptr_user[];

#define TAG_PTR_USER TAG(g_ptr_user)

/*
*
*/

extern uint64_t g_rslt[];

// #define TAG_RSLT TAG(g_rslt)

extern uint32_t n_rslt;

extern uint64_t *g_ptr_rslt[];

#define TAG_PTR_RSLT TAG(g_ptr_rslt)

/*
*
*/

extern uint8_t g_bss1[];

#define TAG_BSS1 TAG(g_bss1)

extern uint8_t g_bss2[];

#define TAG_BSS2 TAG(g_bss2)

/*
*
*/

extern uint8_t g_20F0A0[]; // g_base

#define TAG_BASE TAG(g_20F0A0)
#define VAL_BASE VAL(g_20F0A0)

/*
*
*/

#define TG_ if (g_opts.tg)

#define VF_ if (g_opts.vf)

#define AA_  if (g_opts.adr_.e)
#define AA20_ if (g_opts.adr_.e20)
#define AABB_ if (g_opts.adr_.ebase)
#define AAUU_ if (g_opts.adr_.euser)
#define AARR_ if (g_opts.adr_.erslt)

#define RD_ if (g_opts.rd)
#define WR_ if (g_opts.wr)

#define CP_ if (g_opts.cp)

#define GT_   if (g_opts.get_.e)
#define GT16_ if (g_opts.get_.e16)
#define GT17_ if (g_opts.get_.e17)
#define GT18_ if (g_opts.get_.e18)
#define GT19_ if (g_opts.get_.e19)

#define ST_   if (g_opts.set_.e)
#define ST16_ if (g_opts.set_.e16)
#define ST17_ if (g_opts.set_.e17)
#define ST18_ if (g_opts.set_.e18)
#define ST19_ if (g_opts.set_.e19)

#endif
