import os
import sys

import i_args as args
import i_logf as logf

import i_w3fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def run(p_file):
    t_from = p_file.strip()
    if p_file and os.path.exists(t_from) and os.path.isfile(t_from):
        t_name, t_ext = os.path.splitext(os.path.basename(t_from))
        t_name = t_name.replace("t2_", '')
        t_to = f"{os.path.join('.', 'output', f't3_{t_name}')}" + '.txt'
        l_w = open(t_to, 'w')
        with open(t_from, 'r') as l_r:
            for t_line in l_r:
                s = t_line.strip()
                s = s.replace(' ', '')
                is_fun = fn.is_fun(s)
                if is_fun:
                    t_fun = fn.cut_fun(s)
                    s_fun = f'void {t_fun}(obj_t *o)'
                    fn.wr_fun(l_w, s_fun)
                else:
                    fn.wr_line(l_w, t_line)
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
