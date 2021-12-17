def subone(p_s, p_sub):
    s = p_s.strip()
    t, r = p_sub
    sts, pos = scan(s, t)
    if sts:
        s = s.replace(t, r)
    return s


def subset(p_s):
    s = p_s.strip()
    sub = ('==v', '#v')  # ceq
    s = subone(s, sub)
    sub = ('!=v', '@v')  # cne
    s = subone(s, sub)
    return s


def scan(p_s, p_e, p_start=0):
    pos = p_s.find(p_e, p_start)
    sts = (pos != -1)
    return sts, pos


def test(p_s, p_e, p_start):
    sts, pos = scan(p_s, p_e, p_start)
    num = p_s.count(p_e, p_start) if sts else 0
    return sts, pos, num


def fmt_op(p_s, p_op):
    s = p_s.strip()
    sts_op, pos_op = scan(s, p_op)
    if sts_op:
        s = s.replace(p_op, f' {p_op} ')
    return s


def fmt_16(p_s):
    s = p_s.strip()
    s = s.replace(' ', '')
    sts_16, pos_16 = scan(s, 'v16')
    if sts_16:
        s = s.replace('v16', '_v16')
    s = fmt_op(s, '-')
    s = fmt_op(s, '+')
    return s


def idx_16(p_s):
    s = p_s.strip()
    s = s.replace(' ', '')
    return s


def idx_17(p_s):
    s = p_s.strip()
    s = s.replace('p17[', '')
    s = s.replace(']', '')
    s = s.replace(' ', '')
    return s


def idx_18(p_s):
    s = p_s.strip()
    s = s.replace('v18[', '')
    s = s.replace(']', '')
    sts_16, pos_16 = scan(s, 'v16')
    if sts_16:
        s = idx_16(s)
    s = s.replace(' ', '')
    return s


def idx_19(p_s):
    s = p_s.strip()
    s = s.replace('v19[', '')
    s = s.replace(']', '')
    sts_17, pos_17 = scan(s, 'p17')
    if sts_17:
        s = idx_17(s)
    s = s.replace(' ', '')
    return s


def idx_20(p_s):
    s = p_s.strip()
    s = s.replace('(', '')
    s = s.replace(')', '')
    s = s.replace('v20+', '')
    sts_17, pos_17 = scan(s, 'p17')
    if sts_17:
        s = idx_17(s)
    s = s.replace(' ', '')
    return s


def idx_gg(p_s):
    s = p_s.strip()
    s = s.replace('(', '')
    s = s.replace(')', '')
    s = s.replace('g_20F0A0+', '')
    sts_17, pos_17 = scan(s, 'p17')
    if sts_17:
        s = idx_17(s)
    s = s.replace(' ', '')
    return s


def is_p1_a_p2(p_s, p_1, p_a, p_2):
    b = False
    s = p_s.strip()
    s = s.replace(' ', '')
    e_1, n_1 = p_1
    e_a, n_a = p_a
    e_2, n_2 = p_2
    start = 0
    sts_1, pos_1, num_1 = test(s, e_1, start)
    if 0 < n_1:
        t_1 = (sts_1 and (0 == pos_1) and (n_1 == num_1))
    else:
        t_1 = (not sts_1 and (-1 == pos_1) and (0 == num_1))
    if (n_1 < 0) or t_1:
        start = (start if pos_1 < 0 else pos_1 + 1)
        sts_a, pos_a, num_a = test(s, e_a, start)
        if 0 < n_a:
            t_a = (sts_a and (pos_1 < pos_a) and (n_a == num_a))
        else:
            t_a = (not sts_a and (-1 == pos_a) and (0 == num_a))
        if (n_a < 0) or t_a:
            start = (start if pos_a < 0 else pos_a + 1)
            sts_2, pos_2, num_2 = test(s, e_2, start)
            if 0 < n_2:
                t_2 = (sts_2 and (pos_a < pos_2) and (n_2 == num_2))
            else:
                t_2 = (not sts_2 and (-1 == pos_2) and (0 == num_2))
            if (n_2 < 0) or t_2:
                b = True
    return b


def is_18eq(p_s):
    o_1 = ('v18', 1)
    o_a = ('=', 1)
    o_2 = ('v19', 0)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 0)
    o_a = ('=', 1)
    o_2 = ('p17', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_18eq18(p_s):
    o_1 = ('v18', 2)
    o_a = ('=', 1)
    o_2 = ('v18', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 0)
    o_a = ('=', 1)
    o_2 = ('v18', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_18eq19(p_s):
    o_1 = ('v18', 1)
    o_a = ('=', 1)
    o_2 = ('v19', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1


def is_18eq20(p_s):
    o_1 = ('v18', 1)
    o_a = ('=', 1)
    o_2 = ('v20', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 0)
    o_a = ('=', 1)
    o_2 = ('v18', 0)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_18eqgg(p_s):
    o_1 = ('v18', 1)
    o_a = ('=', 1)
    o_2 = ('g_20F0A0', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 0)
    o_a = ('=', 1)
    o_2 = ('v18', 0)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_19eq(p_s):
    o_1 = ('v19', 1)
    o_a = ('=', 1)
    o_2 = ('v18', 0)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 0)
    o_a = ('=', 1)
    o_2 = ('p17', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_19eq18(p_s):
    o_1 = ('v19', 1)
    o_a = ('=', 1)
    o_2 = ('v18', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1


def is_19eq19(p_s):
    o_1 = ('v19', 2)
    o_a = ('=', 1)
    o_2 = ('v19', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 0)
    o_a = ('=', 1)
    o_2 = ('v19', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_19eq20(p_s):
    o_1 = ('v19', 1)
    o_a = ('=', 1)
    o_2 = ('v20', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 0)
    o_a = ('=', 1)
    o_2 = ('v19', 0)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_19eqgg(p_s):
    o_1 = ('v19', 1)
    o_a = ('=', 1)
    o_2 = ('g_20F0A0', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 0)
    o_a = ('=', 1)
    o_2 = ('v19', 0)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_ptr18eq19(p_s):
    o_1 = ('*v18', 1)
    o_a = ('=', 1)
    o_2 = ('v19', 1)
    return is_p1_a_p2(p_s, o_1, o_a, o_2)


def is_ptr18eq18(p_s):
    o_1 = ('*v18', 1)
    o_a = ('=', 1)
    o_2 = ('v18', 1)
    return is_p1_a_p2(p_s, o_1, o_a, o_2)


def is_ptr19eq18(p_s):
    o_1 = ('*v19', 1)
    o_a = ('=', 1)
    o_2 = ('v18', 1)
    return is_p1_a_p2(p_s, o_1, o_a, o_2)


def is_ptr19eq19(p_s):
    o_1 = ('*v19', 1)
    o_a = ('=', 1)
    o_2 = ('v19', 1)
    return is_p1_a_p2(p_s, o_1, o_a, o_2)


def is_18eqptr19(p_s):
    o_1 = ('v18', 1)
    o_a = ('=', 1)
    o_2 = ('*v19', 1)
    return is_p1_a_p2(p_s, o_1, o_a, o_2)


def is_18eqptr18(p_s):
    o_1 = ('v18', 2)
    o_a = ('=', 1)
    o_2 = ('*v18', 1)
    return is_p1_a_p2(p_s, o_1, o_a, o_2)


def is_19eqptr18(p_s):
    o_1 = ('v19', 1)
    o_a = ('=', 1)
    o_2 = ('*v18', 1)
    return is_p1_a_p2(p_s, o_1, o_a, o_2)


def is_19eqptr19(p_s):
    o_1 = ('v19', 2)
    o_a = ('=', 1)
    o_2 = ('*v19', 1)
    return is_p1_a_p2(p_s, o_1, o_a, o_2)


def is_18eq19act19(p_s, p_sn):
    signe = f']{p_sn}v'
    o_1 = ('v18', 1)
    o_a = ('=', 1)
    o_2 = ('v19', 2)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 1)
    o_a = (signe, 1)
    o_2 = ('v19', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_18eq18act19(p_s, p_sn):
    signe = f']{p_sn}v'
    o_1 = ('v18', 2)
    o_a = ('=', 1)
    o_2 = ('v18', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 2)
    o_a = (signe, 1)
    o_2 = ('v19', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 2)
    o_a = (signe, 1)
    o_2 = ('v18', 0)
    b_3 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2 and b_3


def is_18eq19act18(p_s, p_sn):
    signe = f']{p_sn}v'
    o_1 = ('v18', 2)
    o_a = ('=', 1)
    o_2 = ('v19', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 2)
    o_a = (signe, 1)
    o_2 = ('v18', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 2)
    o_a = (signe, 1)
    o_2 = ('v19', 0)
    b_3 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2 and b_3


def is_18eq18act18(p_s, p_sn):
    signe = f']{p_sn}v'
    o_1 = ('v18', 3)
    o_a = ('=', 1)
    o_2 = ('v18', 2)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v18', 3)
    o_a = (signe, 1)
    o_2 = ('v18', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_19eq18act18(p_s, p_sn):
    signe = f']{p_sn}v'
    o_1 = ('v19', 1)
    o_a = ('=', 1)
    o_2 = ('v18', 2)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 1)
    o_a = (signe, 1)
    o_2 = ('v18', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def is_19eq19act18(p_s, p_sn):
    signe = f']{p_sn}v'
    o_1 = ('v19', 2)
    o_a = ('=', 1)
    o_2 = ('v18', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 2)
    o_a = (signe, 1)
    o_2 = ('v18', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 2)
    o_a = (signe, 1)
    o_2 = ('v19', 0)
    b_3 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2 and b_3


def is_19eq18act19(p_s, p_sn):
    signe = f']{p_sn}v'
    o_1 = ('v19', 2)
    o_a = ('=', 1)
    o_2 = ('v18', 1)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 2)
    o_a = (signe, 1)
    o_2 = ('v19', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 2)
    o_a = (signe, 1)
    o_2 = ('v18', 0)
    b_3 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2 and b_3


def is_19eq19act19(p_s, p_sn):
    signe = f']{p_sn}v'
    o_1 = ('v19', 3)
    o_a = ('=', 1)
    o_2 = ('v19', 2)
    b_1 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    o_1 = ('v19', 3)
    o_a = (signe, 1)
    o_2 = ('v19', 1)
    b_2 = is_p1_a_p2(p_s, o_1, o_a, o_2)
    return b_1 and b_2


def cp_1819(p_s, p_lj):
    # e = 'v18[v16+1]=v19[p17[14]];'
    # t = cp_1819(o, _v16 + 1, 14);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eq19(p_s):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_19, pos_19 = scan(s, ']=v19[')
            if sts_19 and (pos_18 < pos_19):
                p = pos_19 + 1
                t = s[:p]
                i_18 = idx_18(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_19 = idx_19(t)
                t = f"cp_1819(o, {fmt_16(i_18)}, {i_19});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def cp_1818(p_s, p_lj):
    # e = 'v18[v16+1]=v18[v16];'
    # t = cp_1818(o, _v16 + 1, _v16);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eq18(p_s):
        sts_18_1, pos_18_1 = scan(s, 'v18[')
        if sts_18_1 and (pos_18_1 == 0):
            sts_18_2, pos_18_2 = scan(s, ']=v18[')
            if sts_18_2 and (pos_18_1 < pos_18_2):
                p = pos_18_2 + 1
                t = s[:p]
                i_18_1 = idx_18(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_18_2 = idx_18(t)
                t = f"cp_1818(o, {fmt_16(i_18_1)}, {fmt_16(i_18_2)});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def cp_1918(p_s, p_lj):
    # e = 'v19[p17[3]]=v18[v16-1];'
    # t = cp_1918(o, 3, _v16 - 1);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eq18(p_s):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_18, pos_18 = scan(s, ']=v18[')
            if sts_18 and (pos_19 < pos_18):
                p = pos_18 + 1
                t = s[:p]
                i_19 = idx_19(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_18 = idx_18(t)
                t = f"cp_1918(o, {i_19}, {fmt_16(i_18)});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def cp_1919(p_s, p_lj):
    # e = 'v19[p17[3]]=v19[p17[7]];'
    # t = cp_1919(o, 3, 7);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eq19(p_s):
        sts_19_1, pos_19_1 = scan(s, 'v19[')
        if sts_19_1 and (pos_19_1 == 0):
            sts_19_2, pos_19_2 = scan(s, ']=v19[')
            if sts_19_2 and (pos_19_1 < pos_19_2):
                p = pos_19_2 + 1
                t = s[:p]
                i_19_1 = idx_19(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_19_2 = idx_19(t)
                t = f"cp_1919(o, {i_19_1}, {i_19_2});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def gt_18(p_s, p_lj):
    # e = 'v18[v16+1]=p17[0];'
    # t = gt_18(o, _v16 + 1, 0);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eq(p_s):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_17, pos_17 = scan(s, ']=p17[')
            if sts_17 and (pos_18 < pos_17):
                p = pos_17 + 1
                t = s[:p]
                i_18 = idx_18(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_17 = idx_17(t)
                t = f"gt_18(o, {fmt_16(i_18)}, {i_17});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def gt_19(p_s, p_lj):
    # e = 'v19[p17[0]]=p17[1];'
    # t = gt_19(o, 0, 1);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eq(p_s):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_17, pos_17 = scan(s, ']=p17[')
            if sts_17 and (pos_19 < pos_17):
                p = pos_17 + 1
                t = s[:p]
                i_19 = idx_19(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_17 = idx_17(t)
                t = f"gt_19(o, {i_19}, {i_17});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def ad_v20_18(p_s, p_lj):
    # e = 'v18[v16+2]=(v20+p17[12]);'
    # t = ad_v20_18(o, _v16 + 2, 12);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eq20(p_s):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_20, pos_20 = scan(s, ']=(v20+p')
            if sts_20 and (pos_18 < pos_20):
                p = pos_20 + 1
                t = s[:p]
                i_18 = idx_18(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_20 = idx_20(t)
                t = f"ad_v20_18(o, {fmt_16(i_18)}, {i_20});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def ad_v20_19(p_s, p_lj):
    # e = 'v19[p17[0]]=(v20+p17[1]);'
    # t = ad_v20_19(o, 0, 1);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eq20(p_s):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_20, pos_20 = scan(s, ']=(v20+p')
            if sts_20 and (pos_19 < pos_20):
                p = pos_20 + 1
                t = s[:p]
                i_19 = idx_19(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_20 = idx_20(t)
                t = f"ad_v20_19(o, {i_19}, {i_20});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def ad_glb_18(p_s, p_lj):
    # e = 'v18[v16+2]=(g_20F0A0+p17[15]);'
    # t = ad_glb_18(o, _v16 + 2, 15);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eqgg(p_s):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_gg, pos_gg = scan(s, ']=(g_20F0A0+p')
            if sts_gg and (pos_18 < pos_gg):
                p = pos_gg + 1
                t = s[:p]
                i_18 = idx_18(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_gg = idx_gg(t)
                t = f"ad_glb_18(o, {fmt_16(i_18)}, {i_gg});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def ad_glb_19(p_s, p_lj):
    # e = 'v19[p17[0]]=(g_20F0A0+p17[1]);'
    # t = ad_glb_19(o, 0, 1);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eqgg(p_s):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_gg, pos_gg = scan(s, ']=(g_20F0A0+p')
            if sts_gg and (pos_19 < pos_gg):
                p = pos_gg + 1
                t = s[:p]
                i_19 = idx_19(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_gg = idx_gg(t)
                t = f"ad_glb_19(o, {i_19}, {i_gg});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def wr_1819(p_s, p_lj):
    # e = '*v18[v16]=v19[p17[5]];'
    # t = wr_1819(o, _v16, 5);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_ptr18eq19(p_s):
        sts_18_, pos_18_ = scan(s, '*v18[')
        if sts_18_ and (pos_18_ == 0):
            sts_19, pos_19 = scan(s, ']=v19[')
            if sts_19 and (pos_18_ < pos_19):
                p = pos_19 + 1
                t = s[:p]
                t = t.replace('*', '')
                i_18_ = idx_18(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_19 = idx_19(t)
                t = f"wr_1819(o, {fmt_16(i_18_)}, {i_19});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def wr_1818(p_s, p_lj):
    # e = '*v18[v16-1]=v18[v16];'
    # t = wr_1818(o, _v16 - 1, _v16);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_ptr18eq18(p_s):
        sts_18_, pos_18_ = scan(s, '*v18[')
        if sts_18_ and (pos_18_ == 0):
            sts_18_2, pos_18_2 = scan(s, ']=v18[')
            if sts_18_2 and (pos_18_ < pos_18_2):
                p = pos_18_2 + 1
                t = s[:p]
                t = t.replace('*', '')
                i_18_ = idx_18(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_18_2 = idx_18(t)
                t = f"wr_1818(o, {fmt_16(i_18_)}, {fmt_16(i_18_2)});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def wr_1918(p_s, p_lj):
    # e = '*v19[p17[4]]=v18[v16-1];'
    # t = wr_1919(o, 4, _v16 - 1);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_ptr19eq18(p_s):
        sts_19_, pos_19_ = scan(s, '*v19[')
        if sts_19_ and (pos_19_ == 0):
            sts_18, pos_18 = scan(s, ']=v18[')
            if sts_18 and (pos_19_ < pos_18):
                p = pos_18 + 1
                t = s[:p]
                t = t.replace('*', '')
                i_19_ = idx_19(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_18 = idx_18(t)
                t = f"wr_1918(o, {i_19_}, {fmt_16(i_18)});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def wr_1919(p_s, p_lj):
    # e = '*v19[p17[4]]=v19[p17[5]];'
    # t = wr_1919(o, 4, 5);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_ptr19eq19(p_s):
        sts_19_, pos_19_ = scan(s, '*v19[')
        if sts_19_ and (pos_19_ == 0):
            sts_19, pos_19 = scan(s, ']=v19[')
            if sts_19 and (pos_19_ < pos_19):
                p = pos_19 + 1
                t = s[:p]
                t = t.replace('*', '')
                i_19_ = idx_19(t)
                t = s[p + 1:]
                t = t.replace(';', '')
                i_19 = idx_19(t)
                t = f"wr_1919(o, {i_19_}, {i_19});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def rd_1819(p_s, p_lj):
    # e = 'v18[v16]=*v19[p17[0]];'
    # t = rd_1819(o, _v16, 0);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eqptr19(p_s):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_19_, pos_19_ = scan(s, ']=*v19[')
            if sts_19_ and (pos_18 < pos_19_):
                p = pos_19_ + 1
                t = s[:p]
                i_18 = idx_18(t)
                t = s[p + 1:]
                t = t.replace('*', '')
                t = t.replace(';', '')
                i_19_ = idx_19(t)
                t = f"rd_1819(o, {fmt_16(i_18)}, {i_19_});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def rd_1818(p_s, p_lj):
    # e = 'v18[v16]=*v18[v16+2];'
    # t = rd_1818(o, _v16, _v16 + 2);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eqptr18(p_s):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_18_, pos_18_ = scan(s, ']=*v18[')
            if sts_18_ and (pos_18 < pos_18_):
                p = pos_18_ + 1
                t = s[:p]
                i_18 = idx_18(t)
                t = s[p + 1:]
                t = t.replace('*', '')
                t = t.replace(';', '')
                i_18_ = idx_18(t)
                t = f"rd_1818(o, {fmt_16(i_18)}, {fmt_16(i_18_)});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def rd_1918(p_s, p_lj):
    # e = 'v19[p17[0]]=*v18[v16];'
    # t = rd_1918(o, 0, _v16);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eqptr18(p_s):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_18_, pos_18_ = scan(s, ']=*v18[')
            if sts_18_ and (pos_19 < pos_18_):
                p = pos_18_ + 1
                t = s[:p]
                i_19 = idx_19(t)
                t = s[p + 1:]
                t = t.replace('*', '')
                t = t.replace(';', '')
                i_18_ = idx_18(t)
                t = f"rd_1918(o, {i_19}, {fmt_16(i_18_)});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def rd_1919(p_s, p_lj):
    # e = 'v19[p17[0]]=*v19[p17[5]];'
    # t = rd_1919(o, 0, 5);
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eqptr19(p_s):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_19_, pos_19_ = scan(s, ']=*v19[')
            if sts_19_ and (pos_19 < pos_19_):
                p = pos_19_ + 1
                t = s[:p]
                i_19 = idx_19(t)
                t = s[p + 1:]
                t = t.replace('*', '')
                t = t.replace(';', '')
                i_19_ = idx_19(t)
                t = f"rd_1919(o, {i_19}, {i_19_});"
                s = (s.ljust(64) + t) if p_lj else t
                done = True
    return s, done


def act_181919(p_s, p_lj, p_act):
    # e = 'v18[v16+1]=(v19[p17[0]]+v19[p17[1]]);'
    # t = add_181919(o, _v16 + 1, 0, 1);
    act_sn, act_nm = p_act
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eq19act19(p_s, act_sn):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_19_1, pos_19_1 = scan(s, ']=(v19[')
            if not (sts_19_1 and (pos_18 < pos_19_1)):
                sts_19_1, pos_19_1 = scan(s, ']=v19[')
            if sts_19_1 and (pos_18 < pos_19_1):
                t = f']{act_sn}v19['
                sts_19_2, pos_19_2 = scan(s, t)
                if sts_19_2 and (pos_19_1 < pos_19_2):
                    p1 = pos_19_1 + 1
                    p2 = pos_19_2 + 1
                    t = s[:p1]
                    i_18 = idx_18(t)
                    t = s[p1 + 1:p2]
                    t = t.replace('(', '')
                    i_19_1 = idx_19(t)
                    t = s[p2 + 1:]
                    t = t.replace(')', '')
                    t = t.replace(';', '')
                    i_19_2 = idx_19(t)
                    t = f"{act_nm}_181919(o, {fmt_16(i_18)}, {i_19_1}, {i_19_2});"
                    s = (s.ljust(64) + t) if p_lj else t
                    done = True
    return s, done


def act_181819(p_s, p_lj, p_act):
    # e = 'v18[v16+1]=(v18[v16+1]+v19[p17[11]]);'
    # t = add_181819(o, _v16 + 1, _v16 + 1, 11);
    act_sn, act_nm = p_act
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eq18act19(p_s, act_sn):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_18_1, pos_18_1 = scan(s, ']=(v18[')
            if not (sts_18_1 and (pos_18 < pos_18_1)):
                sts_18_1, pos_18_1 = scan(s, ']=v18[')
            if sts_18_1 and (pos_18 < pos_18_1):
                t = f']{act_sn}v19['
                sts_19_2, pos_19_2 = scan(s, t)
                if sts_19_2 and (pos_18_1 < pos_19_2):
                    p1 = pos_18_1 + 1
                    p2 = pos_19_2 + 1
                    t = s[:p1]
                    i_18 = idx_18(t)
                    t = s[p1 + 1:p2]
                    t = t.replace('(', '')
                    i_18_1 = idx_18(t)
                    t = s[p2 + 1:]
                    t = t.replace(')', '')
                    t = t.replace(';', '')
                    i_19_2 = idx_19(t)
                    t = f"{act_nm}_181819(o, {fmt_16(i_18)}, {fmt_16(i_18_1)}, {i_19_2});"
                    s = (s.ljust(64) + t) if p_lj else t
                    done = True
    return s, done


def act_181918(p_s, p_lj, p_act):
    # e = 'v18[v16-1]=(v19[p17[2]]+v18[v16-1]);'
    # t = add_181918(o, _v16 - 1, 2, _v16 - 1);
    act_sn, act_nm = p_act
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eq19act18(p_s, act_sn):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_19_1, pos_19_1 = scan(s, ']=(v19[')
            if not (sts_19_1 and (pos_18 < pos_19_1)):
                sts_19_1, pos_19_1 = scan(s, ']=v19[')
            if sts_19_1 and (pos_18 < pos_19_1):
                t = f']{act_sn}v18['
                sts_18_2, pos_18_2 = scan(s, t)
                if sts_18_2 and (pos_19_1 < pos_18_2):
                    p1 = pos_19_1 + 1
                    p2 = pos_18_2 + 1
                    t = s[:p1]
                    i_18 = idx_18(t)
                    t = s[p1 + 1:p2]
                    t = t.replace('(', '')
                    i_19_1 = idx_19(t)
                    t = s[p2 + 1:]
                    t = t.replace(')', '')
                    t = t.replace(';', '')
                    i_18_2 = idx_18(t)
                    t = f"{act_nm}_181918(o, {fmt_16(i_18)}, {i_19_1}, {fmt_16(i_18_2)});"
                    s = (s.ljust(64) + t) if p_lj else t
                    done = True
    return s, done


def act_181818(p_s, p_lj, p_act):
    # e = 'v18[v16-1]=(v18[v16]+v18[v16-1]);'
    # t = add_181818(o, _v16 - 1, _v16, _v16 - 1);
    act_sn, act_nm = p_act
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_18eq18act18(p_s, act_sn):
        sts_18, pos_18 = scan(s, 'v18[')
        if sts_18 and (pos_18 == 0):
            sts_18_1, pos_18_1 = scan(s, ']=(v18[')
            if not (sts_18_1 and (pos_18 < pos_18_1)):
                sts_18_1, pos_18_1 = scan(s, ']=v18[')
            if sts_18_1 and (pos_18 < pos_18_1):
                t = f']{act_sn}v18['
                sts_18_2, pos_18_2 = scan(s, t)
                if sts_18_2 and (pos_18_1 < pos_18_2):
                    p1 = pos_18_1 + 1
                    p2 = pos_18_2 + 1
                    t = s[:p1]
                    i_18 = idx_18(t)
                    t = s[p1 + 1:p2]
                    t = t.replace('(', '')
                    i_18_1 = idx_18(t)
                    t = s[p2 + 1:]
                    t = t.replace(')', '')
                    t = t.replace(';', '')
                    i_18_2 = idx_18(t)
                    t = f"{act_nm}_181818(o, {fmt_16(i_18)}, {fmt_16(i_18_1)}, {fmt_16(i_18_2)});"
                    s = (s.ljust(64) + t) if p_lj else t
                    done = True
    return s, done


def act_191818(p_s, p_lj, p_act):
    # e = 'v19[p17[0]]=(v18[v16]+v18[v16-1]);'
    # t = add_191818(o, 0, _v16, _v16 - 1);
    act_sn, act_nm = p_act
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eq18act18(p_s, act_sn):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_18_1, pos_18_1 = scan(s, ']=(v18[')
            if not (sts_18_1 and (pos_19 < pos_18_1)):
                sts_18_1, pos_18_1 = scan(s, ']=v18[')
            if sts_18_1 and (pos_19 < pos_18_1):
                t = f']{act_sn}v18['
                sts_18_2, pos_18_2 = scan(s, t)
                if sts_18_2 and (pos_18_1 < pos_18_2):
                    p1 = pos_18_1 + 1
                    p2 = pos_18_2 + 1
                    t = s[:p1]
                    i_19 = idx_19(t)
                    t = s[p1 + 1:p2]
                    t = t.replace('(', '')
                    i_18_1 = idx_18(t)
                    t = s[p2 + 1:]
                    t = t.replace(')', '')
                    t = t.replace(';', '')
                    i_18_2 = idx_18(t)
                    t = f"{act_nm}_191818(o, {i_19}, {fmt_16(i_18_1)}, {fmt_16(i_18_2)});"
                    s = (s.ljust(64) + t) if p_lj else t
                    done = True
    return s, done


def act_191918(p_s, p_lj, p_act):
    # e = 'v19[p17[1]]=(v19[p17[0]]+v18[v16]);'
    # t = add_191918(o, 1, 0, _v16);
    act_sn, act_nm = p_act
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eq19act18(p_s, act_sn):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_19_1, pos_19_1 = scan(s, ']=(v19[')
            if not (sts_19_1 and (pos_19 < pos_19_1)):
                sts_19_1, pos_19_1 = scan(s, ']=v19[')
            if sts_19_1 and (pos_19 < pos_19_1):
                t = f']{act_sn}v18['
                sts_18_2, pos_18_2 = scan(s, t)
                if sts_18_2 and (pos_19_1 < pos_18_2):
                    p1 = pos_19_1 + 1
                    p2 = pos_18_2 + 1
                    t = s[:p1]
                    i_19 = idx_19(t)
                    t = s[p1 + 1:p2]
                    t = t.replace('(', '')
                    i_19_1 = idx_19(t)
                    t = s[p2 + 1:]
                    t = t.replace(')', '')
                    t = t.replace(';', '')
                    i_18_2 = idx_18(t)
                    t = f"{act_nm}_191918(o, {i_19}, {i_19_1}, {fmt_16(i_18_2)});"
                    s = (s.ljust(64) + t) if p_lj else t
                    done = True
    return s, done


def act_191819(p_s, p_lj, p_act):
    # e = 'v19[p17[1]]=(v18[v16]+v19[p17[0]]);'
    # t = add_191819(o, 0, _v16, 0);
    act_sn, act_nm = p_act
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eq18act19(p_s, act_sn):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_18_1, pos_18_1 = scan(s, ']=(v18[')
            if not (sts_18_1 and (pos_19 < pos_18_1)):
                sts_18_1, pos_18_1 = scan(s, ']=v18[')
            if sts_18_1 and (pos_19 < pos_18_1):
                t = f']{act_sn}v19['
                sts_19_2, pos_19_2 = scan(s, t)
                if sts_19_2 and (pos_18_1 < pos_19_2):
                    p1 = pos_18_1 + 1
                    p2 = pos_19_2 + 1
                    t = s[:p1]
                    i_19 = idx_19(t)
                    t = s[p1 + 1:p2]
                    t = t.replace('(', '')
                    i_18_1 = idx_18(t)
                    t = s[p2 + 1:]
                    t = t.replace(')', '')
                    t = t.replace(';', '')
                    i_19_2 = idx_19(t)
                    t = f"{act_nm}_191819(o, {i_19}, {fmt_16(i_18_1)}, {i_19_2});"
                    s = (s.ljust(64) + t) if p_lj else t
                    done = True
    return s, done


def act_191919(p_s, p_lj, p_act):
    # e = 'v19[p17[1]]=v19[p17[2]]+v19[p17[0]];'
    # t = add_191919(o, 1, 2, 0);
    act_sn, act_nm = p_act
    done = False
    s = p_s.strip()
    s = s.replace(' ', '')
    if is_19eq19act19(p_s, act_sn):
        sts_19, pos_19 = scan(s, 'v19[')
        if sts_19 and (pos_19 == 0):
            sts_19_1, pos_19_1 = scan(s, ']=(v19[')
            if not (sts_19_1 and (pos_19 < pos_19_1)):
                sts_19_1, pos_19_1 = scan(s, ']=v19[')
            if sts_19_1 and (pos_19 < pos_19_1):
                t = f']{act_sn}v19['
                sts_19_2, pos_19_2 = scan(s, t)
                if sts_19_2 and (pos_19_1 < pos_19_2):
                    p1 = pos_19_1 + 1
                    p2 = pos_19_2 + 1
                    t = s[:p1]
                    i_19 = idx_19(t)
                    t = s[p1 + 1:p2]
                    t = t.replace('(', '')
                    i_19_1 = idx_19(t)
                    t = s[p2 + 1:]
                    t = t.replace(')', '')
                    t = t.replace(';', '')
                    i_19_2 = idx_19(t)
                    t = f"{act_nm}_191919(o, {i_19}, {i_19_1}, {i_19_2});"
                    s = (s.ljust(64) + t) if p_lj else t
                    done = True
    return s, done


def act_add():
    return '+', 'add'


def add_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_add())


def add_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_add())


def add_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_add())


def add_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_add())


def add_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_add())


def add_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_add())


def add_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_add())


def add_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_add())


def act_mul():
    return '*', 'mul'


def mul_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_mul())


def mul_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_mul())


def mul_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_mul())


def mul_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_mul())


def mul_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_mul())


def mul_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_mul())


def mul_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_mul())


def mul_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_mul())


def act_and():
    return '&', 'and'


def and_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_and())


def and_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_and())


def and_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_and())


def and_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_and())


def and_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_and())


def and_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_and())


def and_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_and())


def and_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_and())


def act_les():
    return '<', 'les'


def les_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_les())


def les_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_les())


def les_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_les())


def les_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_les())


def les_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_les())


def les_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_les())


def les_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_les())


def les_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_les())


def act_sub():
    return '-', 'sub'


def sub_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_sub())


def sub_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_sub())


def sub_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_sub())


def sub_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_sub())


def sub_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_sub())


def sub_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_sub())


def sub_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_sub())


def sub_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_sub())


def act_orr():
    return '|', 'orr'


def orr_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_orr())


def orr_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_orr())


def orr_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_orr())


def orr_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_orr())


def orr_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_orr())


def orr_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_orr())


def orr_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_orr())


def orr_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_orr())


def act_xor():
    return '^', 'xor'


def xor_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_xor())


def xor_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_xor())


def xor_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_xor())


def xor_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_xor())


def xor_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_xor())


def xor_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_xor())


def xor_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_xor())


def xor_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_xor())


def act_ceq():
    return '#', 'ceq'  # ==


def ceq_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_ceq())


def ceq_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_ceq())


def ceq_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_ceq())


def ceq_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_ceq())


def ceq_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_ceq())


def ceq_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_ceq())


def ceq_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_ceq())


def ceq_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_ceq())


def act_cne():
    return '@', 'cne'  # !=


def cne_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_cne())


def cne_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_cne())


def cne_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_cne())


def cne_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_cne())


def cne_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_cne())


def cne_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_cne())


def cne_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_cne())


def cne_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_cne())


def act_mod():
    return '%', 'mod'


def mod_181919(p_s, p_lj):
    return act_181919(p_s, p_lj, act_mod())


def mod_181819(p_s, p_lj):
    return act_181819(p_s, p_lj, act_mod())


def mod_181918(p_s, p_lj):
    return act_181918(p_s, p_lj, act_mod())


def mod_181818(p_s, p_lj):
    return act_181818(p_s, p_lj, act_mod())


def mod_191818(p_s, p_lj):
    return act_191818(p_s, p_lj, act_mod())


def mod_191918(p_s, p_lj):
    return act_191918(p_s, p_lj, act_mod())


def mod_191819(p_s, p_lj):
    return act_191819(p_s, p_lj, act_mod())


def mod_191919(p_s, p_lj):
    return act_191919(p_s, p_lj, act_mod())
