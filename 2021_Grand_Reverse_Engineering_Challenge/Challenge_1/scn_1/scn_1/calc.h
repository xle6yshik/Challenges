// #pragma once

#ifndef _CALC_H
#define _CALC_H

#include "types.h"

/*
*
*/

u32_t calc_by_get(u32_t g);

u32_t calc_by_actn_get(u32_t i);
u32_t calc_by_calc_get(u32_t i);

void calc_by_set(u32_t g, u32_t t);

void calc_by_actn_set(u32_t i, u32_t t);
void calc_by_calc_set(u32_t i, u32_t t);

/*
*
*/

bool calc_check(const u32_t *t1, u32_t n1);

/*
*
*/

void calc_init();

void calc_run(u32_t g);

#endif
