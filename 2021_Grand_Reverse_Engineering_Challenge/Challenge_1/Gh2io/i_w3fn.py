def is_v5(p_s):
    s = p_s.strip()
    pos_v5 = s.find('v5')
    pos_eq = s.find('==')
    pos_ne = s.find('!=')
    b = ((pos_v5 != -1) and ((pos_eq != -1) or (pos_ne != -1)))
    return b


def is_block(p_s):
    s = p_s.strip()
    b = False
    pos_ = s.find('{')
    sts_ = (pos_ != -1)
    b = (b or sts_)
    pos_ = s.find('}')
    sts_ = (pos_ != -1)
    b = (b or sts_)
    return b


def is_fun(p_s):
    s = p_s.strip().lower()
    pos_fun = s.find('fun_')
    b = (pos_fun != -1)
    pos_ = s.find('(')
    sts_ = (pos_ != -1)
    b = (b and sts_)
    pos_ = s.find(')')
    sts_ = (pos_ != -1)
    b = (b and sts_)
    return b


def cut_fun(p_s):
    # void FUN_0010d5d9(long *a18,int *a16,long *a19,long *a17)
    s = p_s.strip().lower()
    pos_fun = s.find('fun_')
    s = s[pos_fun:]
    pos_ = s.find('(')
    if pos_ != -1:
        s = s[:pos_]
    return s


def wr_fun(p_w, p_s):
    print(f'', file=p_w)
    s = p_s.strip().lower()
    print(f'{s}', file=p_w)
    return


def scan(p_s, p_e, p_start=0):
    pos = p_s.find(p_e, p_start)
    sts = (pos != -1)
    return sts, pos


def test(p_s, p_e, p_start):
    sts, pos = scan(p_s, p_e, p_start)
    num = p_s.count(p_e, p_start) if sts else 0
    return sts, pos, num


def is_hex(p_s):
    s = p_s.strip()
    pos_0x = s.find('x')
    sts_0x = (pos_0x != -1)
    return sts_0x, pos_0x


def to_hex(p_s):
    s = ''
    a = '0123456789abcdef'
    i = int(p_s)
    while 0 < i:
        p = i % 16
        s = a[p] + s
        i = i // 16
    if len(s) < 2:
        s = s.zfill(2)
    return s


def from_hex(p_s):
    i = 0
    a = '0123456789abcdef'
    s = p_s.strip().lower()
    while 0 < len(s):
        p = a.find(s[0])
        if p == -1:
            break
        i = (i * 16) + p
        s = s[1:]
    return i


def is_once(p_s, p_e):
    s = p_s.strip()
    e = p_e.strip()
    sts, pos, num = test(s, e, 0)
    b = sts and (num == 1)
    return b


def is_many(p_s, p_e):
    s = p_s.strip()
    e = p_e.strip()
    sts, pos, num = test(s, e, 0)
    b = sts and (1 < num)
    return b


def is_none(p_s, p_e):
    s = p_s.strip()
    e = p_e.strip()
    sts, pos, num = test(s, e, 0)
    b = (not sts) and (num == 0)
    return b


def is_v16(p_s):
    e = 'v16=v16'
    b = is_once(p_s, e)
    return b


def is_v17(p_s):
    e = 'v17=v17'
    b = is_once(p_s, e)
    return b


def is_foot(p_s):
    b_16 = is_v16(p_s)
    b_17 = is_v17(p_s)
    return b_16 or b_17


def is_add(p_s):
    e = '+'
    b_1 = is_once(p_s, e)
    e = '-'
    b_2 = is_none(p_s, e)
    return b_1 and b_2


def is_sub(p_s):
    e = '-'
    b_1 = is_once(p_s, e)
    e = '+'
    b_2 = is_none(p_s, e)
    return b_1 and b_2


def cut_v(p_s, p_v):
    # mv_idx_16(o, -1); // v16 -= 1;
    # mv_idx_17(o, 16); // v17 += 16;
    s = p_s.strip()
    pos_v = s.rfind(f'v{p_v}')
    t = s[pos_v + (len(p_v) + 1):]
    t = t.replace(';', '')
    b_add = is_add(p_s)
    b_sub = is_sub(p_s)
    if b_add == b_sub:
        return ''
    t = t.replace('+', '')
    t = t.replace('-', '')
    sts_0x, pos_0x = is_hex(t)
    if sts_0x:
        t = from_hex(t[pos_0x + 1:])
        if p_v == '17':
            t = (t - 1) // 4
    if b_add:
        t = f'mv_idx_{p_v}(o, {t}); // (idx_t) v{p_v} += {t}; (tag_t) '
    else:
        if b_sub:
            t = f'mv_idx_{p_v}(o, -{t}); // (idx_t) v{p_v} -= {t}; (tag_t) '
        else:
            t = p_s
    return t


def cut_v16(p_s):
    t = cut_v(p_s, '16')
    return t


def cut_v17(p_s):
    t = cut_v(p_s, '17')
    return t


def wr_line(p_w, p_s):
    s = p_s.strip()
    q = ''
    if is_v16(p_s):
        q = cut_v16(p_s)
    if is_v17(p_s):
        q = cut_v17(p_s)
    j = 0 if is_block(s) else 4
    t = ''
    t = (t.ljust(j) if 0 < j else t) + q + s
    print(f'{t}', file=p_w)
    return
