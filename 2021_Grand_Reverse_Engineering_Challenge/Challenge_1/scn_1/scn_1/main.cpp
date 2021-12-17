#include <stdio.h>

#include "g4c.h"
#include "scan.h"

// Not found:
// AM = 1, FM = 3
// AM = 1, FM = 1
// AM = 0, CM = 3, Flag = 1
// AM = 0, CM = 2
// AM = 0, CM = 1, CM1 = 1 ... 3

int main(int argc, char* argv[])
{
    scan_t ss[] =
    {
/*
        { // AM = 0, CM = 0
            .log = { .p = "log_am0_cm0.txt" },
            .u0  = { .v = 0xffff, .e = 0x0184 },
            .u1  = { .v = 0xd827, .e = 0x5e73 },
            .ok =  { .v = 4 },
            .am  = AM_0,
            .cm  = CM_0
        }
        { // AM = 0, CM = 1, CM1 = 0, SIX = 0 ... 4
            .log = { .p = "log_am0_cm1_cm10_six0.txt" },
            .u0  = { .v = 0xfef8, .e = 0x1382 },
            .u1  = { .v = 0x5580, .e = 0x68a },
            .ok  = { .v = 15 },
            .am  = AM_0,
            .cm  = CM_1,
            .cm1 = CM1_0,
            .six = SIX_0
        }
        { // AM = 0, CM = 1, CM1 = 1 ... 3
            .log = { .p = "log_am0_cm1_cm113.txt" },
            .u0 =  { .v = 0xffff, .e = 0x1 },
            .u1 =  { .v = 0xffff, .e = 0x1 },
            .ok =  { .v = 0 },
            .am =  AM_0,
            .cm =  CM_1,
            .cm1 = CM1_1
        }
        { // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 1, B14 = 1
            .log = { .p = "log_am0_cm1_cm10_six0_g6_1_b141.txt" },
            .u0 =  { .v = 0xeb76, .e = 0x1 },
            .u1 =  { .v = 0xffff, .e = 0x1 },
            .ok =  { .v = 0 },
            .am =  AM_0,
            .cm =  CM_1,
            .cm1 = CM1_0,
            .six = SIX_0,
            .g6 = g_and_1
        }
        { // AM = 1, FM = 0, G = 1, flag = 0
            .log =  { .p = "log_AM1_FM0_G1_flag0.txt" },
            .u0 =   { .v = 0x100ff, .e = 0x1 },
            .u1 =   { .v = 0xfffe, .e = 0x1 },
            .ok =   { .v = 1 },
            .am =   AM_1,
            .fm =   FM_0,
            .g  =   g_and_1
        }
*/
        { // AM = 1, FM = 0, G = 1, flag = 1 // access violation
            .log = {.p = "log_AM1_FM0_G1_flag1.txt" },
            .u0 = {.v = 0xffffffff, .e = 0x1 },
            .u1 = {.v = 0xffffffff, .e = 0x1 },
            .ok = {.v = 1 },
            .am = AM_1,
            .fm = FM_0,
            .g = g_and_1
        }
    };

    u32_t ns = n_count(ss);

    for (u32_t n = 0; n < ns; ++n)
    {
        Scanner = &ss[n];

        s_scan();
    }

    return 0;
}
