#include "vars.h"

#include "actn.h"
#include "calc.h"
#include "cnst.h"
#include "user.h"

/*
*
*/

void _s_print_()
{
    scan_t *s = Scanner;

//  fprintf(s->log.h, "   :: USER[0] = 0x%X (%u), USER[1] = 0x%X (%u), RSLT[0] = %X (%u)\n", User[0], User[0], User[1], User[1], Rslt[0], Rslt[0]);
    fprintf(s->log.h, "   :: USER[0] = 0x%X (%u), USER[1] = 0x%X (%u)\n", User[0], User[0], User[1], User[1]);
    fflush(s->log.h);
}

/*
*
*/

void _s_scan_()
{
    scan_t *s = Scanner;

    cnst_set();

    for (u32_t u0 = s->u0.v; s->u0.e < u0; u0 -= s->u0.e)
    {
        printf(":: u0 = %u\n", u0);

        for (u32_t u1 = s->u1.v; s->u1.e < u1; u1 -= s->u1.e)
        {
            s->ok.b = false;

            user_set(u0, u1);

            actn_init();

            calc_init();

            {
                u32_t i = 8, g = actn_by_actn_get(i);

                actn_run(g);
            }

            if (s->ok.b)
            {
                printf("::   u1 = %u\n", u1);

                s->ok.e += 1;

                _s_print_();

                if ((0 < s->ok.v) && (s->ok.v <= s->ok.e)) { return; }
            }
        }
    }
}

/*
*
*/

void s_scan()
{
    if (Scanner == nullptr) { return; }

    scan_t *s = Scanner;

    if (s->log.p == nullptr) { return; }

    FILE *h = nullptr;

    s->log.h = h;

    errno_t e = fopen_s(&h, s->log.p, "a+");

    if (e != 0) { printf("Can not create log file = %s\n", s->log.p); return; }

    s->log.h = h;

    printf(":: %s\n", s->log.p);

    _s_scan_();

    if (s->log.h != nullptr)
    {
        e = fclose(s->log.h);

        if (e != 0) { printf("Can not close log file = %s\n", s->log.p); }
    }

    // _fcloseall();
}
