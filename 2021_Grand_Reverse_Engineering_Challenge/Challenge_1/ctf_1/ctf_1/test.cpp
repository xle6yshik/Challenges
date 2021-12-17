#include "test.h"
#include "vars.h"

/*
*
*/

void sub_9E5(obj_t *o)
{
    const tag_t *_v17 = v17->tag;

    {
        *(v5) = _v17[0]; // v17[0].tag[0]:08

        {
            val_t d = v17->tag - TAG_BASE;

            {
//                o->mUndo = (*(v5) == 0x64 && d == 52083);
            }

            {
//                o->mEmul = (*(v5) == 0xf3 && o->mOrder == 1879 && d == 44166);
//                o->mEmul = (*(v5) == 0xa5 && o->mOrder == 1931 && d == 69216);
//                o->mEmul = (*(v5) == 0x2e && o->mOrder == 1917 && d == 22851);
//                o->mEmul = (*(v5) == 0x3c && o->mOrder == 13057 && d == 62514);
            }

            TG_ fprintf(vLog, "\ni: v5 := " F08_ " (order = %lli, d = %lli, undo = %i, emul = %i)\n\n", *(v5), o->mOrder, d, o->mUndo, o->mEmul); fflush(vLog);
        }
    }

    o->mOrder++;
}

void _get_tag_(obj_t *o)
{
    sub_9E5(o); // v5 = v17[0]
}

/*
*
*/

void sub_D362(obj_t *o)
{
    idx_t n = 0; n--;

    *(v16) = n;

    fprintf(vLog, "i: v16 := %i\n", *(v16)); fflush (vLog);
}

void sub_E2D(obj_t *o)
{
    v17->tag = TAG_BASE;

    fprintf(vLog, "i: v17[ " FII_ "] : = BASE = " F64_ "\n", 0, v17->val); fflush (vLog);
}

void _init_1st_(obj_t *o)
{
    sub_D362(o); // v16 = -1
    sub_E2D(o); // v17 = g_20F0A0
}

/*
*
*/

void _t_done_(obj_t *o)
{
    fprintf(vLog, "\n"); fflush(vLog);

    for (uint32_t i = 0; i < n_user; ++i)
    {
        fprintf(vLog, ":: USER[ " FII_ "] := %li (0x" F32_ ")\n", i, g_user[i], g_user[i]); fflush(vLog);
    }

    fprintf(vLog, "\n"); fflush(vLog);

    for (uint32_t i = 0; i < n_rslt; ++i)
    {
        fprintf(vLog, ":: RSLT[ " FII_ "] := %lli (0x" F64_ ")\n", i, g_rslt[i], g_rslt[i]); fflush(vLog);
    }
}

/*
*
*/

void _t_test_(obj_t *o)
{
    _init_1st_(o);

    bool brk = false, sts = false;

    while (!brk)
    {
        _get_tag_(o);

        tag_t _v5 = v5[0];

        switch (_v5)
        {
            case (0x00): { t_00(o); break; }
            case (0x01): { t_01(o); break; }
            case (0x02): { t_02(o); break; }
            case (0x03): { t_03(o); break; }
            case (0x04): { t_04(o); break; }
            case (0x05): { t_05(o); break; }
            case (0x06): { t_06(o); break; }
            case (0x07): { t_07(o); break; }
            case (0x08): { t_08(o); break; }
            case (0x09): { t_09(o); break; }
            case (0x0a): { t_0a(o); break; }
            case (0x0c): { t_0c(o); break; }
            case (0x0d): { t_0d(o); break; }
            case (0x0e): { t_0e(o); break; }
            case (0x0f): { t_0f(o); break; }
            case (0x10): { t_10(o); break; }
            case (0x11): { t_11(o); break; }
            case (0x12): { t_12(o); break; }
            case (0x13): { t_13(o); break; }
            case (0x16): { t_16(o); break; }
            case (0x18): { t_18(o); break; }
            case (0x19): { t_19(o); break; }
            case (0x1a): { t_1a(o); break; }
            case (0x1c): { t_1c(o); break; }
            case (0x1d): { t_1d(o); break; }
            case (0x1e): { t_1e(o); break; }
            case (0x1f): { t_1f(o); break; }
            case (0x20): { t_20(o); break; }
            case (0x21): { t_21(o); break; }
            case (0x22): { t_22(o); break; }
            case (0x23): { t_23(o); break; }
            case (0x24): { t_24(o); break; }
            case (0x27): { t_27(o); break; }
            case (0x29): { t_29(o); break; }
            case (0x2a): { t_2a(o); break; }
            case (0x2b): { t_2b(o); break; }
            case (0x2d): { t_2d(o); break; }
            case (0x2e): { t_2e(o); break; }
            case (0x2f): { t_2f(o); break; }
            case (0x30): { t_30(o); break; }
            case (0x31): { t_31(o); break; }
            case (0x32): { t_32(o); break; }
            case (0x33): { t_33(o); break; }
            case (0x34): { t_34(o); break; }
            case (0x35): { t_35(o); break; }
            case (0x37): { t_37(o); break; }
            case (0x38): { t_38(o); break; }
            case (0x39): { t_39(o); break; }
            case (0x3a): { t_3a(o); break; }
            case (0x3b): { t_3b(o); break; }
            case (0x3c): { t_3c(o); break; }
            case (0x3d): { t_3d(o); break; }
            case (0x3f): { t_3f(o); break; }
            case (0x40): { t_40(o); break; }
            case (0x41): { t_41(o); break; }
            case (0x42): { t_42(o); break; }
            case (0x43): { t_43(o); break; }
            case (0x44): { t_44(o); break; }
            case (0x45): { t_45(o); break; }
            case (0x46): { t_46(o); break; }
            case (0x47): { t_47(o); break; }
            case (0x48): { t_48(o); break; }
            case (0x49): { t_49(o); break; }
            case (0x4a): { t_4a(o); break; }
            case (0x4b): { t_4b(o); break; }
            case (0x4d): { t_4d(o); break; }
            case (0x4f): { t_4f(o); break; }
            case (0x50): { t_50(o); break; }
            case (0x51): { t_51(o); break; }
            case (0x52): { t_52(o); break; }
            case (0x53): { t_53(o); break; }
            case (0x54): { t_54(o); break; }
            case (0x55): { t_55(o); break; }
            case (0x56): { t_56(o); break; }
            case (0x57): { t_57(o); break; }
            case (0x58): { t_58(o); break; }
            case (0x59): { t_59(o); break; }
            case (0x5a): { t_5a(o); break; }
            case (0x5b): { t_5b(o); break; }
            case (0x5c): { t_5c(o); break; }
            case (0x5d): { t_5d(o); break; }
            case (0x5e): { t_5e(o); break; }
            case (0x60): { t_60(o); break; }
            case (0x62): { t_62(o); break; }
            case (0x63): { t_63(o); break; }
            case (0x64): { t_64(o); break; }
            case (0x65): { t_65(o); break; }
            case (0x66): { t_66(o); break; }
            case (0x67): { t_67(o); break; }
            case (0x68): { t_68(o); break; }
            case (0x69): { t_69(o); break; }
            case (0x6a): { t_6a(o); break; }
            case (0x6b): { t_6b(o); break; }
            case (0x6c): { t_6c(o); break; }
            case (0x6d): { t_6d(o); break; }
            case (0x6e): { t_6e(o); break; }
            case (0x6f): { t_6f(o); break; }
            case (0x70): { t_70(o); break; }
            case (0x71): { t_71(o); break; }
            case (0x72): { t_72(o); break; }
            case (0x73): { t_73(o); break; }
            case (0x74): { t_74(o); break; }
            case (0x75): { t_75(o); break; }
            case (0x76): { t_76(o); break; }
            case (0x78): { t_78(o); break; }
            case (0x79): { t_79(o); break; }
            case (0x7b): { t_7b(o); break; }
            case (0x7d): { t_7d(o); break; }
            case (0x7f): { t_7f(o); break; }
            case (0x80): { t_80(o); break; }
            case (0x81): { t_81(o); break; }
            case (0x82): { t_82(o); break; }
            case (0x85): { t_85(o); break; }
            case (0x86): { t_86(o); break; }
            case (0x87): { t_87(o); break; }
            case (0x88): { t_88(o); brk = true; sts = true; break; }
            case (0x8a): { t_8a(o); break; }
            case (0x8b): { t_8b(o); break; }
            case (0x8c): { t_8c(o); break; }
            case (0x8d): { t_8d(o); break; }
            case (0x8e): { t_8e(o); break; }
            case (0x8f): { t_8f(o); break; }
            case (0x90): { t_90(o); break; }
            case (0x92): { t_92(o); break; }
            case (0x93): { t_93(o); break; }
            case (0x94): { t_94(o); break; }
            case (0x95): { t_95(o); break; }
            case (0x96): { t_96(o); break; }
            case (0x97): { t_97(o); break; }
            case (0x99): { t_99(o); break; }
            case (0x9a): { t_9a(o); break; }
            case (0x9b): { t_9b(o); break; }
            case (0x9d): { t_9d(o); break; }
            case (0x9f): { t_9f(o); break; }
            case (0xa0): { t_a0(o); break; }
            case (0xa1): { t_a1(o); break; }
            case (0xa2): { t_a2(o); break; }
            case (0xa3): { t_a3(o); break; }
            case (0xa4): { t_a4(o); break; }
            case (0xa5): { t_a5(o); break; }
            case (0xa7): { t_a7(o); break; }
            case (0xa8): { t_a8(o); break; }
            case (0xa9): { t_a9(o); break; }
            case (0xab): { t_ab(o); break; }
            case (0xac): { t_ac(o); break; }
            case (0xad): { t_ad(o); break; }
            case (0xae): { t_ae(o); break; }
            case (0xb1): { t_b1(o); break; }
            case (0xb4): { t_b4(o); break; }
            case (0xb5): { t_b5(o); break; }
            case (0xb7): { t_b7(o); break; }
            case (0xb8): { t_b8(o); break; }
            case (0xb9): { t_b9(o); break; }
            case (0xba): { t_ba(o); break; }
            case (0xbb): { t_bb(o); break; }
            case (0xbc): { t_bc(o); break; }
            case (0xbd): { t_bd(o); break; }
            case (0xbe): { t_be(o); break; }
            case (0xbf): { t_bf(o); break; }
            case (0xc1): { t_c1(o); break; }
            case (0xc3): { t_c3(o); break; }
            case (0xc5): { t_c5(o); break; }
            case (0xc6): { t_c6(o); break; }
            case (0xc7): { t_c7(o); break; }
            case (0xc9): { t_c9(o); break; }
            case (0xca): { t_ca(o); break; }
            case (0xcb): { t_cb(o); break; }
            case (0xcc): { t_cc(o); break; }
            case (0xcd): { t_cd(o); break; }
            case (0xce): { t_ce(o); break; }
            case (0xcf): { t_cf(o); break; }
            case (0xd0): { t_d0(o); break; }
            case (0xd2): { t_d2(o); break; }
            case (0xd3): { t_d3(o); break; }
            case (0xd4): { t_d4(o); break; }
            case (0xd6): { t_d6(o); break; }
            case (0xd7): { t_d7(o); break; }
            case (0xd8): { t_d8(o); break; }
            case (0xd9): { t_d9(o); break; }
            case (0xda): { t_da(o); break; }
            case (0xdb): { t_db(o); break; }
            case (0xdc): { t_dc(o); break; }
            case (0xdd): { t_dd(o); break; }
            case (0xde): { t_de(o); break; }
            case (0xdf): { t_df(o); break; }
            case (0xe0): { t_e0(o); break; }
            case (0xe1): { t_e1(o); break; }
            case (0xe2): { t_e2(o); break; }
            case (0xe3): { t_e3(o); break; }
            case (0xe4): { t_e4(o); break; }
            case (0xe5): { t_e5(o); break; }
            case (0xe6): { t_e6(o); break; }
            case (0xe7): { t_e7(o); break; }
            case (0xe8): { t_e8(o); break; }
            case (0xe9): { t_e9(o); break; }
            case (0xea): { t_ea(o); break; }
            case (0xeb): { t_eb(o); break; }
            case (0xec): { t_ec(o); break; }
            case (0xed): { t_ed(o); break; }
            case (0xee): { t_ee(o); break; }
            case (0xef): { t_ef(o); break; }
            case (0xf1): { t_f1(o); break; }
            case (0xf2): { t_f2(o); break; }
            case (0xf3): { t_f3(o); break; }
            case (0xf5): { t_f5(o); break; }
            case (0xf6): { t_f6(o); break; }
            case (0xf7): { t_f7(o); break; }
            case (0xf9): { t_f9(o); break; }
            case (0xfb): { t_fb(o); break; }
            case (0xfc): { t_fc(o); break; }
            case (0xfd): { t_fd(o); break; }
            case (0xfe): { t_fe(o); break; }
            case (0xff): { t_ff(o); break; }

            default: { fprintf(vLog, "\ne: v5 := " F08_ " not found\n\n", _v5); fflush (vLog); brk = true; break; }
        }
    }

    if (sts) { _t_done_(o); }
}

/*
*
*/

void t_test(const test_t *t)
{
    if (t->p == nullptr) { return; }

    FILE *h = nullptr;

    errno_t e = fopen_s(&h, t->p, "w");

    if (e != 0) { printf("Can not create log file = %s\n", t->p); return; }

    printf(":: %s\n", t->p);

    {
        obj_t o = { 0 };

        o.mLog = h;

        g_user[0] = t->u0; g_user[1] = t->u1; g_rslt[0] = 0;

        _t_test_(&o);
    }

    if (h != nullptr)
    {
        e = fclose(h);

        if (e != 0) { printf("Can not close log file = %s\n", t->p); }
    }

    // _fcloseall();
}
