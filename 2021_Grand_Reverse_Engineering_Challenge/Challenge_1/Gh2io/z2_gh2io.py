import os
import sys

import i_args as args
import i_logf as logf

import i_z2fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def run(p_file):
    t_from = p_file.strip()
    if p_file and os.path.exists(t_from) and os.path.isfile(t_from):
        t_name, t_ext = os.path.splitext(os.path.basename(t_from))
        t_name = t_name.replace("log_", '')
        t_to = f"{os.path.join('.', 'output', f'log_{t_name}')}" + '.txt'
        l_dict = {}
        z_dict = {}
        l_w = open(t_to, 'w')
        with open(t_from, 'r') as l_r:
            z = 0
            for t_line in l_r:
                z += 1
                s = t_line.strip()
                s = s.replace(' ', '')
                is_v5 = fn.is_v5(s)
                if not is_v5:
                    continue
                sts_0x, pos_0x = fn.is_hex(s)
                if not sts_0x:
                    continue
                t = fn.from_hex(s[pos_0x + 1:])
                if t in l_dict:
                    l_dict[t] += 1
                else:
                    l_dict[t] = 1
                if t in z_dict:
                    z_dict[t] = f'{str(z)},' + z_dict[t]
                else:
                    z_dict[t] = f'{str(z)}'

            s_keys = sorted(l_dict, key=l_dict.get, reverse=True)

            for t in s_keys:
                s_t = f'0x{fn.to_hex(t)} = {l_dict[t]} : {z_dict[t]}'
                print(f'{s_t}', file=l_w)
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
