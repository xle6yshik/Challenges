### The automatic part of code creation

The **automatic** part of **code creation** use in **step 2.4** of **challenge_1** solution.

Python scripts use simple text search and substring replacement. To get the final result, they are run sequentially:

1) **t1_gh2io.py** --parameters='input-file=./input/g_21c5.txt;log-file=./log/t1_g_21c5.txt'
2) **t2_gh2io.py** --parameters='input-file=./tmp/t1_21c5.txt;log-file=./log/t2_g_21c5.txt'
3) **t3_gh2io.py** --parameters='input-file=./tmp/t2_21c5.txt;log-file=./log/t3_g_21c5.txt'

-  *t4_gh2io.py* --parameters='input-dir=./input;log-file=./log/t4_g_21c5.txt'

5) **w1_gh2io.py** --parameters='input-file=./input/g_fun_.txt;log-file=./log/t1_fun_.txt'
6) **t2_gh2io.py** --parameters='input-file=./tmp/t1_fun_.txt;log-file=./log/t2_fun_.txt'
7) **w3_gh2io.py** --parameters='input-file=./tmp/t2_fun_.txt;log-file=./log/t3_fun_.txt'

### Analysis of protocol variables

The **analysis** of **protocol variables** use in **step 3.2** of **challenge_1** solution.

The protocol reflects the values and addresses of variables that contain input values, the result, working flags and arrays. Variable addresses change for each protocol.

The values of addresses and variable names specified in the script.

Part of the addresses (user, actn) can be found at the beginning of the executing part.
The other part (calc) can be found after performing the previous replacement.

```bash
# Example:
l_items.append((('13FD391E8', (2, 4)), 'pRslt'))
l_items.append((('13FD391E0', (2, 4)), 'pUser'))
l_items.append((('27F223', (10, 4)), 'pActn'))
l_items.append((('13fd39230', (10, 4)), 'pCalc'))
```

The Python script searches for and replaces changing values.

1) **z52_vvv.py** --parameters='input-file=./input/log_am3.txt;log-file=./log/z52_vvv.txt'
