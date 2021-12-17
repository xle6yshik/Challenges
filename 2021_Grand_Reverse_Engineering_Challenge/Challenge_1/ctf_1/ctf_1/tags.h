// #pragma once

#ifndef _TAGS_H
#define _TAGS_H

#include "tmem.h"

/*
* adr64_ v20
*/

void adr64_18_v20(obj_t *o, stp_t to, num_t from);
void adr64_19_v20(obj_t *o, num_t to, num_t from);

/*
* adr64_ base
*/

void adr64_18_base(obj_t *o, stp_t to, num_t from);
void adr64_19_base(obj_t *o, num_t to, num_t from);

/*
* adr64_ user
*/

void adr64_18_user(obj_t *o, stp_t to);
void adr64_19_user(obj_t *o, num_t to);

/*
* adr64_ result
*/

void adr64_18_result(obj_t *o, stp_t to);
void adr64_19_result(obj_t *o, num_t to);

/*
* adr64_ bss1, bss2
*/

void adr64_18_bss1(obj_t *o, stp_t to);
void adr64_19_bss1(obj_t *o, num_t to);

void adr64_18_bss2(obj_t *o, stp_t to);
void adr64_19_bss2(obj_t *o, num_t to);

/*
* rdr8_
*/

void rdr8_1919(obj_t *o, num_t to, num_t from);

/*
* rdr32_
*/

void rdr32_1818(obj_t *o, stp_t to, stp_t from);
void rdr32_1918(obj_t *o, num_t to, stp_t from);
void rdr32_1919(obj_t *o, num_t to, num_t from);

/*
* rdr64_
*/

void rdr64_1819(obj_t *o, stp_t to, num_t from);
void rdr64_1818(obj_t *o, stp_t to, stp_t from);
void rdr64_1918(obj_t *o, num_t to, stp_t from);
void rdr64_1919(obj_t *o, num_t to, num_t from);

/*
* wrt32_
*/

void wrt32_1819(obj_t *o, stp_t to, num_t from);
void wrt32_1818(obj_t *o, stp_t to, stp_t from);
void wrt32_1919(obj_t *o, num_t to, num_t from);

/*
* wrt64_
*/

void wrt64_1819(obj_t *o, stp_t to, num_t from);
void wrt64_1818(obj_t *o, stp_t to, stp_t from);
void wrt64_1918(obj_t *o, num_t to, stp_t from);
void wrt64_1919(obj_t *o, num_t to, num_t from);

/*
* cpy_
*/

void cpy_1819(obj_t *o, bm_t to, bm_t from);
void cpy_1818(obj_t *o, bm_t to, bm_t from);
void cpy_1918(obj_t *o, bm_t to, bm_t from);
void cpy_1919(obj_t *o, bm_t to, bm_t from);

/*
* neg_
*/

void neg_1819(obj_t *o, bm_t to, bm_t from);
void neg_1818(obj_t *o, bm_t to, bm_t from);
void neg_1918(obj_t *o, bm_t to, bm_t from);
void neg_1919(obj_t *o, bm_t to, bm_t from);

/*
* add_
*/

void add_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void add_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void add_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void add_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void add_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void add_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void add_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void add_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* mul_
*/

void mul_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mul_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mul_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mul_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mul_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mul_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mul_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mul_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* and_
*/

void and_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void and_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void and_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void and_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void and_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void and_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void and_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void and_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* les_
*/

void les_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void les_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void les_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void les_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void les_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void les_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void les_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void les_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* sub_
*/

void sub_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void sub_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void sub_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void sub_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void sub_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void sub_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void sub_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void sub_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* orr_
*/

void orr_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void orr_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void orr_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void orr_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void orr_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void orr_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void orr_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void orr_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* xor_
*/

void xor_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void xor_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void xor_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void xor_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void xor_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void xor_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void xor_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void xor_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* ceq_
*/

void ceq_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void ceq_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void ceq_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void ceq_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void ceq_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void ceq_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void ceq_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void ceq_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* cne_
*/

void cne_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void cne_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void cne_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void cne_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void cne_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void cne_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void cne_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void cne_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* mod_
*/

void mod_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mod_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mod_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mod_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mod_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mod_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mod_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void mod_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* shr_
*/

void shr_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shr_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shr_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shr_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shr_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shr_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shr_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shr_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

/*
* shl_
*/

void shl_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shl_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shl_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shl_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shl_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shl_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shl_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2);
void shl_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2);

#endif
