#include <stdio.h>

#include "g4c.h"
#include "test.h"

/*
*
*/

int main(int argc, char* argv[])
{
    test_t ts[] =
    {
        {
            .p = "log_AM3.txt",
            .u0 = 0x5B6FA, // 374522
            .u1 = 0xDC021  // 901153
        },
        {
            .p = "log_AM2.txt",
            .u0 = 0x88,   // 136
            .u1 = 0xEF1F  // 61215
        },
        {
            .p = "log_AM1_FM2.txt",
            .u0 = 0xFEA5, // 65189
            .u1 = 0xF40A  // 62474
        },
        {
            .p = "log_AM1_FM0_G0.txt",
            .u0 = 0x5AC,  // 1452
            .u1 = 0xF94B  // 63819
        }
        /*
        { // log file is large > 50Mb
            .p = "log_AM1_FM0_G1_flag0.txt",
            .u0 = 0xFFFF, // 65535
            .u1 = 0xFFFE  // 65534
        }
        { // log file is too large > 1Gb
            .p = "log_AM1_FM0_G1_flag1.txt", // <- to access violation
            .u0 = 0xFFFFFFFB,
            .u1 = 0xE6E1F222
        }
        */
        /*
        // AM = 0, CM = 3, Flag = 0
            .u0 = 120, .u1 = 63973, // 0x78, 0xF9E5
        // AM = 0, CM = 1, CM1 = 0, SIX = 5
            .u0 = 1452, .u1 = 50352, // 0x5AC, 0xC4B0
        // AM = 0, CM = 1, CM1 = 0, SIX = 4
            .u0 = 30140, .u1 = 20796, // 0x75BC, 0x513C
        // AM = 0, CM = 1, CM1 = 0, SIX = 3
            .u0 = 43894, .u1 = 31152, // 0xab76, 0x79b0
        // AM = 0, CM = 1, CM1 = 0, SIX = 2
            .u0 = 12024, .u1 = 2792, // 0x2ef8, 0xae8
        // AM = 0, CM = 1, CM1 = 0, SIX = 1
            .u0 = 55284, .u1 = 30680, // 0xd7f4, 0x77d8
        // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 0
            .u0 = 65272, .u1 = 32492, // 0xfef8, 0x7eec
        // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 1, B14 = 0
            .u0 = 60278, .u1 = 21888, // 0xeb76, 0x5580
        // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 1, B14 = 1
            .u0 = 59921, .u1 = 12001, // 0xea11, 0x2ee1
        // AM = 0, CM = 0
            .u0 = 1452, .u1 = 11132, // 0x5AC, 0x2B7C
        */
    };

    uint32_t nt = n_count(ts);

    for (uint32_t n = 0; n < nt; ++n)
    {
        t_test(&ts[n]);
    }

    return 0;
}
