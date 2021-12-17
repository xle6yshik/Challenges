// #pragma once

#ifndef _TYPES_H
#define _TYPES_H

#include <iostream>

#define SIGN_BIT_31_ 0x80000000
#define SIGN_BIT_07_ 0x80

#define SIGN_EXT_32_ 0xffffffff
#define SIGN_EXT_08_ 0xffffff00

/*
*
*/

typedef uint32_t stp_t;

#define STP_Z0  0         //  0:32
#define STP_P1 +1         //  1:32
#define STP_P2 +2         //  2:32
#define STP_N1 0xffffffff // -1:32
#define STP_N2 0xfffffffe // -2:32

/*
*
*/

typedef uint32_t num_t;

/*
*
*/

typedef uint64_t bm_t;

#define MASK_32_ 0xffffffff
#define MASK_08_ 0x000000ff

#define BM_32_   0x77777777
#define BM_08_   0x00000077

#define BM_S32_  0x88888888
#define BM_S08_  0x00000088

/*
*
*/

typedef uint8_t  tag_t;
typedef uint32_t idx_t;
typedef uint64_t ptr_t;

typedef uint64_t val_t;

/*
*
*/

typedef union {
    tag_t *tag;
    idx_t *idx;
    ptr_t *ptr;

    val_t  val;
} mem_t;

/*
*
*/

#pragma pack(push, 1)
typedef struct {
    idx_t _ii;

    struct {
        bool _8;
        bool _32;
        bool _64;
    } _is;

    tag_t _8;
    idx_t _32;
    mem_t _64;
} join_t;
#pragma pack(pop)

/*
*
*/

#pragma pack(push, 1)
typedef struct {
    bool mUndo;
    bool mEmul;

    FILE *mLog;

    uint64_t mOrder;

    tag_t m5[1];

    idx_t mF80[1];
    idx_t mF7C[1];

    mem_t mF78[1];
    mem_t mF70[1];
    mem_t mF68[1];
    mem_t mF60[1];
    mem_t mF58[1];
    mem_t mF50[1];
    mem_t mF48[1];
    mem_t mF40[1];

    idx_t m16[1];
    mem_t m17[1];

    mem_t m18[100];
    mem_t m19[138];

    mem_t m20[245]; // 245 * 8 == 1960 TODO: struct { u64_t header[2]; mem_t body[D2]; u64_t footer[21] }
} obj_t;
#pragma pack(pop)

/*
*
*/

#pragma pack(push, 1)
typedef struct {
    bool tg;

    bool vf;

    struct {
        bool e;
        bool e20;
        bool ebase;
        bool euser;
        bool erslt;
    } adr_;

    bool rd;
    bool wr;
    bool cp;

    struct {
        bool e;
        bool e16;
        bool e17;
        bool e18;
        bool e19;
    } get_;

    struct {
        bool e;
        bool e16;
        bool e17;
        bool e18;
        bool e19;
    } set_;
} opts_t;
#pragma pack(pop)

/*
*
*/

typedef enum { // TODO: same size as g_acts
    ACT_ADD = 0,
    ACT_MUL,
    ACT_AND,
    ACT_LES,
    ACT_SUB,
    ACT_ORR,
    ACT_XOR,
    ACT_CEQ,
    ACT_CNE,
    ACT_MOD,
    ACT_SHR,
    ACT_SHL,

    ACT_SZ
} act_e;

/*
*
*/

typedef struct
{
    const char *p;
    uint32_t u0;
    uint32_t u1;
} test_t;

#endif
