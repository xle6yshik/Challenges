#include "vars.h"

#include "func.h"

#include "actn.h"

/*
*
*/

u32_t _calc_idx_(u32_t g)
{
    u32_t i = idx_get(g, n_Calc);

    return i;
}

/*
*
*/

u32_t calc_by_get(u32_t g)
{
    u32_t i = _calc_idx_(g), _g = Calc[i];

    return _g;
}

u32_t calc_by_actn_get(u32_t i)
{
    u32_t g = Actn[i];

    g = calc_by_get(g);

    return g;
}

u32_t calc_by_calc_get(u32_t i)
{
    u32_t g = Calc[i];

    g = calc_by_get(g);

    return g;
}

/*
*
*/

void calc_by_set(u32_t g, u32_t t)
{
    u32_t _i = _calc_idx_(g);

    Calc[_i] = t;
}

void calc_by_actn_set(u32_t i, u32_t t)
{
    u32_t g = Actn[i];

    calc_by_set(g, t);
}

void calc_by_calc_set(u32_t i, u32_t t)
{
    u32_t g = Calc[i];

    calc_by_set(g, t);
}

/*
*
*/

bool calc_check(const u32_t *t1, u32_t n1)
{
    bool sts = (n1 == n_Calc);

    for (u32_t i = 0; i < n1; ++i)
    {
        sts &= (t1[i] == Calc[i]);

        if (!sts) { break; }
    }

    return sts;
}

/*
*
*/

void calc_init()
{
    u32_t i = 0;

    {
        u32_t t1 = User[0];

        t1 *= User[1];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = User[1];

        t1 += Actn[9];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = Cnst[9];

        t1 *= Actn[6];
        t1 += User[0];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = User[0];

        t1 += User[1];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = Cnst[10];

        t1 += User[1];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = User[0];

        t1 ^= Actn[0];
        t1 += Cnst[11];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = User[0];

        t1 -= User[1];
        t1 += Cnst[12];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = User[0];

        t1 += Cnst[13];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = User[1];

        t1 += Actn[2];

        Calc[i++] = t1;
    }

    {
        u32_t t1 = User[0];

        t1 -= Actn[9];

        u32_t t2 = User[1];

        t2 |= Cnst[14];

        t1 -= t2;

        Calc[i++] = t1;
    }
}

/*
*
*/

void _cm0_()
{
    f_loop_c(false);
}

/*
*
*/

void _msix0_g_and_0_()
{
    /* nothing */
}

/*
*
*/

void _b14_f_()
{
    /* nothing */
}

/*
*
*/

void _b14_t_()
{
    u32_t i = 6, t1 = actn_by_actn_get(i);

    t1 *= Actn[2];

    calc_by_set(Actn[4], t1);
}

/*
*
*/

void _msix0_g_and_1_()
{
    bool b = (Actn[1] < Calc[4]);

    printf(", B14 = %u", b);

    if (b) { _b14_t_(); } else { _b14_f_(); }
}
/*
*
*/

void _msix0_()
{
    u32_t g = Calc[4];

    g = g >> 2;

    g &= 1;

    printf(", G6 = %u", g);

    if (g == 0) { _msix0_g_and_0_(); } else { _msix0_g_and_1_(); }
}

/*
*
*/

void _msix1_()
{
    {
        u32_t i = 2, t1 = calc_by_actn_get(i);

        t1 += t1;

        actn_by_set(Actn[5], t1);
    }

    {
        u32_t i1 = 3, t1 = calc_by_calc_get(i1);

        u32_t i2 = 0, t2 = calc_by_actn_get(i2);

        t1 &= t2;

        actn_by_set(Actn[9], t1);
    }
}

/*
*
*/

void _msix2_()
{
    u32_t i1 = 6, t1 = calc_by_actn_get(i1);

    u32_t i2 = 7, t2 = actn_by_calc_get(i2);

    t1 -= t2;

    actn_by_set(Actn[8], t1);
}

/*
*
*/

void _msix3_()
{
    /* nothing */
}

/*
*
*/

void _msix4_()
{
    /* nothing */
}

/*
*
*/

void _msix5_()
{
    /* nothing */
}

/*
*
*/

void _msix_run_(u32_t g)
{
    u32_t m = mod_get(g, n_mod_6);

    printf(", SIX = %u", m);

    switch (m)
    {
    case (0): { _msix0_(); break; }
    case (1): { _msix1_(); break; }
    case (2): { _msix2_(); break; }
    case (3): { _msix3_(); break; }
    case (4): { _msix4_(); break; }
    case (5): { _msix5_(); break; }

    default: { break; }
    }
}

/*
*
*/

void _cm10_()
{
    u32_t i = 1, g = actn_by_calc_get(i);

    _msix_run_(g);
}

/*
*
*/

void _cm11_()
{
    // real : AM = 0, CM = 1, CM1 = 0, SIX = 5

    // i: v5: = 0x65 (order = 1919, d = 22869, undo = 0, emul = 0)

    // c : vF78[0] : = v18[0] = 0
    // s : vF70[0] : = 0
    // s : vF68[0] : = 1
    // ...
    // ? : vF78[0] < vF70[0] = 0 < 0, b1 = 0
    // ? : vF68[0] < vF78[0] = 1 < 0, b2 = 0

    // emul : AM = 0, CM = 1, CM1 = 1, SIX = ...

    // i: v5: = 0x65 (order = 1919, d = 22869, undo = 0, emul = 1)

    // c : vF78[0] : = v18[0] = 1
    // s : vF70[0] : = 0
    // s : vF68[0] : = 1
    // ...
    // ? : vF78[0] < vF70[0] = 1 < 0, b1 = 0
    // ? : vF68[0] < vF78[0] = 1 < 1, b2 = 0

    // ! : any number from range [0, 1] set b1 = 0, b2 = 0

    _cm10_();
}

/*
*
*/

void _cm1_run_(u32_t g)
{
    u32_t m = mod_get(g, n_mod_4);

    {
        scan_t *s = Scanner;

        if (m != s->cm1) { return; }
    }

    // printf(", CM1 = %u", m);

    switch (m)
    {
    case (0): { _cm10_(); break; }
    case (1): { _cm11_(); break; }
    case (2): { break; }
    case (3): { break; }

    default: { break; }
    }
}

void _cm1_()
{
    u32_t i = 8, g = actn_by_actn_get(i);

    g *= Calc[2];

    _cm1_run_(g);
}

/*
*
*/

void _cm3_()
{
    u32_t i = 7, t1 = actn_by_actn_get(i);

    t1 -= Actn[2];

    Calc[7] = t1;

    {
        printf(", Flag = %u", Flag);

        if (Flag) { /* never happened */; } else { /* nothing */ ; return; }
    }
}

/*
*
*/

void _cm2_()
{
    // real : AM = 0, CM = 3, Flag = 0

    // i: v5: = 0x65 (order = 1887, d = 69593, undo = 0, emul = 0)

    // c : vF78[0] : = v18[0] = 3
    // s : vF70[0] : = 0
    // s : vF68[0] : = 1
    // ...
    // ? : vF78[0] < vF70[0] = 3 < 0, b1 = 0
    // ? : vF68[0] < vF78[0] = 1 < 3, b2 = 1

    // emul : AM = 0, CM = 2, Flag = 0

    // i: v5: = 0x65 (order = 1887, d = 69593, undo = 0, emul = 1)

    // c : vF78[0] : = v18[0] = 2
    // s : vF70[0] : = 0
    // s : vF68[0] : = 1
    // ...
    // ? : vF78[0] < vF70[0] = 2 < 0, b1 = 0
    // ? : vF68[0] < vF78[0] = 1 < 2, b2 = 1

    // ! : any number from range [2, inf) set b1 = 0, b2 = 1

    _cm3_();
}

/*
*
*/

void calc_run(u32_t g)
{
    u32_t m = mod_get(g, n_mod_4);

    {
        scan_t *s = Scanner;

        if (m != s->cm) { return; }
    }

    // printf(", CM = %u", m);

    switch (m)
    {
    case (0): { _cm0_(); break; }
    case (1): { _cm1_(); break; }
    case (2): { _cm2_(); break; }
    case (3): { _cm3_(); break; }

    default: { break; }
    }
}
