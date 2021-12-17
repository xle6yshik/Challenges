// #pragma once

#ifndef _FUNC_H
#define _FUNC_H

#include "types.h"

/*
*
*/

u32_t idx_get(u32_t g, u32_t e);
u32_t mod_get(u32_t g, u32_t e);

/*
*
*/

u32_t f_eval_1(dto_t d);
u32_t f_eval_2(dto_t d);

/*
*
*/

u32_t f_loop_a(bool all);

void f_loop_c(bool all);

/*
*
*/

void func_run(u32_t g);

#endif
