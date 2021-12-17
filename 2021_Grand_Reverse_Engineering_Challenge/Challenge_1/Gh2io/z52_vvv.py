import os
import sys

import i_args as args
import i_logf as logf

import i_z2fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def is_w(p_s):
    w = p_s.replace(' ', '')
    pos_w = w.find('w:*(')
    sts_w = (pos_w != -1)
    return sts_w


def val_replace(p_s, p_temps):
    s = p_s
    for t in p_temps:
        e_nm, e_vl = t
        pos_vl = s.find(e_vl.lower())
        if pos_vl != -1:
            s = s.replace(e_vl, e_nm)
        else:
            e_vl = e_vl.strip()
            if len(e_vl) < 16:
                for n in range(0, 16 - len(e_vl)):
                    e_vl = f'f{e_vl}'
                e_vl = f' {e_vl} '
                pos_vl = s.find(e_vl.lower())
                if pos_vl != -1:
                    s = s.replace(e_vl, e_nm)
    return s


def ptr_replace(p_s, p_items, p_temps):
    s = p_s
    for t in p_items:
        t_ptr, t_name = t
        t_hex, t_item = t_ptr
        t_n, t_sz = t_item
        t_dec = fn.from_hex(t_hex)
        for i in range(0, t_n):
            i_hex = fn.to_hex(t_dec + (t_sz * i))
            i_pos = s.find(i_hex.lower())
            if i_pos == -1:
                continue
            r = f'{t_name}_{i}'
            s = s.replace(i_hex, r)
            if is_w(s):
                y = f'*({r}):='
                w = s.replace(' ', '')
                pos_y = w.find(y)
                if pos_y != -1:
                    w = w[pos_y + len(y):]
                    e_vl = f' {w} '
                    e_nm = f' {t_name[1:]}[{i}] '
                    e = (e_nm, e_vl)
                    p_temps.append(e)
    return s


def run(p_file, p_items, p_temps):
    t_from = p_file.strip()
    if p_file and os.path.exists(t_from) and os.path.isfile(t_from):
        t_name, t_ext = os.path.splitext(os.path.basename(t_from))
        # t_name = t_name.replace("log_", '')
        t_to = f"{os.path.join('.', 'output', f'{t_name}')}" + '.txt'
        l_w = open(t_to, 'w')
        with open(t_from, 'r') as l_r:
            for t_line in l_r:
                s = t_line.strip().lower()
                s = ptr_replace(s, p_items, p_temps)
                s = val_replace(s, p_temps)
                print(s, file=l_w)
                if is_w(s):
                    print('', file=l_w)
        l_w.close()


if __name__ == '__main__':
    l_args = args.Args()
    l_args.split()
    l_log = logf.Logf(l_args.log_file)
    l_args.log()

    l_items = []
    # AM3
    # l_items.append((('13F4291E0', (2, 4)), 'pUser'))
    # l_items.append((('22F473', (10, 4)), 'pActn'))
    # l_items.append((('13f429230', (10, 4)), 'pCalc'))
    # AM2
    # l_items.append((('13F4291E0', (2, 4)), 'pUser'))
    # l_items.append((('22F473', (10, 4)), 'pActn'))
    # l_items.append((('13f429230', (10, 4)), 'pCalc'))
    # AM1_FM2
    # l_items.append((('13F4291E0', (2, 4)), 'pUser'))
    # l_items.append((('22F473', (10, 4)), 'pActn'))
    # l_items.append((('13f429230', (10, 4)), 'pCalc'))
    # AM1_FM0_G0
    l_items.append((('13F4291E0', (2, 4)), 'pUser'))
    l_items.append((('22F473', (10, 4)), 'pActn'))
    l_items.append((('13f429230', (10, 4)), 'pCalc'))

    # l_items.append((('18f5f2', (40, 4)), 'pInt'))
    #
    # l_items.append((('30f5aa', (8, 1)), 'pByte'))
    #
    # l_items.append((('30f5b2', (40, 4)), 'pVar'))

    l_temps = []

    l_file = l_args.input_file
    print(f"run: file={l_file}")

    run(l_file, l_items, l_temps)

    for t in l_temps:
        e_nm, e_vl = t
        print(f"{e_nm.strip()}, 0x{e_vl.strip().lower()}, ")

    sys.exit(0)
