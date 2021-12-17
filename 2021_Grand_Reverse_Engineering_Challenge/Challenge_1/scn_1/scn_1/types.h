// #pragma once

#ifndef _TYPES_H
#define _TYPES_H

#include <iostream>

/*
*
*/

typedef uint8_t u8_t;

typedef uint32_t u32_t;

/*
*
*/

#define z_none ( (u32_t) 0 )

typedef struct
{
	u32_t z1;
	u32_t z2;
} dto_t;

typedef struct
{
	u32_t z1;
	u32_t z2;
	//
	u32_t g0;
	u32_t g1;
} loop_t;

/*
*
*/

#define ub4_n ( (u32_t) sizeof(u32_t) ) // 4

typedef union
{
	u32_t u;
	u8_t b[ub4_n];
} ub4_t;

/*
*
*/

#define g_and_0 ( (u32_t) 0 )
#define g_and_1 ( (u32_t) 1 )

typedef enum
{
    AM_0 = 0,
    AM_1,
    AM_2,
    AM_3,
    //
    AM_COUNT,
} am_e;

typedef enum
{
    CM_0 = 0,
    CM_1,
    CM_2,
    CM_3,
    //
    CM_COUNT,
} cm_e;

typedef enum
{
    FM_0 = 0,
    FM_1,
    FM_2,
    FM_3,
    //
    FM_COUNT,
} fm_e;

typedef enum
{
    CM1_0 = 0,
    CM1_1,
    CM1_2,
    CM1_3,
    //
    CM1_COUNT,
} cm1_e;

typedef enum
{
    SIX_0 = 0,
    SIX_1,
    SIX_2,
    SIX_3,
    SIX_4,
    SIX_5,
    //
    SIX_COUNT,
} six_e;

/*
*
*/

typedef struct
{
    FILE *h;
    const char *p;
} file_t;

typedef struct
{
    u32_t v;
    u32_t e;
    bool b;
} item_t;

typedef struct
{
    file_t log;
    item_t u0;
    item_t u1;
    item_t ok;
    u32_t am;
    u32_t cm;
    u32_t fm;
    u32_t cm1;
    u32_t six;
    u32_t g;
    u32_t g6;
} scan_t;

#endif
