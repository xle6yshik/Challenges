#include "tags.h"
#include "vars.h"

/*
* adr64_ v20
*/

void adr64_18_v20(obj_t *o, stp_t to, num_t from)
{
    idx_t _it = get_idx_16(o, to);

    idx_t _f = get_idx_pi17(o, from);

    {
        mem_t _a = { .tag = TAG_V20 + _f };

        v18[_it] = _a;

        AA20_ fprintf(vLog, "a: v18[ " FII_ "] := V20 + " F32_ " = " F64_ " + " F32_ " = " F64_ "\n", _it, _f, VAL_V20, _f, _a.val); fflush (vLog);
    }
}

void adr64_19_v20(obj_t *o, num_t to, num_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    idx_t _f = get_idx_pi17(o, from);

    {
        mem_t _a = { .tag = TAG_V20 + _f };

        v19[_it] = _a;

        AA20_ fprintf(vLog, "a: v19[ " FII_ "] := V20 + " F32_ " = " F64_ " + " F32_ " = " F64_ "\n", _it, _f, VAL_V20, _f, _a.val); fflush (vLog);
    }
}

/*
* adr64_ base
*/

void adr64_18_base(obj_t *o, stp_t to, num_t from)
{
    idx_t _it = get_idx_16(o, to);

    idx_t _f = get_idx_pi17(o, from);

    {
        mem_t _a = { .tag = TAG_BASE + _f };

        v18[_it] = _a;

        AABB_ fprintf(vLog, "a: v18[ " FII_ "] := BASE + " F32_ " = " F64_ " + " F32_ " = " F64_ "\n", _it, _f, VAL_BASE, _f, _a.val); fflush (vLog);
    }
}

void adr64_19_base(obj_t *o, num_t to, num_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    idx_t _f = get_idx_pi17(o, from);

    {
        mem_t _a = { .tag = TAG_BASE + _f };

        v19[_it] = _a;

        AABB_ fprintf(vLog, "a: v19[ " FII_ "] := BASE + " F32_ " = " F64_ " + " F32_ " = " F64_ "\n", _it, _f, VAL_BASE, _f, _a.val); fflush (vLog);
    }
}

/*
* adr64_ user
*/

void adr64_18_user(obj_t *o, stp_t to)
{
    idx_t _it = get_idx_16(o, to);

    {
        mem_t _a = { .tag = TAG_PTR_USER };

        v18[_it] = _a;

        AAUU_ fprintf(vLog, "a: v18[ " FII_ "] := &USER = " F64_ "\n", _it, _a.val); fflush(vLog);
    }
}

void adr64_19_user(obj_t *o, num_t to)
{
    idx_t _it = get_idx_pi17(o, to);

    {
        mem_t _a = { .tag = TAG_PTR_USER };

        v19[_it] = _a;

        AAUU_ fprintf(vLog, "a: v19[ " FII_ "] := &USER = " F64_ "\n", _it, _a.val); fflush (vLog);
    }
}

/*
* adr64_ result
*/

void adr64_18_result(obj_t *o, stp_t to)
{
    idx_t _it = get_idx_16(o, to);

    {
        mem_t _a = { .tag = TAG_PTR_RSLT };

        v18[_it] = _a;

        AARR_ fprintf(vLog, "a: v18[ " FII_ "] := &RSLT = " F64_ "\n", _it, _a.val); fflush(vLog);
    }
}

void adr64_19_result(obj_t *o, num_t to)
{
    idx_t _it = get_idx_pi17(o, to);

    {
        mem_t _a = { .tag = TAG_PTR_RSLT };

        v19[_it] = _a;

        AARR_ fprintf(vLog, "a: v19[ " FII_ "] := &RSLT = " F64_ "\n", _it, _a.val); fflush (vLog);
    }
}

/*
* adr64_ bss1, bss2
*/

void adr64_18_bss1(obj_t *o, stp_t to)
{
    idx_t _it = get_idx_16(o, to);

    {
        mem_t _a = { .tag = TAG_BSS1 };

        v18[_it] = _a;

        AA_ fprintf(vLog, "a: v18[ " FII_ "] := BSS1 = " F64_ "\n", _it, _a.val); fflush(vLog);
    }
}

void adr64_19_bss1(obj_t *o, num_t to)
{
    idx_t _it = get_idx_pi17(o, to);

    {
        mem_t _a = { .tag = TAG_BSS1 };

        v19[_it] = _a;

        AA_ fprintf(vLog, "a: v19[ " FII_ "] := BSS1 = " F64_ "\n", _it, _a.val); fflush (vLog);
    }
}

void adr64_18_bss2(obj_t *o, stp_t to)
{
    idx_t _it = get_idx_16(o, to);
    
    {
        mem_t _a = { .tag = TAG_BSS2 };

        v18[_it] = _a;

        AA_ fprintf(vLog, "a: v18[ " FII_ "] := BSS2 = " F64_ "\n", _it, _a.val); fflush(vLog);
    }
}

void adr64_19_bss2(obj_t *o, num_t to)
{
    idx_t _it = get_idx_pi17(o, to);

    {
        mem_t _a = { .tag = TAG_BSS2 };

        v19[_it] = _a;

        AA_ fprintf(vLog, "a: v19[ " FII_ "] := BSS2 = " F64_ "\n", _it, _a.val); fflush (vLog);
    }
}

/*
* rdr8_
*/

void rdr8_1919(obj_t *o, num_t to, num_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    mem_t *_pmt = &(v19[_it]);

    tag_t *_ptt = TAG(_pmt);

    {
        join_t _f = get_mem_19(o, from);

        {
            tag_t *_ptf = _f._64.tag, _t = *(_ptf);

            *(_ptt) = _t; // v19[ v17[to]]:8 = *v19[ v17[from]]:8

            RD_ fprintf(vLog, "r: v19[ " FII_ "]:8 := *(v19[ " FII_ "]):8 = *(" F64_ ") := " F08_ "\n", _it, _f._ii, VAL(_ptf), _t); fflush(vLog);
        }
    }
}

/*
* rdr32_
*/

void rdr32_1818(obj_t *o, stp_t to, stp_t from)
{
    idx_t _it = get_idx_16(o, to);

    mem_t *_pmt = &(v18[_it]);

    idx_t *_pit = IDX(_pmt);

    {
        join_t _f = get_mem_18(o, from);

        {
            idx_t *_pif = _f._64.idx, _i = *(_pif);

            *(_pit) = _i; // v18[to]:32 = *v18[from]:32

            RD_ fprintf(vLog, "r: v18[ " FII_ "]:32 := *(v18[ " FII_ "]):32 = *(" F64_ ") := " F32_ "\n", _it, _f._ii, VAL(_pif), _i); fflush(vLog);
        }
    }
}

void rdr32_1918(obj_t *o, num_t to, stp_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    mem_t *_pmt = &(v19[_it]);

    idx_t *_pit = IDX(_pmt);

    {
        join_t _f = get_mem_18(o, from);

        {
            idx_t *_pif = _f._64.idx, _i = *(_pif);

            *(_pit) = _i; // v19[ v17[to]]:32 = *v18[from]:32

            RD_ fprintf(vLog, "r: v19[ " FII_ "]:32 := *(v18[ " FII_ "]):32 = *(" F64_ ") := " F32_ "\n", _it, _f._ii, VAL(_pif), _i); fflush(vLog);
        }
    }
}

void rdr32_1919(obj_t *o, num_t to, num_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    mem_t *_pmt = &(v19[_it]);

    idx_t *_pit = IDX(_pmt);

    {
        join_t _f = get_mem_19(o, from);

        {
            idx_t *_pif = _f._64.idx, _i = *(_pif);

            *(_pit) = _i; // v19[ v17[to]]:32 = *v19[ v17[from]]:32

            RD_ fprintf(vLog, "r: v19[ " FII_ "]:32 := *(v19[ " FII_ "]):32 = *(" F64_ ") := " F32_ "\n", _it, _f._ii, VAL(_pif), _i); fflush(vLog);
        }
    }
}

/*
* rdr64_
*/

void rdr64_1819(obj_t *o, stp_t to, num_t from)
{
    idx_t _it = get_idx_16(o, to);

    join_t _f = get_mem_19(o, from);

    {
        ptr_t *_ppf = _f._64.ptr;

        mem_t _a = { .val = *(_ppf) };

        v18[_it] = _a;

        RD_ fprintf(vLog, "r: v18[ " FII_ "] := *(v19[ " FII_ "]) = *(" F64_ ") := " F64_ "\n", _it, _f._ii, VAL(_ppf), _a.val); fflush (vLog);
    }
}

void rdr64_1818(obj_t *o, stp_t to, stp_t from)
{
    idx_t _it = get_idx_16(o, to);

    join_t _f = get_mem_18(o, from);

    {
        ptr_t *_ppf = _f._64.ptr;

        mem_t _a = { .val = *(_ppf) };

        v18[_it] = _a;

        RD_ fprintf(vLog, "r: v18[ " FII_ "] := *(v18[ " FII_ "]) = *(" F64_ ") := " F64_ "\n", _it, _f._ii, VAL(_ppf), _a.val); fflush(vLog);
    }
}

void rdr64_1918(obj_t *o, num_t to, stp_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    join_t _f = get_mem_18(o, from);

    {
        ptr_t *_ppf = _f._64.ptr;

        mem_t _a = { .val = *(_ppf) };

        v19[_it] = _a;

        RD_ fprintf(vLog, "r: v19[ " FII_ "] := *(v18[ " FII_ "]) = *(" F64_ ") := " F64_ "\n", _it, _f._ii, VAL(_ppf), _a.val); fflush (vLog);
    }
}

void rdr64_1919(obj_t *o, num_t to, num_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    join_t _f = get_mem_19(o, from);

    {
        ptr_t *_ppf = _f._64.ptr;

        mem_t _a = { .val = *(_ppf) };

        v19[_it] = _a;

        RD_ fprintf(vLog, "r: v19[ " FII_ "] := *(v19[ " FII_ "]) = *(" F64_ ") := " F64_ "\n", _it, _f._ii, VAL(_ppf), _a.val); fflush (vLog);
    }
}

/*
* wrt32_
*/

void wrt32_1819(obj_t *o, stp_t to, num_t from)
{
    idx_t _it = get_idx_16(o, to);

    join_t _f = get_idx_19(o, from);

    {
        idx_t *_pit = v18[_it].idx;

        *(_pit) = _f._32; // *v18[to]:32 = v19[ v17[from]]:32

        WR_ fprintf(vLog, "w: *(v18[ " FII_ "]):32 := v19[ " FII_ "]:32 ; *(" F64_ ") := " F32_ "\n", _it, _f._ii, VAL(_pit), _f._32); fflush(vLog);
    }
}

void wrt32_1818(obj_t *o, stp_t to, stp_t from)
{
    idx_t _it = get_idx_16(o, to);

    join_t _f = get_idx_18(o, from);

    {
        idx_t *_pit = v18[_it].idx;

        *(_pit) = _f._32; // *v18[to]:32 = v18[from]:32

        WR_ fprintf(vLog, "w: *(v18[ " FII_ "]):32 := v18[ " FII_ "]:32 ; *(" F64_ ") := " F32_ "\n", _it, _f._ii, VAL(_pit), _f._32); fflush(vLog);
    }
}

void wrt32_1919(obj_t* o, num_t to, num_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    join_t _f = get_idx_19(o, from);

    {
        idx_t *_pit = v19[_it].idx;

        *(_pit) = _f._32; // *v19[ v17[to]]:32 = v19[ v17[from]]:32

        WR_ fprintf(vLog, "w: *(v19[ " FII_ "]):32 := v19[ " FII_ "]:32 ; *(" F64_ ") := " F32_ "\n", _it, _f._ii, VAL(_pit), _f._32); fflush(vLog);
    }
}

/*
* wrt64_
*/

void wrt64_1819(obj_t *o, stp_t to, num_t from)
{
    idx_t _it = get_idx_16(o, to);

    join_t _f = get_mem_19(o, from);

    {
        ptr_t *_ppt = v18[_it].ptr;

        *(_ppt) = _f._64.val;

        WR_ fprintf(vLog, "w: *(v18[ " FII_ "]) := v19[ " FII_ "] ; *(" F64_ ") := " F64_ "\n", _it, _f._ii, VAL(_ppt), _f._64.val); fflush (vLog);
    }
}

void wrt64_1818(obj_t *o, stp_t to, stp_t from)
{
    idx_t _it = get_idx_16(o, to);

    join_t _f = get_mem_18(o, from);

    {
        ptr_t *_ppt = v18[_it].ptr;

        *(_ppt) = _f._64.val;

        WR_ fprintf(vLog, "w: *(v18[ " FII_ "]) := v18[ " FII_ "] ; *(" F64_ ") := " F64_ "\n", _it, _f._ii, VAL(_ppt), _f._64.val); fflush(vLog);
    }
}

void wrt64_1918(obj_t *o, num_t to, stp_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    join_t _f = get_mem_18(o, from);

    {
        ptr_t *_ppt = v19[_it].ptr;

        *(_ppt) = _f._64.val;

        WR_ fprintf(vLog, "w: *(v19[ " FII_ "]) := v18[ " FII_ "] ; *(" F64_ ") := " F64_ "\n", _it, _f._ii, VAL(_ppt), _f._64.val); fflush (vLog);
    }
}

void wrt64_1919(obj_t *o, num_t to, num_t from)
{
    idx_t _it = get_idx_pi17(o, to);

    join_t _f = get_mem_19(o, from);

    {
        ptr_t *_ppt = v19[_it].ptr;

        *(_ppt) = _f._64.val;

        WR_ fprintf(vLog, "w: *(v19[ " FII_ "]) := v19[ " FII_ "] ; *(" F64_ ") := " F64_ "\n", _it, _f._ii, VAL(_ppt), _f._64.val); fflush (vLog);
    }
}

/*
* cpy_
*/

void cpy_1819(obj_t *o, bm_t to, bm_t from)
{
    join_t x = get_act_19(o, from);

    idx_t it = set_act_18(o, to, x._64);

    CP_ fprintf(vLog, "c: v18[ " FII_ "]%s := v19[ " FII_ "]%s = " F64_ "\n", it, bm_str(to), x._ii, bm_str(from), x._64.val); fflush(vLog);
}

void cpy_1818(obj_t *o, bm_t to, bm_t from)
{
    join_t x = get_act_18(o, from);

    idx_t it = set_act_18(o, to, x._64);

    CP_ fprintf(vLog, "c: v18[ " FII_ "]%s := v18[ " FII_ "]%s = " F64_ "\n", it, bm_str(to), x._ii, bm_str(from), x._64.val); fflush(vLog);
}

void cpy_1918(obj_t *o, bm_t to, bm_t from)
{
    join_t x = get_act_18(o, from);

    idx_t it = set_act_19(o, to, x._64);

    CP_ fprintf(vLog, "c: v19[ " FII_ "]%s := v18[ " FII_ "]%s = " F64_ "\n", it, bm_str(to), x._ii, bm_str(from), x._64.val); fflush(vLog);
}

void cpy_1919(obj_t *o, bm_t to, bm_t from)
{
    join_t x = get_act_19(o, from);

    idx_t it = set_act_19(o, to, x._64);

    CP_ fprintf(vLog, "c: v19[ " FII_ "]%s := v19[ " FII_ "]%s = " F64_ "\n", it, bm_str(to), x._ii, bm_str(from), x._64.val); fflush(vLog);
}

/*
* neg_
*/

void neg_1819(obj_t *o, bm_t to, bm_t from)
{
    join_t x = get_act_19(o, from);

    {
        mem_t zero = { .val = 0 }, y = { .val = zero.val - x._64.val };

        idx_t it = set_act_18(o, to, y);
    }

    {
        join_t y = get_act_18(o, to);

        fprintf(vLog, "n: v18[ " FII_ "]%s := -(v19[ " FII_ "]%s) = " F64_ "\n", y._ii, bm_str(to), x._ii, bm_str(from), y._64.val); fflush(vLog);
    }
}

void neg_1818(obj_t *o, bm_t to, bm_t from)
{
    join_t x = get_act_18(o, from);

    {
        mem_t zero = { .val = 0 }, y = { .val = zero.val - x._64.val };

        idx_t it = set_act_18(o, to, y);
    }

    {
        join_t y = get_act_18(o, to);

        fprintf(vLog, "n: v18[ " FII_ "]%s := -(v18[ " FII_ "]%s) = " F64_ "\n", y._ii, bm_str(to), x._ii, bm_str(from), y._64.val); fflush(vLog);
    }
}

void neg_1918(obj_t *o, bm_t to, bm_t from)
{
    join_t x = get_act_18(o, from);

    {
        mem_t zero = { .val = 0 }, y = { .val = zero.val - x._64.val };

        idx_t it = set_act_19(o, to, y);
    }

    {
        join_t y = get_act_19(o, to);

        fprintf(vLog, "n: v19[ " FII_ "]%s := -(v18[ " FII_ "]%s) = " F64_ "\n", y._ii, bm_str(to), x._ii, bm_str(from), y._64.val); fflush(vLog);
    }
}

void neg_1919(obj_t *o, bm_t to, bm_t from)
{
    join_t x = get_act_19(o, from);

    {
        mem_t zero = { .val = 0 }, y = { .val = zero.val - x._64.val };

        idx_t it = set_act_19(o, to, y);
    }

    {
        join_t y = get_act_19(o, to);

        fprintf(vLog, "n: v19[ " FII_ "]%s := -(v19[ " FII_ "]%s) = " F64_ "\n", y._ii, bm_str(to), x._ii, bm_str(from), y._64.val); fflush(vLog);
    }
}

/*
* act_
*/

char _act_char_(act_e act)
{
    bool b = (act_e::ACT_ADD <= act && act < act_e::ACT_SZ);

    char c = (b) ? g_acts[act] : '?';

    if (!b) { printf("\nerr:08} act := " F08_ " not named\n\n", act); }

    return c;
}

mem_t _act_(mem_t x1, mem_t x2, act_e act)
{
    mem_t y = { .val = x1.val };

    switch (act)
    {
        case (ACT_ADD): { y.val += x2.val; break; }
        case (ACT_SUB): { y.val -= x2.val; break; }
        case (ACT_MUL): { y.val *= x2.val; break; }
        case (ACT_MOD): { y.val %= x2.val; break; }

        case (ACT_SHR): { y.val >>= x2.val; break; }
        case (ACT_SHL): { y.val <<= x2.val; break; }

        case (ACT_AND): { y.val &= x2.val; break; }
        case (ACT_ORR): { y.val |= x2.val; break; }
        case (ACT_XOR): { y.val ^= x2.val; break; }

        case (ACT_LES): { y.val  = (x1.val  < x2.val) ? 1 : 0; break; }
        case (ACT_CEQ): { y.val  = (x1.val == x2.val) ? 1 : 0; break; }
        case (ACT_CNE): { y.val  = (x1.val != x2.val) ? 1 : 0; break; }

        default: { printf("\nerr:08} act := " F08_ " not found\n\n", act); break; }
    }

    return y;
}

void _act_181919_(obj_t *o, bm_t to, bm_t from1, bm_t from2, act_e act)
{
    join_t x1 = get_act_19(o, from1), x2 = get_act_19(o, from2);

    {
        mem_t y = _act_(x1._64, x2._64, act);

        idx_t it = set_act_18(o, to, y);
    }

    {
        char c = _act_char_(act);

        join_t y = get_act_18(o, to);

        fprintf(vLog, "%c: v18[ " FII_ "]%s := v19[ " FII_ "]%s %c v19[ " FII_ "]%s = " F64_ " %c " F64_ " = " F64_ "\n", c, y._ii, bm_str(to), x1._ii, bm_str(from1), c, x2._ii, bm_str(from2), x1._64.val, c, x2._64.val, y._64.val); fflush(vLog);
    }
}

void _act_181819_(obj_t *o, bm_t to, bm_t from1, bm_t from2, act_e act)
{
    join_t x1 = get_act_18(o, from1), x2 = get_act_19(o, from2);

    {
        mem_t y = _act_(x1._64, x2._64, act);

        idx_t it = set_act_18(o, to, y);
    }

    {
        char c = _act_char_(act);

        join_t y = get_act_18(o, to);

        fprintf(vLog, "%c: v18[ " FII_ "]%s := v18[ " FII_ "]%s %c v19[ " FII_ "]%s = " F64_ " %c " F64_ " = " F64_ "\n", c, y._ii, bm_str(to), x1._ii, bm_str(from1), c, x2._ii, bm_str(from2), x1._64.val, c, x2._64.val, y._64.val); fflush(vLog);
    }
}

void _act_181918_(obj_t *o, bm_t to, bm_t from1, bm_t from2, act_e act)
{
    join_t x1 = get_act_19(o, from1), x2 = get_act_18(o, from2);

    {
        mem_t y = _act_(x1._64, x2._64, act);

        idx_t it = set_act_18(o, to, y);
    }

    {
        char c = _act_char_(act);

        join_t y = get_act_18(o, to);

        fprintf(vLog, "%c: v18[ " FII_ "]%s := v19[ " FII_ "]%s %c v18[ " FII_ "]%s = " F64_ " %c " F64_ " = " F64_ "\n", c, y._ii, bm_str(to), x1._ii, bm_str(from1), c, x2._ii, bm_str(from2), x1._64.val, c, x2._64.val, y._64.val); fflush(vLog);
    }
}

void _act_181818_(obj_t *o, bm_t to, bm_t from1, bm_t from2, act_e act)
{
    join_t x1 = get_act_18(o, from1), x2 = get_act_18(o, from2);

    {
        mem_t y = _act_(x1._64, x2._64, act);

        idx_t it = set_act_18(o, to, y);
    }

    {
        char c = _act_char_(act);

        join_t y = get_act_18(o, to);

        fprintf(vLog, "%c: v18[ " FII_ "]%s := v18[ " FII_ "]%s %c v18[ " FII_ "]%s = " F64_ " %c " F64_ " = " F64_ "\n", c, y._ii, bm_str(to), x1._ii, bm_str(from1), c, x2._ii, bm_str(from2), x1._64.val, c, x2._64.val, y._64.val); fflush(vLog);
    }
}

void _act_191818_(obj_t *o, bm_t to, bm_t from1, bm_t from2, act_e act)
{
    join_t x1 = get_act_18(o, from1), x2 = get_act_18(o, from2);

    {
        mem_t y = _act_(x1._64, x2._64, act);

        idx_t it = set_act_19(o, to, y);
    }

    {
        char c = _act_char_(act);

        join_t y = get_act_19(o, to);

        fprintf(vLog, "%c: v19[ " FII_ "]%s := v18[ " FII_ "]%s %c v18[ " FII_ "]%s = " F64_ " %c " F64_ " = " F64_ "\n", c, y._ii, bm_str(to), x1._ii, bm_str(from1), c, x2._ii, bm_str(from2), x1._64.val, c, x2._64.val, y._64.val); fflush(vLog);
    }
}

void _act_191918_(obj_t *o, bm_t to, bm_t from1, bm_t from2, act_e act)
{
    join_t x1 = get_act_19(o, from1), x2 = get_act_18(o, from2);

    {
        mem_t y = _act_(x1._64, x2._64, act);

        idx_t it = set_act_19(o, to, y);
    }

    {
        char c = _act_char_(act);

        join_t y = get_act_19(o, to);

        fprintf(vLog, "%c: v19[ " FII_ "]%s := v19[ " FII_ "]%s %c v18[ " FII_ "]%s = " F64_ " %c " F64_ " = " F64_ "\n", c, y._ii, bm_str(to), x1._ii, bm_str(from1), c, x2._ii, bm_str(from2), x1._64.val, c, x2._64.val, y._64.val); fflush(vLog);
    }
}

void _act_191819_(obj_t *o, bm_t to, bm_t from1, bm_t from2, act_e act)
{
    join_t x1 = get_act_18(o, from1), x2 = get_act_19(o, from2);

    {
        mem_t y = _act_(x1._64, x2._64, act);

        idx_t it = set_act_19(o, to, y);
    }

    {
        char c = _act_char_(act);

        join_t y = get_act_19(o, to);

        fprintf(vLog, "%c: v19[ " FII_ "]%s := v18[ " FII_ "]%s %c v19[ " FII_ "]%s = " F64_ " %c " F64_ " = " F64_ "\n", c, y._ii, bm_str(to), x1._ii, bm_str(from1), c, x2._ii, bm_str(from2), x1._64.val, c, x2._64.val, y._64.val); fflush(vLog);
    }
}

void _act_191919_(obj_t *o, bm_t to, bm_t from1, bm_t from2, act_e act)
{
    join_t x1 = get_act_19(o, from1), x2 = get_act_19(o, from2);

    {
        mem_t y = _act_(x1._64, x2._64, act);

        idx_t it = set_act_19(o, to, y);
    }

    {
        char c = _act_char_(act);

        join_t y = get_act_19(o, to);

        fprintf(vLog, "%c: v19[ " FII_ "]%s := v19[ " FII_ "]%s %c v19[ " FII_ "]%s = " F64_ " %c " F64_ " = " F64_ "\n", c, y._ii, bm_str(to), x1._ii, bm_str(from1), c, x2._ii, bm_str(from2), x1._64.val, c, x2._64.val, y._64.val); fflush(vLog);
    }
}

/*
* add_
*/

void add_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_ADD);
}

void add_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_ADD);
}

void add_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_ADD);
}

void add_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_ADD);
}

void add_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_ADD);
}

void add_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_ADD);
}

void add_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_ADD);
}

void add_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_ADD);
}

/*
* mul_
*/

void mul_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_MUL);
}

void mul_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_MUL);
}

void mul_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_MUL);
}

void mul_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_MUL);
}

void mul_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_MUL);
}

void mul_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_MUL);
}

void mul_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_MUL);
}

void mul_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_MUL);
}

/*
* and_
*/

void and_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_AND);
}

void and_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_AND);
}

void and_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_AND);
}

void and_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_AND);
}

void and_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_AND);
}

void and_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_AND);
}

void and_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_AND);
}

void and_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_AND);
}

/*
* les_
*/

void les_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_LES);
}

void les_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_LES);
}

void les_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_LES);
}

void les_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_LES);
}

void les_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_LES);
}

void les_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_LES);
}

void les_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_LES);
}

void les_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_LES);
}

/*
* sub_
*/

void sub_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_SUB);
}

void sub_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_SUB);
}

void sub_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_SUB);
}

void sub_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_SUB);
}

void sub_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_SUB);
}

void sub_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_SUB);
}

void sub_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_SUB);
}

void sub_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_SUB);
}

/*
* orr_
*/

void orr_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_ORR);
}

void orr_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_ORR);
}

void orr_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_ORR);
}

void orr_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_ORR);
}

void orr_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_ORR);
}

void orr_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_ORR);
}

void orr_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_ORR);
}

void orr_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_ORR);
}

/*
* xor_
*/

void xor_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_XOR);
}

void xor_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_XOR);
}

void xor_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_XOR);
}

void xor_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_XOR);
}

void xor_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_XOR);
}

void xor_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_XOR);
}

void xor_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_XOR);
}

void xor_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_XOR);
}

/*
* ceq_
*/

void ceq_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_CEQ);
}

void ceq_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_CEQ);
}

void ceq_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_CEQ);
}

void ceq_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_CEQ);
}

void ceq_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_CEQ);
}

void ceq_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_CEQ);
}

void ceq_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_CEQ);
}

void ceq_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_CEQ);
}

/*
* cne_
*/

void cne_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_CNE);
}

void cne_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_CNE);
}

void cne_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_CNE);
}

void cne_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_CNE);
}

void cne_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_CNE);
}

void cne_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_CNE);
}

void cne_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_CNE);
}

void cne_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_CNE);
}

/*
* mod_
*/

void mod_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_MOD);
}

void mod_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_MOD);
}

void mod_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_MOD);
}

void mod_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_MOD);
}

void mod_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_MOD);
}

void mod_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_MOD);
}

void mod_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_MOD);
}

void mod_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_MOD);
}

/*
* shr_
*/

void shr_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_SHR);
}

void shr_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_SHR);
}

void shr_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_SHR);
}

void shr_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_SHR);
}

void shr_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_SHR);
}

void shr_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_SHR);
}

void shr_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_SHR);
}

void shr_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_SHR);
}

/*
* shl_
*/

void shl_181919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181919_(o, to, from1, from2, ACT_SHL);
}

void shl_181819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181819_(o, to, from1, from2, ACT_SHL);
}

void shl_181918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181918_(o, to, from1, from2, ACT_SHL);
}

void shl_181818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_181818_(o, to, from1, from2, ACT_SHL);
}

void shl_191818(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191818_(o, to, from1, from2, ACT_SHL);
}

void shl_191918(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191918_(o, to, from1, from2, ACT_SHL);
}

void shl_191819(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191819_(o, to, from1, from2, ACT_SHL);
}

void shl_191919(obj_t *o, bm_t to, bm_t from1, bm_t from2)
{
    return _act_191919_(o, to, from1, from2, ACT_SHL);
}
