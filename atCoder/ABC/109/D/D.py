inputs = list(map(lambda x: int(x), input().strip().split()))

H = inputs[0]
W = inputs[1]

ahw = []

for i in range(H):
    w =list(map(lambda x: int(x), input().strip().split())) 
    ahw.append(w)

odds = []

for h in range(H):
    for w in range(W):
        if ahw[h][w] % 2 == 1:
            odds.append((h, w))

distList = []

for val in odds:
    dists = []
    for odd in odds:
        dists.append(pow((val[0]-odd[0]),2) + pow((val[1]-odd[1]),2))
    distList.append(dists)

print(distList)
        