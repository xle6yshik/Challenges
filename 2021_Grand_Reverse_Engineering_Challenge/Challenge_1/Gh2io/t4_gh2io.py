import os
import sys

import i_args as args
import i_logf as logf

import i_t4fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def run(p_dir):
    t_from = p_dir.strip()
    if p_dir and os.path.exists(t_from) and os.path.isdir(t_from):
        l_con = []
        t_con = f"{os.path.join(t_from, 't1_v5_console_copy.txt')}"
        fn.to_list(l_con, t_con)
        l_out = []
        t_out = f"{os.path.join(t_from, 't1_v5_output_dir.txt')}"
        fn.to_list(l_out, t_out)
        print(f"compare: {t_con} with {t_out}")
        fn.compare(l_con, l_out)
        print(f"compare: {t_out} with {t_con}")
        fn.compare(l_out, l_con)


if __name__ == '__main__':
    l_args = args.Args()
    l_args.split()
    l_log = logf.Logf(l_args.log_file)
    l_args.log()

    l_dir = l_args.input_dir
    print(f"run: dir={l_dir}")
    run(l_dir)

    sys.exit(0)
