#include "tmem.h"
#include "vars.h"

/*
*
*/

uint32_t to_32(uint64_t u)
{
    uint64_t k = (uint64_t)MASK_32_;

    u &= k; k++; u %= k;

    uint32_t v = (uint32_t)u;

    return v;
}

uint8_t to_8(uint64_t u)
{
    uint64_t k = (uint64_t)MASK_08_;

    u &= k; k++; u %= k;

    uint8_t v = (uint8_t)u;

    return v;
}

bool _is32_signed_(uint32_t u)
{
    return ((u & (uint32_t)SIGN_BIT_31_) != 0);
}

bool _is8_signed_(uint8_t u)
{
    return ((u & (uint8_t)SIGN_BIT_07_) != 0);
}

/*
uint32_t _to32_positive_(uint32_t u)
{
    uint32_t v = !(u); v++;

    return v;
}
*/
/*
*
*/

uint32_t _get_bm_(bm_t m)
{
    return to_32(m >> 32);
}

bool _is_bm_(bm_t m, uint32_t e)
{
    bool b = (_get_bm_(m) == e);

    return b;
}

bool is_bm_32(bm_t m)
{
    return _is_bm_(m, BM_32_);
}

bool is_bm_8(bm_t m)
{
    return _is_bm_(m, BM_08_);
}

bool is_bm_s32(bm_t m)
{
    return _is_bm_(m, BM_S32_);
}

bool is_bm_s8(bm_t m)
{
    return _is_bm_(m, BM_S08_);
}

const char* bm_str(bm_t m)
{
    uint8_t e = 0;

    e = (is_bm_32(m)) ? 1 : e;
    e = (is_bm_8(m)) ? 2 : e;

    e = (is_bm_s32(m)) ? 3 : e;
    e = (is_bm_s8(m)) ? 4 : e;

    return g_bms[e];
}

val_t on_mask(bm_t m, val_t u)
{
    val_t v = (val_t)((is_bm_32(m) || is_bm_s32(m)) ? MASK_32_ : ((is_bm_8(m) || is_bm_s8(m)) ? MASK_08_ : 0));

    if (v == 0) { v--; } // MASK_64_

    v &= u;

    return v;
}

val_t on_sign(bm_t m, val_t u)
{
    val_t v = 0;

    if (is_bm_s32(m) && _is32_signed_(to_32(u)))
    {
        v = (val_t)SIGN_EXT_32_;
        v = v << 32;
    } else if (is_bm_s8(m) && _is8_signed_(to_8(u)))
    {
        v = (val_t)SIGN_EXT_32_;
        v = v << 32;
        v |= SIGN_EXT_08_;
    }

    v |= u;

    return v;
}

bm_t _make_bm_(uint32_t n, uint32_t e)
{
    bm_t m = (bm_t)e;

    m = m << 32; m += n;

    return m;
}


bm_t bm_32(uint32_t n)
{
    return _make_bm_(n, BM_32_);
}

bm_t bm_8(uint32_t n)
{
    return _make_bm_(n, BM_08_);
}

bm_t bm_s32(uint32_t n)
{
    return _make_bm_(n, BM_S32_);
}

bm_t bm_s8(uint32_t n)
{
    return _make_bm_(n, BM_S08_);
}

/*
* get v16
*/

void _check_idx_16_(stp_t d)
{
    bool sts = false;

    sts |= (d == STP_Z0);
    sts |= (d == STP_P1);
    sts |= (d == STP_P2);
    sts |= (d == STP_N1);
    sts |= (d == STP_N2);

    if (!sts) { printf("\ne: v16 ?= %i not found\n\n", d); }
}

idx_t _mov_idx_16_(obj_t *o, stp_t d)
{
    _check_idx_16_(d);

    idx_t f = *(v16);

    f += d;

    return f;
}

idx_t get_idx_16(obj_t *o, stp_t d)
{
    idx_t v = *(v16), f = _mov_idx_16_(o, d);

    GT16_ fprintf(vLog, "g: v16  = %i + %i = %i\n", v, d, f); fflush(vLog);

    return f; // (v16[0] +/- = d):32
}

/*
* set v16
*/

void set_idx_16(obj_t *o, stp_t d)
{
    idx_t v = *(v16), f = _mov_idx_16_(o, d);

    *(v16) = f; // v16[0]:32 +/- = d;

    ST16_ fprintf(vLog, "s: v16 := %i + %i = %i\n", v, d, f); fflush(vLog);
}

/*
* get 17
*/

tag_t get_tag_pi17(obj_t *o, num_t n)
{
    const idx_t *pi = &(v17->idx[n]);

    {
        tag_t f = *(TAG(pi));

        GT17_ fprintf(vLog, "g: v17[ " FII_ "]:8 := " F08_ "\n", n, f); fflush(vLog);

        return f; // v17[0].idx[n]:8
    }
}

idx_t get_idx_pi17(obj_t *o, num_t n)
{
    idx_t f = v17->idx[n];

    GT17_ fprintf(vLog, "g: v17[ " FII_ "]:32 := " F32_ "\n", n, f); fflush(vLog);

    return f; // v17[0].idx[n]:32
}

mem_t get_mem_pi17(obj_t *o, num_t n)
{
    const idx_t *pi = &(v17->idx[n]);

    {
        mem_t f = { .val = *(PTR(pi)) };

        GT17_ fprintf(vLog, "g: v17[ " FII_ "] := " F64_ "\n", n, f.val); fflush(vLog);

        return f; // v17[0].idx[n]:64
    }
}

/*
* set v17
*/

void set_tag_17(obj_t *o, num_t n)
{
    int64_t sz = (int64_t)v17->val;

    int32_t p = (int32_t)n;

    v17->tag += p; // v17[0].tag +/- = p; (n * sizeof(tag_t))

    sz = ((int64_t)v17->val) - sz;

//  ST17_ fprintf(vLog, "s: v17:8 += %lli = " F64_ " (n = " F32_ ")\n", sz, v17->val, n); fflush(vLog);
    ST17_ fprintf(vLog, "s: v17:8 += " F32_ " = " F64_ " (d = %lli)\n", n, v17->val, sz); fflush(vLog);
}

void _check_idx_17_(num_t n)
{
    bool sts = _is32_signed_((uint32_t)n);

    if (sts) { printf("\ne: v17:32 ?= %i is signed\n\n", n); }
}

void set_idx_17(obj_t *o, num_t n)
{
    _check_idx_17_(n);

    int64_t sz = (int64_t)v17->val;

    int32_t p = (int32_t)n;

    v17->idx += p; // v17[0].idx +/- = p; (n * sizeof(idx_t))

    sz = ((int64_t)v17->val) - sz;

//  ST17_ fprintf(vLog, "s: v17:32 += %lli = " F64_ " (n = " F32_ ")\n", sz, v17->val, n); fflush(vLog);
    ST17_ fprintf(vLog, "s: v17:32 += " F32_ " = " F64_ " (d = %lli)\n", n, v17->val, sz); fflush(vLog);
}

/*
* get 18
*/

join_t get_tag_18(obj_t *o, stp_t d)
{
    idx_t i = get_idx_16(o, d);

    const mem_t *pm = &(v18[i]);

    tag_t *pt = TAG(pm);

    {
        tag_t f = *(pt);

        GT18_ fprintf(vLog, "g: v18[ " FII_ "]:8 := " F08_ "\n", i, f); fflush(vLog);

        join_t j = { ._ii = i, ._is = {._8 = true}, ._8 = f };

        return j;
    }
}

join_t get_idx_18(obj_t *o, stp_t d)
{
    idx_t i = get_idx_16(o, d);

    const mem_t *pm = &(v18[i]);

    idx_t *pi = IDX(pm);

    {
        idx_t f = *(pi);

        GT18_ fprintf(vLog, "g: v18[ " FII_ "]:32 := " F32_ "\n", i, f); fflush(vLog);

        join_t j = { ._ii = i, ._is = {._32 = true}, ._32 = f };

        return j;
    }
}

join_t get_mem_18(obj_t *o, stp_t d)
{
    idx_t i = get_idx_16(o, d);

    mem_t f = v18[i];

    GT18_ fprintf(vLog, "g: v18[ " FII_ "] := " F64_ "\n", i, f.val); fflush(vLog);

    join_t j = { ._ii = i, ._is = {._64 = true}, ._64 = f };

    return j;
}

join_t get_act_18(obj_t *o, bm_t m)
{
    idx_t i = get_idx_16(o, (stp_t)to_32(m));

    mem_t f = { .val = on_sign(m, on_mask(m, v18[i].val)) };

    GT18_ fprintf(vLog, "g: v18[ " FII_ "]%s := " F64_ "\n", i, bm_str(m), f.val); fflush(vLog);

    join_t j = { ._ii = i, ._is = {._64 = true}, ._64 = f };

    return j;
}

/*
* set v18
*/

void _settag_18_(obj_t *o, idx_t i, tag_t f)
{
    mem_t *pm = &(v18[i]);

    tag_t *pt = TAG(pm);

    *(pt) = f; // v18[i]:8 = f:8
}

void set_tag_18(obj_t *o, stp_t d, num_t n)
{
    idx_t i = get_idx_16(o, d);

    tag_t f = get_tag_pi17(o, n); // f:8 = v17[0].idx[n]:8

    _settag_18_(o, i, f); // v18[i]:8 = f:8

    ST18_ fprintf(vLog, "s: v18[ " FII_ "]:8 := " F08_ "\n", i, f); fflush(vLog);
}

void _setidx_18_(obj_t *o, idx_t i, idx_t f)
{
    mem_t *pm = &(v18[i]);

    idx_t *pi = IDX(pm);

    *(pi) = f; // v18[i]:32 = f:32
}

void set_idx_18(obj_t *o, stp_t d, num_t n)
{
    idx_t i = get_idx_16(o, d);

    idx_t f = get_idx_pi17(o, n); // f:32 = v17[0].idx[n]:32

    _setidx_18_(o, i, f); // v18[i]:32 = f:32

    ST18_ fprintf(vLog, "s: v18[ " FII_ "]:32 := " F32_ "\n", i, f); fflush (vLog);
}

void _setval_18_(obj_t *o, idx_t i, mem_t f)
{
    v18[i] = f; // v18[i]:64 = f:64
}

void set_val_18(obj_t *o, stp_t d, num_t n)
{
    idx_t i = get_idx_16(o, d);

    mem_t f = get_mem_pi17(o, n); // f:64 = v17[0].val[n]:64

    _setval_18_(o, i, f); // v18[i]:64 = f:64

    ST18_ fprintf(vLog, "s: v18[ " FII_ "] := " F64_ "\n", i, f.val); fflush (vLog);
}

idx_t set_act_18(obj_t *o, bm_t m, mem_t f)
{
    idx_t i = get_idx_16(o, (stp_t)to_32(m));

    f.val = on_mask(m, f.val);
//    f.val = on_sign(m, f.val);

    if (is_bm_32(m))
    {
        idx_t _f = (idx_t)to_32(f.val);

        _setidx_18_(o, i, _f); // v18[i]:32 = f:32
    } else {
        if (is_bm_8(m))
        {
            tag_t _f = (tag_t)to_8(f.val);

            _settag_18_(o, i, _f); // v18[i]:8 = f:8
        } else {
            _setval_18_(o, i, f); // v18[i]:64 = f:64
        }
    }

    return i;
}

/*
* get v19
*/

join_t get_tag_19(obj_t *o, num_t n)
{
    idx_t i = get_idx_pi17(o, n);

    const mem_t *pm = &(v19[i]);

    tag_t *pt = TAG(pm);

    {
        tag_t f = *(pt);

        GT19_ fprintf(vLog, "g: v19[ " FII_ "]:8 := " F08_ "\n", i, f); fflush(vLog);

        join_t j = { ._ii = i, ._is = {._8 = true}, ._8 = f };

        return j;
    }
}

join_t get_idx_19(obj_t *o, num_t n)
{
    idx_t i = get_idx_pi17(o, n);

    const mem_t *pm = &(v19[i]);

    idx_t *pi = IDX(pm);

    {
        idx_t f = *(pi);

        GT19_ fprintf(vLog, "g: v19[ " FII_ "]:32 := " F32_ "\n", i, f); fflush(vLog);

        join_t j = { ._ii = i, ._is = {._32 = true}, ._32 = f };

        return j;
    }
}

join_t get_mem_19(obj_t *o, num_t n)
{
    idx_t i = get_idx_pi17(o, n);

    mem_t f = v19[i];

    GT19_ fprintf(vLog, "g: v19[ " FII_ "] := " F64_ "\n", i, f.val); fflush(vLog);

    join_t j = { ._ii = i, ._is = {._64 = true}, ._64 = f };

    return j;
}

join_t get_act_19(obj_t *o, bm_t m)
{
    idx_t i = get_idx_pi17(o, (num_t)to_32(m));

    mem_t f = { .val = on_sign(m, on_mask(m, v19[i].val)) };

    GT19_ fprintf(vLog, "g: v19[ " FII_ "]%s := " F64_ "\n", i, bm_str(m), f.val); fflush(vLog);

    join_t j = { ._ii = i, ._is = {._64 = true}, ._64 = f };

    return j;
}

/*
* set v19
*/

void _settag_19_(obj_t *o, idx_t i, tag_t f)
{
    mem_t *pm = &(v19[i]);

    tag_t *pt = TAG(pm);

    *(pt) = f; // v19[i]:8 = f:8
}

void set_tag_19(obj_t *o, num_t n1, num_t n2)
{
    idx_t i = get_idx_pi17(o, n1); // i:32 = v17[0].idx[n1]:32

    tag_t f = get_tag_pi17(o, n2); // f:8 = v17[0].idx[n2]:8

    _settag_19_(o, i, f); // v19[i]:8 = f:8

    ST19_ fprintf(vLog, "s: v19[ " FII_ "]:8 := " F08_ "\n", i, f); fflush(vLog);
}

void _setidx_19_(obj_t *o, idx_t i, idx_t f)
{
    mem_t *pm = &(v19[i]);

    idx_t *pi = IDX(pm);

    *(pi) = f; // v19[i]:32 = f:32
}

void set_idx_19(obj_t *o, num_t n1, num_t n2)
{
    idx_t i = get_idx_pi17(o, n1); // i:32 = v17[0].idx[n1]:32

    idx_t f = get_idx_pi17(o, n2); // f:32 = v17[0].idx[n2]:32

    _setidx_19_(o, i, f); // v19[i]:32 = f:32

    ST19_ fprintf(vLog, "s: v19[ " FII_ "]:32 := " F32_ "\n", i, f); fflush (vLog);
}

void _setval_19_(obj_t *o, idx_t i, mem_t f)
{
    v19[i] = f; // v19[i]:64 = f:64
}

void set_val_19(obj_t *o, num_t n1, num_t n2)
{
    idx_t i = get_idx_pi17(o, n1); // i:32 = v17[0].idx[n1]:32

    mem_t f = get_mem_pi17(o, n2); // f:64 = v17[0].val[n2]:64

    _setval_19_(o, i, f); // v19[i]:64 = f:64

    ST19_ fprintf(vLog, "s: v19[ " FII_ "] := " F64_ "\n", i, f.val); fflush (vLog);
}

idx_t set_act_19(obj_t *o, bm_t m, mem_t f)
{
    idx_t i = get_idx_pi17(o, (num_t)to_32(m));

    f.val = on_mask(m, f.val);
//    f.val = on_sign(m, f.val);

    if (is_bm_32(m))
    {
        idx_t _f = (idx_t)to_32(f.val);

        _setidx_19_(o, i, _f); // v19[i]:32 = f:32
    } else {
        if (is_bm_8(m))
        {
            tag_t _f = (tag_t)to_8(f.val);

            _settag_19_(o, i, _f); // v19[i]:8 = f:8
        } else {
            _setval_19_(o, i, f); // v19[i]:64 = f:64
        }
    }

    return i;
}
