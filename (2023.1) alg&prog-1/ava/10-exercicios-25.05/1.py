numeros = list(map(int, input().split()))
k = int(input())

maior = 0
menor = 0
for numero in numeros:
    if numero > k: maior += 1
    if numero < k: menor += 1

print(f"Maior: {maior}")
print(f"Menor: {menor}")