inputs = input().strip().split()
D = int(inputs[0])
G = int(inputs[1])

pi = []
ci = []

for i in range(0, D):
    inputs = input().strip().split()
    pi.append(int(inputs[0]))
    ci.append(int(inputs[1]))

bitArray = []
for i in range(0, pow(2, D)):
    bitArray.append(format(i, 'b').zfill(D))

ans = 1000000
for bit in bitArray:
    num = 0
    score = 0
    for index, value in enumerate(bit):
        if value is "1":
            score += (index + 1) * 100 * pi[index] + ci[index]
            num += pi[index]
        else:
            max_zero_index = index
    for i in range(0, pi[max_zero_index] - 1):
        if score < G:
            num += 1
            score += (max_zero_index + 1) * 100
    if ans > num and score >= G:
        ans = num

print(ans)
