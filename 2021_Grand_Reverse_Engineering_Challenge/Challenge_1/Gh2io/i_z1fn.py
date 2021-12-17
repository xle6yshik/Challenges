def to_hex(p_a, p_sz=2):
    s = ''
    a = '0123456789abcdef'
    i = int(p_a) if isinstance(p_a, str) else p_a
    while 0 < i:
        p = i % 16
        s = a[p] + s
        i = i // 16
    if len(s) < p_sz:
        s = s.zfill(p_sz)
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


def to_int(p_list):
    i = 0
    for s_item in p_list:
        i = (i * 256) + from_hex(s_item)
    return i


def reverse(p_s):
    return p_s[::-1]
