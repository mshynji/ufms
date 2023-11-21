m, n = map(int, input().split())

matriz = []
for _ in range(m):
    linha = list(map(int, input().split()))
    matriz.append(linha)

maior = matriz[0][0]
for i in range(m):
    for j in range(n):
        if matriz[i][j] > maior: maior = matriz[i][j]

print(maior)