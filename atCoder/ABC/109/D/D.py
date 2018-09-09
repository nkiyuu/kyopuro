inputs = list(map(lambda x: int(x), input().strip().split()))

H = inputs[0]
W = inputs[1]

ahw = []

for i in range(H):
    w =list(map(lambda x: int(x), input().strip().split())) 
    ahw.append(w)

N = 0
hasCoin = 0
sousa = []

for i in range(H):
    if i % 2 == 0:
        for j in range(W):
            if ahw[i][j] % 2 == 0:
                continue

            if not j == W - 1:
                ahw[i][j] = ahw[i][j] - 1
                ahw[i][j+1] = ahw[i][j+1] + 1
                sousa.append("{} {} {} {}".format(i+1, j+1, i+1 , j+2))
                N += 1
            else:
                if i != H - 1:
                    ahw[i][j] = ahw[i][j] - 1
                    ahw[i+1][j] = ahw[i+1][j] + 1
                    sousa.append("{} {} {} {}".format(i+1, j+1, i+2 , j+1))
                    N += 1
    else:
        for j in range(W - 1, -1, -1):
            if ahw[i][j] % 2 == 0:
                continue

            if not j == 0:
                ahw[i][j] = ahw[i][j] - 1
                ahw[i][j-1] = ahw[i][j-1] + 1
                sousa.append("{} {} {} {}".format(i+1, j+1, i+1 , j))
                N += 1
            else:
                if i != H - 1:
                    ahw[i][j] = ahw[i][j] - 1
                    ahw[i+1][j] = ahw[i+1][j] + 1
                    sousa.append("{} {} {} {}".format(i+1, j+1, i+2 , j+1))
                    N += 1

print(N)
for el in sousa:
    print(el)
