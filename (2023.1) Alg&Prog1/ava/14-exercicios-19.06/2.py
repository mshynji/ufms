n = int(input())

matriz = [[0]*n for _ in range(n)]

linha, coluna = 0, 0
for k in range(1, (n*n)+1):
    matriz[linha][coluna] = k

    if coluna%2 == 0:
        if linha < n-1: linha += 1
        else: coluna += 1
    else:
        if linha > 0: linha -= 1
        else: coluna += 1

for linha in matriz:
    for coluna in linha:
        print(coluna, end="\t")
    print("")