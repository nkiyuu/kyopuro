N = int(input())

flag = True

bw = ''
wl = []
for i in range(N):
    w = input().strip()
    if i != 0:
        if bw[-1] is not w[0]:
            flag = False
        if w in wl:
            flag = False
        if flag is False:
            break
    wl.append(w)
    bw = w

if flag:
    print('Yes')
else:
    print('No')