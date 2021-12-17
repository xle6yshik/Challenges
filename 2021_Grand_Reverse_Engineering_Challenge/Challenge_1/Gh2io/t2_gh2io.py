import os
import sys

import i_args as args
import i_logf as logf

import i_t2fn as fn

sys.path.append(os.path.dirname(os.path.dirname(__file__)))


def run(p_file):
    t_from = p_file.strip()
    if p_file and os.path.exists(t_from) and os.path.isfile(t_from):
        t_name, t_ext = os.path.splitext(os.path.basename(t_from))
        t_name = t_name.replace("t1_", '')
        t_to = f"{os.path.join('.', 'tmp', f't2_{t_name}')}" + '.txt'
        l_w = open(t_to, 'w')
        with open(t_from, 'r') as l_r:
            lj = False
            for t_line in l_r:
                done = False
                s = t_line.strip()
                s = s.replace(' ', '')
                s = fn.subset(s)
                if not done:
                    s, done = fn.cp_1819(s, lj)
                if not done:
                    s, done = fn.cp_1818(s, lj)
                if not done:
                    s, done = fn.cp_1918(s, lj)
                if not done:
                    s, done = fn.cp_1919(s, lj)
                if not done:
                    s, done = fn.gt_18(s, lj)
                if not done:
                    s, done = fn.gt_19(s, lj)
                if not done:
                    s, done = fn.ad_v20_18(s, lj)
                if not done:
                    s, done = fn.ad_v20_19(s, lj)
                if not done:
                    s, done = fn.ad_glb_18(s, lj)
                if not done:
                    s, done = fn.ad_glb_19(s, lj)
                if not done:
                    s, done = fn.wr_1819(s, lj)
                if not done:
                    s, done = fn.wr_1818(s, lj)
                if not done:
                    s, done = fn.wr_1918(s, lj)
                if not done:
                    s, done = fn.wr_1919(s, lj)
                if not done:
                    s, done = fn.rd_1819(s, lj)
                if not done:
                    s, done = fn.rd_1818(s, lj)
                if not done:
                    s, done = fn.rd_1918(s, lj)
                if not done:
                    s, done = fn.rd_1919(s, lj)
                if not done:
                    s, done = fn.add_181919(s, lj)
                if not done:
                    s, done = fn.add_181819(s, lj)
                if not done:
                    s, done = fn.add_181918(s, lj)
                if not done:
                    s, done = fn.add_181818(s, lj)
                if not done:
                    s, done = fn.add_191818(s, lj)
                if not done:
                    s, done = fn.add_191918(s, lj)
                if not done:
                    s, done = fn.add_191819(s, lj)
                if not done:
                    s, done = fn.add_191919(s, lj)
                if not done:
                    s, done = fn.mul_181919(s, lj)
                if not done:
                    s, done = fn.mul_181819(s, lj)
                if not done:
                    s, done = fn.mul_181918(s, lj)
                if not done:
                    s, done = fn.mul_181818(s, lj)
                if not done:
                    s, done = fn.mul_191818(s, lj)
                if not done:
                    s, done = fn.mul_191918(s, lj)
                if not done:
                    s, done = fn.mul_191819(s, lj)
                if not done:
                    s, done = fn.mul_191919(s, lj)
                if not done:
                    s, done = fn.and_181919(s, lj)
                if not done:
                    s, done = fn.and_181819(s, lj)
                if not done:
                    s, done = fn.and_181918(s, lj)
                if not done:
                    s, done = fn.and_181818(s, lj)
                if not done:
                    s, done = fn.and_191818(s, lj)
                if not done:
                    s, done = fn.and_191918(s, lj)
                if not done:
                    s, done = fn.and_191819(s, lj)
                if not done:
                    s, done = fn.and_191919(s, lj)
                if not done:
                    s, done = fn.les_181919(s, lj)
                if not done:
                    s, done = fn.les_181819(s, lj)
                if not done:
                    s, done = fn.les_181918(s, lj)
                if not done:
                    s, done = fn.les_181818(s, lj)
                if not done:
                    s, done = fn.les_191818(s, lj)
                if not done:
                    s, done = fn.les_191918(s, lj)
                if not done:
                    s, done = fn.les_191819(s, lj)
                if not done:
                    s, done = fn.les_191919(s, lj)
                if not done:
                    s, done = fn.sub_181919(s, lj)
                if not done:
                    s, done = fn.sub_181819(s, lj)
                if not done:
                    s, done = fn.sub_181918(s, lj)
                if not done:
                    s, done = fn.sub_181818(s, lj)
                if not done:
                    s, done = fn.sub_191818(s, lj)
                if not done:
                    s, done = fn.sub_191918(s, lj)
                if not done:
                    s, done = fn.sub_191819(s, lj)
                if not done:
                    s, done = fn.sub_191919(s, lj)
                if not done:
                    s, done = fn.orr_181919(s, lj)
                if not done:
                    s, done = fn.orr_181819(s, lj)
                if not done:
                    s, done = fn.orr_181918(s, lj)
                if not done:
                    s, done = fn.orr_181818(s, lj)
                if not done:
                    s, done = fn.orr_191818(s, lj)
                if not done:
                    s, done = fn.orr_191918(s, lj)
                if not done:
                    s, done = fn.orr_191819(s, lj)
                if not done:
                    s, done = fn.orr_191919(s, lj)
                if not done:
                    s, done = fn.xor_181919(s, lj)
                if not done:
                    s, done = fn.xor_181819(s, lj)
                if not done:
                    s, done = fn.xor_181918(s, lj)
                if not done:
                    s, done = fn.xor_181818(s, lj)
                if not done:
                    s, done = fn.xor_191818(s, lj)
                if not done:
                    s, done = fn.xor_191918(s, lj)
                if not done:
                    s, done = fn.xor_191819(s, lj)
                if not done:
                    s, done = fn.xor_191919(s, lj)
                if not done:
                    s, done = fn.ceq_181919(s, lj)
                if not done:
                    s, done = fn.ceq_181819(s, lj)
                if not done:
                    s, done = fn.ceq_181918(s, lj)
                if not done:
                    s, done = fn.ceq_181818(s, lj)
                if not done:
                    s, done = fn.ceq_191818(s, lj)
                if not done:
                    s, done = fn.ceq_191918(s, lj)
                if not done:
                    s, done = fn.ceq_191819(s, lj)
                if not done:
                    s, done = fn.ceq_191919(s, lj)
                if not done:
                    s, done = fn.cne_181919(s, lj)
                if not done:
                    s, done = fn.cne_181819(s, lj)
                if not done:
                    s, done = fn.cne_181918(s, lj)
                if not done:
                    s, done = fn.cne_181818(s, lj)
                if not done:
                    s, done = fn.cne_191818(s, lj)
                if not done:
                    s, done = fn.cne_191918(s, lj)
                if not done:
                    s, done = fn.cne_191819(s, lj)
                if not done:
                    s, done = fn.cne_191919(s, lj)
                if not done:
                    s, done = fn.mod_181919(s, lj)
                if not done:
                    s, done = fn.mod_181819(s, lj)
                if not done:
                    s, done = fn.mod_181918(s, lj)
                if not done:
                    s, done = fn.mod_181818(s, lj)
                if not done:
                    s, done = fn.mod_191818(s, lj)
                if not done:
                    s, done = fn.mod_191918(s, lj)
                if not done:
                    s, done = fn.mod_191819(s, lj)
                if not done:
                    s, done = fn.mod_191919(s, lj)
                print(f'{s}', file=l_w)
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
