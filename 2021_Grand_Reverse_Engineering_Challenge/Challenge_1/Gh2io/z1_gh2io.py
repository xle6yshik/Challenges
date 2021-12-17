import os
import sys

import i_args as args
import i_logf as logf

import i_z1fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def run(p_file):
    t_from = p_file.strip()
    if p_file and os.path.exists(t_from) and os.path.isfile(t_from):
        d0 = f'6D C4'
        d0_list = d0.split(' ')
        n_ = fn.to_int(d0_list)
        s0 = f'64 0e 4f 5c cc 55'  # d3 (last) string in input file
        s0_list = s0.split(' ')
        s0_list.reverse()
        n0 = fn.to_int(s0_list)
        n0 -= n_
        t_name, t_ext = os.path.splitext(os.path.basename(t_from))
        t_name = t_name.replace("z1_", '')
        t_to = f"{os.path.join('.', 'output', f'z1_{t_name}')}" + '.txt'
        l_w = open(t_to, 'w')
        with open(t_from, 'r') as l_r:
            for t_line in l_r:
                s = t_line.strip()
                s_list = s.split(' ')
                s_list.reverse()
                n = fn.to_int(s_list)
                n -= n0
                t = fn.to_hex(n, 8)
                print(f'n={n}, h={t}', file=l_w)
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
