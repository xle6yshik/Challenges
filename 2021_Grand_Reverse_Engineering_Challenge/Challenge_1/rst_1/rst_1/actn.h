// #pragma once

#ifndef _ACTN_H
#define _ACTN_H

#include "types.h"

/*
*
*/

u32_t actn_by_get(u32_t g);

u32_t actn_by_actn_get(u32_t i);
u32_t actn_by_calc_get(u32_t i);

void actn_by_set(u32_t g, u32_t t);

void actn_by_actn_set(u32_t i, u32_t t);
void actn_by_calc_set(u32_t i, u32_t t);

/*
*
*/

bool actn_check(const u32_t *t1, u32_t n1);

/*
*
*/

void actn_init();

void actn_run(u32_t g);

#endif
