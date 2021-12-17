import os
import sys

import i_args as args
import i_logf as logf

import i_w1fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def run(p_file):
    t_from = p_file.strip()
    if p_file and os.path.exists(t_from) and os.path.isfile(t_from):
        l_tp = fn.ini_tp()
        l_as = fn.ini_as()
        l_17 = fn.ini_17()
        l_18 = fn.ini_18()
        l_19 = fn.ini_19()
        t_name, t_ext = os.path.splitext(os.path.basename(t_from))
        t_name = t_name.replace("g_", '')
        t_to = f"{os.path.join('.', 'tmp', f't1_{t_name}')}" + '.txt'
        l_w = open(t_to, 'w')
        with open(t_from, 'r') as l_r:
            n_fun = 0
            s = ''
            for t_line in l_r:
                t = t_line.strip()
                t = t.replace(' ', '')
                s += t
                is_last = fn.is_last(s)
                is_fun = fn.is_fun(s)
                if is_fun:
                    t_fun = fn.cut_fun(s)
                    s_fun = f'void {t_fun}(obj_t *o)'
                    print(f'{s_fun}')
                    n_fun += 1
                if is_last or is_fun:
                    if is_fun:
                        s = s_fun
                    else:
                        s = fn.rpl_lst(s, l_tp)
                        s = fn.rpl_lst(s, l_as)
                        s = fn.rpl_lst(s, l_17)
                        s = fn.rpl_lst(s, l_18)
                        s = fn.rpl_lst(s, l_19)
                    if not fn.is_ignore(s):
                        print(f'{s}', file=l_w)
                    s = ''
            print(f"n_fun={n_fun}")
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
