n = int(input())

maior = int(input())
menor = maior

for _ in range(n-1):
    numero = int(input())

    if numero > maior: maior = numero
    if numero < menor: menor = numero

print(f"Maior = {maior}")
print(f"Menor = {menor}")