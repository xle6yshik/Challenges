// #pragma once

#ifndef _TMEM_H
#define _TMEM_H

#include "types.h"

/*
*
*/

uint32_t to_32(uint64_t m);
uint8_t to_8(uint64_t m);

/*
*
*/

bool is_bm_32(bm_t m);
bool is_bm_8(bm_t m);

bool is_bm_s32(bm_t m);
bool is_bm_s8(bm_t m);

const char* bm_str(bm_t m);

val_t on_mask(bm_t m, val_t u);
val_t on_sign(bm_t m, val_t u);

bm_t bm_32(uint32_t n);
bm_t bm_8(uint32_t n);

bm_t bm_s32(uint32_t n);
bm_t bm_s8(uint32_t n);

/*
* get v16
*/

idx_t get_idx_16(obj_t *o, stp_t d);

/*
* set v16
*/

void set_idx_16(obj_t* o, stp_t d);

/*
* get v17
*/

tag_t get_tag_pi17(obj_t *o, num_t n);
idx_t get_idx_pi17(obj_t *o, num_t n);
mem_t get_mem_pi17(obj_t *o, num_t n);

/*
* set v17
*/

void set_tag_17(obj_t *o, num_t n);
void set_idx_17(obj_t *o, num_t n);

/*
* get v18
*/

join_t get_tag_18(obj_t *o, stp_t d);
join_t get_idx_18(obj_t *o, stp_t d);
join_t get_mem_18(obj_t *o, stp_t d);

join_t get_act_18(obj_t *o, bm_t m);

/*
* set v18
*/

void set_tag_18(obj_t *o, stp_t d, num_t n);
void set_idx_18(obj_t *o, stp_t d, num_t n);
void set_val_18(obj_t *o, stp_t d, num_t n);

idx_t set_act_18(obj_t *o, bm_t m, mem_t f);

/*
* get v19
*/

join_t get_tag_19(obj_t *o, num_t n);
join_t get_idx_19(obj_t *o, num_t n);
join_t get_mem_19(obj_t *o, num_t n);

join_t get_act_19(obj_t *o, bm_t m);

/*
* set v19
*/

void set_tag_19(obj_t *o, num_t n1, num_t n2);
void set_idx_19(obj_t *o, num_t n1, num_t n2);
void set_val_19(obj_t *o, num_t n1, num_t n2);

idx_t set_act_19(obj_t *o, bm_t m, mem_t f);

#endif
