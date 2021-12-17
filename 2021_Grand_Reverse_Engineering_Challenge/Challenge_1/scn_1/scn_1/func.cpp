#include "vars.h"

#include "actn.h"
#include "calc.h"
#include "cnst.h"
#include "user.h"

/*
*
*/

u32_t _idx_get_(u32_t g)
{
    u32_t i = g % Cnst[15];

    return i;
}

u32_t _mod_get_(u32_t g, u32_t e)
{
    u32_t m = g % e;

    return m;
}

/*
*
*/

u32_t idx_get(u32_t g, u32_t e)
{
    u32_t i = _idx_get_(g);

    if (e <= i)
    {
        printf(":: idx_get(%X) i=%u idx out of range [0 .. %u]\n", g, i, e - 1);
        i = 0; i--;
    }

    return i;
}

u32_t mod_get(u32_t g, u32_t e)
{
    u32_t m = _mod_get_(g, e);

    if (e <= m)
    {
        printf(":: mod_get(%X) m=%u mod out of range [0 .. %u]\n", g, m, e - 1);
        m = 0; m--;
    }

    return m;
}


/*
*
*/

u32_t f_eval_1(dto_t d)
{
    u32_t t1 = Actn[0];

    t1 *= Actn[1];

    u32_t t2 = Actn[3];

    t2 |= Actn[4];
    t2 += d.z1;
    t2 += t1;

    t1 = d.z2;

    t1 |= Actn[5];

    u32_t t3 = Actn[8];

    t3 &= Actn[9];
    t3 |= Actn[7];
    t3 *= t1;
    t3 &= t2;

    return t3;
}

u32_t f_eval_2(dto_t d)
{
    u32_t x1 = Calc[0];

    x1 *= Calc[1];

    u32_t x2 = Calc[3];

    x2 -= Calc[4];
    x2 += Calc[2];
    x2 += x1;

    x1 = Calc[5];

    x1 *= Calc[6];

    u32_t x3 = Calc[8];

    x3 *= Calc[9];

    x3 = d.z1 - x3;

    x3 += x1;
    x3 |= x2;

    return x3;
}

/*
*
*/

u32_t f_loop_a(bool all)
{
    // printf("\n:: f_loop_a\n");

    u32_t u = 0, v = 0, w = 0, t1 = 0; t1--;

    w = Calc[2]; w %= Cnst[17];

    while (u < w)
    {
        u32_t i = 9;

        t1 = actn_by_calc_get(i);
        t1 *= Calc[6];

        {
            // bool afl = (all || u == 0 || u == (2 * ((w - 1) / 2))); // all, first, last

            // if (afl) { printf(":: f_loop_a(u = %04X) t1 = %X\n", u, t1); }
        }

        u = u + 2; v = (v + 1) % Cnst[15];

        w = Calc[2]; w %= Cnst[17];
    }

    return t1;
}

/*
*
*/

void f_loop_c(bool all)
{
    // printf("\n:: f_loop_c\n");

    u32_t u = 0, v = 0, w = 0, t1 = 0; t1--;

    w = Calc[1]; w %= Cnst[22];

    while (u < w)
    {
        u32_t i = 7;

        t1 = calc_by_calc_get(i);
        t1 += Calc[6];

        actn_by_set(Calc[6], t1);

        {
            // bool afl = (all || u == 0 || u == (2 * ((w - 1) / 2))); // all, first, last

            // if (afl) { printf(":: f_loop_c(u = %04X) t1 = %X\n", u, t1); }
        }

        u = u + 1; v = (v + 1) % Cnst[15];

        w = Calc[1]; w %= Cnst[22];
    }
}

/*
*
*/

void _fm0_g_and_0_(loop_t h)
{
    {
        u32_t t1 = calc_by_get(h.z1);

        t1 += Actn[9];

        actn_by_set(h.z2, t1);
    }

    {
        u32_t t1 = calc_by_get(h.z1);

        u32_t i = 5, t2 = calc_by_calc_get(i);

        t1 -= t2;

        Actn[4] = t1;
    }
}

void _fm0_g_and_1_()
{
    { // speed up
        scan_t *s = Scanner;

        s->ok.b = (Actn[9] == 0xc4cfce5c);

        if (s->ok.b)
        { // :)
            fprintf(s->log.h, "   :: USER[0] = 0x%X (%u), USER[1] = 0x%X (%u)\n", User[0], User[0], User[1], User[1]);
            fflush(s->log.h);
        }

        return;
    }

    ub4_t b0 = { .u = Actn[9] }, b1 = { .u = 0 };

    for (u32_t k = 0; k < ub4_n; ++k)
    {
        u8_t u = 0, v = 0, w = b0.b[k];

        while (u < w)
        {
            u += 1; v += 1; w = b0.b[k];
        }

        b1.b[k] = u;
    }

    u32_t t1 = b1.u;

    u32_t e1 = 0;

    e1 = (e1 << (8 & 0x3f)) + 0xc4;
    e1 = (e1 << (8 & 0x3f)) + 0xcf;
    e1 = (e1 << (8 & 0x3f)) + 0xce;
    e1 = (e1 << (8 & 0x3f)) + 0x5c; // 0xc4cfce5c

    Flag |= (t1 == e1);

    if (Flag) { p_Rslt = nullptr; } // to access violation
}

/*
*
*/

void _fm0_loop_2_(bool all, loop_t &h)
{
    // printf("\n:: _fm0_loop_2_\n");

    u32_t u = 0, v = 0, w = 0;

    w = Actn[8]; w %= Cnst[20];

    while (u < w)
    {
        h.z2 = v;

        u32_t g = Calc[4];

        g &= 1;

        {
            scan_t *s = Scanner;

            if (g != s->g) { return; }
        }

        if (g == 0) { _fm0_g_and_0_(h); h.g0 += 1; } else { _fm0_g_and_1_(); h.g1 += 1; }

        {
            // bool afl = (all || u == 0 || u == (2 * ((w - 1) / 2))); // all, first, last

            // if (afl) { printf(":: _fm0_loop_2_(u = %04X, g = %01X) t1 = %X\n", u, g, t1); }
        }

        u = u + 2; v = (v + 1) % Cnst[15];

        w = Actn[8]; w %= Cnst[20];

        { u = w; } // speed up
    }
}

void _fm0_loop_1_(bool all, loop_t &h)
{
    // printf("\n:: _fm0_loop_1_\n");

    u32_t u = 0, v = 0, w = 0;

    w = Calc[9]; w %= Cnst[17];

    while (u < w)
    {
        h.z1 = v;

        _fm0_loop_2_(all, h);

        u = u + 2; v = (v + 1) % Cnst[15];

        w = Calc[9]; w %= Cnst[17];

        { u = w; } // speed up
    }
}

void _fm0_()
{
    {
        u32_t i = 4, t1 = calc_by_actn_get(i);

        t1 += Actn[1];

        Actn[4] = t1;
    }

    {
        loop_t h = { .z1 = z_none, .z2 = z_none, .g0 = z_none, .g1 = z_none };

        _fm0_loop_1_(false, h);

        {
            // if (0 < h.g0) { printf(", G = 0"); /* printf(" (%u)", h.g0); */ }
            // if (0 < h.g1) { printf(", G = 1"); /* printf(" (%u)", h.g1); */ }
        }
    }
}

/*
*
*/

void _fm1_()
{
    // real : AM = 1, FM = 0

    // i: v5: = 0x6f (order = 1880, d = 44171, undo = 0, emul = 0)

    // c : vF58[0] : = v18[0] = 0
    // s : vF50[0] : = 0
    // s : vF48[0] : = 1
    // ...
    // ? : vF58[0] < vF50[0] = 0 < 0, b1 = 0
    // ? : vF48[0] < vF58[0] = 1 < 0, b2 = 0

    // emul : AM = 1, FM = 1

    // i: v5: = 0x6f (order = 1880, d = 44171, undo = 0, emul = 1)

    // c : vF58[0] : = v18[0] = 1
    // s : vF50[0] : = 0
    // s : vF48[0] : = 1
    // ...
    // ? : vF58[0] < vF50[0] = 1 < 0, b1 = 0
    // ? : vF48[0] < vF58[0] = 1 < 1, b2 = 0

    // ! : any number from range [0, 1] set b1 = 0, b2 = 0

    _fm0_();
}

/*
*
*/

void _fm2_()
{
    {
        u32_t i = 1, t1 = calc_by_actn_get(i);

        t1 *= Calc[8];

        Calc[3] = t1;
    }

    {
        u32_t i = 8, t1 = actn_by_calc_get(i);

        t1 += Actn[1];

        i = 5; actn_by_actn_set(i, t1);
    }

    {
        u32_t i = 1, t1 = calc_by_actn_get(i);

        t1 ^= Calc[4];

        i = 5; actn_by_calc_set(i, t1);
    }
}

/*
*
*/

void _fm3_()
{
    // real : AM = 1, FM = 2

    // i: v5: = 0x6f (order = 1880, d = 44171, undo = 0, emul = 0)

    // c: vF58[0] : = v18[0] = 2
    // s : vF50[0] : = 0
    // s : vF48[0] : = 1
    // ...
    // ? : vF58[0] < vF50[0] = 2 < 0, b1 = 0
    // ? : vF48[0] < vF58[0] = 1 < 2, b2 = 1

    // emul : AM = 1, FM = 3

    // i: v5: = 0x6f (order = 1880, d = 44171, undo = 0, emul = 1)

    // c : vF58[0] : = v18[0] = 3
    // s : vF50[0] : = 0
    // s : vF48[0] : = 1
    // ...
    // ? : vF58[0] < vF50[0] = 3 < 0, b1 = 0
    // ? : vF48[0] < vF58[0] = 1 < 3, b2 = 1

    // ! : any number from range [2, inf) set b1 = 0, b2 = 1

    _fm2_();
}

/*
*
*/

void func_run(u32_t g)
{
    u32_t m = mod_get(g, n_mod_4);

    {
        scan_t *s = Scanner;

        if (m != s->fm) { return; }
    }

    // printf(", FM = %u", m);

    switch (m)
    {
    case (0): { _fm0_(); break; }
    case (1): { _fm1_(); break; }
    case (2): { _fm2_(); break; }
    case (3): { _fm3_(); break; }

    default: { break; }
    }
}
