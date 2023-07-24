n = int(input())

soma_pares   = 0
soma_impares = 0

for _ in range(n):
    numero = int(input())

    if numero%2 == 0:
        soma_pares += numero
    else:
        soma_impares += numero

print(f"Pares: {soma_pares}")
print(f"Impares: {soma_impares}")