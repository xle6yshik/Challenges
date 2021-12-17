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


def ini_ud():
    l = []
    u = '(byte)'
    p = (u.replace(' ', ''), '')
    l.append(p)
    u = '(char)'
    p = (u.replace(' ', ''), '')
    l.append(p)
    u = '(char*)'
    p = (u.replace(' ', ''), '')
    l.append(p)
    u = '(undefined)'
    p = (u.replace(' ', ''), '')
    l.append(p)
    u = '(undefined*)'
    p = (u.replace(' ', ''), '')
    l.append(p)
    u = '(undefined4*)'
    p = (u.replace(' ', ''), '')
    l.append(p)
    return l


def ini_17():
    l = []
    u = '*(v17 + 1)'
    p = (u.replace(' ', ''), 'p17[0]')
    l.append(p)
    u = '*(v17 + 5)'
    p = (u.replace(' ', ''), 'p17[1]')
    l.append(p)
    u = '*(v17 + 9)'
    p = (u.replace(' ', ''), 'p17[2]')
    l.append(p)
    u = '*(v17 + 0xd)'
    p = (u.replace(' ', ''), 'p17[3]')
    l.append(p)
    u = '*(v17 + 0x11)'
    p = (u.replace(' ', ''), 'p17[4]')
    l.append(p)
    u = '*(v17 + 0x15)'
    p = (u.replace(' ', ''), 'p17[5]')
    l.append(p)
    u = '*(v17 + 0x19)'
    p = (u.replace(' ', ''), 'p17[6]')
    l.append(p)
    u = '*(v17 + 0x1d)'
    p = (u.replace(' ', ''), 'p17[7]')
    l.append(p)
    u = '*(v17 + 0x21)'
    p = (u.replace(' ', ''), 'p17[8]')
    l.append(p)
    u = '*(v17 + 0x25)'
    p = (u.replace(' ', ''), 'p17[9]')
    l.append(p)
    u = '*(v17 + 0x29)'
    p = (u.replace(' ', ''), 'p17[10]')
    l.append(p)
    u = '*(v17 + 0x2d)'
    p = (u.replace(' ', ''), 'p17[11]')
    l.append(p)
    u = '*(v17 + 0x31)'
    p = (u.replace(' ', ''), 'p17[12]')
    l.append(p)
    u = '*(v17 + 0x35)'
    p = (u.replace(' ', ''), 'p17[13]')
    l.append(p)
    u = '*(v17 + 0x39)'
    p = (u.replace(' ', ''), 'p17[14]')
    l.append(p)
    u = '*(v17 + 0x3d)'
    p = (u.replace(' ', ''), 'p17[15]')
    l.append(p)
    u = '*(v17 + 0x41)'
    p = (u.replace(' ', ''), 'p17[16]')
    l.append(p)
    u = '*(v17 + 0x45)'
    p = (u.replace(' ', ''), 'p17[17]')
    l.append(p)
    u = '*(v17 + 0x49)'
    p = (u.replace(' ', ''), 'p17[18]')
    l.append(p)
    u = '*(v17 + 0x4d)'
    p = (u.replace(' ', ''), 'p17[19]')
    l.append(p)
    u = '*(v17 + 0x51)'
    p = (u.replace(' ', ''), 'p17[20]')
    l.append(p)
    return l


def ini_18():
    l = []
    u = '*(v18+v16)'
    p = (u.replace(' ', ''), 'v18[v16]')
    l.append(p)
    u = '*(v18+(v16-1))'
    p = (u.replace(' ', ''), 'v18[v16-1]')
    l.append(p)
    u = '*(v18+(v16+1))'
    p = (u.replace(' ', ''), 'v18[v16+1]')
    l.append(p)
    u = '*(v18+(v16+2))'
    p = (u.replace(' ', ''), 'v18[v16+2]')
    l.append(p)
    return l


def ini_19():
    l = []
    for i in range(0, 21):
        u = f'*(v19+p17[{i}])'
        v = f'v19[p17[{i}]]'
        p = (u.replace(' ', ''), v.replace(' ', ''))
        l.append(p)
    return l


def rpl_lst(p_s, p_lst):
    s = p_s.strip()
    is_rpt = True
    while is_rpt:
        is_rpt = False
        for t in p_lst:
            u, v = t
            if s.find(u) != -1:
                s = s.replace(u, v)
                is_rpt = True
        s = s.replace(' ', '')
    return s
