#include "tags.h"
#include "vars.h"

/*
*
*/

void fun_0010d5d9(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    add_181919(o, STP_P1, 0, 1);
}

void fun_00100e46(obj_t *o)
{
    set_idx_16(o, STP_P1);
    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_00101f4b(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_00101afe(obj_t *o)
{
    cpy_1818(o, bm_32(STP_Z0), bm_32(STP_Z0));
}

void fun_0010d4cb(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    cpy_1819(o, STP_P1, 0);

    add_191818(o, 1, bm_s32(STP_Z0), STP_P1);
}

void fun_00100ce6(obj_t *o)
{
    cpy_1819(o, STP_Z0, 2);

    adr64_18_base(o, STP_P1, 3);
}

void fun_0010127f(obj_t *o)
{
    cpy_1918(o, 4, STP_P1);

    wrt64_1819(o, STP_Z0, 5);

    adr64_19_v20(o, 6, 7);

    set_idx_16(o, STP_N1);
}

void fun_0010d6c4(obj_t *o)
{
    set_idx_17(o, 8); // (idx_t*) v17 += 8; (tag_t*) v17=v17+0x20;
}

void fun_0010d645(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    rdr64_1818(o, STP_Z0, STP_Z0);
}

void fun_0010d2a3(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    set_val_18(o, STP_P1, 0);

    cpy_1918(o, 2, STP_P1);

    mul_191919(o, 4, 5, 3);
}

void fun_00102124(obj_t *o)
{
    cpy_1819(o, STP_P1, 6);

    set_val_19(o, 9, 7);

    cpy_1819(o, STP_P2, 10);

    set_idx_16(o, STP_P2);
}

void fun_00101f2e(obj_t *o)
{
    set_idx_17(o, 11); // (idx_t*) v17 += 11; (tag_t*) v17=v17+0x2c;
}

void fun_0010104a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_0010c85b(obj_t *o)
{
    cpy_1918(o, bm_32(0), bm_32(STP_Z0));
}

void fun_00101dcb(obj_t *o)
{
    set_idx_16(o, STP_N1);
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_001019b1(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    rdr64_1918(o, 0, STP_Z0);

    set_idx_16(o, STP_N1);

    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_00100963(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    les_181818(o, bm_32(STP_N1), bm_32(STP_N1), bm_32(STP_Z0));
}

void fun_0010d0d1(obj_t *o)
{
    set_idx_16(o, STP_N1);
}

void fun_00101741(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    cpy_1819(o, STP_P1, 0);

    adr64_19_base(o, 1, 2);

    wrt64_1819(o, STP_P1, 3);
}

void fun_00101d26(obj_t *o)
{
    adr64_18_base(o, STP_P1, 4);

    cpy_1918(o, 5, STP_P1);

    adr64_19_v20(o, 6, 7);
}

void fun_0010d377(obj_t *o)
{
    set_val_19(o, 8, 9);

    set_val_19(o, 11, 12);

    set_idx_17(o, 14); // (idx_t*) v17 += 14; (tag_t*) v17=v17+0x38;
}

void fun_001016e1(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    adr64_18_v20(o, STP_P1, 0);

    set_idx_16(o, STP_P1);
}

void fun_001009c8(obj_t *o)
{
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_0010cd62(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    wrt32_1919(o, 0, 1);

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_00102001(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    mul_181919(o, STP_P1, 1, 0);
}

void fun_00101907(obj_t *o)
{
    set_val_19(o, 4, 2);

    cpy_1819(o, STP_P2, 5);
}

void fun_00101687(obj_t *o)
{
    add_191818(o, 6, STP_P2, STP_P1);
}

void fun_00101dfb(obj_t *o)
{
    cpy_1819(o, STP_P1, 7);

    add_181918(o, STP_P1, 8, bm_s32(STP_P1));

    set_idx_16(o, STP_P1);
    set_idx_17(o, 9); // (idx_t*) v17 += 9; (tag_t*) v17=v17+0x24;
}

void fun_00101508(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    cpy_1918(o, 0, STP_Z0);

    set_val_18(o, STP_Z0, 1);
}

void fun_00101852(obj_t *o)
{
    cpy_1918(o, 3, STP_Z0);

    mul_191919(o, 5, 6, 4);

    cpy_1819(o, STP_Z0, 7);
}

void fun_0010196d(obj_t *o)
{
    set_val_19(o, 10, 8);

    set_idx_17(o, 11); // (idx_t*) v17 += 11; (tag_t*) v17=v17+0x2c;
}

void fun_0010ccef(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    set_val_18(o, STP_P1, 0);

    cpy_1918(o, 2, STP_P1);
}

void fun_00100c38(obj_t *o)
{
    set_val_18(o, STP_P1, 3);

    cpy_1918(o, 5, STP_P1);

    mul_191919(o, 7, 8, 6);
}

void fun_0010cbcb(obj_t *o)
{
    cpy_1819(o, STP_P1, 9);

    set_val_19(o, 12, 10);

    add_181819(o, STP_P1, STP_P1, 13);
}

void fun_00101efe(obj_t *o)
{
    set_idx_16(o, STP_P1);
    set_idx_17(o, 14); // (idx_t*) v17 += 14; (tag_t*) v17=v17+0x38;
}

void fun_001015f4(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    cpy_1819(o, STP_P1, 0);

    add_191818(o, 1, bm_s32(STP_Z0), STP_P1);
}

void fun_0010d56a(obj_t *o)
{
    cpy_1819(o, STP_Z0, 2);

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xc;
}

void fun_001017f3(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    adr64_18_base(o, STP_P1, 0);

    set_idx_16(o, STP_P1);
}

void fun_00100f8a(obj_t *o)
{
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_0010d251(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    set_val_19(o, 0, 1);

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xc;
}

void fun_00101f68(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_0010d3de(obj_t *o)
{
    set_val_18(o, STP_P1, 0);

    cpy_1918(o, 2, STP_P1);

    set_val_19(o, 3, 4);

    mul_191919(o, 7, 8, 6);
}

void fun_00101119(obj_t *o)
{
    cpy_1819(o, STP_P1, 9);

    set_val_19(o, 12, 10);
}

void fun_00101ea4(obj_t *o)
{
    add_181819(o, STP_P1, STP_P1, 13);
}

void fun_00100d72(obj_t *o)
{
    adr64_19_v20(o, 14, 15);

    cpy_1819(o, STP_P2, 16);

    add_191818(o, 17, bm_s32(STP_P1), STP_P2);
}

void fun_0010cae2(obj_t *o)
{
    set_idx_17(o, 18); // (idx_t*) v17 += 18; (tag_t*) v17=v17+0x48;
}

void fun_00101ba3(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    cpy_1918(o, 0, STP_Z0);
}

void fun_001011f7(obj_t *o)
{
    adr64_18_v20(o, STP_Z0, 1);

    cpy_1918(o, 2, STP_Z0);

    set_val_18(o, STP_Z0, 3);
}

void fun_0010cc74(obj_t *o)
{
    set_idx_17(o, 5); // (idx_t*) v17 += 5; (tag_t*) v17=v17+0x14;
}

void fun_00101572(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    mod_191919(o, 0, 2, 1);

    {
        // AM = 0, CM = 1, CM1 = 2
        // if (o->mEmul) { mem_t e = { .val = 2 }; set_act_19(o, 0, e); }
    }

    set_idx_17(o, 3); // (idx_t*) v17 += 3; (tag_t*) v17=v17+0xc;
}

void fun_00101a23(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    add_191918(o, 0, 1, STP_Z0);

    set_idx_16(o, STP_N1);
    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_0010cc91(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    wrt32_1819(o, STP_Z0, 0);

    set_idx_16(o, STP_N1);
}

void fun_0010d5bc(obj_t *o)
{
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_00101c1a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    set_idx_19(o, 0, 1);

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_00100a04(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    orr_191819(o, bm_32(0), bm_32(STP_Z0), bm_32(1));

    set_idx_16(o, STP_N1);

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_00101f85(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    cpy_1918(o, bm_32(0), bm_32(STP_Z0));
}

void fun_00100fa7(obj_t *o)
{
    set_idx_16(o, STP_N1);
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_00101aad(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    cpy_1819(o, STP_P1, 0);
}

void fun_00100886(obj_t *o)
{
    add_191818(o, 1, bm_s32(STP_Z0), STP_P1);

    cpy_1819(o, STP_Z0, 2);

    adr64_18_base(o, STP_P1, 3);

    cpy_1918(o, 4, STP_P1);
}

void fun_00101330(obj_t *o)
{
    wrt64_1819(o, STP_Z0, 5);

    adr64_19_v20(o, 6, 7);
}

void fun_00101fd2(obj_t *o)
{
    set_val_18(o, STP_Z0, 8);
}

void fun_0010d06e(obj_t *o)
{
    cpy_1918(o, 10, STP_Z0);

    set_val_19(o, 11, 12);
}

void fun_001020f4(obj_t *o)
{
    set_idx_16(o, STP_N1);
    set_idx_17(o, 14); // (idx_t*) v17 += 14; (tag_t*) v17=v17+0x38;
}

void fun_00100fd7(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    set_val_18(o, STP_P1, 0);
}

void fun_00100843(obj_t *o)
{
    cpy_1918(o, 2, STP_P1);
}

void fun_00100b9f(obj_t *o)
{
    mul_181919(o, STP_P1, 4, 3);
}

void fun_0010c937(obj_t *o)
{
    set_val_19(o, 5, 6);

    set_idx_16(o, STP_P1);
    set_idx_17(o, 8); // (idx_t*) v17 += 8; (tag_t*) v17=v17+0x20;
}

void fun_0010d4ae(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_001013a6(obj_t *o)
{
    mul_181919(o, STP_P1, 1, 0);

    set_val_19(o, 4, 2);

    cpy_1819(o, STP_P2, 5);

    add_191818(o, 6, STP_P2, STP_P1);
}

void fun_0010c98e(obj_t *o)
{
    cpy_1819(o, STP_P1, 7);

    add_181918(o, STP_P1, 8, bm_s32(STP_P1));

    adr64_18_base(o, STP_P2, 9);

    cpy_1918(o, 10, STP_P2);
}

void fun_00101493(obj_t *o)
{
    wrt64_1819(o, STP_P1, 11);

    adr64_18_base(o, STP_P1, 12);
}

void fun_0010101a(obj_t *o)
{
    set_idx_16(o, STP_P1);
    set_idx_17(o, 13); // (idx_t*) v17 += 13; (tag_t*) v17=v17+0x34;
}

void fun_0010206e(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    add_191918(o, bm_s32(1), bm_s32(0), bm_s32(STP_Z0));

    set_idx_16(o, STP_N1);
    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_0010ca71(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    les_181919(o, bm_32(STP_P1), 0, 1);
}

void fun_0010caff(obj_t *o)
{
    set_idx_16(o, STP_P1);
    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_00101b2d(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    les_181918(o, bm_32(STP_Z0), bm_32(0), bm_32(STP_Z0));

    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_0010117f(obj_t *o)
{
    idx_t _w = get_idx_pi17(o, 0);

    switch (_w)
    {
        case (0): { adr64_19_user(o, 1); break; } // v19[_v17[to]] = &g_usrs;
        case (1): { adr64_19_result(o, 1); break; } // v19[_v17[to]] = &g_rslt;
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_00100810(obj_t *o)
{
    fun_0010117f(o);
}

void fun_0010c895(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    cpy_1819(o, STP_P1, 0);

    add_191818(o, 1, bm_s32(STP_Z0), STP_P1);

    set_idx_16(o, STP_N1);
}

void fun_00100d55(obj_t *o)
{
    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_00101d09(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_00101c6a(obj_t *o)
{
    mul_181919(o, STP_P1, 1, 0);

    set_val_19(o, 4, 2);

    set_idx_16(o, STP_P1);
    set_idx_17(o, 5); // (idx_t*) v17 += 5; (tag_t*) v17=v17+0x14;
}

void fun_00100e7d(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        idx_t _it = 0;

        join_t _f = get_mem_18(o, STP_Z0);

        vF58[_it] = _f._64;

        VF_ fprintf(vLog, "c: vF58[ " FII_ "] := v18[ " FII_ "] = " F64_ "\n", _it, _f._ii, _f._64.val); fflush (vLog);
    }

    set_idx_16(o, STP_N1);

    {
        idx_t _it = 0;

        mem_t _f = get_mem_pi17(o, 0);

        vF50[_it] = _f;

        VF_ fprintf(vLog, "s: vF50[ " FII_ "] := " F64_ "\n", _it, _f.val); fflush (vLog);
    }

    {
        idx_t _it = 0;

        mem_t _f = get_mem_pi17(o, 2);

        vF48[_it] = _f;

        VF_ fprintf(vLog, "s: vF48[ " FII_ "] := " F64_ "\n", _it, _f.val); fflush (vLog);
    }

    {
        idx_t _it = 0;

        idx_t _f = get_idx_pi17(o, 4);

        vF7C[_it] = _f;

        VF_ fprintf(vLog, "s: vF7C[ " FII_ "]:32 := " F32_ "\n", _it, _f); fflush (vLog);
    }

    {
        num_t _n = 5;

        vF40->idx = v17->idx + _n; // (idx_t*) vF40 = v17 + 5; (tag_t*) vF40=v17+0x14;

        VF_ fprintf(vLog, "s: vF40 := " F64_ "\n", vF40->val); fflush(vLog);
    }
}

void fun_0010d19e(obj_t *o)
{
    idx_t j1 = 0, j2 = 0;

    mem_t x1 = vF58[j1], x2 = vF50[j2];

    bool b1 = (x1.val < x2.val);

    {
        fprintf(vLog, "?: vF58[ " FII_ "] < vF50[ " FII_ "] = " F64_ " < " F64_ ", b1 = %i\n", j1, j2, x1.val, x2.val, (int)b1); fflush(vLog);
    }

    if (b1) // *vF58 < *vF50
    {
        idx_t _if = 0;

        num_t _n = (num_t)vF7C[_if];

        set_tag_17(o, _n); // (tag_t) v17 += *vF7C;
    } else {
        idx_t j3 = 0;

        mem_t x3 = vF48[j3];

        bool b2 = (x3.val < x1.val);

        {
            fprintf(vLog, "?: vF48[ " FII_ "] < vF58[ " FII_ "] = " F64_ " < " F64_ ", b2 = %i\n", j3, j1, x3.val, x1.val, (int)b2); fflush(vLog);
        }

        if (b2) // *vF48 < *vF58
        {
            idx_t _if = 0;

            num_t _n = (num_t)vF7C[_if];

            set_tag_17(o, _n); // (tag_t) v17 += *vF7C;
        } else {
            idx_t j4 = 0;

            mem_t x4 = vF40[j4];

            mem_t a = { .val = ((x1.val - x2.val) * 4) + x4.val };

            // num_t _n = (num_t)to_32(a.val); // ((*vF58 - *vF50) * 4) + *vF40

            idx_t *pi = a.idx;

            num_t _n = (num_t)*(pi); // *( ((*vF58 - *vF50) * 4) + *vF40 )

            set_tag_17(o, _n); // (tag_t) v17 += _n;
        }
    }
}

void fun_0010cdc3(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_0010cb2f(obj_t *o)
{
    idx_t _w = get_idx_pi17(o, 0);

    switch (_w)
    {
        case (0): { adr64_18_bss2(o, STP_P1); break; } // v18[to] = g_bss2;
        case (1): { adr64_18_bss1(o, STP_P1); break; } // v18[to] = g_bss1;
    }

    set_idx_16(o, STP_P1);
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_00100bfe(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_00100f1a(obj_t *o)
{
    idx_t _w = get_idx_pi17(o, 1);

    switch (_w)
    {
        case (0): { adr64_19_bss2(o, 0); break; } // v19[_to] = g_bss2;
        case (1): { adr64_19_bss1(o, 0); break; } // v19[_to] = g_bss1;
    }

    set_idx_17(o, 2); // (idx_t*) v17 += 2; (tag_t*) v17=v17+8;
}

void fun_00101bfd(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_001007aa(obj_t *o)
{
    bool b = false;

    {
//      join_t _f = get_mem_18(o, STP_Z0);

        bm_t _cur = bm_32(STP_Z0);

        join_t _f = get_act_18(o, _cur);

        {
            // AM = 0, CM = 3, Flag = 1
            // if (o->mEmul) { _f._64.val = 1; }
        }

        b = (_f._64.val == 0);

        VF_ fprintf(vLog, "?: v18[ " FII_ "]%s == 0; " F64_ " == 0 , b = %i\n", _f._ii, bm_str(_cur), _f._64.val, (int)b); fflush(vLog);
    }

    if (b) // v18[_cur] == 0
    {
        num_t _n = 4;
        
        set_tag_17(o, _n); // (tag_t) v17 += 4;
    } else {
        num_t _n = (num_t)get_idx_pi17(o, 0);

        set_tag_17(o, _n); // (tag_t) v17 += p17[0];
    }

    set_idx_16(o, STP_N1);
}

void fun_00100c1b(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_00100a8a(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_00100aa5(obj_t *o)
{
    idx_t _w = get_idx_pi17(o, 0);

    switch (_w)
    {
        case (0): { adr64_18_user(o, STP_P1); break; } // v18[_to] = &g_usrs;
        case (1): { adr64_18_result(o, STP_P1); break; } // v18[_to] = &g_rslt;
    }

    set_idx_16(o, STP_P1);
    set_idx_17(o, 1); // (idx_t*) v17 += 1; (tag_t*) v17=v17+4;
}

void fun_00100b82(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;
}

void fun_00100b28(obj_t *o)
{
    bool b = false;

    {
//      join_t _f = get_mem_19(o, 1);

        bm_t _cur = bm_32(1);

        join_t _f = get_act_19(o, _cur);

        b = (_f._64.val == 0);

        VF_ fprintf(vLog, "?: v19[ " FII_ "]%s == 0; " F64_ " == 0 , b = %i\n", _f._ii, bm_str(_cur), _f._64.val, (int)b); fflush(vLog);
    }

    if (b) // v19[_cur] == 0
    {
        num_t _n = 8;

        set_tag_17(o, _n); // (tag_t) v17 += 8;
    } else {
        num_t _n = (num_t)get_idx_pi17(o, 0);

        set_tag_17(o, _n); // (tag_t) v17 += p17[0];
    }
}

void fun_0010107c(obj_t *o)
{
    set_tag_17(o, 1); // (tag_t*) v17 += 1;

    {
        idx_t _it = 0;

        join_t _f = get_mem_18(o, STP_Z0);

        vF78[_it] = _f._64;

        VF_ fprintf(vLog, "c: vF78[ " FII_ "] := v18[ " FII_ "] = " F64_ "\n", _it, _f._ii, _f._64.val); fflush (vLog);
    }

    set_idx_16(o, STP_N1);

    {
        idx_t _it = 0;

        mem_t _f = get_mem_pi17(o, 0);

        vF70[_it] = _f;

        VF_ fprintf(vLog, "s: vF70[ " FII_ "] := " F64_ "\n", _it, _f.val); fflush (vLog);
    }

    {
        idx_t _it = 0;

        mem_t _f = get_mem_pi17(o, 3);

        vF68[_it] = _f;

        VF_ fprintf(vLog, "s: vF68[ " FII_ "] := " F64_ "\n", _it, _f.val); fflush (vLog);
    }

    {
        idx_t _it = 0;

        idx_t _f = get_idx_pi17(o, 2);

        vF80[_it] = _f;

        VF_ fprintf(vLog, "s: vF80[ " FII_ "]:32 := " F32_ "\n", _it, _f); fflush (vLog);
    }

    {
        num_t _n = 5;

        vF60->idx = v17->idx + _n; // (idx_t) vF60 = v17 + 5; (tag_t) vF60=v17+0x14;

        VF_ fprintf(vLog, "s: vF60 := " F64_ "\n", vF60->val); fflush(vLog);
    }
}

void fun_0010d0eb(obj_t *o)
{
    idx_t j1 = 0, j2 = 0;

    mem_t x1 = vF78[j1], x2 = vF70[j2];

    bool b1 = (x1.val < x2.val);

    {
        fprintf(vLog, "?: vF78[ " FII_ "] < vF70[ " FII_ "] = " F64_ " < " F64_ ", b1 = %i\n", j1, j2, x1.val, x2.val, (int)b1); fflush(vLog);
    }

    if (b1) // *vF78 < *vF70
    {
        idx_t _if = 0;

        num_t _n = (num_t)vF80[_if];

        set_tag_17(o, _n); // (tag_t) v17 += *vF80;
    } else {
        idx_t j3 = 0;

        mem_t x3 = vF68[j3];

        bool b2 = (x3.val < x1.val);

        {
            fprintf(vLog, "?: vF68[ " FII_ "] < vF78[ " FII_ "] = " F64_ " < " F64_ ", b2 = %i\n", j3, j1, x3.val, x1.val, (int)b2); fflush(vLog);
        }

        if (b2) // *vF68 < *vF78
        {
            idx_t _if = 0;

            num_t _n = (num_t)vF80[_if];

            set_tag_17(o, _n); // (tag_t) v17 += *vF80;
        } else {
            idx_t j4 = 0;

            mem_t x4 = vF60[j4];

            mem_t a = { .val = ((x1.val - x2.val) * 4) + x4.val };

            // num_t _n = (num_t)to_32(a.val); // ((*vF78 - *vF70) * 4) + *vF60

            idx_t *pi = a.idx;

            num_t _n = (num_t)*(pi); // *( ((*vF78 - *vF70) * 4) + *vF60 )

            set_tag_17(o, _n); // (tag_t) v17 += _n;
        }
    }
}
