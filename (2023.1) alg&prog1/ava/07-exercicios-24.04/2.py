n = int(input())

pi = 0
for i in range(1, n+1, 2):
    termo = 4/i
    if (i-1)%4 != 0: termo *= (-1)

    pi += termo

print(f"{pi:.50f}")