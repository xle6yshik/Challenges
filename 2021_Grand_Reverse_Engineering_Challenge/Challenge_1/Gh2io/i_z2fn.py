def is_v5(p_s):
    s = p_s.strip()
    pos_v5 = s.find('v5:=')
    b = (pos_v5 != -1)
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
    s = p_s.strip().lower()
    while 0 < len(s):
        p = a.find(s[0])
        if p == -1:
            break
        i = (i * 16) + p
        s = s[1:]
    return i
