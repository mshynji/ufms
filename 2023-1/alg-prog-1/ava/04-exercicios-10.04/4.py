n = int(input())

numero_harmonico = 0.0
for i in range(1, n+1):
    numero_harmonico += 1/i

print(f"{numero_harmonico:.4f}")