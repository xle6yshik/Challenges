def is_last(p_s):
    s = p_s.strip()
    b = s.endswith(';')
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


def is_ignore(p_s):
    s = p_s.strip().lower()
    pos_fun = s.find('return')
    b = (pos_fun != -1)
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


def add_ut(p_l, p_t):
    t = p_t.strip()
    t = t.replace(' ', '')
    t_1 = f'({t})'
    u_1 = f'(u{t})'
    u_2 = f'(unsigned{t})'
    p = (t_1, '')
    p_l.append(p)
    p = (u_1, '')
    p_l.append(p)
    p = (u_2, '')
    p_l.append(p)
    return


def add_tp(p_l, p_t):
    t = p_t.strip()
    t = t.replace(' ', '')
    ptr = f'{t}*'
    add_ut(p_l, t)
    add_ut(p_l, ptr)
    return


def ini_tp():
    l = []
    tp = 'byte'
    add_tp(l, tp)
    tp = 'char'
    add_tp(l, tp)
    tp = 'int'
    add_tp(l, tp)
    tp = 'long'
    add_tp(l, tp)
    tp = 'undefined'
    add_tp(l, tp)
    tp = 'undefined4'
    add_tp(l, tp)
    tp = 'undefined8'
    add_tp(l, tp)
    return l


def add_it(p_l, p_u, p_v):
    u = p_u.strip()
    u = u.replace(' ', '')
    v = p_v.strip()
    v = v.replace(' ', '')
    p = (u, v)
    p_l.append(p)
    return


def ini_as():
    l = []
    u = '*a17'
    v = 'v17'
    add_it(l, u, v)
    u = '*a16'
    v = 'v16'
    add_it(l, u, v)
    u = 'a18'
    v = 'v18'
    add_it(l, u, v)
    u = 'a19'
    v = 'v19'
    add_it(l, u, v)
    u = 'a20'
    v = 'v20'
    add_it(l, u, v)
    u = '+-'
    v = '-'
    add_it(l, u, v)
    return l


def ini_17():
    l = []
    u = '*v17'
    p = (u.replace(' ', ''), 'p17[0]')
    l.append(p)
    u = '*(v17)'
    p = (u.replace(' ', ''), 'p17[0]')
    l.append(p)
    u = '*(v17 + 0)'
    p = (u.replace(' ', ''), 'p17[0]')
    l.append(p)
    u = '*(v17 + 4)'
    p = (u.replace(' ', ''), 'p17[1]')
    l.append(p)
    u = '*(v17 + 8)'
    p = (u.replace(' ', ''), 'p17[2]')
    l.append(p)
    u = '*(v17 + 0xc)'
    p = (u.replace(' ', ''), 'p17[3]')
    l.append(p)
    u = '*(v17 + 0x10)'
    p = (u.replace(' ', ''), 'p17[4]')
    l.append(p)
    u = '*(v17 + 0x14)'
    p = (u.replace(' ', ''), 'p17[5]')
    l.append(p)
    u = '*(v17 + 0x18)'
    p = (u.replace(' ', ''), 'p17[6]')
    l.append(p)
    u = '*(v17 + 0x1c)'
    p = (u.replace(' ', ''), 'p17[7]')
    l.append(p)
    u = '*(v17 + 0x20)'
    p = (u.replace(' ', ''), 'p17[8]')
    l.append(p)
    u = '*(v17 + 0x24)'
    p = (u.replace(' ', ''), 'p17[9]')
    l.append(p)
    u = '*(v17 + 0x28)'
    p = (u.replace(' ', ''), 'p17[10]')
    l.append(p)
    u = '*(v17 + 0x2c)'
    p = (u.replace(' ', ''), 'p17[11]')
    l.append(p)
    u = '*(v17 + 0x30)'
    p = (u.replace(' ', ''), 'p17[12]')
    l.append(p)
    u = '*(v17 + 0x34)'
    p = (u.replace(' ', ''), 'p17[13]')
    l.append(p)
    u = '*(v17 + 0x38)'
    p = (u.replace(' ', ''), 'p17[14]')
    l.append(p)
    u = '*(v17 + 0x3c)'
    p = (u.replace(' ', ''), 'p17[15]')
    l.append(p)
    u = '*(v17 + 0x40)'
    p = (u.replace(' ', ''), 'p17[16]')
    l.append(p)
    u = '*(v17 + 0x44)'
    p = (u.replace(' ', ''), 'p17[17]')
    l.append(p)
    u = '*(v17 + 0x48)'
    p = (u.replace(' ', ''), 'p17[18]')
    l.append(p)
    u = '*(v17 + 0x4c)'
    p = (u.replace(' ', ''), 'p17[19]')
    l.append(p)
    u = '*(v17 + 0x50)'
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
