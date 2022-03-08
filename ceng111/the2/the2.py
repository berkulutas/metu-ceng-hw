inp = input()
inp_splitted = inp.split("-")
n = inp_splitted[0]

try: d1 = int(n[0])
except: d1 = "?"
try: d2 = int(n[1])
except: d2 = "?"
try:d3 = int(n[2])
except: d3 = "?"
try: d4 = int(n[3])
except: d4 = "?"
if inp_splitted[1] != "X":
    try: c = int(inp_splitted[1])
    except: c = "?"
else: c = 10
# validition check
if inp.find("?") == -1:
    if (2*d1+3*d2+5*d3+7*d4) % 11 == c: print("VALID")
    else: print("INVALID")
else:
    # check digit finder
    if c == "?":
        c = (2*d1+3*d2+5*d3+7*d4) % 11
        if c == 10:
            c = "X"

    # d1 finder
    if d1 == "?":
        d1 = 6*(c-(3*d2+5*d3+7*d4)) % 11

    # d2 finder
    if d2 == "?":
        d2 = 4*(c-(2*d1+5*d3+7*d4)) % 11

    # d3 finder
    if d3 == "?":
        d3 = 9*(c-(2*d1+3*d2+7*d4)) % 11

    # d4 finder
    if d4 == "?":
        d4 = 8*(c-(2*d1+3*d2+5*d3)) % 11

    if c ==10:c = "X"

    num = "".join([str(d1),str(d2),str(d3),str(d4)])
    x = "-".join([num,str(c)])
    print(x)
