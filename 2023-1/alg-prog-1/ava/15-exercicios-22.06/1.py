n = int(input())

matriz = []
for _ in range(n):
    linha = list(map(int, input().split()))
    matriz.append(linha)

positivo = 0
negativo = 0
for i in range(n):
    for j in range(n):
        if i == j or i+j == n-1:
            if matriz[i][j] > 0: positivo += 1
            elif matriz[i][j] < 0: negativo += 1

print(positivo)
print(negativo)