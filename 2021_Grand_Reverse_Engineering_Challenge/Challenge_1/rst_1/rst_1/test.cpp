#include "vars.h"

#include "func.h"

#include "actn.h"
#include "calc.h"
#include "cnst.h"
#include "user.h"

/*
*
*/

void _t_1st_()
{
    p_Rslt = &Rslt[0];
}

/*
*
*/

void _t_print_()
{
//  printf("   :: U = %u, %u (0x%X, 0x%X); R = %u (0x%X)\n", User[0], User[1], User[0], User[1], Rslt[0], Rslt[0]);

    printf("   :: U = %u, %u (0x%X, 0x%X)", User[0], User[1], User[0], User[1]);

    if (p_Rslt != nullptr) { printf("; R = %u (0x%X)\n", Rslt[0], Rslt[0]); } else { printf("; R ! access violation\n"); }
}

/*
*
*/

bool _rslt_check_(const u32_t *rr, u32_t nr)
{
    bool sts = (nr == n_Rslt);

    for (u32_t n = 0; n < nr; ++n)
    {
        sts &= (rr[n] == Rslt[n]);

        if (!sts) { break; }
    }

    return sts;
}

bool _t_rslt_(u32_t r0)
{
    u32_t rr[] = { 0 };

    u32_t nr = n_count(rr);

    rr[0] = r0;

    return _rslt_check_(rr, nr);
}


/*
*
*/

bool _t_test_(const test_t *t, u32_t n)
{
    bool sts = false;

    printf(":: t%d\n", n);

    _t_1st_();

    {
        cnst_set();

        user_set(t[n].u0, t[n].u1);

        Flag = false;
    }

    {
        u32_t na = 10, nc = na;

        actn_init();

        if (!actn_check(t[n].am, na)) { printf(":: t%d %s\n\n", n, "break : actn failed"); return sts; }

        calc_init();

        if (!calc_check(t[n].cm, nc)) { printf(":: t%d %s\n\n", n, "break : calc failed"); return sts; }
    }

    {
        u32_t i = 8, g = actn_by_actn_get(i);

        actn_run(g);
    }

    {
        sts = _t_rslt_(t[n].r0);

        if (sts) { _t_print_(); }
    }

    printf(":: t%d %s\n\n", n, (sts ? "passed" : "failed"));

    return sts;
}

bool t_test(const test_t *t, u32_t nt)
{
    bool sts = true;

    for (u32_t n = 0; n < nt; ++n)
    {
        sts &= _t_test_(t, n);

        if (!sts) { break; }
    }

    return sts;
}

/*
*
*/

void _t_count_(const test_t *t, u32_t n)
{
    _t_1st_();

    cnst_set();

    user_set(t[n].u0, t[n].u1);

    Flag = false;

    actn_init();

    calc_init();

    {
        u32_t i = 8, g = actn_by_actn_get(i);

        actn_run(g);
    }

    _t_print_();
}

void t_count(const test_t *t, u32_t nt)
{
    for (u32_t n = 0; n < nt; ++n)
    {
        _t_count_(t, n);
    }
}
