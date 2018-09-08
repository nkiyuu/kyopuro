def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


inputs = input().strip().split()

N  = int(inputs[0])
X  = int(inputs[1])

xi = list(map(lambda x: abs(X - int(x)), input().strip().split()))

if N == 1:
    print(xi[0])
else:
    a = xi[0]
    b = xi[1]

    nx = gcd(a, b)

    for i in range(2, len(xi)):
        nx = gcd(nx, xi[i])     

    print(nx)