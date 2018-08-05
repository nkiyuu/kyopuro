S = input()

judge = True

if S[0] != "A":
    judge = False


count = 0
for i in range(2, len(S) - 1):
    if S[i] == "C":
        count += 1

if count != 1:
    judge = False

s = S.replace("A", "", 1)
s = s.replace("C", "", 1)

if not s.islower():
    judge = False

if judge:
    print("AC")
else:
    print("WA")