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
	//
	u32_t avflag;
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

typedef struct
{
	u32_t u0;
	u32_t u1;
	u32_t r0;
	u32_t am[10];
	u32_t cm[10];
} test_t;

#endif
