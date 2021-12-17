import os
import sys

import i_args as args
import i_logf as logf

import i_t3fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def run(p_file):
    t_from = p_file.strip()
    if p_file and os.path.exists(t_from) and os.path.isfile(t_from):
        with open(t_from, 'r') as l_r:
            l_w = None
            is_skip = True
            is_foot = False
            for t_line in l_r:
                s = t_line.strip()
                s = s.replace(' ', '')
                sts_v5 = fn.is_v5(s)
                if is_skip:
                    is_skip = (not sts_v5)
                    if is_skip:
                        continue
                if sts_v5:
                    s = fn.cut_v5(s)
                    nm = f't_{s}'
                    t_to = f"{os.path.join('.', 'output', nm)}" + '.txt'
                    if l_w is not None:
                        fn.wr_foot(l_w)
                        l_w.close()
                        l_w = None
                    l_w = open(t_to, 'w')
                    fn.wr_head(l_w, nm)
                    is_foot = False
                else:
                    is_foot = fn.wr_line(l_w, t_line, is_foot)
            if l_w is not None:
                fn.wr_foot(l_w)
                l_w.close()
                l_w = None


if __name__ == '__main__':
    l_args = args.Args()
    l_args.split()
    l_log = logf.Logf(l_args.log_file)
    l_args.log()

    l_file = l_args.input_file
    print(f"run: file={l_file}")
    run(l_file)

    sys.exit(0)
