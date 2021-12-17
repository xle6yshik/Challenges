import os
import sys

import i_args as args
import i_logf as logf

import i_t1fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def run(p_file):
    t_from = p_file.strip()
    if p_file and os.path.exists(t_from) and os.path.isfile(t_from):
        l_ud = fn.ini_ud()
        l_17 = fn.ini_17()
        l_18 = fn.ini_18()
        l_19 = fn.ini_19()
        t_name, t_ext = os.path.splitext(os.path.basename(t_from))
        t_name = t_name.replace("g_", '')
        t_to = f"{os.path.join('.', 'tmp', f't1_{t_name}')}" + '.txt'
        l_w = open(t_to, 'w')
        with open(t_from, 'r') as l_r:
            n_v5 = 0
            s = ''
            for t_line in l_r:
                t = t_line.strip()
                t = t.replace(' ', '')
                s += t
                is_last = t.endswith(';')
                # is_v5 = (t.find('v5') != -1)
                is_v5 = fn.is_v5(t)
                if is_v5:
                    t_v5 = fn.cut_v5(t)
                    print(f't_{t_v5}.txt')
                    n_v5 += 1
                if is_last or is_v5:
                    s = fn.rpl_lst(s, l_ud)
                    s = fn.rpl_lst(s, l_17)
                    s = fn.rpl_lst(s, l_18)
                    s = fn.rpl_lst(s, l_19)
                    print(f'{s}', file=l_w)
                    s = ''
            print(f"n_v5={n_v5}")
        l_w.close()


if __name__ == '__main__':
    l_args = args.Args()
    l_args.split()
    l_log = logf.Logf(l_args.log_file)
    l_args.log()

    l_file = l_args.input_file
    print(f"run: file={l_file}")
    run(l_file)

    sys.exit(0)
