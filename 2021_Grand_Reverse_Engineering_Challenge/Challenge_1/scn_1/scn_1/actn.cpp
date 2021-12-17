#include "vars.h"
#include "calc.h"

#include "func.h"

/*
*
*/

u32_t _actn_idx_(u32_t g)
{
    u32_t i = idx_get(g, n_Actn);

    return i;
}

/*
*
*/

u32_t actn_by_get(u32_t g)
{
    u32_t i = _actn_idx_(g), _g = Actn[i];

    return _g;
}

u32_t actn_by_actn_get(u32_t i)
{
    u32_t g = Actn[i];

    g = actn_by_get(g);

    return g;
}

u32_t actn_by_calc_get(u32_t i)
{
    u32_t g = Calc[i];

    g = actn_by_get(g);

    return g;
}

/*
*
*/

void actn_by_set(u32_t g, u32_t t)
{
    u32_t _i = _actn_idx_(g);

    Actn[_i] = t;
}

void actn_by_actn_set(u32_t i, u32_t t)
{
    u32_t g = Actn[i];

    actn_by_set(g, t);
}

void actn_by_calc_set(u32_t i, u32_t t)
{
    u32_t g = Calc[i];

    actn_by_set(g, t);
}

/*
*
*/

bool actn_check(const u32_t *t1, u32_t n1)
{
    bool sts = (n1 == n_Actn);

    for (u32_t i = 0; i < n1; ++i)
    {
        sts &= (t1[i] == Actn[i]);

        if (!sts) { break; }
    }

    return sts;
}

/*
*
*/

void actn_init()
{
    u32_t i = 0;

    {
        u32_t t1 = User[0];
        
        t1 |= User[1];

        Actn[i++] = t1;
    }

    {
        u32_t t1 = User[1];
        
        t1 -= User[0];

        u32_t t2 = Cnst[1];

        t2 += Actn[0];
        t2 *= t1;

        Actn[i++] = t2;
    }

    {
        u32_t t1 = Cnst[2];

        t1 -= Actn[0];
        t1 |= Cnst[3];

        u32_t t2 = User[0];

        t2 ^= User[1];
        t2 += t1;

        Actn[i++] = t2;
    }

    {
        u32_t t1 = User[1];

        t1 += Actn[1];
        t1 *= User[0];

        Actn[i++] = t1;
    }

    {
        u32_t t1 = User[1];

        t1 |= Actn[1];

        u32_t t2 = User[0];

        t2 -= t1;

        Actn[i++] = t2;
    }

    {
        u32_t t1 = Cnst[4];

        t1 += Actn[3];
        t1 += Cnst[5];

        u32_t t2 = User[0];

        t2 *= User[1];
        t2 -= t1;

        Actn[i++] = t2;
    }

    {
        u32_t t1 = User[0];

        t1 |= User[1];

        Actn[i++] = t1;
    }

    {
        u32_t t1 = Actn[2];

        t1 -= Actn[4];
        t1 += User[0];

        Actn[i++] = t1;
    }

    {
        u32_t t1 = Cnst[6];

        t1 |= Actn[4];
        t1 += User[1];

        Actn[i++] = t1;
    }

    {
        u32_t t1 = Cnst[7];

        t1 += User[1];

        u32_t t2 = Cnst[8];

        t2 += User[0];

        t2 *= t1;

        Actn[i++] = t2;
    }
}

/*
*
*/

void _a_done_(u32_t v1)
{
    if (p_Rslt != nullptr) { *(p_Rslt) = v1; } else { printf(":: access violation, p_Rslt == nullptr"); } // Rslt[0] = v1;
}

/*
*
*/

void _am0_()
{
    u32_t v1 = 0, v2 = 0;

    {
        u32_t i = 8, g = calc_by_actn_get(i);

        calc_run(g);
    }

    {
        dto_t d = { .z1 = Actn[2], .z2 = Actn[6] };

        v1 = f_eval_1(d);
    }

    {
        dto_t d = { .z1 = Calc[7], .z2 = z_none };

        v2 = f_eval_2(d);
    }

    v1 += v2;

    _a_done_(v1);
}

/*
*
*/

void _am1_()
{
    u32_t v1 = 0, v2 = 0;

    {
        u32_t g = Actn[0];

        g *= Actn[9];

        func_run(g);
    }

    {
        dto_t d = { .z1 = Actn[2], .z2 = Actn[6] };

        v1 = f_eval_1(d);
    }

    {
        dto_t d = { .z1 = Calc[7], .z2 = z_none };

        v2 = f_eval_2(d);
    }

    v1 += v2;

    _a_done_(v1);
}

/*
*
*/

void _am2_()
{
    u32_t v1 = 0, v2 = 0;

    {
        u32_t f = f_loop_a(false);

        dto_t d = { .z1 = f, .z2 = Actn[6] };

        v1 = f_eval_1(d);
    }

    {
        dto_t d = { .z1 = Calc[7], .z2 = z_none };

        v2 = f_eval_2(d);
    }

    v1 += v2;

    _a_done_(v1);
}

/*
*
*/

void _am3_()
{
    u32_t v1 = 0, v2 = 0;

    {
        u32_t f = f_loop_a(false);

        dto_t d = { .z1 = f, .z2 = Actn[0] };

        v1 = f_eval_1(d);
    }

    {
        dto_t d = { .z1 = Calc[7], .z2 = z_none };

        v2 = f_eval_2(d);
    }

    v1 += v2;

    _a_done_(v1);
}

/*
*
*/

void actn_run(u32_t g)
{
    u32_t m = mod_get(g, n_mod_4);

    {
        scan_t *s = Scanner;

        if (m != s->am) { return; }
    }

    // printf("   AM = %u", m);

    switch (m)
    {
    case (0): { _am0_(); break; }
    case (1): { _am1_(); break; }
    case (2): { _am2_(); break; }
    case (3): { _am3_(); break; }

    default: { break; }
    }
}
