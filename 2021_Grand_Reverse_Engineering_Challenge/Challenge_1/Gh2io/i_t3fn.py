def scan(p_s, p_e, p_start=0):
    pos = p_s.find(p_e, p_start)
    sts = (pos != -1)
    return sts, pos


def test(p_s, p_e, p_start):
    sts, pos = scan(p_s, p_e, p_start)
    num = p_s.count(p_e, p_start) if sts else 0
    return sts, pos, num


def is_v5(p_s):
    s = p_s.strip()
    pos_v5 = s.find('v5')
    pos_eq = s.find('==')
    pos_ne = s.find('!=')
    b = ((pos_v5 != -1) and ((pos_eq != -1) or (pos_ne != -1)))
    return b


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
    s = p_s.strip()
    while 0 < len(s):
        p = a.find(s[0])
        if p == -1:
            break
        i = (i * 16) + p
        s = s[1:]
    return i


def cut_v5(p_s):
    s = p_s.strip()
    pos_v5 = s.find('v5')
    t = s[pos_v5 + 2:]
    sts_0x, pos_0x = is_hex(t)
    if sts_0x:
        t = t[pos_0x + 1:]
    t = t.replace('break', '')
    t = t.replace(';', '')
    t = t.replace('(', '')
    t = t.replace(')', '')
    t = t.replace('[', '')
    t = t.replace(']', '')
    t = t.replace('{', '')
    t = t.replace('}', '')
    t = t.replace('!', '')
    t = t.replace('=', '')
    if len(t) < 2:
        t = t.zfill(2)
    if not sts_0x:
        t = to_hex(t)
    return t


def wr_head(p_w, p_nm):
    t = ''
    t_4 = t.ljust(4)
    t_8 = t.ljust(8)
    l = []
    l.append('#include "tags.h"')
    l.append('#include "vars.h"')
    l.append('')
    l.append('/*')
    l.append('*')
    l.append('*/')
    l.append('')
    l.append(f'void {p_nm}(obj_t *o)')
    l.append('{')
    l.append(t_4 + 'mv_tag_17(o, 1); // v17 += 1;')
    l.append('')
    l.append(t_4 + '{')
    l.append(t_8 + 'const idx_t *_v17 = v17->idx, _v16 = *(v16);')
    for t in l:
        if p_w is not None:
            print(f'{t}', file=p_w)
    return


def is_once(p_s, p_e):
    s = p_s.strip()
    e = p_e.strip()
    sts, pos, num = test(s, e, 0)
    b = sts and (num == 1)
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
    b = is_once(p_s, e)
    return b


def is_sub(p_s):
    e = '-'
    b = is_once(p_s, e)
    return b


def cut_v(p_s, p_v):
    # mv_idx_16(o, -1); // v16 -= 1;
    # mv_idx_17(o, 16); // v17 += 16;
    s = p_s.strip()
    pos_v = s.rfind(f'v{p_v}')
    t = s[pos_v + (len(p_v) + 1):]
    t = t.replace(';', '')
    b_sub = False
    b_add = is_add(p_s)
    if not b_add:
        b_sub = is_sub(p_s)
    t = t.replace('+', '')
    t = t.replace('-', '')
    sts_0x, pos_0x = is_hex(t)
    if sts_0x:
        t = from_hex(t[pos_0x + 1:])
    if b_add:
        if p_v == '17':
            t = (t - 1) // 4
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


def wr_line(p_w, p_s, p_foot):
    b = p_foot
    s = p_s.strip()
    if not b:
        b = is_foot(s)
        if b:
            wr_foot(p_w, 4)
            print('', file=p_w)
    q = ''
    if not b:
        j = 8
    else:
        if is_v16(p_s):
            q = cut_v16(p_s)
        if is_v17(p_s):
            q = cut_v17(p_s)
        j = 4
    t = ''
    t = t.ljust(j) + q + s
    if p_w is not None:
        if not b:
            print('', file=p_w)
        print(f'{t}', file=p_w)
    else:
        print(f'{t}')
    return b


def wr_foot(p_w, p_j=0):
    t = ''
    if 0 < p_j:
        t = t.ljust(p_j)
    l = []
    l.append(t + '}')
    for t in l:
        if p_w is not None:
            print(f'{t}', file=p_w)
    return
