m, n = map(int, input().split())

matriz = []
for _ in range(m):
    linha = list(map(int, input().split()))
    matriz.append(linha)

matriz_t = [[0]*m for _ in range(n)]

for i in range(m):
    for j in range(n):
        matriz_t[j][i] = matriz[i][j]

for linha in matriz_t:
    for i, coluna in enumerate(linha):
        if i != len(linha)-1:
            print(coluna, end=" ")
        else:
            print(coluna)