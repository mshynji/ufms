x = float(input())
n = int(input())

e = 0.0
for i in range(n+1):
    fatorial = 1
    for j in range(1, i+1):
        fatorial *= j

    e += (x**i)/(fatorial)

print(f"{e:.4f}")