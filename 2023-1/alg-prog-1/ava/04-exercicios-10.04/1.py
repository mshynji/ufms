n = int(input())

n_divisores = 0
for i in range(2, int(n**0.5)+1):
    if n%i == 0:
        n_divisores += 1
        break

if n_divisores > 0 or n == 1:
    print("Composto")
else:
    print("Primo")