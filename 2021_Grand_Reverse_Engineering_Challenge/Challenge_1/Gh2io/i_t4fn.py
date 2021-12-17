import os


def to_line(p_s):
    s = p_s.strip().lower()
    return s


def to_list(p_lst, p_file):
    p_lst.clear()
    if os.path.exists(p_file) and os.path.isfile(p_file):
        with open(p_file, 'r') as l_r:
            for t_line in l_r:
                s = to_line(t_line)
                if not s in p_lst:
                    p_lst.append(s)
    return


def compare(p_1, p_2):
    p_1.sort()
    p_2.sort()
    print(f"1st.len={len(p_1)}, 2nd.len={len(p_2)}")
    for item in p_1:
        if not item in p_2:
            print(f"item={item} not found")
