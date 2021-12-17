#include <stdio.h>

#include "g4c.h"
#include "test.h"

int main(int argc, char* argv[])
{
    test_t t[] =
    {
        { // AM = 3
            .u0 = 374522, .u1 = 901153, // 0x5B6FA, 0xDC021
            .r0 = 0xCC800720,
            .am = { 0xDF6FB, 0x4C2494DE, 0x2ADDF5C6, 0xDA8F4B06, 0xB3D7E1FB, 0x86A720B7, 0xDF6FB, 0x770BCAC5, 0xBBE5BA1C, 0x87DA3F96 },
            .cm = { 0x94AA163A, 0x87E7FFB7, 0x83B00002, 0x13771B, 0xEACB016, 0x181BCDC1, 0x2F52ACF2, 0x247DF094, 0x2AEBB5E7, 0x38BB95EB }
        },
        { // AM = 2
            .u0 = 136, .u1 = 61215, // 0x88, 0xEF1F
            .r0 = 0xf967fccc,
            .am = { 0xef9f, 0x6b797a, 0x2af36e56, 0x39979148, 0xff940109, 0x9373ccb3, 0xef9f, 0x2b5f6dd5, 0xff98290a, 0x88802010 },
            .cm = { 0x7f0878, 0x88810f2f, 0xb9901af0, 0xefa7, 0xe9fdf14, 0x18147cd7, 0x2f59c782, 0x24783a22, 0x2af45d75, 0x3817f119 }
        },
        { // AM = 1, FM = 2
            .u0 = 65189, .u1 = 62474, // 0xFEA5, 0xF40A
            .r0 = 0x33C84FDB,
            .am = { 0xfeaf, 0x92c4f17e, 0x2af28a5e, 0xf349e0a8, 0x6d3c0927, 0xcc01ab4d, 0xfeaf, 0xbdb77fdc, 0x7f402df9, 0x7f10ee2a },
            .cm = { 0xf2bf3672, 0x7f11e234, 0x4888ca8d, 0x1f2af, 0xe9fe3ff, 0x18138dca, 0x2f5ac0b4, 0x2479383f, 0x2af37e68, 0x41881b20 }
        },
        { // AM = 1, FM = 0, G = 0
            .u0 = 1452, .u1 = 63819, // 0x5AC, 0xF94B
            .r0 = 0x8201a230,
            .am = { 0xfdef, 0x3b5717da, 0x2af37cd6, 0x97813ddc, 0xc4a805d1, 0x3a910d0b, 0xfdef, 0x664b7cb1, 0xdec03746, 0x79f661ac },
            .cm = { 0x585f564, 0x79f75af7, 0x72465f94, 0xfef7, 0xe9fe940, 0x18148603, 0x2f59c27a, 0x24783f46, 0x2af47621, 0x46a1aaa5 }
        },
        { // AM = 1, FM = 0, G = 1, Flag = 0
            .u0 = 65535, .u1 = 65534, // 0xFFFF, 0xFFFE
            .r0 = 0x9933effd,
            .am = { 0xffff, 0xe08f940a, 0x2af27fc0, 0xb3776bf8, 0x1f710001, 0x1911e98d, 0xffff, 0xb827fbe, 0x1f7838e9, 0x255304c8 },
            .cm = { 0xfffd0002, 0x255404c6, 0x7f7b5367, 0x1fffd, 0xe9feff3, 0x18138dc0, 0x2f5ab61a, 0x24793999, 0x2af37fbe, 0x9b45fb38 }
        },
//      { // AM = 1, FM = 0, G = 1, Flag = 1 <- to access violation
//          .u0 = 4294967291, .u1 = 3873567266, // 0xFFFFFFFB, 0xE6E1F222
//          .r0 = 0x9933effd,
//          .am = { 0xfffffffb, 0x69b635de, 0x44118dc4, 0x6d073800, 0x100807fd, 0xdd1b62d9, 0xfffffffb, 0x340985c2, 0x1013221, 0xc4cfce5c },
//          .cm = { 0x7d964556, 0xabb1c07e, 0x1e6ba103, 0xe6e1f21d, 0xf580e217, 0x18138dc0, 0x4878c3f2, 0x24783995, 0x2af37fe6, 0x3b483e24 }
//      },
        { // AM = 0, CM = 3, Flag = 0
            .u0 = 120, .u1 = 63973, // 0x78, 0xF9E5
            .r0 = 0x36148c10,
            .am = { 0xf9fd, 0xb605bce4, 0x2af37586, 0x5325ae38, 0x49fa0293, 0x79dbcaa3, 0xf9fd, 0xe0f9736b, 0x5c0034e0, 0x1b2d7ef6 },
            .cm = { 0x752358, 0x1b2e78db, 0x73336ab0, 0xfa5d, 0xe9fe9da, 0x18148745,  0x2f59bcac, 0x24783a12, 0x2af46f6b, 0xa56a8785 }
        },
        { // AM = 0, CM = 1, CM1 = 0, SIX = 5
            .u0 = 1452, .u1 = 50352, // 0x5AC, 0xC4B0
            .r0 = 0x40ee69,
            .am = { 0xc5bc , 0x32d553cc, 0x2af37bc6, 0x5652df50, 0xcd2a2db0, 0x7a950c73, 0xc5bc, 0x5dc953c2, 0xdf4002aa, 0x8ff8d185 },
            .cm = { 0x45b9640, 0x8ff99635, 0xf79bbd4c, 0xca5c , 0xe9fb4a5, 0x18144dd0, 0x2f59f715, 0x24783f46, 0x2af44076, 0x309f4e2e }
        },
        { // AM = 0, CM = 1, CM1 = 0, SIX = 4
            .u0 = 30140, .u1 = 20796, // 0x75BC, 0x513C
            .r0 = 0xff1f2f0d,
            .am = { 0x75bc, 0x8c51fa80, 0x2af31f2a, 0xa90c8a10, 0x73ae7a00, 0x48dbdf83, 0x75bc, 0xb7451ae6, 0x7bbfcc26, 0x4e9fb391 },
            .cm = { 0x255c1410, 0x4ea004cd, 0xb1acad5c, 0xc6f8, 0xe9f4131, 0x18138dc0, 0x2f5ada99, 0x2478af56, 0x2af37066, 0x71f8d0ae }
        },
        { // AM = 0, CM = 1, CM1 = 0, SIX = 3
            .u0 = 43894, .u1 = 31152, // 0xab76, 0x79b0
            .r0 = 0xee811591,
            .am = { 0xfbf6, 0x2b2b41b2, 0x2af34eae, 0x1c52d52c, 0xd4d531c4, 0x1ba2777, 0xfbf6, 0x561ec860, 0xded7b39e, 0xa36e7a8f },
            .cm = { 0x5180a720, 0xa36ef43f, 0x72bd8d86, 0x12526, 0xe9f69a5, 0x1813de40, 0x2f5ae7df, 0x2478e510, 0x2af3c85e, 0x1d2a36ee }
        },
        { // AM = 0, CM = 1, CM1 = 0, SIX = 2
            .u0 = 12024, .u1 = 2792, // 0x2ef8, 0xae8
            .r0 = 0xd3501a21,
            .am = { 0x2ef8, 0x573cb510, 0x2af362fe, 0x6d588840, 0xa8c36f00, 0x61340e03, 0x2ef8, 0x823022f6, 0xbad78ad2, 0xec863309 },
            .cm = { 0x20040c0, 0xec863df1, 0x9c2b238, 0x39e0, 0xe9efadd, 0x18138dc0, 0x2f5ada29, 0x24786892, 0x2af36de6, 0xd4120ff6 }
        },
        { // AM = 0, CM = 1, CM1 = 0, SIX = 1
            .u0 = 55284, .u1 = 30680, // 0xd7f4, 0x77d8
            .r0 = 0xa0163bf9,
            .am = { 0xf7fc, 0x6a39f16c, 0x2af32016, 0x4e1470d0, 0x95c6dff8, 0xe3908693, 0xf7fc, 0x952d1812, 0x9fd877d2, 0x455b42d5 },
            .cm = { 0x6518a1e0, 0x455bbaad, 0xabd6594, 0x14fcc, 0xe9f67cd, 0x1813adc8, 0x2f5b1635, 0x2479118e, 0x2af397ee, 0x7b3d9d46 }
        },
        { // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 0
            .u0 = 65272, .u1 = 32492, // 0xfef8, 0x7eec
            .r0 = 0xf6b3fbfd,
            .am = { 0xfefc, 0x51417c9c, 0x2af2fefe, 0x2f7c9bc0, 0xaebf7ffc, 0x1b78d663, 0xfefc, 0x7c347dfa, 0xbebffeea, 0x8aea11cd },
            .cm = { 0x7e691ca0, 0x8aea90b9, 0xda75b498, 0x17de4, 0xe9f6ee1, 0x18138dc4, 0x2f5b3625, 0x24793892, 0x2af37dea, 0x35aeed2e }
        },
        { // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 1, B14 = 0
            .u0 = 60278, .u1 = 21888, // 0xeb76, 0x5580
            .r0 = 0xe5082b91,
            .am = { 0xfff6, 0x5b275942, 0x2af33ede, 0x71b6a36c, 0xa4d98db4, 0xa9799b17, 0xfff6, 0x861a9ca0, 0xbee0137e, 0x9cdf85bf },
            .cm = { 0x4ea3e900, 0x9cdfdb3f, 0xe9702d86, 0x140f6, 0xe9f4575, 0x1813a240, 0x2f5b4c0f, 0x24792510, 0x2af3945e, 0x23b96fde }
        },
        { // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 1, B14 = 1
            .u0 = 59921, .u1 = 12001, // 0xea11, 0x2ee1
            .r0 = 0xcec1fe05,
            .am = { 0xeef1, 0x8877c80, 0x2af343dd, 0x93a90b71, 0xf7796b30, 0x63c01103, 0xeef1, 0x337ac2be, 0xff7faadb, 0x2626c5b4 },
            .cm = { 0x2adcc6f1, 0x2626f495, 0xf65b529, 0x118f2, 0xe9f1ed6, 0x181392a0, 0x2f5b7149, 0x247923ab, 0x2af372be, 0x9a723464 }
        },
        { // AM = 0, CM = 0
            .u0 = 1452, .u1 = 11132, // 0x5AC, 0x2B7C
            .r0 = 0x493418bd,
            .am = { 0x2ffc , 0xac38d470, 0x2af36eba, 0xd34b8e90, 0x53c70630, 0xfa376a43, 0x2ffc , 0xd72c6e36, 0x5bd76a76, 0x7a567c01 },
            .cm = { 0xf6a350, 0x7a56a77d, 0xdbe5d34c, 0x3128 , 0xe9f1b71, 0x1813b810, 0x2f5a9049, 0x24783f46, 0x2af39a36, 0x46419e2e }
        }
    };

    u32_t nt = n_count(t);

    // Done:
    // AM = 3
    // AM = 2
    // AM = 1, FM = 2
    // AM = 1, FM = 0, G = 0
    // AM = 1, FM = 0, G = 1, Flag = 0
    // AM = 1, FM = 0, G = 1, Flag = 1 <- to access violation
    // AM = 0, CM = 3, Flag = 0
    // AM = 0, CM = 1, CM1 = 0, SIX = 1 ... 5
    // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 0
    // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 1, B14 = 0 ... 1
    // AM = 0, CM = 0

    // Emul:
    // AM = 1, FM = 3
    // AM = 1, FM = 1
    // AM = 0, CM = 2, Flag = 0
    // AM = 0, CM = 1, CM1 = 1, SIX = ...

    // Never:
    // AM = 0, CM = 3, Flag = 1
    // AM = 0, CM = 2, Flag = 1

    // Not found:
    // AM = 0, CM = 1, CM1 = 2 ... 3

    if (t_test(t, nt))
    {
        printf(":: tests passed\n\n:: samples\n\n");

        test_t s[] =
        {
            // AM = 3
            { .u0 = 0x5AC, .u1 = 0xA8BF },
            // AM = 2
            { .u0 = 0x5AC, .u1 = 0x86A },
            // AM = 1, FM = 2
            { .u0 = 0x5AC, .u1 = 0xAE95 },
            { .u0 = 0x5AC, .u1 = 0x50ED },
            // AM = 1, FM = 0, G = 0
            { .u0 = 0x5AC, .u1 = 0x2047 },
            { .u0 = 0x5AC, .u1 = 0x3C2F },
            { .u0 = 0x5AC, .u1 = 0xEADB },
            { .u0 = 0x5AC, .u1 = 0xC797 },
            // AM = 1, FM = 0, G = 1, Flag = 0
            { .u0 = 0xA387, .u1 = 0xFFEC },
            { .u0 = 0x4493, .u1 = 0xFFEE },
            { .u0 = 0xE923, .u1 = 0xFFF2 },
            { .u0 = 0x9077, .u1 = 0xFFF8 },
            { .u0 = 0xA62F, .u1 = 0xFFEE },
            // AM = 0, CM = 3, Flag = 0
            { .u0 = 0x5AC, .u1 = 0xE829 },
            // AM = 0, CM = 1, CM1 = 0, SIX = 5
            { .u0 = 0x5AC, .u1 = 0xC4B0 },
            // AM = 0, CM = 1, CM1 = 0, SIX = 4
            {.u0 = 0xD0F0, .u1 = 0xA600 },
            {.u0 = 0xC9EC, .u1 = 0xD250 },
            {.u0 = 0x2890, .u1 = 0xC750 },
            {.u0 = 0xDB76, .u1 = 0x15FC },
            // AM = 0, CM = 1, CM1 = 0, SIX = 3
            {.u0 = 0x75F4, .u1 = 0x7424 },
            {.u0 = 0x6CF0, .u1 = 0x17CC },
            {.u0 = 0xBF66, .u1 = 0x5874 },
            {.u0 = 0x2952, .u1 = 0x4C28 },
            // AM = 0, CM = 1, CM1 = 0, SIX = 2
            {.u0 = 0x7EF8, .u1 = 0x5E98 },
            {.u0 = 0x1DF4, .u1 = 0x4250 },
            {.u0 = 0xCF0,  .u1 = 0x3914 },
            {.u0 = 0x7172, .u1 = 0x17CC },
            // AM = 0, CM = 1, CM1 = 0, SIX = 1
            {.u0 = 0x89EC, .u1 = 0x9428 },
            {.u0 = 0x4F66, .u1 = 0x70C4 },
            {.u0 = 0x14E0, .u1 = 0x629C },
            {.u0 = 0xCF0,  .u1 = 0xDFC  },
            // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 0
            {.u0 = 0x766A, .u1 = 0x2E44 },
            // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 1, B14 = 0
            {.u0 = 0x62E8, .u1 = 0x8600 },
            {.u0 = 0x4F66, .u1 = 0x9428 },
            {.u0 = 0xFEF8, .u1 = 0x3110 },
            {.u0 = 0x89EC, .u1 = 0x77D8 },
            // AM = 0, CM = 1, CM1 = 0, SIX = 0, G6 = 1, B14 = 1
            {.u0 = 0xEA11, .u1 = 0x2EE1 },
            {.u0 = 0xEA10, .u1 = 0xEF60 },
            {.u0 = 0xFCEA, .u1 = 0xF8D0 },
            {.u0 = 0xEB76, .u1 = 0x99E0 },
            // AM = 0, CM = 0
            {.u0 = 0xFFFF, .u1 = 0xFFF2 },
            {.u0 = 0xF9EF, .u1 = 0xFFFF },
            {.u0 = 0xFE7B, .u1 = 0xD827 },
            {.u0 = 0xF3DF, .u1 = 0xD827 },
            // AM = 1, FM = 0, G = 1, Flag = 1 <- to access violation
            {.u0 = 0xFFFFFFFB, .u1 = 0xE6E1F222 }
        };

        u32_t ns = n_count(s);

        t_count(s, ns);
    }

    return 0;
}
